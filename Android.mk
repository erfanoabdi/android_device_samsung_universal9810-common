# Copyright (C) 2018 The LineageOS Project
# SPDX-License-Identifier: Apache-2.0

LOCAL_PATH := $(call my-dir)

ifneq ($(filter crownlte starlte star2lte, $(TARGET_DEVICE)),)

include $(call all-makefiles-under,$(LOCAL_PATH))

include $(CLEAR_VARS)

OPENCL_SYMLINKS += $(TARGET_OUT_VENDOR)/lib/libOpenCL.so
OPENCL_SYMLINKS += $(TARGET_OUT_VENDOR)/lib/libOpenCL.so.1
OPENCL_SYMLINKS += $(TARGET_OUT_VENDOR)/lib/libOpenCL.so.1.1
OPENCL_SYMLINKS += $(TARGET_OUT_VENDOR)/lib64/libOpenCL.so
OPENCL_SYMLINKS += $(TARGET_OUT_VENDOR)/lib64/libOpenCL.so.1
OPENCL_SYMLINKS += $(TARGET_OUT_VENDOR)/lib64/libOpenCL.so.1.1

$(OPENCL_SYMLINKS): $(LOCAL_INSTALLED_MODULE)
	@mkdir -p $(dir $@)
	$(hide) ln -sf egl/libGLES_mali.so $@

ALL_DEFAULT_INSTALLED_MODULES += $(OPENCL_SYMLINKS)

VULKAN_SYMLINK += $(TARGET_OUT_VENDOR)/lib/hw/vulkan.exynos5.so
VULKAN_SYMLINK += $(TARGET_OUT_VENDOR)/lib64/hw/vulkan.exynos5.so
$(VULKAN_SYMLINK): $(LOCAL_INSTALLED_MODULE)
	@mkdir -p $(dir $@)
	$(hide) ln -sf ../egl/libGLES_mali.so $@

ALL_DEFAULT_INSTALLED_MODULES += $(VULKAN_SYMLINK)

endif
