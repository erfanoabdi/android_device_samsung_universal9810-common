/*
 * Copyright (C) 2017 The Android Open Source Project
 * Copyright (C) 2018 The LineageOS Project
 * SPDX-License-Identifier: Apache-2.0
 */

#define LOG_TAG "android.hardware.power@1.0-service.9810"

#include <android/log.h>
#include <android-base/file.h>
#include <android-base/properties.h>
#include <android-base/strings.h>
#include <utils/Log.h>
#include "Power.h"

using android::base::WriteStringToFile;

namespace android {
namespace hardware {
namespace power {
namespace V1_0 {
namespace implementation {

using ::android::hardware::power::V1_0::Feature;
using ::android::hardware::power::V1_0::PowerHint;
using ::android::hardware::power::V1_0::PowerStatePlatformSleepState;
using ::android::hardware::power::V1_0::Status;
using ::android::hardware::hidl_vec;
using ::android::hardware::Return;
using ::android::hardware::Void;

Power::Power() {
    mInteractionHandler.Init();
}

// Methods from ::android::hardware::power::V1_0::IPower follow.
Return<void> Power::setInteractive(bool interactive) {
    WriteStringToFile(interactive ? "8" : "6", "/sys/power/cpuhotplug/max_online_cpu", false);
    WriteStringToFile(interactive ? "2314000" : "1690000", "/sys/power/cpufreq_max_limit", false);
    return Void();
}

Return<void> Power::powerHint(PowerHint hint, int32_t data) {
    switch (hint) {
    case PowerHint::INTERACTION:
        mInteractionHandler.Acquire(data);
        break;
    default:
        return Void();
    }
    return Void();
}

Return<void> Power::setFeature(Feature, bool)  {
    return Void();
}

Return<void> Power::getPlatformLowPowerStats(getPlatformLowPowerStats_cb _hidl_cb) {
    hidl_vec<PowerStatePlatformSleepState> states;
    _hidl_cb(states, Status::SUCCESS);
    return Void();
}

}  // namespace implementation
}  // namespace V1_0
}  // namespace power
}  // namespace hardware
}  // namespace android
