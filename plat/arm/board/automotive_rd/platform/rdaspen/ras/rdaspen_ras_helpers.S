/*
 * Copyright (c) 2025-2026, ARM Limited and Contributors. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include <arch.h>
#include <asm_macros.S>
#include <assert_macros.S>

	.globl clear_cpu_pfg_ctrl_register
	.globl clear_cpu_pfg_cdn_register
	.globl clear_cpu_erx_misc0_register

/*
 * void clear_cpu_pfg_ctrl_register()
 * Clear the fault genration register to inject new error
 */
func clear_cpu_pfg_ctrl_register
        msr     ERXPFGCTL_EL1, xzr
        ret
endfunc clear_cpu_pfg_ctrl_register

/*
 * void write_cpu_pfg_cdn_register(void)
 * Clear the fault generation countdown register
 */
func clear_cpu_pfg_cdn_register
        msr     ERXPFGCDN_EL1, xzr
        ret
endfunc clear_cpu_pfg_cdn_register

/*
 * void clear_cpu_erx_misc0_register(void)
 * Clear the MISC0 register
 */
func clear_cpu_erx_misc0_register
	msr  ERXMISC0_EL1, xzr
	ret
endfunc clear_cpu_erx_misc0_register

