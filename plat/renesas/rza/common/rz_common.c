/*
 * Copyright (c) 2026, Renesas Electronics Corporation. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include <common/debug.h>
#include <drivers/delay_timer.h>
#include <drivers/renesas/rza/cpg/cpg.h>
#include <drivers/renesas/rza/syc/syc.h>
#include <drivers/spi_nor.h>

#include "rpc.h"
#include "rpc_registers.h"

#define RPC_PHYADJ1	0x0070
#define RPC_PHYADJ2	0x0074

unsigned int plat_get_syscnt_freq2(void)
{
	return syc_get_freq();
}

static void rpc_timing_adjustment(void)
{
	/* Timing Adjustment */
	mmio_write_32(RPC_BASE + RPC_PHYADJ2, 0xa5390000);
	mmio_write_32(RPC_BASE + RPC_PHYADJ1, 0x80000000);
	mmio_write_32(RPC_BASE + RPC_PHYADJ2, 0x00008080);
	mmio_write_32(RPC_BASE + RPC_PHYADJ1, 0x80000022);
	mmio_write_32(RPC_BASE + RPC_PHYADJ2, 0x00008080);
	mmio_write_32(RPC_BASE + RPC_PHYADJ1, 0x80000024);
	mmio_write_32(RPC_BASE + RPC_PHYADJ2, 0x00000030);
	mmio_write_32(RPC_BASE + RPC_PHYADJ1, 0x80000032);
}

void rpc_setup(void)
{
	int ret;

	/* Resume SPIM controller */
	cpg_reset_off(CPG_CLOCK_SPIM);

	/* Supply SPIM clock */
	cpg_set_xspi_clock(XSPI_CLOCK_SPIM, 66666666 * 4 + 1);
	udelay(50);

	struct spi_mem_op rop = {
		.cmd = {
			.opcode = SPI_NOR_OP_READ_1_4_4,
			.buswidth = SPI_MEM_BUSWIDTH_1_LINE,
		},
		.addr = {
			.nbytes = 3,
			.buswidth = SPI_MEM_BUSWIDTH_4_LINE,
		},
		.dummy = {
			.nbytes = 2,
			.buswidth = 0,
		},
		.data = {
			.buswidth = SPI_MEM_BUSWIDTH_4_LINE,
			.dir = SPI_MEM_DATA_IN,
		},
	};

	/* Configure external address space read mode */
	ret = rpc_config_xread_mode(&rop);

	if (ret != 0) {
		ERROR("%s: configure SPI Bus failed\n", __func__);
		panic();
	}

	rpc_timing_adjustment();
}
