/*
 * Copyright (c) 2026, Qualcomm Technologies, Inc. and/or its subsidiaries.
 * SPDX-License-Identifier: BSD-3-Clause
 *
 * Core initialization driver - common header.
 * Provides ICB bus vote management for core initialization.
 */

#ifndef QTI_COREINITI_H
#define QTI_COREINITI_H

#include <stdbool.h>
#include <stdint.h>

#include <drivers/qti/chipinfo/chipinfo.h>
#include <drivers/qti/icb/icbid.h>
#include <drivers/qti/icb/icbuarb.h>
#include <lib/utils_def.h>

/*
 * One ICB master/slave route to vote on.
 * master / slave hold enum icbid_master / enum icbid_slave values and are
 * passed directly to icbuarb_create_client() without any cast.
 */
struct coreinit_route {
	enum icbid_master	master;
	enum icbid_slave	slave;
};

/*
 * A single vote configuration.
 *
 *   num_routes - number of entries in routes[], requests[], and handles[].
 *   routes     - array of master/slave pairs.
 *   requests   - bandwidth requests; requests[i] corresponds to routes[i].
 *   handles    - ICB client handles, one per route; pre-allocated to NULL
 *                and populated at runtime by coreinit_init().
 */
struct coreinit_vote {
	uint32_t		 num_routes;
	struct coreinit_route	*routes;
	struct icb_bw_req	*requests;
	icb_client_handle	*handles;
};

/*
 * Per-chip-version configuration.
 *
 *   family    - CHIPINFO_FAMILY_* value for this entry.
 *   match     - if true, also compare version; if false, accept any version
 *               of the given family.
 *   version   - CHIPINFO_VERSION(major, minor); evaluated only when
 *               match == true.
 *   num_votes - number of entries in votes[].
 *   votes     - pointer to the vote array.
 */
struct coreinit_config {
	enum chipinfo_family	 family;
	bool			 match;
	uint32_t		 version;
	uint32_t		 num_votes;
	struct coreinit_vote	*votes;
};

/*
 * Top-level coreinit info structure.
 *
 *   num_configs - number of entries in configs[].
 *   configs     - array of pointers to per-chip configurations; searched
 *                 in order by the driver.
 */
struct coreinit_info {
	uint32_t		  num_configs;
	struct coreinit_config	**configs;
};

/*
 * coreinit_target_get_info() - target-specific accessor for coreinit_info.
 *
 * Defined in the per-target coreinit_data.c (e.g. lemans/coreinit_data.c).
 */
struct coreinit_info *coreinit_target_get_info(void);

#endif /* QTI_COREINITI_H */
