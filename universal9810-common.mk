# Copyright (C) 2018 The LineageOS Project
# SPDX-License-Identifier: Apache-2.0

DEVICE_PACKAGE_OVERLAYS += $(LOCAL_PATH)/overlay

ifneq ($(findstring lineage, $(TARGET_PRODUCT)),)
DEVICE_PACKAGE_OVERLAYS += $(LOCAL_PATH)/overlay-lineage
endif

# Permissions
PRODUCT_COPY_FILES += \
    frameworks/native/data/etc/android.hardware.ethernet.xml:system/etc/permissions/android.hardware.ethernet.xml \
    frameworks/native/data/etc/android.hardware.fingerprint.xml:system/etc/permissions/android.hardware.fingerprint.xml \
    frameworks/native/data/etc/android.hardware.sensor.heartrate.xml:system/etc/permissions/android.hardware.sensor.heartrate.xml \
    frameworks/native/data/etc/android.hardware.usb.accessory.xml:system/etc/permissions/android.hardware.usb.accessory.xml \
    frameworks/native/data/etc/android.hardware.vr.high_performance.xml:system/etc/permissions/android.hardware.vr.high_performance.xml \
    frameworks/native/data/etc/android.software.freeform_window_management.xml:system/etc/permissions/android.software.freeform_window_management.xml

# Screen density
PRODUCT_AAPT_CONFIG := normal
PRODUCT_AAPT_PREF_CONFIG := 560dpi
PRODUCT_AAPT_PREBUILT_DPI := xxxhdpi xxhdpi xhdpi hdpi

# Boot animation
TARGET_SCREEN_HEIGHT := 2960
TARGET_SCREEN_WIDTH := 1440

# Init
PRODUCT_PACKAGES += \
    fstab.samsungexynos9810 \
    init.samsung.rc \
    init.samsungexynos9810.rc \
    init.samsungexynos9810.usb.rc \
    init.baseband.rc \
    ueventd.samsungexynos9810.rc

# VNDK
PRODUCT_COPY_FILES += \
    $(LOCAL_PATH)/vndk-compat/vndk-compat.rc:system/etc/init/vndk-compat.rc

# SP-NDK
PRODUCT_PACKAGES += \
    libvulkan

# Audio
USE_XML_AUDIO_POLICY_CONF := 1
PRODUCT_PACKAGES += \
    libshim_audio \
    audioloader
PRODUCT_COPY_FILES += \
    frameworks/av/services/audiopolicy/config/usb_audio_policy_configuration.xml:system/etc/usb_audio_policy_configuration.xml

# Bluetooth
PRODUCT_PACKAGES += \
    audio.a2dp.default

# Camera
PRODUCT_PACKAGES += \
    Snap

# Net
PRODUCT_PACKAGES += \
    netutils-wrapper-1.0

# NFC
PRODUCT_PACKAGES += \
    android.hardware.nfc@1.0-impl \
    com.android.nfc_extras \
    libnfc-nci \
    libnfc_nci_jni \
    NfcNci \
    Tag

# Power
PRODUCT_PACKAGES += \
    android.hardware.power@1.0-service.9810

# Lights
PRODUCT_PACKAGES += \
    android.hardware.light@2.0-service.9810

# Fingerprint
PRODUCT_PACKAGES += \
    fingerprint.exynos5

# Vibrator
PRODUCT_PACKAGES += \
    android.hardware.vibrator@1.0-service.9810

# Keylayout
PRODUCT_COPY_FILES += \
    $(LOCAL_PATH)/keylayout/gpio_keys.kl:system/usr/keylayout/gpio_keys.kl

# Remove unwanted packages
PRODUCT_PACKAGES += \
    RemovePackages

# Property overrides
-include $(LOCAL_PATH)/system_prop.mk

# Call proprietary blob setup
$(call inherit-product, vendor/samsung/universal9810-common/universal9810-common-vendor.mk)
