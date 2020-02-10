/*
 * Copyright (C) 2017 The Android Open Source Project
 * Copyright (C) 2018 The LineageOS Project
 * SPDX-License-Identifier: Apache-2.0
 */

#define LOG_TAG "android.hardware.power@1.0-service.9810"

#include <android/log.h>
#include <hidl/HidlTransportSupport.h>
#include <hardware/power.h>
#include "Power.h"

using android::sp;
using android::status_t;
using android::OK;

// libhwbinder:
using android::hardware::configureRpcThreadpool;
using android::hardware::joinRpcThreadpool;

// Generated HIDL files
using android::hardware::power::V1_0::IPower;
using android::hardware::power::V1_0::implementation::Power;

int main() {

    status_t status;
    android::sp<IPower> service = nullptr;

    ALOGI("Power HAL Service 1.0 for Exynos 9810 is starting.");

    service = new Power();
    if (service == nullptr) {
        ALOGE("Can not create an instance of Power HAL Iface, exiting.");

        goto shutdown;
    }

    configureRpcThreadpool(1, true /*callerWillJoin*/);

    status = service->registerAsService();
    if (status != OK) {
        ALOGE("Could not register service for Power HAL Iface (%d).", status);
        goto shutdown;
    }

    ALOGI("Power Service is ready");
    joinRpcThreadpool();
    //Should not pass this line

shutdown:
    // In normal operation, we don't expect the thread pool to exit

    ALOGE("Power Service is shutting down");
    return 1;
}
