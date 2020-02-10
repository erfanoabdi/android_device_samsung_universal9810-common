#
# Copyright (C) 2018 The LineageOS Project
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#      http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#

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
