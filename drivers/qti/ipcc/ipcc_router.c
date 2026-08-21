/*
 * Copyright (c) 2026, Qualcomm Technologies, Inc. and/or its subsidiaries.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include <errno.h>
#include <stdint.h>

#include <common/debug.h>
#include <lib/mmio.h>

#include "ipcc_priv.h"
#include "ipcc_regs.h"

/*
 * Router-mode outbound trigger: one write per signal to our own SEND register,
 * encoding the target client and the signal. The write is a fire-and-forget
 * doorbell, so no serialisation against other cores is required.
 */
int ipcc_tx_trigger(struct ipcc_protocol_cfg *protocol,
		    enum ipcc_client target_id, uint32_t phys_idx,
		    uint16_t signal_low, uint16_t signal_high)
{
	uint32_t target;
	uint16_t sig;

	if (protocol->base == 0UL) {
		return -ENODEV;
	}

	if (signal_high >= protocol->num_sigs) {
		return -EINVAL;
	}

	/*
	 * From v3.0 SEND.CLIENT_ID carries the physical client index; earlier
	 * controllers carry the virtual client ID. This is a separate axis from
	 * hw_mem_opt -- packed parts exist that still expect the virtual ID here
	 * -- so the version is read from the hardware, never inferred from the
	 * table layout.
	 */
	if (ipcc_get_drv_ctxt()->hw_version >= IPCC_VERSION(3, 0)) {
		target = phys_idx;
	} else {
		target = (uint32_t)target_id;
	}

	for (sig = signal_low; sig <= signal_high; sig++) {
		mmio_write_32(protocol->base + IPCC_SEND_OFF,
			      ((target & IPCC_SEND_CLIENT_ID_MASK) <<
			       IPCC_SEND_CLIENT_ID_SHIFT) |
			      (((uint32_t)sig & IPCC_SEND_SIGNAL_ID_MASK) <<
			       IPCC_SEND_SIGNAL_ID_SHIFT));
	}

	VERBOSE("IPCC: triggered target %u signals [%u, %u]\n",
		(uint32_t)target_id, signal_low, signal_high);

	return 0;
}
