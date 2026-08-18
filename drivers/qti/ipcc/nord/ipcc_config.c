/*
 * Copyright (c) 2026, Qualcomm Technologies, Inc. and/or its subsidiaries.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include <stddef.h>
#include <stdint.h>

#include <drivers/qti/ipcc/ipcc.h>
#include <lib/utils_def.h>

#include <ipcc_hwio.h>

#include "ipcc_priv.h"

/*
 * Nord packs its client pages: the architectural client space runs to 72, but
 * the controller removes the pages of every client this chipset does not wire
 * and packs the 25 that remain contiguously from page 0. A client's physical
 * index is therefore its position in this array, not its client ID, and both
 * the register address and the SEND register's CLIENT_ID field take that
 * index.
 *
 * Order is load-bearing and must match the physical client map for MPROC --
 * reordering silently retargets every signal.
 *
 * Every client is instantiated on MPROC and stays on the router.
 */
static struct ipcc_client_bsp mproc_clients[] = {
	{ .client = IPCC_CLIENT_AOP,     },	/* physical index 0 */
	{ .client = IPCC_CLIENT_APSS_S   },	/* physical index 1, us */
	{ .client = IPCC_CLIENT_ADSP0    },
	{ .client = IPCC_CLIENT_NSP0     },
	{ .client = IPCC_CLIENT_NSP1     },
	{ .client = IPCC_CLIENT_NSP2     },
	{ .client = IPCC_CLIENT_NSP3     },
	{ .client = IPCC_CLIENT_APSS_NS0 },
	{ .client = IPCC_CLIENT_APSS_NS1 },
	{ .client = IPCC_CLIENT_APSS_NS2 },
	{ .client = IPCC_CLIENT_APSS_NS3 },
	{ .client = IPCC_CLIENT_ADSP1    },
	{ .client = IPCC_CLIENT_ADSP2    },
	{ .client = IPCC_CLIENT_APSS_NS4 },
	{ .client = IPCC_CLIENT_DUMMY    },
	{ .client = IPCC_CLIENT_SOCCP    },
	{ .client = IPCC_CLIENT_CPUCP    },
	{ .client = IPCC_CLIENT_A78CSS   },
	{ .client = IPCC_CLIENT_TMESS    },
	{ .client = IPCC_CLIENT_SAIL0    },
	{ .client = IPCC_CLIENT_SAIL1    },
	{ .client = IPCC_CLIENT_SAIL2    },
	{ .client = IPCC_CLIENT_SAIL3    },
	{ .client = IPCC_CLIENT_SAIL4    },
	{ .client = IPCC_CLIENT_SAIL5    },	/* physical index 24 */
};

/*
 * Only MPROC is described. The hardware also instantiates protocols 1..4, but
 * nothing in EL3 uses them.
 */
static struct ipcc_protocol_cfg protocols[] = {
	[IPCC_PROTO_MPROC] = {
		.protocol_id = IPCC_PROTO_MPROC,
		.num_sigs = IPCC_MPROC_NUM_SIGS,
		.num_clients = ARRAY_SIZE(mproc_clients),
		.phys_base = IPCC_BASE,
		.clients = mproc_clients,
	},
};

static const struct ipcc_bsp_data bsp_data = {
	.protocols = protocols,
	.num_protocols = ARRAY_SIZE(protocols),
	.client = IPCC_CLIENT_APSS_S,
#if QTI_IPCC_NO_TME
	/*
	 * Value for IPC_CONFIG.TOP_MODE.MODE: true = router. Nord has TME to
	 * program TOP_MODE, so QTI_IPCC_NO_TME is expected to stay 0 here and
	 * this value to go unused.
	 */
	.ipcc_mode = true,
#endif
	.hw_mem_opt = true,
};

const struct ipcc_bsp_data *const ipcc_chipset_config = &bsp_data;
