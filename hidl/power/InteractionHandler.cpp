/*
 * Copyright (C) 2017 The Android Open Source Project
 * Copyright (C) 2018 The LineageOS Project
 * SPDX-License-Identifier: Apache-2.0
 */

//#define LOG_NDEBUG 0

#define LOG_TAG "PowerInteractionHandler"

#include <android-base/file.h>

#include <fcntl.h>
#include <poll.h>
#include <time.h>
#include <unistd.h>
#include <utils/Log.h>

#include "InteractionHandler.h"

#define MAX_LENGTH 64

#define MSINSEC 1000L
#define USINMS 1000000L

using android::base::WriteStringToFile;

InteractionHandler::InteractionHandler()
    : mState(INTERACTION_STATE_UNINITIALIZED),
      mMinDurationMs(1400),
      mMaxDurationMs(5650),
      mDurationMs(0) {
}

InteractionHandler::~InteractionHandler() {
    Exit();
}

bool InteractionHandler::Init() {
    std::lock_guard<std::mutex> lk(mLock);

    if (mState != INTERACTION_STATE_UNINITIALIZED)
        return true;

    mState = INTERACTION_STATE_IDLE;
    mThread = std::unique_ptr<std::thread>(
        new std::thread(&InteractionHandler::Routine, this));

    return true;
}

void InteractionHandler::Exit() {
    std::unique_lock<std::mutex> lk(mLock);
    if (mState == INTERACTION_STATE_UNINITIALIZED)
        return;

    mState = INTERACTION_STATE_UNINITIALIZED;
    lk.unlock();

    mCond.notify_all();
    mThread->join();
}

void InteractionHandler::PerfLock() {
    ALOGV("%s: acquiring perf lock", __func__);
    WriteStringToFile("858000", "/sys/power/cpufreq_min_limit", false);
}

void InteractionHandler::PerfRel() {
    ALOGV("%s: releasing perf lock", __func__);
    WriteStringToFile("113750", "/sys/power/cpufreq_min_limit", false);
}

long long InteractionHandler::CalcTimespecDiffMs(struct timespec start,
                                               struct timespec end) {
    long long diff_in_us = 0;
    diff_in_us += (end.tv_sec - start.tv_sec) * MSINSEC;
    diff_in_us += (end.tv_nsec - start.tv_nsec) / USINMS;
    return diff_in_us;
}

void InteractionHandler::Acquire(int32_t duration) {
    std::lock_guard<std::mutex> lk(mLock);
    if (mState == INTERACTION_STATE_UNINITIALIZED) {
        ALOGW("%s: called while uninitialized", __func__);
        return;
    }

    int inputDuration = duration + 650;
    int finalDuration;
    if (inputDuration > mMaxDurationMs)
        finalDuration = mMaxDurationMs;
    else if (inputDuration > mMinDurationMs)
        finalDuration = inputDuration;
    else
        finalDuration = mMinDurationMs;

    struct timespec cur_timespec;
    clock_gettime(CLOCK_MONOTONIC, &cur_timespec);
    if (mState != INTERACTION_STATE_IDLE && finalDuration <= mDurationMs) {
        long long elapsed_time = CalcTimespecDiffMs(mLastTimespec, cur_timespec);
        // don't hint if previous hint's duration covers this hint's duration
        if (elapsed_time <= (mDurationMs - finalDuration)) {
            ALOGV("%s: Previous duration (%d) cover this (%d) elapsed: %lld",
                  __func__, mDurationMs, finalDuration, elapsed_time);
            return;
        }
    }
    mLastTimespec = cur_timespec;
    mDurationMs = finalDuration;

    ALOGV("%s: input: %d final duration: %d", __func__,
          duration, finalDuration);

    if (mState == INTERACTION_STATE_IDLE) {
        PerfLock();
        mState = INTERACTION_STATE_INTERACTION;
    }

    mHandled = false;
    mCond.notify_one();
}

void InteractionHandler::Release() {
    std::lock_guard<std::mutex> lk(mLock);
    PerfRel();
    mState = INTERACTION_STATE_IDLE;
}

void InteractionHandler::Routine() {
    std::unique_lock<std::mutex> lk(mLock, std::defer_lock);

    while (true) {
        lk.lock();
        mCond.wait(lk, [&] { return mState == INTERACTION_STATE_INTERACTION; });
        mHandled = true;
        lk.unlock();

        std::this_thread::sleep_for(std::chrono::milliseconds(mDurationMs));
        if (mHandled) Release();
    }
}
