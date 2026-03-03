/*
 * Copyright (c) 2020-2026, Renesas Electronics Corporation. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include <lib/mmio.h>

#include <platform_def.h>

#define SYC_BASE PLAT_SYC_BASE

void syc_init(unsigned int freq)
{
	mmio_write_32(SYC_BASE + CNTFID_OFF, freq);
	mmio_write_32(SYC_BASE + CNTCR_OFF, CNTCR_EN);
}

unsigned int syc_get_freq(void)
{
	return mmio_read_32(SYC_BASE + CNTFID_OFF);
}
