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

	mmio_write_32(DDRSGRF_BASE + FIREWALL_DDR_FW_DDR_CON_REG, 0xffff0000);
}
