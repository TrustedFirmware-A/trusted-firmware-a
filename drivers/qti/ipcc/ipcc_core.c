/*
 * Copyright (c) 2026, Qualcomm Technologies, Inc. and/or its subsidiaries.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include <errno.h>
#include <stddef.h>
#include <stdint.h>

#include <common/debug.h>
#include <drivers/qti/ipcc/ipcc.h>
#include <lib/mmio.h>

#include "ipcc_priv.h"
#include "ipcc_regs.h"

static struct ipcc_drv_ctxt ipcc_drv_ctxt;

const struct ipcc_drv_ctxt *ipcc_get_drv_ctxt(void)
{
	return &ipcc_drv_ctxt;
}

/*
 * Look a client up in protocol->clients[]. The table lists only the clients the
 * chipset instantiates on this protocol, so presence is what makes a client
 * reachable and no separate validity flag has to be kept in sync. Returns NULL
 * for a client the chipset does not wire here.
 */
static const struct ipcc_client_bsp *
ipcc_get_client(const struct ipcc_protocol_cfg *protocol,
		enum ipcc_client client)
{
	uint32_t i;

	for (i = 0U; i < protocol->num_clients; i++) {
		if (protocol->clients[i].client == client) {
			return &protocol->clients[i];
		}
	}

	return NULL;
}

/* Guard for every API that takes a client ID from a caller. */
static bool ipcc_is_valid_client(const struct ipcc_protocol_cfg *protocol,
				 enum ipcc_client client)
{
	return ipcc_get_client(protocol, client) != NULL;
}

/*
 * Resolve which hardware page belongs to a client on this chip.
 *
 * The controller is an array of IPCC_CLIENT_STRIDE-sized pages, one per client
 * per protocol, and addressing a client means knowing its page number -- its
 * physical index. That is not always the client ID:
 *
 *   hw_mem_opt = false: pages sit at their virtual client ID positions and the
 *   clients the chipset does not wire are holes in the span, so the physical
 *   index is the client ID and clients[] merely says which positions are real.
 *
 *   hw_mem_opt = true: the holes are removed and the real clients are packed
 *   from page 0 in the order clients[] lists them, so the physical index is the
 *   client's row and that order is load-bearing.
 *
 * The result feeds two things: protocol->base for our own client (see
 * ipcc_protocol_init()) and, from controller v3.0 on, the SEND.CLIENT_ID field
 * for the target (see ipcc_router.c -- a separate axis).
 *
 * The lookup runs either way, so a client the chipset does not wire is rejected
 * here and not only at the API boundary.
 */
static int ipcc_find_phys_client_idx(enum ipcc_client virt_client,
				    const struct ipcc_protocol_cfg *protocol,
				    uint32_t *phys_idx)
{
	uint32_t idx;

	if ((protocol == NULL) || (phys_idx == NULL)) {
		return -EINVAL;
	}

	/*
	 * Poison the output first: a caller that ignores the return code then
	 * aims at a page that does not exist rather than at page 0, which is a
	 * real and powered client.
	 */
	*phys_idx = UINT32_MAX;

	/* Absence from the table is what makes a client unreachable. */
	for (idx = 0U; idx < protocol->num_clients; idx++) {
		if (protocol->clients[idx].client == virt_client) {
			break;
		}
	}

	if (idx == protocol->num_clients) {
		VERBOSE("IPCC: invalid client %u for protocol %u\n",
			(uint32_t)virt_client, protocol->protocol_id);
		return -ENOTSUP;
	}

	if (ipcc_drv_ctxt.bsp->hw_mem_opt) {
		*phys_idx = idx;
	} else {
		*phys_idx = (uint32_t)virt_client;
	}

	return 0;
}

static void ipcc_protocol_init(struct ipcc_protocol_cfg *protocol)
{
	uint32_t phys_idx = 0U;

	if (protocol->phys_base == 0UL) {
		return;
	}

#if QTI_IPCC_NO_TME
	/*
	 * Block-level configuration on parts where no TME applies it. Written
	 * relative to the protocol block base, before our own client's registers
	 * are resolved.
	 */
	mmio_write_32(protocol->phys_base + IPCC_TOP_MODE_BLOCK_OFF,
		      ipcc_drv_ctxt.bsp->ipcc_mode ? IPCC_TOP_MODE_BIT : 0U);
	mmio_write_32(protocol->phys_base + IPCC_TRACE_BLOCK_OFF,
		      IPCC_TRACE_ENABLE_BIT);
#endif

	if (!ipcc_is_valid_client(protocol, ipcc_drv_ctxt.bsp->client) ||
	    (ipcc_find_phys_client_idx(ipcc_drv_ctxt.bsp->client, protocol,
				       &phys_idx) != 0)) {
		ERROR("IPCC: protocol %u: own client %u not in config\n",
		      protocol->protocol_id,
		      (uint32_t)ipcc_drv_ctxt.bsp->client);
		return;
	}

	protocol->base = protocol->phys_base +
			 ((uintptr_t)phys_idx * IPCC_CLIENT_STRIDE) +
			 ((uintptr_t)protocol->protocol_id * IPCC_PROTO_STRIDE);

	ipcc_drv_ctxt.hw_version =
		mmio_read_32(protocol->base + IPCC_VERSION_OFF) &
		IPCC_VERSION_MASK;

	VERBOSE("IPCC: protocol %u initialized, hw_version 0x%x\n",
		protocol->protocol_id, ipcc_drv_ctxt.hw_version);
}

void qti_ipcc_init(void)
{
	uint32_t i;

	ipcc_drv_ctxt.bsp = ipcc_chipset_config;
	if (ipcc_drv_ctxt.bsp == NULL) {
		ERROR("IPCC: no chipset config\n");
		return;
	}

	for (i = 0U; i < ipcc_drv_ctxt.bsp->num_protocols; i++) {
		ipcc_protocol_init(&ipcc_drv_ctxt.bsp->protocols[i]);
	}

	VERBOSE("IPCC: driver initialized, %u protocols\n",
		ipcc_drv_ctxt.bsp->num_protocols);
}

int qti_ipcc_trigger(enum ipcc_protocol protocol, enum ipcc_client target_id,
		     uint16_t signal_low, uint16_t signal_high)
{
	struct ipcc_protocol_cfg *proto;
	const struct ipcc_client_bsp *target;
	uint32_t phys_idx = 0U;
	int ret;

	if (ipcc_drv_ctxt.bsp == NULL) {
		return -ENODEV;
	}

	if (signal_low > signal_high) {
		return -EINVAL;
	}

	if ((protocol >= IPCC_PROTO_TOTAL) ||
	    ((uint32_t)protocol >= ipcc_drv_ctxt.bsp->num_protocols)) {
		return -EINVAL;
	}

	proto = &ipcc_drv_ctxt.bsp->protocols[protocol];

	/*
	 * Reject any client this chipset does not wire on this protocol.
	 *
	 * This also covers a protocol the chipset does not describe at all:
	 * protocols[] is indexed by protocol ID and num_protocols counts its
	 * slots, holes included, so the bound check above admits a slot left zero
	 * by a designated initializer -- but such a slot has num_clients == 0 and
	 * the lookup then fails for every target.
	 */
	target = ipcc_get_client(proto, target_id);
	if (target == NULL) {
		VERBOSE("IPCC: client %u not wired on protocol %u\n",
			(uint32_t)target_id, proto->protocol_id);
		return -ENOTSUP;
	}

	ret = ipcc_find_phys_client_idx(target_id, proto, &phys_idx);
	if (ret != 0) {
		return ret;
	}

	return ipcc_tx_trigger(proto, target_id, phys_idx, signal_low,
			       signal_high);
}
