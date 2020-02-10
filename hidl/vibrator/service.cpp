/*
 * Copyright (C) 2018 The LineageOS Project
 * SPDX-License-Identifier: Apache-2.0
 */

#define LOG_TAG "android.hardware.vibrator@1.0-service.9810"

#include <android/hardware/vibrator/1.0/IVibrator.h>
#include <hidl/HidlSupport.h>
#include <hidl/HidlTransportSupport.h>
#include <utils/Errors.h>
#include <utils/StrongPointer.h>

#include "Vibrator.h"

using android::hardware::configureRpcThreadpool;
using android::hardware::joinRpcThreadpool;
using android::hardware::vibrator::V1_0::IVibrator;
using android::hardware::vibrator::V1_0::implementation::Vibrator;
using namespace android;

static const char *ENABLE_PATH = "/sys/class/timed_output/vibrator/enable";
static const char *HAPTIC_PATH = "/sys/class/timed_output/vibrator/haptic_engine";

status_t registerVibratorService() {
    std::ofstream enable{ENABLE_PATH};
    if (!enable) {
        int error = errno;
        ALOGE("Failed to open %s (%d): %s", ENABLE_PATH, error, strerror(error));
        return -error;
    }

    std::ofstream haptic{HAPTIC_PATH};
    if (!haptic) {
        int error = errno;
        ALOGE("Failed to open %s (%d): %s", HAPTIC_PATH, error, strerror(error));
        return -error;
    }

    sp<IVibrator> vibrator = new Vibrator(std::move(enable), std::move(haptic));
    vibrator->registerAsService();
    return OK;
}

int main() {
    configureRpcThreadpool(1, true);
    status_t status = registerVibratorService();

    if (status != OK) {
        return status;
    }

    joinRpcThreadpool();
}
