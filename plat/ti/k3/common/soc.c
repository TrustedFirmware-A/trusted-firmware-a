/*
 * Copyright (c) 2025-2026, ARM Limited and Contributors. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include <lib/mmio.h>
#include <lib/utils_def.h>
#include <plat/common/platform.h>
#include <platform_def.h>
#include <soc.h>

uint32_t get_soc_part_no(void)
{
	uint32_t part_no, jtag_id_reg;

	jtag_id_reg = mmio_read_32(CTRLMMR_WKUP_JTAG_ID);
	part_no = EXTRACT(JTAG_ID_PARTNO, jtag_id_reg);

	return part_no;
}
