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

uint32_t get_plat_cluster_start_id(void)
{
	static uint32_t cluster_id;
	uint32_t part_no;

	if (cluster_id) {
		return cluster_id;
	}

	part_no = get_soc_part_no();
	if (part_no == JTAG_ID_PARTNO_AM65X)
		cluster_id = CLUSTER_DEVICE_START_ID_AM65X;
	else
		cluster_id = PLAT_CLUSTER_DEVICE_START_ID;

	return cluster_id;
}
