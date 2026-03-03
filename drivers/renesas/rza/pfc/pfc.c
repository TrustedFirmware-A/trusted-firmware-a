/*
 * Copyright (c) 2020-2026, Renesas Electronics Corporation. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include <stddef.h>
#include <stdint.h>

#include <common/debug.h>
#include <lib/mmio.h>

#include "pfc_regs.h"

static const PFC_REGS pfc_mux_reg_tbl[] = {
#if RZA3M
	/* P22(sd0)	*/
	{
		{ PFC_ON, (uintptr_t)PFC_PMC04, 0x3e }, /* PMC */
		{ PFC_ON, (uintptr_t)PFC_PFC04, 0 }, /* PFC */
		{ PFC_OFF, (uintptr_t)PFC_IOLH04,
		  0x0000010101010101 }, /* IOLH */
		{ PFC_OFF, (uintptr_t)PFC_PUPD04,
		  0x0000000000000000 }, /* PUPD */
		{ PFC_OFF, (uintptr_t)PFC_SR04, 0x0000010101010101 }, /* SR */
		{ PFC_ON, (uintptr_t)NULL, 0 } /* IEN */
	},
	/* P6(scif0) */
	{
		{ PFC_ON, (uintptr_t)PFC_PMC16, 0x3 }, /* PMC */
		{ PFC_ON, (uintptr_t)PFC_PFC16, 0x11 }, /* PFC */
		{ PFC_OFF, (uintptr_t)PFC_IOLH16,
		  0x0000000000000101 }, /* IOLH */
		{ PFC_OFF, (uintptr_t)PFC_PUPD16,
		  0x0000000000000000 }, /* PUPD */
		{ PFC_OFF, (uintptr_t)PFC_SR16, 0x0000000000000101 }, /* SR */
		{ PFC_OFF, (uintptr_t)NULL, 0 } /* IEN */
	},
#else /* RZA3M */
	/* P0(sd0) & P0(sd1)	*/
	{
		{ PFC_ON, (uintptr_t)PFC_PMC10, 0x0F }, /* PMC */
		{ PFC_ON, (uintptr_t)PFC_PFC10, 0x00001111 }, /* PFC */
		{ PFC_OFF, (uintptr_t)PFC_IOLH10,
		  0x0000000001010101 }, /* IOLH */
		{ PFC_OFF, (uintptr_t)PFC_PUPD10,
		  0x0000000000000000 }, /* PUPD */
		{ PFC_OFF, (uintptr_t)PFC_SR10, 0x0000000001010101 }, /* SR */
		{ PFC_OFF, (uintptr_t)NULL, 0 } /* IEN */
	},
#if (DEVICE_TYPE == 1)
	/* P6(scif0) */
	{
		{ PFC_ON, (uintptr_t)PFC_PMC16, 0x18 }, /* PMC */
		{ PFC_ON, (uintptr_t)PFC_PFC16, 0x00066000 }, /* PFC */
		{ PFC_OFF, (uintptr_t)PFC_IOLH16,
		  0x0000000101000000 }, /* IOLH */
		{ PFC_OFF, (uintptr_t)PFC_PUPD16,
		  0x0000000000000000 }, /* PUPD */
		{ PFC_OFF, (uintptr_t)PFC_SR16, 0x0000000101000000 }, /* SR */
		{ PFC_OFF, (uintptr_t)NULL, 0 } /* IEN */
	},
#else
	/* P13(scif0) */
	{
		{ PFC_ON, (uintptr_t)PFC_PMC1D, 0x03 }, /* PMC */
		{ PFC_ON, (uintptr_t)PFC_PFC1D, 0x00000011 }, /* PFC */
		{ PFC_OFF, (uintptr_t)PFC_IOLH1D,
		  0x0000000000000101 }, /* IOLH */
		{ PFC_OFF, (uintptr_t)PFC_PUPD1D,
		  0x0000000000000000 }, /* PUPD */
		{ PFC_OFF, (uintptr_t)PFC_SR1D, 0x0000000000000101 }, /* SR */
		{ PFC_OFF, (uintptr_t)NULL, 0 } /* IEN */
	},
#endif
#endif /* RZA3M */
};

static const PFC_REGS pfc_qspi_reg_tbl[] = {
#if RZA3M
	/* QSPI0 */
	{
		{ PFC_OFF, (uintptr_t)NULL, 0 }, /* PMC */
		{ PFC_OFF, (uintptr_t)NULL, 0 }, /* PFC */
		{ PFC_ON, (uintptr_t)PFC_IOLH05,
		  0x0000010101010101 }, /* IOLH */
		{ PFC_ON, (uintptr_t)PFC_PUPD05,
		  0x0000000000000000 }, /* PUPD */
		{ PFC_ON, (uintptr_t)PFC_SR05, 0x0000010101010101 }, /* SR */
		{ PFC_OFF, (uintptr_t)NULL, 0 } /* IEN */
	},
#else /* RZA3M */
	/* QSPI0 */
	{
		{ PFC_OFF, (uintptr_t)NULL, 0 }, /* PMC */
		{ PFC_OFF, (uintptr_t)NULL, 0 }, /* PFC */
		{ PFC_ON, (uintptr_t)PFC_IOLH0A,
		  0x0000010101010101 }, /* IOLH */
		{ PFC_ON, (uintptr_t)PFC_PUPD0A,
		  0x0000000000000000 }, /* PUPD */
		{ PFC_ON, (uintptr_t)PFC_SR0A, 0x0000010101010101 }, /* SR */
		{ PFC_OFF, (uintptr_t)NULL, 0 } /* IEN */
	},
	/* QSPI1 */
	{
		{ PFC_OFF, (uintptr_t)NULL, 0 }, /* PMC */
		{ PFC_OFF, (uintptr_t)NULL, 0 }, /* PFC */
		{ PFC_ON, (uintptr_t)PFC_IOLH0B,
		  0x0000010101010101 }, /* IOLH */
		{ PFC_ON, (uintptr_t)PFC_PUPD0B,
		  0x0000000000000000 }, /* PUPD */
		{ PFC_ON, (uintptr_t)PFC_SR0B, 0x0000010101010101 }, /* SR */
		{ PFC_OFF, (uintptr_t)NULL, 0 } /* IEN */
	},
	/* QSPIn */
	{
		{ PFC_OFF, (uintptr_t)NULL, 0 }, /* PMC */
		{ PFC_OFF, (uintptr_t)NULL, 0 }, /* PFC */
		{ PFC_ON, (uintptr_t)PFC_IOLH0C,
		  0x0000000000000101 }, /* IOLH */
		{ PFC_ON, (uintptr_t)PFC_PUPD0C,
		  0x0000000000000000 }, /* PUPD */
		{ PFC_ON, (uintptr_t)PFC_SR0C, 0x0000000000000000 }, /* SR */
		{ PFC_OFF, (uintptr_t)NULL, 0 } /* IEN */
	}
#endif /* RZA3M */
};

static void pfc_mux_setup(void)
{
	int cnt;
	int size = ARRAY_SIZE(pfc_mux_reg_tbl);

	for (cnt = 0; cnt < size; cnt++) {
		/* PMC */
		if (pfc_mux_reg_tbl[cnt].pmc.flg == PFC_ON) {
			mmio_write_8(pfc_mux_reg_tbl[cnt].pmc.reg,
				     pfc_mux_reg_tbl[cnt].pmc.val);
		}
		/* IOLH */
		if (pfc_mux_reg_tbl[cnt].iolh.flg == PFC_ON) {
			mmio_write_64(pfc_mux_reg_tbl[cnt].iolh.reg,
				      pfc_mux_reg_tbl[cnt].iolh.val);
		}
		/* PUPD */
		if (pfc_mux_reg_tbl[cnt].pupd.flg == PFC_ON) {
			mmio_write_64(pfc_mux_reg_tbl[cnt].pupd.reg,
				      pfc_mux_reg_tbl[cnt].pupd.val);
		}
		/* SR */
		if (pfc_mux_reg_tbl[cnt].sr.flg == PFC_ON) {
			mmio_write_64(pfc_mux_reg_tbl[cnt].sr.reg,
				      pfc_mux_reg_tbl[cnt].sr.val);
		}
	}
	/* multiplexer terminal switching */
	mmio_write_32(PFC_PWPR, 0x0);
	mmio_write_32(PFC_PWPR, PWPR_PFCWE);

	for (cnt = 0; cnt < size; cnt++) {
		/* PFC */
		if (pfc_mux_reg_tbl[cnt].pfc.flg == PFC_ON) {
			mmio_write_32(pfc_mux_reg_tbl[cnt].pfc.reg,
				      pfc_mux_reg_tbl[cnt].pfc.val);
		}
	}

	mmio_write_32(PFC_PWPR, 0x0);
	mmio_write_32(PFC_PWPR, PWPR_B0Wl);
}

static void pfc_qspi_setup(void)
{
	int cnt;
	int size = ARRAY_SIZE(pfc_qspi_reg_tbl);

	for (cnt = 0; cnt < size; cnt++) {
		/* PMC */
		if (pfc_qspi_reg_tbl[cnt].pmc.flg == PFC_ON) {
			mmio_write_64(pfc_qspi_reg_tbl[cnt].pmc.reg,
				      pfc_qspi_reg_tbl[cnt].pmc.val);
		}
		/* IOLH */
		if (pfc_qspi_reg_tbl[cnt].iolh.flg == PFC_ON) {
			mmio_write_64(pfc_qspi_reg_tbl[cnt].iolh.reg,
				      pfc_qspi_reg_tbl[cnt].iolh.val);
		}
		/* PUPD */
		if (pfc_qspi_reg_tbl[cnt].pupd.flg == PFC_ON) {
			mmio_write_64(pfc_qspi_reg_tbl[cnt].pupd.reg,
				      pfc_qspi_reg_tbl[cnt].pupd.val);
		}
		/* SR */
		if (pfc_qspi_reg_tbl[cnt].sr.flg == PFC_ON) {
			mmio_write_64(pfc_qspi_reg_tbl[cnt].sr.reg,
				      pfc_qspi_reg_tbl[cnt].sr.val);
		}
	}
	/* multiplexer terminal switching */
	mmio_write_32(PFC_PWPR, 0x0);
	mmio_write_32(PFC_PWPR, PWPR_PFCWE);
	for (cnt = 0; cnt < size; cnt++) {
		/* SR */
		if (pfc_qspi_reg_tbl[cnt].pfc.flg == PFC_ON) {
			mmio_write_64(pfc_qspi_reg_tbl[cnt].pfc.reg,
				      pfc_qspi_reg_tbl[cnt].pfc.val);
		}
	}

	mmio_write_32(PFC_PWPR, 0x0);
	mmio_write_32(PFC_PWPR, PWPR_B0Wl);
}

void pfc_setup(void)
{
	pfc_mux_setup();
	pfc_qspi_setup();
}
