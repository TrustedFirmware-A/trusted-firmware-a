/*
 * Copyright 2020-2025 NXP
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef DDR_UTILS_H
#define DDR_UTILS_H

#include <stdbool.h>
#include <stdlib.h>

#include <lib/mmio.h>

#include <platform_def.h>

/* Possible errors */
#define NO_ERR              0x00000000U
#define TIMEOUT_ERR         0x00000002U
#define TRAINING_FAILED     0x00000003U
#define BITFIELD_EXCEEDED   0x00000004U
#define DEASSERT_FAILED	    0x00000005U

#define	TRAINING_OK_MSG			0x07U
#define	TRAINING_FAILED_MSG		0xFFU

#define	APBONLY_DCTWRITEPROT_ACK_EN              0U
#define	APBONLY_DCTWRITEPROT_ACK_DIS             1U

/* PHY related */
#define DDR_PHYA_APBONLY_UCTSHADOWREGS      0x40380404U
#define UCT_WRITE_PROT_SHADOW_MASK          0x1U
#define DDR_PHYA_DCTWRITEPROT               0x4038040CU
#define DDR_PHYA_APBONLY_UCTWRITEONLYSHADOW 0x40380410U
#define UCT_WRITE_PROT_SHADOW_ACK           0x0U

/* Default timeout for DDR PHY operations */
#define DEFAULT_TIMEOUT_US 1000000U

/* Wait until firmware finishes execution and return training result */
uint32_t wait_firmware_execution(void);

#endif /* DDR_UTILS_H */
