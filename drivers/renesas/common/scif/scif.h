/*
 * Copyright (c) 2021-2026, Renesas Electronics Corporation. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef SCIF_H
#define SCIF_H

void scif_console_set_regs(uint32_t fsr, uint32_t tdr);
int console_renesas_init(uintptr_t base_addr, uint32_t uart_clk,
		      uint32_t baud_rate);
int console_renesas_putc(int c, console_t *pconsole);
int console_renesas_flush(console_t *pconsole);

#endif /* SCIF_H */
