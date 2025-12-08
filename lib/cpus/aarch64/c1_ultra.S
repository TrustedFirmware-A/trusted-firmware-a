/*
 * Copyright (c) 2023-2025, Arm Limited. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include <arch.h>
#include <asm_macros.S>
#include <common/bl_common.h>
#include <c1_ultra.h>
#include <cpu_macros.S>
#include <plat_macros.S>

/* Hardware handled coherency */
#if HW_ASSISTED_COHERENCY == 0
#error "Arm C1-Ultra must be compiled with HW_ASSISTED_COHERENCY enabled"
#endif

/* 64-bit only core */
#if CTX_INCLUDE_AARCH32_REGS == 1
#error "Arm C1-Ultra supports only AArch64. Compile with CTX_INCLUDE_AARCH32_REGS=0"
#endif

cpu_reset_prologue c1_ultra

	/* -------------------------------------------------------------
	 * CVE-2024-7881 is mitigated for C1-Ultra using erratum 3651221
	 * workaround by disabling the affected prefetcher setting
	 * CPUACTLR6_EL1[41].
	 * -------------------------------------------------------------
	 */
workaround_reset_start c1_ultra, CVE(2024, 7881), WORKAROUND_CVE_2024_7881
	sysreg_bit_set C1_ULTRA_IMP_CPUACTLR6_EL1, BIT(41)
workaround_reset_end c1_ultra, CVE(2024, 7881)

check_erratum_ls c1_ultra, CVE(2024, 7881), CPU_REV(0, 0)

workaround_reset_start c1_ultra, ERRATUM(3502731), ERRATA_C1ULTRA_3502731
	sysreg_bit_set C1_ULTRA_IMP_CPUACTLR4_EL1, BIT(23)
workaround_reset_end c1_ultra, ERRATUM(3502731)

check_erratum_ls c1_ultra, ERRATUM(3502731), CPU_REV(0, 0)

workaround_reset_start c1_ultra, ERRATUM(3651221), ERRATA_C1ULTRA_3651221
	sysreg_bit_set C1_ULTRA_IMP_CPUACTLR6_EL1, BIT(41)
workaround_reset_end c1_ultra, ERRATUM(3651221)

check_erratum_ls c1_ultra, ERRATUM(3651221), CPU_REV(0, 0)

workaround_reset_start c1_ultra, ERRATUM(3684152), ERRATA_C1ULTRA_3684152
	sysreg_bitfield_insert C1_ULTRA_IMP_CPUACTLR_EL1, C1_ULTRA_IMP_CPUACTLR_EL1_LOAD_BIT, \
	C1_ULTRA_IMP_CPUACTLR_EL1_LOAD_SHIFT, C1_ULTRA_IMP_CPUACTLR_EL1_LOAD_WIDTH
workaround_reset_end c1_ultra, ERRATUM(3684152)

check_erratum_ls c1_ultra, ERRATUM(3684152), CPU_REV(0, 0)

workaround_reset_start c1_ultra, ERRATUM(3705939), ERRATA_C1ULTRA_3705939
	sysreg_bit_set C1_ULTRA_IMP_CPUACTLR_EL1, BIT(48)
workaround_reset_end c1_ultra, ERRATUM(3705939)

check_erratum_ls c1_ultra, ERRATUM(3705939), CPU_REV(1, 0)

workaround_reset_start c1_ultra, ERRATUM(3815514), ERRATA_C1ULTRA_3815514
	sysreg_bit_set C1_ULTRA_IMP_CPUACTLR5_EL1, BIT(13)
workaround_reset_end c1_ultra, ERRATUM(3815514)

check_erratum_ls c1_ultra, ERRATUM(3815514), CPU_REV(1, 0)

workaround_reset_start c1_ultra, ERRATUM(3865171), ERRATA_C1ULTRA_3865171
	sysreg_bit_set C1_ULTRA_IMP_CPUACTLR2_EL1, BIT(22)
workaround_reset_end c1_ultra, ERRATUM(3865171)

check_erratum_ls c1_ultra, ERRATUM(3865171), CPU_REV(1, 0)

cpu_reset_func_start c1_ultra
	/* ----------------------------------------------------
	 * Disable speculative loads
	 * ----------------------------------------------------
	 */
	msr	SSBS, xzr
	/* model bug: not cleared on reset */
	sysreg_bit_clear C1_ULTRA_IMP_CPUPWRCTLR_EL1, \
		C1_ULTRA_IMP_CPUPWRCTLR_EL1_CORE_PWRDN_EN_BIT
cpu_reset_func_end c1_ultra

func c1_ultra_core_pwr_dwn
#if ENABLE_SME_FOR_NS
        /* ---------------------------------------------------
         * Disable SME if enabled and supported
         * ---------------------------------------------------
         */
	mrs     x0, ID_AA64PFR1_EL1
	ubfx	x0, x0, #ID_AA64PFR1_EL1_SME_SHIFT, \
		#ID_AA64PFR1_EL1_SME_WIDTH
        cmp     x0, #SME_NOT_IMPLEMENTED
	b.eq	1f
	msr	C1_ULTRA_SVCRSM, xzr
	msr	C1_ULTRA_SVCRZA, xzr
1:
#endif
	/* ---------------------------------------------------
	 * Flip CPU power down bit in power control register.
	 * It will be set on powerdown and cleared on wakeup
	 * ---------------------------------------------------
	 */
	sysreg_bit_toggle C1_ULTRA_IMP_CPUPWRCTLR_EL1, \
		C1_ULTRA_IMP_CPUPWRCTLR_EL1_CORE_PWRDN_EN_BIT
	isb
	ret
endfunc c1_ultra_core_pwr_dwn

.section .rodata.c1_ultra_regs, "aS"
c1_ultra_regs: /* The ASCII list of register names to be reported */
	.asciz	"cpuectlr_el1", ""

func c1_ultra_cpu_reg_dump
	adr 	x6, c1_ultra_regs
	mrs	x8, C1_ULTRA_IMP_CPUECTLR_EL1
	ret
endfunc c1_ultra_cpu_reg_dump

declare_cpu_ops c1_ultra, C1_ULTRA_MIDR, \
	c1_ultra_reset_func, \
	c1_ultra_core_pwr_dwn
