/*
 * Copyright (c) 2026, Qualcomm Technologies, Inc. and/or its subsidiaries.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef IPCC_PRIV_H
#define IPCC_PRIV_H

#include <stdbool.h>
#include <stdint.h>

#include <drivers/qti/ipcc/ipcc.h>

struct ipcc_client_bsp {
	/*
	 * A client this chipset instantiates on the protocol. Only instantiated
	 * clients are listed, so presence here is what makes a client valid and
	 * anything absent is rejected. When ipcc_bsp_data.hw_mem_opt is set the
	 * array index doubles as the client's physical index and the order is
	 * load-bearing; otherwise the array is an unordered list.
	 */
	enum ipcc_client client;
};

struct ipcc_protocol_cfg {
	uint16_t protocol_id;
	/* Signals per client on this protocol; varies by target and protocol. */
	uint16_t num_sigs;
	uint32_t num_clients;
	uintptr_t phys_base;		/* protocol block base address */
	uintptr_t base;			/* own client's registers, resolved at init */
	struct ipcc_client_bsp *clients;
};

struct ipcc_bsp_data {
	struct ipcc_protocol_cfg *protocols;
	uint32_t num_protocols;
	enum ipcc_client client;	/* this EL3's own client ID */
#if QTI_IPCC_NO_TME
	/*
	 * Value programmed into IPC_CONFIG.TOP_MODE.MODE at init: true selects
	 * the router, false the legacy block. This is a one-time block-level
	 * setting TME owns on parts that have TME, hence the guard.
	 */
	bool ipcc_mode;
#endif
	/*
	 * Whether the controller removes the pages of the clients this chipset
	 * does not wire.
	 *
	 * True: the real clients are packed contiguously from page 0, so a
	 * client's physical index is its position in the protocol's clients[]
	 * array and that order is load-bearing.
	 *
	 * False: pages stay at their virtual client ID positions and every
	 * unwired client is a hole in the span, so the physical index is the
	 * virtual client ID itself and clients[] is an unordered list.
	 *
	 * A per-chipset hardware property, not derivable from the controller
	 * version: parts below v3.0 ship both ways. It is also a separate axis
	 * from what SEND.CLIENT_ID encodes, which ipcc_router.c decides at
	 * runtime from the version register.
	 */
	bool hw_mem_opt;
};

struct ipcc_drv_ctxt {
	const struct ipcc_bsp_data *bsp;
	uint32_t hw_version;
};

/* Chipset-specific static config table, provided by <chipset>/ipcc_config.c */
extern const struct ipcc_bsp_data *const ipcc_chipset_config;

/*
 * Only what crosses a translation unit is declared here: the context accessor
 * ipcc_router.c reads the latched controller version from, and the trigger
 * entry point qti_ipcc_trigger() dispatches to. The client lookup, the
 * validity guard and the physical index resolution are static to ipcc_core.c.
 */
const struct ipcc_drv_ctxt *ipcc_get_drv_ctxt(void);

int ipcc_tx_trigger(struct ipcc_protocol_cfg *protocol,
		    enum ipcc_client target_id, uint32_t phys_idx,
		    uint16_t signal_low, uint16_t signal_high);

#endif /* IPCC_PRIV_H */
