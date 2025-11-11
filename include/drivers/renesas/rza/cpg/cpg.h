/*
 * Copyright (c) 2020-2026, Renesas Electronics Corporation. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef __CPG_H__
#define __CPG_H__

#include <lib/mmio.h>

enum xspi_clock {
	XSPI_CLOCK_SPIM,
	XSPI_CLOCK_OCTA,
};

enum clock_id {
	CPG_CLOCK_SPIM = 20,
	CPG_CLOCK_OCTA = 61,
};

void cpg_early_setup(void);
void cpg_setup(void);
void cpg_active_ddr(void (*disable_phy)(void));
void cpg_reset_ddr_mc(void);
int cpg_set_xspi_clock(enum xspi_clock spi, int frequency_hz);
int cpg_get_xspi_clock(enum xspi_clock spi);
void cpg_clock_on(enum clock_id clkid);
void cpg_clock_off(enum clock_id clkid);
void cpg_reset_on(enum clock_id clkid);
void cpg_reset_off(enum clock_id clkid);

#endif /* __CPG_H__ */
