/*
 * Copyright (c) 2020-2026, Renesas Electronics Corporation. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include <arch.h>
#include <arch_helpers.h>
#include <common/debug.h>
#include <common/desc_image_load.h>

#include <platform_def.h>

#if (APPLOAD == RZ_NOFIP)
struct fsp_app_header {
	uint64_t entry_addr;
	uint64_t entry_addr_inv;
	uint64_t dest_addr;
	uint64_t dest_addr_inv;
	uint64_t payload_size;
	uint64_t payload_size_inv;
	uint8_t padding[432];
	uint8_t signature[32];
	uint8_t app_payload_start;
};
#endif /* (APPLOAD == RZ_NOFIP) */

bl_load_info_t *plat_get_bl_image_load_info(void)
{
	return get_bl_load_info_from_mem_params_desc();
}

bl_params_t *plat_get_next_bl_params(void)
{
	return get_next_bl_params_from_mem_params_desc();
}

void plat_flush_next_bl_params(void)
{
}

#if (APPLOAD == RZ_NOFIP)
static bool is_fit(struct fsp_app_header *header, uint64_t base, uint64_t size)
{
	return ((header->dest_addr >= base) &&
		((header->dest_addr + header->payload_size) <= (base + size)));
}

static int rz_check_fsp_header(struct fsp_app_header *header)
{
	INFO("Check Application Header...\n");
	if (~(header->entry_addr) != header->entry_addr_inv) {
		ERROR("The value of the entry point address does not match its inverted value\n");
		return -1;
	}

	if (~(header->dest_addr) != header->dest_addr_inv) {
		ERROR("The destination address does not match its inverted value\n");
		return -1;
	}

	if (~(header->payload_size) != header->payload_size_inv) {
		ERROR("The size of application image does not match its inverted value\n");
		return -1;
	}

	if (!is_fit(header, PLAT_SRAM_BASE, PLAT_SRAM_SIZE) &&
	    !is_fit(header, PLAT_SPIROM_BASE, PLAT_SPIROM_SIZE) &&
	    !is_fit(header, PLAT_DDR_BASE, PLAT_DDR_SIZE)) {
		ERROR("The image to copy does not fit in memory\n");
		return -1;
	}

	INFO("Success!\n");

	return 0;
}

static void rz_update_descs(struct fsp_app_header *header)
{
	bl_params_t *bl2_params;

	bl2_params = plat_get_next_bl_params();

	bl2_params->head->image_info->image_base = (uintptr_t)header->dest_addr;
	bl2_params->head->image_info->image_max_size = header->payload_size;
	bl2_params->head->image_info->h.attr |= IMAGE_ATTRIB_SKIP_LOADING;
	bl2_params->head->ep_info->pc = (uintptr_t)header->entry_addr;
	flush_bl_params_desc();
}

static struct fsp_app_header header_impl;
void rza_load_fsp(void)
{
	int ret = 0;
	struct fsp_app_header *header;

	header = &header_impl;

	memcpy(header, (void *)FSP_BASE, sizeof(*header));

	ret = rz_check_fsp_header(header);

	if (ret != 0) {
		panic();
	}

	if (header->dest_addr != (FSP_BASE + RZ_APP_PAYLOAD_OFFSET)) {
		memcpy((void *)header->dest_addr,
			(void *)(FSP_BASE + RZ_APP_PAYLOAD_OFFSET),
			(size_t)header->payload_size);
		flush_dcache_range((uintptr_t)(header->dest_addr),
					header->payload_size);
	}
	rz_update_descs(header);
}
#endif /* (APPLOAD == RZ_NOFIP) */

void rza_print_descs(void)
{
	/* In the case of release build, bl2_params isn't used */
	bl_params_t *bl2_params __unused;
	char sp __unused;

	bl2_params = plat_get_next_bl_params();

	VERBOSE("Address to copy the application: 0x%08lx\n",
		(uint64_t)bl2_params->head->image_info->image_base);
	VERBOSE("Entry Point Address: 0x%08lx\n",
		(uint64_t)bl2_params->head->ep_info->pc);
	VERBOSE("Copy Data Size: %dbyte\n",
		bl2_params->head->image_info->image_max_size);
	VERBOSE("SPSR_EL3 settings:\n");

	if (GET_RW(bl2_params->head->ep_info->spsr) == MODE_RW_64) {
		VERBOSE("AArch64 execution state\n");
	} else {
		VERBOSE("AArch32 execution state\n");
	}

	if (0 != ((bl2_params->head->ep_info->spsr >> SPSR_DAIF_SHIFT) &
		  DAIF_DBG_BIT)) {
		VERBOSE("Debug exception enable\n");
	}

	if (0 != ((bl2_params->head->ep_info->spsr >> SPSR_DAIF_SHIFT) &
		  DAIF_ABT_BIT)) {
		VERBOSE("SError interrupt enable\n");
	}

	if (0 != ((bl2_params->head->ep_info->spsr >> SPSR_DAIF_SHIFT) &
		  DAIF_IRQ_BIT)) {
		VERBOSE("IRQ interrupt enable\n");
	}

	if (0 != ((bl2_params->head->ep_info->spsr >> SPSR_DAIF_SHIFT) &
		  DAIF_FIQ_BIT)) {
		VERBOSE("FIQ interrupt enable\n");
	}

	if (GET_SP(bl2_params->head->ep_info->spsr) == MODE_SP_EL0) {
		sp = 't';
	} else {
		sp = 'h';
	}

	VERBOSE("EL and stack pointer: EL%d%c\n", GET_EL(bl2_params->head->ep_info->spsr), sp);
	NOTICE("Jump to Application\n");
}
