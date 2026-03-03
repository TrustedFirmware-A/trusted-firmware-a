/*
 * Copyright (c) 2026, Renesas Electronics Corporation. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include <stddef.h>
#include <stdint.h>

#include <drivers/console.h>
#include <lib/mmio.h>
#include <lib/utils_def.h>
#include "scif.h"

/* SCIF */
#define SCIF_SMR		0x00
#define SCIF_BRR		0x02
#define SCIF_MDDR		0x02
#define SCIF_SCR		0x04
#define SCIF_FTDR		0x06
#define SCIF_FSR		0x08
#define SCIF_FRDR		0x0A
#define SCIF_FCR		0x0C
#define SCIF_FDR		0x0E
#define SCIF_SPTR		0x10
#define SCIF_LSR		0x12
#define SCIF_SEMR		0x14
#define SCIF_FTCR		0x16
#define SEMR_MDDRS_MDDR		0x10
#define SEMR_BRME_ON		0x20
#define SEMR_MDDR		(SEMR_MDDRS_MDDR | SEMR_BRME_ON)

#define SCR_TE_EN		BIT(5)
#define SCR_RE_EN		BIT(4)
#define SCR_CKE_MASK		3
#define FSR_TEND_MASK		BIT(6)
#define FSR_TEND_TRANS_END	BIT(6)
#define SCR_CKE_INT_CLK		0
#define FCR_TFRST_EN		BIT(2)
#define FCR_RFRS_EN		BIT(1)

void console_renesas_init(uintptr_t base_addr, uint32_t uart_clk,
			 uint32_t baud_rate)
{
	const uint32_t brr = ((uart_clk / baud_rate) / 32) - 1;
	uint32_t base = base_addr;
	int i;

	scif_console_set_regs(base + SCIF_FSR, base + SCIF_FTDR);

	/* Clear bits TE and RE in SCR to 0 */
	mmio_write_16(base + SCIF_SCR, 0);

	/* Set bits TFRST and RFRST in FCR to 1 */
	mmio_clrsetbits_16(base + SCIF_FCR,
			   FCR_TFRST_EN | FCR_RFRS_EN,
			   FCR_TFRST_EN | FCR_RFRS_EN);

	/*
	 * Read flags of ER, DR, BRK, and RDF in FSR and those
	 * of TO and ORER in LSR, then clear them to 0.
	 */
	mmio_write_16(base + SCIF_FSR, 0);
	mmio_write_16(base + SCIF_LSR, 0);

	/* Set bits CKE[1:0] in SCR */
	mmio_clrsetbits_16(base + SCIF_SCR, SCR_CKE_MASK,
			   SCR_CKE_INT_CLK);

	/* Set data transfer format in SMR */
	mmio_write_16(base + SCIF_SMR, 0);

	/* Set value in BRR */
	mmio_write_8(base + SCIF_BRR, brr);

	/* Set value in SEMR */
	mmio_write_8(base + SCIF_SEMR, SEMR_MDDR);

	/* Set value in MDDR */
	mmio_write_8(base + SCIF_MDDR, 255U);

	/* 1-bit interval elapsed */
	for (i = 0; i < 100; i++)
		asm volatile("nop");

	/*
	 * Set bits RTRG[1:0], TTRG[1:0], and MCE in FCR
	 * Clear bits FRST and RFRST to 0
	 */
	mmio_write_16(base + SCIF_FCR, 0);

	/* Set bits TE and RE in SCR to 1 */
	mmio_clrsetbits_16(base + SCIF_SCR, SCR_TE_EN | SCR_RE_EN,
			   SCR_TE_EN | SCR_RE_EN);
}
