/*
 * Copyright (c) 2026, Qualcomm Technologies, Inc. and/or its subsidiaries.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef IPCC_REGS_H
#define IPCC_REGS_H

#include <lib/utils_def.h>

/*
 * Register layout of the IPCC IP: offsets within a client's page and the bit
 * fields inside them. These are common to every part the driver supports.
 *
 * What varies -- where the block sits, the protocol and client page strides,
 * the signal count -- comes from <chipset>/ipcc_hwio.h, pulled in below. The
 * #error guards keep a new target from building with a missing stride.
 */
#include <ipcc_hwio.h>

#if !defined(IPCC_PROTO_STRIDE) || !defined(IPCC_CLIENT_STRIDE)
#error "chipset ipcc_hwio.h must define IPCC_{PROTO,CLIENT}_STRIDE"
#endif

#define IPCC_VERSION_OFF			U(0x0)
#define IPCC_VERSION_MASK			U(0xffffff)
#define IPCC_VERSION_MAJOR_SHIFT		16
#define IPCC_VERSION_MINOR_SHIFT		8
#define IPCC_VERSION(maj, min)						\
	((U(maj) << IPCC_VERSION_MAJOR_SHIFT) |				\
	 (U(min) << IPCC_VERSION_MINOR_SHIFT))

/*
 * SEND is write-only: SIGNAL_ID is bits 15:0, CLIENT_ID bits 30:16 and bit 31
 * is BROADCAST. The masks keep a bad client ID from spilling into BROADCAST.
 */
#define IPCC_SEND_OFF				U(0xC)
#define IPCC_SEND_SIGNAL_ID_SHIFT		0
#define IPCC_SEND_SIGNAL_ID_MASK		U(0xffff)
#define IPCC_SEND_CLIENT_ID_SHIFT		16
#define IPCC_SEND_CLIENT_ID_MASK		U(0x7fff)

/*
 * IPC_CONFIG.TOP_MODE and IPC_TRACE.ENABLE live in side-blocks outside the
 * client pages, so their offsets are target data and only the bit positions are
 * common. Touched only by the QTI_IPCC_NO_TME init path.
 */
#if QTI_IPCC_NO_TME
#if !defined(IPCC_TOP_MODE_BLOCK_OFF) || !defined(IPCC_TRACE_BLOCK_OFF)
#error "QTI_IPCC_NO_TME needs IPCC_{TOP_MODE,TRACE}_BLOCK_OFF in ipcc_hwio.h"
#endif
#endif

/* IPC_CONFIG.TOP_MODE.MODE: 0 = legacy, 1 = IPC router. Reset value is 1. */
#define IPCC_TOP_MODE_BIT			BIT_32(0)
#define IPCC_TRACE_ENABLE_BIT			BIT_32(0)

#endif /* IPCC_REGS_H */
