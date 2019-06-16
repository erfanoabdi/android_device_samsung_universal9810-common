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

# Offline charging
write_makefiles "$MY_DIR"/proprietary-files-lpm.txt true

# We are done!
write_footers
