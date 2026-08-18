/*
 * Copyright (c) 2026, Arm Limited and Contributors. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include <assert.h>

#include <common/debug.h>
#include <common/desc_image_load.h>
#include <lib/optee_utils.h>
#include <rpi_shared.h>

int rpi_bl2_parse_optee_header(bl_mem_params_node_t *bl_mem_params)
{
	bl_mem_params_node_t *pager_mem_params;
	bl_mem_params_node_t *paged_mem_params;
	int err;

	assert(bl_mem_params != NULL);

	pager_mem_params = get_bl_mem_params_node(BL32_EXTRA1_IMAGE_ID);
	assert(pager_mem_params != NULL);

	paged_mem_params = get_bl_mem_params_node(BL32_EXTRA2_IMAGE_ID);
	assert(paged_mem_params != NULL);

	err = parse_optee_header(&bl_mem_params->ep_info,
				 &pager_mem_params->image_info,
				 &paged_mem_params->image_info);
	if (err != 0) {
		WARN("OPTEE header parse error.\n");
	}

	return err;
}
