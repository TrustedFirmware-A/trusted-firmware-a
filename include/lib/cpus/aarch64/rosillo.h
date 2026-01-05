/*
 * Copyright (c) 2026, Arm Limited. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef ROSILLO_H
#define ROSILLO_H

#define ROSILLO_MIDR		                        U(0x410FDA10)

/*******************************************************************************
 * CPU Extended Control register specific definitions
 ******************************************************************************/
#define ROSILLO_IMP_CPUECTLR_EL1		       	S3_0_C15_C1_4

/*******************************************************************************
 * CPU Power Control register specific definitions
 ******************************************************************************/
#define ROSILLO_IMP_CPUPWRCTLR_EL1			S3_0_C15_C2_7
#define ROSILLO_IMP_CPUPWRCTLR_EL1_CORE_PWRDN_EN_BIT	U(1)

#endif /* ROSILLO_H */

