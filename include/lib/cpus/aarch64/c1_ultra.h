/*
 * Copyright (c) 2023, Arm Limited. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef C1_ULTRA_H
#define C1_ULTRA_H

#define C1_ULTRA_MIDR					U(0x410FD8C0)

/*******************************************************************************
 * CPU Extended Control register specific definitions
 ******************************************************************************/
#define C1_ULTRA_IMP_CPUECTLR_EL1				S3_0_C15_C1_4

/*******************************************************************************
 * CPU Power Control register specific definitions
 ******************************************************************************/
#define C1_ULTRA_IMP_CPUPWRCTLR_EL1			S3_0_C15_C2_7
#define C1_ULTRA_IMP_CPUPWRCTLR_EL1_CORE_PWRDN_EN_BIT	U(1)

/*******************************************************************************
 * SME Control registers
 ******************************************************************************/
#define C1_ULTRA_SVCRSM					S0_3_C4_C2_3
#define C1_ULTRA_SVCRZA					S0_3_C4_C4_3

/*******************************************************************************
 * CPU Auxiliary control register 6 specific definitions
 ******************************************************************************/
#define C1_ULTRA_IMP_CPUACTLR6_EL1				S3_0_C15_C8_1

#endif /* C1_ULTRA_H */
