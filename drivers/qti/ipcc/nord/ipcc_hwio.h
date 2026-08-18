/*
 * Copyright (c) 2026, Qualcomm Technologies, Inc. and/or its subsidiaries.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef IPCC_HWIO_H
#define IPCC_HWIO_H

#include <lib/utils_def.h>

/*
 * Target HWIO for the IPCC controller on Nord. Everything a respin or a
 * different SoC can change lives here: block address, block geometry and the
 * per-protocol signal count. The register offsets and bit fields, which the IP
 * keeps common across parts, are in drivers/qti/ipcc/ipcc_regs.h.
 *
 * The block holds the core pages at 0x09000000, the config block at 0x093c0000
 * and the trace block at 0x093c1000. The window must be covered by the
 * platform's device mapping before qti_ipcc_init() runs.
 */
#define IPCC_BASE			UL(0x09000000)
#define IPCC_SIZE			UL(0x00400000)

/*
 * Core geometry: 5 protocol blocks of 0xc0000 (72 clients 0x1000 apart), so a
 * register lives at
 *
 *   IPCC_BASE + off + IPCC_PROTO_STRIDE * protocol_id +
 *		       IPCC_CLIENT_STRIDE * phys_idx
 *
 * The protocol block grows with the client count, which is why the stride is
 * per-target and not shared.
 */
#define IPCC_PROTO_STRIDE		U(0xc0000)
#define IPCC_CLIENT_STRIDE		U(0x1000)

/*
 * Signals per client, per protocol. Not a property of the IP -- it varies by
 * target and by protocol -- so each protocol the config describes needs its own
 * count here.
 */
#define IPCC_MPROC_NUM_SIGS		U(8)

/*
 * TOP_MODE and TRACE block offsets from IPCC_BASE. Here they do land
 * immediately past the five protocol blocks, but they are target data rather
 * than something to compute.
 */
#define IPCC_TOP_MODE_BLOCK_OFF		U(0x3c0000)
#define IPCC_TRACE_BLOCK_OFF		U(0x3c1000)

#endif /* IPCC_HWIO_H */
