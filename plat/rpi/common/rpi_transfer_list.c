/*
 * Copyright (c) 2026, Arm Limited and Contributors. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include <assert.h>

#include <transfer_list.h>

#include <arch.h>
#include <common/bl_common.h>
#include <common/debug.h>
#include <common/desc_image_load.h>
#include <plat/common/platform.h>

#include <platform_def.h>
#include <rpi_shared.h>

#ifdef IMAGE_BL1
static struct transfer_list_header *bl1_tl;

struct transfer_list_header *rpi_bl1_transfer_list_init(void)
{
	bl1_tl = transfer_list_init((void *)(uintptr_t)FW_HANDOFF_BASE,
				    FW_HANDOFF_SIZE);
	if (bl1_tl == NULL) {
		ERROR("BL1: Failed to initialize transfer list\n");
		panic();
	}

	return bl1_tl;
}

struct transfer_list_header *rpi_bl1_get_transfer_list(void)
{
	return bl1_tl;
}

void rpi_bl1_set_bl2_transfer_list(void)
{
	image_desc_t *bl2_desc = bl1_plat_get_image_desc(BL2_IMAGE_ID);

	assert(bl1_tl != NULL);
	assert(bl2_desc != NULL);
	bl2_desc->ep_info.args.arg3 = (uint64_t)bl1_tl;
}
#endif /* IMAGE_BL1 */

#ifdef IMAGE_BL2
static struct transfer_list_header *bl2_tl;

struct transfer_list_header *rpi_bl2_transfer_list_init(u_register_t arg3)
{
	bl2_tl = (struct transfer_list_header *)(uintptr_t)arg3;

	if (bl2_tl != NULL &&
	    transfer_list_check_header(bl2_tl) != TL_OPS_NON) {
		INFO("BL2: Transfer List found\n");
		return bl2_tl;
	}

	WARN("BL2: TransferList not found; reinit TL\n");
	bl2_tl = transfer_list_init((void *)(uintptr_t)FW_HANDOFF_BASE,
				      FW_HANDOFF_SIZE);
	if (bl2_tl == NULL) {
		ERROR("BL2: Failed to re-initialize transfer list\n");
		panic();
	}

	return bl2_tl;
}

struct transfer_list_header *rpi_bl2_get_transfer_list(void)
{
	return bl2_tl;
}

void rpi3_bl2_sync_transfer_list(void)
{
	if (bl2_tl != NULL) {
		transfer_list_update_checksum(bl2_tl);
	}
}

void rpi_bl2_prepare_spmd_manifest(size_t manifest_size)
{
	bl_mem_params_node_t *tos_fw_config;
	struct transfer_list_entry *te;

	assert(bl2_tl != NULL);

	tos_fw_config = get_bl_mem_params_node(TOS_FW_CONFIG_ID);
	assert(tos_fw_config != NULL);

	te = transfer_list_add(bl2_tl, TL_TAG_DT_SPMC_MANIFEST,
			       manifest_size, NULL);
	assert(te != NULL);

	tos_fw_config->image_info.h.attr &= ~IMAGE_ATTRIB_SKIP_LOADING;
	tos_fw_config->image_info.image_max_size = manifest_size;
	tos_fw_config->image_info.image_base =
		(uintptr_t)transfer_list_entry_data(te);
}

struct transfer_list_header *rpi_bl2_relocate_transfer_list(void)
{
#ifdef FW_NS_HANDOFF_BASE
	struct transfer_list_header *ns_tl;

	if (bl2_tl == NULL) {
		return NULL;
	}

	ns_tl = transfer_list_relocate(bl2_tl,
				       (void *)(uintptr_t)FW_NS_HANDOFF_BASE,
				       bl2_tl->max_size);
	return ns_tl;
#else
	return bl2_tl;
#endif
}
#endif /* IMAGE_BL2 */
