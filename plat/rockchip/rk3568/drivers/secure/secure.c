/*
 * Copyright (c) 2024-2026, Rockchip, Inc. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include <assert.h>
#include <lib/mmio.h>

#include <platform_def.h>

#include "secure.h"
#include <soc.h>

/* unit: Mb */
static void ddr_fw_rgn_config(uint64_t base_mb, uint64_t top_mb, int rgn_id)
{
	if (rgn_id >= FIREWALL_DDR_RGN_CNT || rgn_id < 0) {
		ERROR("%s regions-id:%d is invalid!\n", __func__, rgn_id);
		panic();
	}

	/*
	 * The firewall regions are managed in 128KB blocks instead of
	 * the 1MB blocks on the RK3576 and RK3588 SoCs.
	 */
	mmio_write_32(FIREWALL_DDR_BASE + FIREWALL_DDR_RGN(rgn_id),
		      RG_MAP_SECURE(top_mb * 8, base_mb * 8));

	/* enable region */
	mmio_setbits_32(FIREWALL_DDR_BASE + FIREWALL_DDR_CON, BIT(rgn_id));
}

static void secure_region_init(void)
{
	/* disable all region first except region0 */
	mmio_clrbits_32(FIREWALL_DDR_BASE + FIREWALL_DDR_CON, 0xfffe);

	/* Use FW_DDR_RGN0_REG to config 0~1M space to secure */
	ddr_fw_rgn_config(0, 1, 0);
}

void secure_timer_init(void)
{
	mmio_write_32(STIMER0_CHN_BASE(1) + TIMER_CONTROL_REG, TIMER_DIS);
	mmio_write_32(STIMER0_CHN_BASE(1) + TIMER_LOAD_COUNT0, 0xffffffff);
	mmio_write_32(STIMER0_CHN_BASE(1) + TIMER_LOAD_COUNT1, 0xffffffff);

	/* auto reload & enable the timer */
	mmio_write_32(STIMER0_CHN_BASE(1) + TIMER_CONTROL_REG, TIMER_EN);
}

void sgrf_init(void)
{
	secure_region_init();

	/* config all slave as ns for now */
	mmio_write_32(SGRF_BASE + SGRF_FIREWALL_SLV_CON(0), 0xffff0000);
	mmio_write_32(SGRF_BASE + SGRF_FIREWALL_SLV_CON(1), 0xffff0000);
	mmio_write_32(SGRF_BASE + SGRF_FIREWALL_SLV_CON(2), 0xffff0000);
	mmio_write_32(SGRF_BASE + SGRF_FIREWALL_SLV_CON(3), 0xffff0000);
	mmio_write_32(SGRF_BASE + SGRF_FIREWALL_SLV_CON(4), 0xffff0000);
	mmio_write_32(SGRF_BASE + SGRF_FIREWALL_SLV_CON(5), 0xffff0000);
	mmio_write_32(SGRF_BASE + SGRF_FIREWALL_SLV_CON(6), 0xffff0000);
	mmio_write_32(SGRF_BASE + SGRF_FIREWALL_SLV_CON(7), 0xffff0000);
	mmio_write_32(SGRF_BASE + SGRF_FIREWALL_SLV_CON(8), 0xffff0000);
}
