/*
 * Copyright (C) 2026 The LineageOS Project
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <stddef.h>

void ged_fr_swd_frame_destroy(void) {
}

void ged_fr_swd_mark_frame(int type, int value, void *arg1, void *arg2) {
    (void)type;
    (void)value;
    (void)arg1;
    (void)arg2;
}

int GpuAuxBlitAHardwareBuffer(void *ctx, void *ahb) {
    (void)ctx;
    (void)ahb;
    return -1;
}
