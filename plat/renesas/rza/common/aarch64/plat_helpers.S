/*
 * Copyright (c) 2016-2026, ARM Limited and Contributors. All rights reserved.
 * Copyright (c) 2020-2026, Renesas Electronics Corporation. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include <asm_macros.S>

	.globl	platform_mem_init
	.globl	plat_my_core_pos
	.globl	plat_crash_console_init
	.globl	plat_crash_console_putc
	.globl	plat_crash_console_flush

func platform_mem_init
	ret
endfunc platform_mem_init

func plat_my_core_pos
	mrs x0, mpidr_el1
	lsr x0, x0, #MPIDR_AFF1_SHIFT
	and x0, x0, #MPIDR_CPU_MASK
	ret
endfunc plat_my_core_pos

func plat_crash_console_init
	mov x0, #1
	ret
endfunc plat_crash_console_init

func plat_crash_console_putc
	ret
endfunc plat_crash_console_putc

func plat_crash_console_flush
	mov x0, #0
	ret
endfunc plat_crash_console_flush
