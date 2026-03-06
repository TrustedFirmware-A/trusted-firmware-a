/*
 * Copyright (c) 2021-2025, Arm Limited. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include <asm_macros.S>
#include <services/rmmd_svc.h>

#include <platform_def.h>
#include "trp_private.h"

.global trp_head
.global trp_smc

.section ".head.text", "ax"

	/* ---------------------------------------------
	 * Populate the params in x0-x7 from the pointer
	 * to the smc args structure in x0.
	 * ---------------------------------------------
	 */
	.macro restore_args_call_smc
	ldp	x10, x11, [x0, #TRP_ARG10]
	ldp	x8, x9, [x0, #TRP_ARG8]
	ldp	x6, x7, [x0, #TRP_ARG6]
	ldp	x4, x5, [x0, #TRP_ARG4]
	ldp	x2, x3, [x0, #TRP_ARG2]
	ldp	x0, x1, [x0, #TRP_ARG0]
	smc	#0
	.endm

	/* ---------------------------------------------
	 * Entry point for TRP
	 * ---------------------------------------------
	 */
trp_head:
	/*
	 * Stash arguments from previous boot stage
	 */
	mov	x20, x0
	mov	x21, x1
	mov	x22, x2
	mov	x23, x3

	/*
	 * Validate CPUId before allocating a stack.
	 */
	cmp	x20, #PLATFORM_CORE_COUNT
	b.lo	1f

	mov_imm	x0, RMM_BOOT_COMPLETE
	mov_imm	x1, E_RMM_BOOT_CPU_ID_OUT_OF_RANGE
	smc	#0

	/* EL3 should never return back here, so panic if it does */
	b	trp_panic

1:
	bl	plat_set_my_stack

	/*
	 * Find out whether this is a cold or warm boot
	 */
	ldr	x1, cold_boot_flag
	cbz	x1, warm_boot

	/*
	 * Update cold boot flag to indicate cold boot is done
	 */
	adr	x2, cold_boot_flag
	str	xzr, [x2]

	/* ---------------------------------------------
	 * Zero out BSS section
	 * ---------------------------------------------
	 */
	ldr	x0, =__BSS_START__
	ldr	x1, =__BSS_SIZE__
	bl	zeromem

	mov	x0, x20
	mov	x1, x21
	mov	x2, x22
	mov	x3, x23
	bl	trp_setup
	bl	trp_main
	b	1f

warm_boot:
	mov	x0, x20
	mov	x1, x21
	mov	x2, x22
	mov	x3, x23
	bl	trp_validate_warmboot_args
	cbnz	x0, trp_panic /* Failed to validate warmboot args */

1:
	mov_imm	x0, RMM_BOOT_COMPLETE
	mov	x1, xzr /* RMM_BOOT_SUCCESS */
	smc	#0
	b	trp_handler

trp_panic:
	no_ret plat_panic_handler

	/*
	 * Flag to mark if it is a cold boot.
	 * 1: cold boot, 0: warmboot.
	 */
.align 3
cold_boot_flag:
	.dword		1

	/* ---------------------------------------------
	 *   Direct SMC call to BL31 service provided by
	 *   RMM Dispatcher
	 * ---------------------------------------------
	 */
func trp_smc
	restore_args_call_smc
	ret
endfunc trp_smc

	/* ---------------------------------------------
	 * RMI call handler
	 * ---------------------------------------------
	 */

/* Size of the frame header: [sp+0] res pointer + [sp+8] saved LR */
#define LR_AND_RES_PTR_SIZE	16
/* TRP_RESULT_SIZE is derived from TRP_SMC_RESULT_REGS in trp_helpers.h */
#define TRP_RES_X0_X1		0
#define TRP_RES_X2_X3		16
#define TRP_RES_X4_X5		32
#define TRP_RES_X6_X7		48

func trp_handler
	/*
	 * Allocate (LR_AND_RES_PTR_SIZE + TRP_RESULT_SIZE) bytes on the stack. Layout:
	 *   [sp+ 0]: res pointer (9th arg to trp_rmi_handler, points to 'sp+LR_AND_RES_PTR_SIZE')
	 *   [sp+ 8]: saved LR
	 *   [sp+16]: result->x[0]  (returned via X1)
	 *   [sp+24]: result->x[1]  (returned via X2)
	 *   [sp+32]: result->x[2]  (returned via X3)
	 *   [sp+40]: result->x[3]  (returned via X4)
	 *   [sp+48]: result->x[4]  (returned via X5, init: saved X4)
	 *   [sp+56]: result->x[5]  (returned via X6, init: saved X5)
	 *   [sp+64]: result->x[6]  (returned via X7, init: saved X6)
	 *   [sp+72]: result->x[7]  (returned via X8, init: saved X7)
	 *
	 * X4-X7 are pre-loaded into result->x[4..7] so that per SMCCC
	 * v1.2 their values are preserved if not written as output by the
	 * handler.
	 */
	sub	sp, sp, #(LR_AND_RES_PTR_SIZE + TRP_RESULT_SIZE)

	/* Save LR */
	str	lr, [sp, #8]

	/* Save X4-X7 into result->x[4..7] slots */
	stp	x4, x5, [sp, #(LR_AND_RES_PTR_SIZE + TRP_RES_X4_X5)]
	stp	x6, x7, [sp, #(LR_AND_RES_PTR_SIZE + TRP_RES_X6_X7)]

	/* Zero result->x[0..3] */
	stp	xzr, xzr, [sp, #(LR_AND_RES_PTR_SIZE + TRP_RES_X0_X1)]
	stp	xzr, xzr, [sp, #(LR_AND_RES_PTR_SIZE + TRP_RES_X2_X3)]

	/*
	 * Store the res pointer (sp+LR_AND_RES_PTR_SIZE) as the 9th argument
	 * (stack-passed at [sp+0]). X0-X7 carry function_id and arg1-arg7
	 * unchanged; x8 is used as a scratch register.
	 */
	add	x8, sp, #(LR_AND_RES_PTR_SIZE)
	str	x8, [sp, #0]

	bl	trp_rmi_handler

	/*
	 * Copy command output values back to caller. Since this is
	 * done through SMC, X0 is used as the FID, and X1-X8 contain
	 * the values of X0-X7 copied from the result structure.
	 */
	ldr	x0, =RMM_RMI_REQ_COMPLETE
	ldp	x1, x2, [sp, #(LR_AND_RES_PTR_SIZE + TRP_RES_X0_X1)]
	ldp	x3, x4, [sp, #(LR_AND_RES_PTR_SIZE + TRP_RES_X2_X3)]
	ldp	x5, x6, [sp, #(LR_AND_RES_PTR_SIZE + TRP_RES_X4_X5)]
	ldp	x7, x8, [sp, #(LR_AND_RES_PTR_SIZE + TRP_RES_X6_X7)]
	ldr	lr, [sp, #8]
	add	sp, sp, #(LR_AND_RES_PTR_SIZE + TRP_RESULT_SIZE)

	smc	#0

	b	trp_handler
endfunc trp_handler
