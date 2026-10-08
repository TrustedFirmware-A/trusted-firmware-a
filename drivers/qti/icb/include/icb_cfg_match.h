/*
 * Copyright (c) 2026, Qualcomm Technologies, Inc. and/or its subsidiaries.
 * SPDX-License-Identifier: BSD-3-Clause
 *
 * Shared chip-config selection helper for the ICB/NoC drivers. Each driver
 * keeps a table of per-chip config entries carrying the same selection fields
 * (family, match, version and an optional masked-register check); this helper
 * centralises the matching rule so the loops stay identical.
 */

#ifndef QTI_ICB_CFG_MATCH_H
#define QTI_ICB_CFG_MATCH_H

#include <stdbool.h>
#include <stdint.h>

#include <drivers/qti/chipinfo/chipinfo.h>
#include <lib/mmio.h>

/*
 * Returns true if a config entry applies to the running chip:
 *   - family must match exactly;
 *   - version must match exactly, or (for non-exact entries) be >= the entry's
 *     version;
 *   - if reg_addr is non-NULL, (read(reg_addr) & reg_mask) must equal reg_val.
 */
static inline bool qti_icb_cfg_matches(uint32_t cfg_family, bool cfg_match,
				       uint32_t cfg_version,
				       const uint32_t *reg_addr,
				       uint32_t reg_mask, uint32_t reg_val)
{
	uint32_t family = (uint32_t)chipinfo_get_chip_family();
	uint32_t version = chipinfo_get_chip_version();

	if (family != cfg_family) {
		return false;
	}

	/* Exact match, or non-exact and version >= cfg_version. */
	if ((version != cfg_version) &&
	    (cfg_match || (version < cfg_version))) {
		return false;
	}

	/* No register check, or masked read equals reg_val. */
	if ((reg_addr != NULL) &&
	    (reg_val != (mmio_read_32((uintptr_t)reg_addr) & reg_mask))) {
		return false;
	}

	return true;
}

#endif /* QTI_ICB_CFG_MATCH_H */
