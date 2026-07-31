/*
 * Copyright (c) 2026, Qualcomm Technologies, Inc. and/or its subsidiaries.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef SEC_CORE_H
#define SEC_CORE_H

#include <stddef.h>
#include <stdint.h>

struct sec_core_cfg_s {
	uintptr_t addr;
	uint32_t value;
};

void qti_sec_core_init(void);
void qti_sec_core_remap(uintptr_t entrypoint);

extern const struct sec_core_cfg_s qti_sec_core_cfg[];
extern const size_t qti_sec_core_cfg_count;
extern const uintptr_t qti_sec_core_rvbaraddr_lo;
extern const uintptr_t qti_sec_core_rvbaraddr_hi;

#endif /* SEC_CORE_H */
