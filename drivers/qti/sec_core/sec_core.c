/*
 * Copyright (c) 2026, Qualcomm Technologies, Inc. and/or its subsidiaries.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include <stddef.h>

#include <arch_helpers.h>
#include <drivers/qti/sec_core/sec_core.h>
#include <lib/mmio.h>

void qti_sec_core_remap(uintptr_t entrypoint)
{
	mmio_write_32(qti_sec_core_rvbaraddr_lo, (uint32_t)(entrypoint >> 2));
	mmio_write_32(qti_sec_core_rvbaraddr_hi, (uint32_t)(entrypoint >> 34));
}

/*
 * ACPS: security configuration.
 *  - CPU Clock control/distribution (acc).
 *  - Global CPU Clock control/distribution (gcc)
 *  - General Purpose Timer(s) (tmr configured as general purpose)
 *  - Debug Timer (tmr configured for debug)
 *  - Watch Dog timer(s) (wdt)
 *  - System Interrupt Controller (SIC or QGIC or External)
 *  - Test Interface Controller (tic).
 *  - AHB Bus Interface and decoder (ahb).
 *  - Per CPU voltage control (avs)
 *  - Per CPU power control (spm)
 */
void qti_sec_core_init(void)
{
	for (size_t i = 0U; i < qti_sec_core_cfg_count; i++) {
		mmio_write_32(qti_sec_core_cfg[i].addr,
			      qti_sec_core_cfg[i].value);
	}

	dsbsy();
	isb();
}
