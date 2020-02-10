#!/bin/bash
# Copyright (C) 2018 The LineageOS Project
# SPDX-License-Identifier: Apache-2.0

set -e

# Required!
VENDOR=samsung
DEVICE_COMMON=universal9810-common
DEVICE="crownlte star2lte starlte"

# Load extractutils and do some sanity checks
MY_DIR="${BASH_SOURCE%/*}"
if [[ ! -d "$MY_DIR" ]]; then MY_DIR="$PWD"; fi

LINEAGE_ROOT="$MY_DIR"/../../..

HELPER="$LINEAGE_ROOT"/vendor/lineage/build/tools/extract_utils.sh
if [ ! -f "$HELPER" ]; then
    echo "Unable to find helper script at $HELPER"
    exit 1
fi
. "$HELPER"

# Initialize the helper
setup_vendor "$DEVICE_COMMON" "$VENDOR" "$LINEAGE_ROOT" true

# Copyright headers and guards
write_headers "$DEVICE"

# The standard blobs
write_makefiles "$MY_DIR"/proprietary-files.txt true

###################################################################################################
# CUSTOM PART START                                                                               #
###################################################################################################
OUTDIR=vendor/$VENDOR/$DEVICE_COMMON
(cat << EOF) >> $LINEAGE_ROOT/$OUTDIR/Android.mk
include \$(CLEAR_VARS)
LOCAL_MODULE := libGLES_mali
LOCAL_MODULE_OWNER := samsung
LOCAL_SRC_FILES_64 := proprietary/vendor/lib64/egl/libGLES_mali.so
LOCAL_SRC_FILES_32 := proprietary/vendor/lib/egl/libGLES_mali.so
LOCAL_MULTILIB := both
LOCAL_MODULE_TAGS := optional
LOCAL_MODULE_CLASS := SHARED_LIBRARIES
LOCAL_MODULE_SUFFIX := .so
LOCAL_MODULE_PATH_32 := \$(\$(TARGET_2ND_ARCH_VAR_PREFIX)TARGET_OUT_VENDOR_SHARED_LIBRARIES)/egl
LOCAL_MODULE_PATH_64 := \$(TARGET_OUT_VENDOR_SHARED_LIBRARIES)/egl

SYMLINKS := \$(TARGET_OUT)/vendor
\$(SYMLINKS):
	@echo "Symlink: vulkan.exynos5.so"
	@mkdir -p \$@/lib/hw
	@mkdir -p \$@/lib64/hw
	\$(hide) ln -sf ../egl/libGLES_mali.so \$@/lib/hw/vulkan.exynos5.so
	\$(hide) ln -sf ../egl/libGLES_mali.so \$@/lib64/hw/vulkan.exynos5.so
	@echo "Symlink: libOpenCL.so"
	\$(hide) ln -sf egl/libGLES_mali.so \$@/lib/libOpenCL.so
	\$(hide) ln -sf egl/libGLES_mali.so \$@/lib64/libOpenCL.so
	@echo "Symlink: libOpenCL.so.1"
	\$(hide) ln -sf egl/libGLES_mali.so \$@/lib/libOpenCL.so.1
	\$(hide) ln -sf egl/libGLES_mali.so \$@/lib64/libOpenCL.so.1
	@echo "Symlink: libOpenCL.so.1.1"
	\$(hide) ln -sf egl/libGLES_mali.so \$@/lib/libOpenCL.so.1.1
	\$(hide) ln -sf egl/libGLES_mali.so \$@/lib64/libOpenCL.so.1.1

ALL_MODULES.\$(LOCAL_MODULE).INSTALLED := \\
	\$(ALL_MODULES.\$(LOCAL_MODULE).INSTALLED) \$(SYMLINKS)

include \$(BUILD_PREBUILT)

EOF

(cat << EOF) >> $LINEAGE_ROOT/$OUTDIR/$DEVICE_COMMON-vendor.mk

# Create Mali links for Vulkan and OpenCL
PRODUCT_PACKAGES += libGLES_mali
EOF
###################################################################################################
# CUSTOM PART END                                                                                 #
###################################################################################################

# We are done!
write_footers
