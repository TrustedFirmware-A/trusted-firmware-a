/*
 * Copyright (c) 2026, Renesas Electronics Corporation. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include <stdint.h>
#include <string.h>

#include <common/debug.h>
#include <drivers/spi_nor.h>
#include <lib/mmio.h>

#include "rpc.h"
#include "rpc_registers.h"

static uint32_t rpc_get_drenr(const struct spi_mem_op *op)
{
	/* Command output enabled, optional command output disabled */
	uint32_t drenr = RPC_DRENR_CDE;

	/* Address enable */
	switch (op->addr.nbytes) {
	case 3:
		drenr |= RPC_DRENR_ADE_3BYTE << RPC_DRENR_ADE_POS;
		break;
	case 4:
		drenr |= RPC_DRENR_ADE_4BYTE << RPC_DRENR_ADE_POS;
		break;
	default:
		drenr |= RPC_DRENR_ADE_NONE << RPC_DRENR_ADE_POS;
		break;
	}

	/* Set bit size of following fields:
	 * Command, optional command, address, option data, data
	 */
	if ((op->cmd.buswidth == SPI_MEM_BUSWIDTH_1_LINE) &&
	    (op->addr.buswidth == SPI_MEM_BUSWIDTH_1_LINE) &&
	    (op->data.buswidth == SPI_MEM_BUSWIDTH_1_LINE)) {
		drenr |= RPC_DRENR_DB_1BIT << RPC_DRENR_CDB_POS |
			 RPC_DRENR_DB_1BIT << RPC_DRENR_OCDB_POS |
			 RPC_DRENR_DB_1BIT << RPC_DRENR_ADB_POS |
			 RPC_DRENR_DB_1BIT << RPC_DRENR_OPDB_POS |
			 RPC_DRENR_DB_1BIT << RPC_DRENR_DRDB_POS;
	} else if ((op->cmd.buswidth == SPI_MEM_BUSWIDTH_1_LINE) &&
		   (op->addr.buswidth == SPI_MEM_BUSWIDTH_1_LINE) &&
		   (op->data.buswidth == SPI_MEM_BUSWIDTH_4_LINE)) {
		drenr |= RPC_DRENR_DB_1BIT << RPC_DRENR_CDB_POS |
			 RPC_DRENR_DB_1BIT << RPC_DRENR_OCDB_POS |
			 RPC_DRENR_DB_1BIT << RPC_DRENR_ADB_POS |
			 RPC_DRENR_DB_1BIT << RPC_DRENR_OPDB_POS |
			 RPC_DRENR_DB_4BIT << RPC_DRENR_DRDB_POS;
	} else if ((op->cmd.buswidth == SPI_MEM_BUSWIDTH_1_LINE) &&
		   (op->addr.buswidth == SPI_MEM_BUSWIDTH_4_LINE) &&
		   (op->data.buswidth == SPI_MEM_BUSWIDTH_4_LINE)) {
		drenr |= RPC_DRENR_DB_1BIT << RPC_DRENR_CDB_POS |
			 RPC_DRENR_DB_1BIT << RPC_DRENR_OCDB_POS |
			 RPC_DRENR_DB_4BIT << RPC_DRENR_ADB_POS |
			 RPC_DRENR_DB_4BIT << RPC_DRENR_OPDB_POS |
			 RPC_DRENR_DB_4BIT << RPC_DRENR_DRDB_POS;
	}

	/* Dummy cycle enable */
	drenr |= RPC_DRENR_DME;

	/* Optional data enable */
	drenr |= RPC_DRENR_OPDE_1BYTE << RPC_DRENR_OPDE_POS;

	return drenr;
}

int rpc_config_xread_mode(const struct spi_mem_op *op)
{
	if (op->data.dir != SPI_MEM_DATA_IN) {
		ERROR("%s: only read command is supported for external read mode\n",
		      __func__);
		return -1;
	}

	if ((op->cmd.buswidth != SPI_MEM_BUSWIDTH_1_LINE) ||
	    (op->addr.buswidth != SPI_MEM_BUSWIDTH_4_LINE) ||
	    (op->data.buswidth != SPI_MEM_BUSWIDTH_4_LINE)) {
		ERROR("%s: currently, only 1-4-4 format is supported\n",
		      __func__);
		return -1;
	}

	/* Switch to manual mode to temporarily disable external address space read mode */
	mmio_clrsetbits_32(RPC_CMNCR, RPC_CMNCR_MD, 1u << RPC_CMNCR_MD_POS);

	uint32_t mask = 0;
	uint32_t set = 0;

	/* PHYOFFSET1 */
	mask = RPC_PHYOFFSET1_DDRTMG;
	set = RPC_PHYOFFSET1_SDR << RPC_PHYOFFSET1_DDRTMG_POS;
	mmio_clrsetbits_32(RPC_PHYOFFSET1, mask, set);

	/* PHYOFFSET2 */
	mask = RPC_PHYOFFSET2_OCTTMG;
	set = RPC_PHYOFFSET2_SPI << RPC_PHYOFFSET2_OCTTMG_POS;
	mmio_clrsetbits_32(RPC_PHYOFFSET2, mask, set);

	/* PHYCNT */
	mask = RPC_PHYCNT_PHYMEM;
	set = (RPC_PHYCNT_SDR << RPC_PHYCNT_PHYMEM_POS) | RPC_PHYCNT_CAL;
	mmio_clrsetbits_32(RPC_PHYCNT, mask, set);

	/* CMNCR */
	mask = RPC_CMNCR_BSZ | RPC_CMNCR_IO2FV | RPC_CMNCR_IO3FV |
	       RPC_CMNCR_MOIIO1 | RPC_CMNCR_MOIIO2 | RPC_CMNCR_MOIIO3;
	set = (RPC_CMNCR_BSZ_SINGLE << RPC_CMNCR_BSZ_POS) |
	      (RPC_CMNCR_IO_HIGH << RPC_CMNCR_MOIIO3_POS) |
	      (RPC_CMNCR_IO_KEEP << RPC_CMNCR_IO3FV_POS) |
	      (RPC_CMNCR_IO_HIZ << RPC_CMNCR_MOIIO2_POS) |
	      (RPC_CMNCR_IO_HIZ << RPC_CMNCR_IO2FV_POS) |
	      (RPC_CMNCR_IO_HIZ << RPC_CMNCR_MOIIO1_POS);
	mmio_clrsetbits_32(RPC_CMNCR, mask, set);

	/* SSLDR */
	mask = RPC_SSLDR_SCKDL | RPC_SSLDR_SLNDL | RPC_SSLDR_SPNDL;
	set = (0 << RPC_SSLDR_SCKDL_POS) | (0 << RPC_SSLDR_SLNDL_POS) |
	      (6u << RPC_SSLDR_SPNDL_POS);
	mmio_clrsetbits_32(RPC_SSLDR, mask, set);

	/* DRCR */
	mask = RPC_DRCR_RBURST | RPC_DRCR_RBE | RPC_DRCR_SSLE;
	set = (7u << RPC_DRCR_RBURST_POS) | RPC_DRCR_RCF | RPC_DRCR_RBE | RPC_DRCR_SSLE;
	mmio_clrsetbits_32(RPC_DRCR, mask, set);

	/* DRCMR */
	mask = RPC_DRCMR_CMD | RPC_DRCMR_OCMD;
	set = (op->cmd.opcode & 0xff) << RPC_DRCMR_CMD_POS;
	mmio_clrsetbits_32(RPC_DRCMR, mask, set);

	/* DROPR */
	mask = 0xffff;
	set = (0x55555555u & 0xffu) << RPC_DROPR_OPD3_POS;
	mmio_write_32(RPC_DROPR, set);

	/* DRENR */
	mask = RPC_DRENR_ADB | RPC_DRENR_ADE | RPC_DRENR_CDB | RPC_DRENR_CDE |
	       RPC_DRENR_DME | RPC_DRENR_DRDB | RPC_DRENR_OCDB |
	       RPC_DRENR_OCDE | RPC_DRENR_OPDB | RPC_DRENR_OPDE;
	set = rpc_get_drenr(op);
	mmio_clrsetbits_32(RPC_DRENR, mask, set);

	/* DRDMCR */
	mask = RPC_DRDMCR_DMCYC;
	set = (op->dummy.nbytes * 2 - 1) << RPC_DRDMCR_DMCYC_POS;
	mmio_write_32(RPC_DRDMCR, set);

	/* DRDRENR */
	mask = RPC_DRDRENR_ADDRE | RPC_DRDRENR_DRDRE | RPC_DRDRENR_HYPE | RPC_DRDRENR_OPDRE;
	set = 0;
	mmio_clrsetbits_32(RPC_DRDRENR, mask, set);

	/* Start XIP */
	mmio_clrbits_32(RPC_CMNCR, RPC_CMNCR_MD);
	mmio_read_32(RPC_CMNCR);

	return 0;
}
