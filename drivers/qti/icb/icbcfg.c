/*
 * Copyright (c) 2026, Qualcomm Technologies, Inc. and/or its subsidiaries.
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include <common/debug.h>
#include <drivers/qti/chipinfo/chipinfo.h>
#include <drivers/qti/icb/icbcfg.h>
#include "icb_cfg_match.h"
#include "icbcfg_query.h"
#include <lib/mmio.h>

static struct icbcfg_device_config	*icb_dev_config;
static bool				 dev_config_valid;

/*
 * If all Qultivate parts in prop->qtv_parts[] are disabled on this SKU the
 * write list is skipped.  chipinfo_is_part_disabled() returns false (assume
 * present) when the ChipInfo driver is not yet initialised.
 */
static void icb_configure_settings(const struct icbcfg_prop *prop)
{
	uint32_t i;

	if (prop == NULL) {
		return;
	}

	if (prop->num_qtv_parts > 0U) {
		bool all_disabled = true;

		for (i = 0U; i < prop->num_qtv_parts; i++) {
			if (!chipinfo_is_part_disabled(
				    prop->qtv_parts[i].part,
				    prop->qtv_parts[i].part_idx)) {
				all_disabled = false;
				break;
			}
		}

		if (all_disabled) {
			return;
		}
	}

	for (i = 0U; i < prop->len; i++) {
		if (prop->data[i].addr == 0U) {
			continue;
		}
		mmio_write_32((uintptr_t)prop->data[i].addr,
			      prop->data[i].val);
	}
}

/* Apply an ordered list of icbcfg_prop segments. */
static void icb_configure_settings_list(
	const struct icbcfg_prop_list *prop_list)
{
	uint32_t i;

	if (prop_list == NULL || prop_list->segs == NULL) {
		return;
	}

	for (i = 0U; i < prop_list->len; i++) {
		if (prop_list->segs[i] == NULL) {
			continue;
		}
		icb_configure_settings(prop_list->segs[i]);
	}
}

static bool get_device_configuration(struct icbcfg_device_config **dev_config)
{
	struct icbcfg_info *info;
	uint32_t i;

	if (dev_config_valid) {
		*dev_config = icb_dev_config;
		return true;
	}

	info = icbcfg_target_get_info();

	for (i = 0U; i < info->num_configs; i++) {
		struct icbcfg_device_config *cfg = info->configs[i];

		if (cfg == NULL) {
			continue;
		}

		if (!qti_icb_cfg_matches(cfg->family, cfg->match, cfg->version,
					 cfg->reg_addr, cfg->reg_mask,
					 cfg->reg_val)) {
			continue;
		}

		icb_dev_config   = cfg;
		dev_config_valid = true;
		break;
	}

	*dev_config = icb_dev_config;
	return dev_config_valid;
}

static void icb_config_init(void)
{
	struct icbcfg_device_config *dev_config;

	if (!get_device_configuration(&dev_config)) {
		return;
	}

	/* prop_data and prop_data_list are mutually exclusive. */
	if (dev_config->prop_data != NULL) {
		icb_configure_settings(dev_config->prop_data);
	} else {
		icb_configure_settings_list(dev_config->prop_data_list);
	}
}

static void icb_config_post_init(void)
{
	struct icbcfg_device_config *dev_config;

	if (!get_device_configuration(&dev_config)) {
		return;
	}

	/* post_prop_data and post_prop_data_list are mutually exclusive. */
	if (dev_config->post_prop_data != NULL) {
		icb_configure_settings(dev_config->post_prop_data);
	} else {
		icb_configure_settings_list(dev_config->post_prop_data_list);
	}
}

void qti_icbcfg_init(void)
{
	icb_config_init();
	INFO("ICB: configuration initialized\n");
}

/* Must be called after all remap/segment operations are complete. */
void qti_icbcfg_post_init(void)
{
	icb_config_post_init();
	INFO("ICB: post-init configuration done\n");
}
