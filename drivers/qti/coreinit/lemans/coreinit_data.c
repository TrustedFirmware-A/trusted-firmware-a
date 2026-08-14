/*
 * Copyright (c) 2026, Qualcomm Technologies, Inc. and/or its subsidiaries.
 * SPDX-License-Identifier: BSD-3-Clause
 *
 * Core initialization driver - target-specific configuration data.
 * Provides coreinit_info, consumed by coreinit_init() / coreinit_deinit().
 *
 * To add a new chip variant:
 *   1. Define its routes[], requests[], and handle-storage arrays.
 *   2. Define a coreinit_vote[] and a coreinit_config for it.
 *   3. Add a pointer to the new coreinit_config in coreinit_configs[].
 */

#include <stddef.h>

#include "coreiniti.h"
#include <drivers/qti/chipinfo/chipinfo.h>
#include <drivers/qti/icb/icbid.h>
#include <drivers/qti/icb/icbuarb.h>

/*
 * lemans v1.0
 */

/*
 * ICB master/slave routes for lemans v1.
 * routes[i] corresponds to requests[i] and lemans_v1_vote0_handles[i].
 */
static struct coreinit_route routes[] = {
	[0] = {
		.master = ICBID_MASTER_MDP0,
		.slave  = ICBID_SLAVE_EBI1,
	},
	[1] = {
		.master = ICBID_MASTER_CDSP_PROC,
		.slave  = ICBID_SLAVE_EBI1,
	},
	[2] = {
		.master = ICBID_MASTER_CDSP_PROC_B,
		.slave  = ICBID_SLAVE_EBI1,
	},
};

/*
 * Bandwidth requests for lemans v1.
 * ab: average bandwidth (bytes/sec); ib: instantaneous bandwidth (bytes/sec).
 * ib = 1 requests a minimum instantaneous vote without a sustained average.
 */
static struct icb_bw_req requests[] = {
	[0] = {
		.ab = 0ULL,
		.ib = 1ULL,
	},
	[1] = {
		.ab = 0ULL,
		.ib = 1ULL,
	},
	[2] = {
		.ab = 0ULL,
		.ib = 1ULL,
	},
};

/*
 * ICB client handle storage for lemans v1, vote 0.
 * One slot per route; initialised to NULL and populated at runtime by
 * coreinit_init().
 */
static icb_client_handle lemans_v1_vote0_handles[ARRAY_SIZE(routes)] = {
	NULL
};

/*
 * Vote configurations for lemans v1.
 */
static struct coreinit_vote lemans_v1_votes[] = {
	[0] = {
		.num_routes = ARRAY_SIZE(routes),
		.routes     = routes,
		.requests   = requests,
		.handles    = lemans_v1_vote0_handles,
	},
};

/*
 * lemans v1.0 configuration.
 * match = false: applies to all versions of CHIPINFO_FAMILY_lemans.
 */
static struct coreinit_config lemans_v1 = {
	.family    = CHIPINFO_FAMILY_LEMANSAU,
	.match     = false,
	.version   = CHIPINFO_VERSION(1, 0),
	.num_votes = ARRAY_SIZE(lemans_v1_votes),
	.votes     = lemans_v1_votes,
};

/*
 * Array of all chip configurations, searched in order by coreinit_init().
 */
static struct coreinit_config *coreinit_configs[] = {
	[0] = &lemans_v1,
};

static struct coreinit_info coreinit_info = {
	.num_configs = ARRAY_SIZE(coreinit_configs),
	.configs     = coreinit_configs,
};

struct coreinit_info *coreinit_target_get_info(void)
{
	return &coreinit_info;
}
