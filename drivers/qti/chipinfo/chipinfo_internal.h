/*
 * Copyright (c) 2026, Qualcomm Technologies, Inc. and/or its subsidiaries.
 * SPDX-License-Identifier: BSD-3-Clause
 *
 * Private state for the ChipInfo driver. Not part of the public API; consumers
 * must use the accessors declared in <drivers/qti/chipinfo/chipinfo.h>.
 */

#ifndef CHIPINFO_INTERNAL_H
#define CHIPINFO_INTERNAL_H

#include <stdbool.h>
#include <stdint.h>

#include <drivers/qti/chipinfo/chipinfo.h>
#include <drivers/qti/platforminfo/platforminfodefs.h>

struct chipinfo_ctxt {
	bool initialized;
	enum chipinfo_id chip_id;
	uint32_t version;
	enum chipinfo_family family;
	/* Indexed by enum chipinfo_part; non-zero means fused off on this SKU. */
	uint32_t part_state[CHIPINFO_NUM_PARTS];
	/* Per-instance table, snapshotted from SMEM at init time. */
	struct part_instances insts[CHIPINFO_MAX_PART_INSTANCES];
	uint32_t num_insts;
};

#endif /* CHIPINFO_INTERNAL_H */
