/*
 * Copyright (C) 2018 The LineageOS Project
 * SPDX-License-Identifier: Apache-2.0
 */

#define LOG_TAG "android.hardware.vibrator@1.0-service.9810"

#include <log/log.h>

#include <hardware/hardware.h>
#include <hardware/vibrator.h>

#include "Vibrator.h"

#include <cinttypes>
#include <cmath>
#include <iostream>
#include <fstream>

namespace android {
namespace hardware {
namespace vibrator {
namespace V1_0 {
namespace implementation {

Vibrator::Vibrator(std::ofstream&& enable, std::ofstream&& haptic) :
    mEnable(std::move(enable)),
    mHaptic(std::move(haptic)) {
    mIntensity = 10000;
}

// SEC Haptic Engine
Return<Status> Vibrator::doHaptic(int timeout, int intensity, int freq, int overdrive) {
    char haptic[32];
    snprintf(haptic, sizeof(haptic) - 1, "4 %d %d %d %d", timeout, intensity, freq, overdrive);
    mHaptic << haptic << std::endl;
    mEnable << 1 << std::endl;
    if (!mEnable) {
        ALOGE("Failed to turn vibrator on (%d): %s", errno, strerror(errno));
        return Status::UNKNOWN_ERROR;
    }
    return Status::OK;
}

// Methods from ::android::hardware::vibrator::V1_0::IVibrator follow.
Return<Status> Vibrator::on(uint32_t timeout_ms) {
    return doHaptic(timeout_ms, mIntensity, 0, 0);
}

Return<Status> Vibrator::off()  {
    mEnable << 0 << std::endl;
    if (!mEnable) {
        ALOGE("Failed to turn vibrator off (%d): %s", errno, strerror(errno));
        return Status::UNKNOWN_ERROR;
    }
    return Status::OK;
}

Return<bool> Vibrator::supportsAmplitudeControl()  {
    return true;
}

Return<Status> Vibrator::setAmplitude(uint8_t amplitude) {
    if (amplitude == 0) {
        return Status::BAD_VALUE;
    }
    mIntensity = amplitude * 10000 / 255;
    return Status::OK;
}

Return<void> Vibrator::perform(Effect effect, EffectStrength strength, perform_cb _hidl_cb) {
    Status status = Status::OK;
    uint32_t timeMS;
    uint32_t intensity;

    switch (strength) {
        case EffectStrength::LIGHT:
            intensity = 1000;
            break;
        case EffectStrength::STRONG:
            intensity = 5000;
            break;
        default:
            intensity = 3000;
            break;
    }

    switch (effect) {
        case Effect::CLICK:
        case Effect::DOUBLE_CLICK:
            status = doHaptic(7, intensity, 2000, 1);
            timeMS = 7;
            break;
        default:
            status = Status::UNSUPPORTED_OPERATION;
            timeMS = 0;
            break;
    }

    _hidl_cb(status, timeMS);
    return Void();
}

}  // namespace implementation
}  // namespace V1_0
}  // namespace vibrator
}  // namespace hardware
}  // namespace android
