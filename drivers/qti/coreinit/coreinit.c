/*
 * Copyright (c) 2026, Qualcomm Technologies, Inc. and/or its subsidiaries.
 * SPDX-License-Identifier: BSD-3-Clause
 *
 * Core initialization driver.
 * Manages ICB bus votes required during platform core initialization.
 */

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include <common/debug.h>
#include "coreiniti.h"
#include <drivers/qti/chipinfo/chipinfo.h>
#include <drivers/qti/coreinit/coreinit.h>
#include <drivers/qti/icb/icbuarb.h>

/*
 * Module state
 */

/*
 * Cached pointer to the config that matched the running chip.
 * Set once by coreinit_init(); reused by coreinit_deinit() so the
 * chip-family/version search is not repeated on every call.
 */
static struct coreinit_config *coreinit_cfg;

/*
 * Internal helpers
 */

/*
 * coreinit_find_config() - locate the config matching the running chip.
 *
 * Iterates coreinit_target_get_info()->configs[] in order.  For each entry:
 *   1. Skips entries whose family does not match chipinfo_get_family().
 *   2. If cfg->match is true, also skips entries whose version does not
 *      match chipinfo_get_chip_version() exactly.
 *   3. Returns the first entry that passes both checks.
 *
 * Returns NULL if no matching config is found.
 */
static struct coreinit_config *coreinit_find_config(void)
{
	struct coreinit_info *info = coreinit_target_get_info();
	enum chipinfo_family family = chipinfo_get_chip_family();
	uint32_t version = (uint32_t)chipinfo_get_chip_version();
	uint32_t i = 0U;

	for (i = 0U; i < info->num_configs; i++) {
		struct coreinit_config *cfg = info->configs[i];

		if (cfg == NULL) {
			continue;
		}

		if (cfg->family != family) {
			continue;
		}

		if (cfg->match && (cfg->version != version)) {
			continue;
		}

		return cfg;
	}

	return NULL;
}

/*
 * Public API
 */

/*
 * qti_coreinit_init() - issue ICB bandwidth votes for the current chip.
 *
 * Finds and caches the matching coreinit_config (stored in coreinit_cfg so
 * coreinit_deinit() does not repeat the search).  For each vote:
 *   - Creates an ICB client for each route on first call (handle cached in
 *     vote->handles[j]).  A NULL handle is fatal: ERROR() + panic().
 *   - Issues the corresponding icb_bw_req bandwidth request.
 */
void qti_coreinit_init(void)
{
	uint32_t i = 0U;
	uint32_t j = 0U;

	coreinit_cfg = coreinit_find_config();
	if (coreinit_cfg == NULL) {
		return;
	}

	for (i = 0U; i < coreinit_cfg->num_votes; i++) {
		struct coreinit_vote *vote = &coreinit_cfg->votes[i];

		for (j = 0U; j < vote->num_routes; j++) {
			if (vote->handles[j] == NULL) {
				vote->handles[j] = icbuarb_create_client(
					vote->routes[j].master,
					vote->routes[j].slave);
			}

			if (vote->handles[j] == NULL) {
				ERROR("coreinit: create_client failed: master %u slave %u\n",
				      (unsigned int)vote->routes[j].master,
				      (unsigned int)vote->routes[j].slave);
				panic();
			}

			icbuarb_issue_request(vote->handles[j],
					      &vote->requests[j]);
		}
	}
}

/*
 * qti_coreinit_deinit() - release all ICB bandwidth votes.
 *
 * Uses the cached coreinit_cfg set by coreinit_init(); no chip-family
 * search is repeated.  Issues a zero ab/ib request on every active ICB
 * client handle, removing all previously held bus votes.  Client handles
 * are retained so that coreinit_init() may be called again without
 * re-creating them.
 */
void qti_coreinit_deinit(void)
{
	struct icb_bw_req zero_req = { .ab = 0ULL, .ib = 0ULL };
	uint32_t i = 0U;
	uint32_t j = 0U;

	if (coreinit_cfg == NULL) {
		return;
	}

	for (i = 0U; i < coreinit_cfg->num_votes; i++) {
		struct coreinit_vote *vote = &coreinit_cfg->votes[i];

		for (j = 0U; j < vote->num_routes; j++) {
			if (vote->handles[j] == NULL) {
				continue;
			}

			icbuarb_issue_request(vote->handles[j], &zero_req);
		}
	}
}
