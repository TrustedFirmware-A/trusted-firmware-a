/*
 * Copyright (c) 2026, Qualcomm Technologies, Inc. and/or its subsidiaries.
 * SPDX-License-Identifier: BSD-3-Clause
 *
 * ICB configuration driver interface.
 *
 * Defines the data structures and helper macros consumed by the
 * platform icbcfg_query_data.c back-end and the common icbcfg driver.
 */

#ifndef QTI_ICBCFG_QUERY_H
#define QTI_ICBCFG_QUERY_H

#include <stdbool.h>
#include <stdint.h>

#include <drivers/qti/chipinfo/chipinfo.h>

/* Initialise a struct icbcfg_data entry: { .addr = reg, .val = value } */
#define ICBCFG_HWIO_DW(reg, value) \
	{ .addr = (uintptr_t)(reg), .val = (uint32_t)(value) }

/**
 * struct icbcfg_data - a single 32-bit register write.
 * @addr: physical address of the register
 * @val:  value to write
 */
struct icbcfg_data {
	uintptr_t addr;
	uint32_t  val;
};

/* Ordered list of icbcfg_prop segments (mirrors TZ icbcfg_prop_list_type). */
struct icbcfg_prop_list {
	const struct icbcfg_prop	**segs;
	uint32_t			  len;
};

/* Qultivate (per-instance SKU) part check. */
struct icbcfg_qtv {
	enum chipinfo_part part;
	uint32_t           part_idx;
};

/* Register write list with optional Qultivate SKU check. */
struct icbcfg_prop {
	uint32_t            len;
	struct icbcfg_data *data;
	uint32_t            num_qtv_parts;
	struct icbcfg_qtv  *qtv_parts;
};

/* Per-variant (SKU) device configuration. */
struct icbcfg_device_config {
	/* Chip identification */
	uint32_t  family;
	bool      match;
	uint32_t  version;

	/* Optional SKU discriminator */
	const uint32_t  *reg_addr;
	uint32_t  reg_mask;
	uint32_t  reg_val;

	/* Register configuration */
	struct icbcfg_prop		*prop_data;
	struct icbcfg_prop_list		*prop_data_list;
	struct icbcfg_prop		*post_prop_data;
	struct icbcfg_prop_list		*post_prop_data_list;
};

/* Top-level descriptor exported by each platform's icbcfg_query_data.c. */
struct icbcfg_info {
	uint32_t                      num_configs;
	struct icbcfg_device_config **configs;
};

struct icbcfg_info *icbcfg_target_get_info(void);

#endif /* QTI_ICBCFG_QUERY_H */
