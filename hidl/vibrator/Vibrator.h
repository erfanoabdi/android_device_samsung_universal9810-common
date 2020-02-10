/*
 * Copyright (C) 2018 The LineageOS Project
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef ANDROID_HARDWARE_VIBRATOR_V1_0_VIBRATOR_H
#define ANDROID_HARDWARE_VIBRATOR_V1_0_VIBRATOR_H

#include <android/hardware/vibrator/1.0/IVibrator.h>
#include <hidl/Status.h>

#include <fstream>

namespace android {
namespace hardware {
namespace vibrator {
namespace V1_0 {
namespace implementation {

class Vibrator : public IVibrator {
public:
  Vibrator(std::ofstream&& enable, std::ofstream&& haptic);

  // Methods from ::android::hardware::vibrator::V1_0::IVibrator follow.
  Return<Status> on(uint32_t timeoutMs)  override;
  Return<Status> off()  override;
  Return<bool> supportsAmplitudeControl() override;
  Return<Status> setAmplitude(uint8_t) override;
  Return<void> perform(Effect effect, EffectStrength strength, perform_cb _hidl_cb) override;

private:
  Return<Status> doHaptic(int timeout, int intensity, int freq, int overdrive);
  std::ofstream mEnable;
  std::ofstream mHaptic;
  uint32_t mIntensity;
};

}  // namespace implementation
}  // namespace V1_0
}  // namespace vibrator
}  // namespace hardware
}  // namespace android

#endif  // ANDROID_HARDWARE_VIBRATOR_V1_0_VIBRATOR_H
