/*
 * Copyright (c) 2018-2026, Renesas Electronics Corporation. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include <arch.h>
#include <asm_macros.S>
#include <console_macros.S>
#include <drivers/renesas/rcar/console/console.h>

	.globl	console_renesas_register

	.extern	renesas_log_init

	/* -----------------------------------------------
	 * int console_renesas_register(
	 *      uintptr_t base, uint32_t clk, uint32_t baud,
	 *      console_t *console)
	 * Function to initialize and register a new rcar
	 * console. Storage passed in for the console struct
	 * *must* be persistent (i.e. not from the stack).
	 * In: x0 - UART register base address
	 *     w1 - UART clock in Hz
	 *     w2 - Baud rate
	 *     x3 - pointer to empty console_t struct
	 * Out: return 1 on success, 0 on error
	 * Clobber list : x0, x1, x2, x6, x7, x14
	 * -----------------------------------------------
	 */
func console_renesas_register
	mov	x7, x30
	mov	x6, x3
	cbz	x6, register_fail
	str	x0, [x6, #CONSOLE_T_BASE]

	bl	renesas_log_init
	cbz	x0, register_fail

	mov	x0, x6
	mov	x30, x7
	finish_console_register renesas, putc=1, getc=0, flush=1

register_fail:
	ret	x7
endfunc console_renesas_register
