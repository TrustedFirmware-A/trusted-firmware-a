/*
 * Copyright (c) 2026, Arm Limited and Contributors. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include <assert.h>

#if TRANSFER_LIST
#include <transfer_list.h>
#endif

#include <arch_helpers.h>
#include <common/bl_common.h>
#include <common/debug.h>
#include <common/desc_image_load.h>
#include <drivers/generic_delay_timer.h>
#include <lib/mmio.h>
#include <lib/xlat_tables/xlat_mmu_helpers.h>
#include <lib/xlat_tables/xlat_tables_defs.h>
#include <lib/xlat_tables/xlat_tables_v2.h>
#include <plat/common/platform.h>

#include <platform_def.h>
#include <rpi_shared.h>

static meminfo_t bl2_tzram_layout __aligned(CACHE_WRITEBACK_GRANULE);

void bl2_early_platform_setup2(u_register_t arg0, u_register_t arg1,
			       u_register_t arg2, u_register_t arg3)
{
	meminfo_t *mem_layout = (meminfo_t *)arg1;

	rpi3_console_init();
	generic_delay_timer_init();

	bl2_tzram_layout = *mem_layout;

#if TRANSFER_LIST
	(void)rpi_bl2_transfer_list_init(arg3);
#endif

	plat_rpi3_io_setup();
}

void bl2_platform_setup(void)
{
}

void bl2_plat_arch_setup(void)
{
	/*
	 * BL2 owns the GPU-populated handoff fields in the staged flow. BL31
	 * receives the resulting BL33 entry point through bl_params_t.
	 */
	mmap_add_region(PLAT_RPI_STUB_HEADER_BASE, PLAT_RPI_STUB_HEADER_BASE,
			PLAT_RPI_STUB_HEADER_SIZE,
			MT_NON_CACHEABLE | MT_RW | MT_SECURE);

	rpi3_setup_page_tables(bl2_tzram_layout.total_base,
			      bl2_tzram_layout.total_size,
			      BL_CODE_BASE, BL_CODE_END,
			      BL_RO_DATA_BASE, BL_RO_DATA_END
#if USE_COHERENT_MEM
			      , BL_COHERENT_RAM_BASE, BL_COHERENT_RAM_END
#endif
			     );

	enable_mmu_el1(0);
}

static uintptr_t rpi4_staged_get_kernel_entrypoint(void)
{
#ifdef PRELOADED_BL33_BASE
	return PRELOADED_BL33_BASE;
#else
	if (mmio_read_32(PLAT_RPI_STUB_MAGIC_ADDR) == 0U) {
		return mmio_read_32(PLAT_RPI_KERNEL_ENTRY32_ADDR);
	}

	WARN("Stub magic failure, using default kernel address 0x80000\n");
	return 0x80000;
#endif
}

static uintptr_t rpi4_staged_get_dtb_address(void)
{
#ifdef RPI3_PRELOADED_DTB_BASE
	return RPI3_PRELOADED_DTB_BASE;
#else
	if (mmio_read_32(PLAT_RPI_STUB_MAGIC_ADDR) == 0U) {
		return mmio_read_32(PLAT_RPI_DTB_PTR32_ADDR);
	}

	WARN("Stub magic failure, DTB address unknown\n");
	return 0;
#endif
}

int bl2_plat_handle_post_image_load(unsigned int image_id)
{
	bl_mem_params_node_t *bl_mem_params = get_bl_mem_params_node(image_id);

	assert(bl_mem_params != NULL);

	switch (image_id) {
	case BL31_IMAGE_ID:
#if TRANSFER_LIST
		if (GET_RW(bl_mem_params->ep_info.spsr) == MODE_RW_64) {
			bl_mem_params->ep_info.args.arg1 =
				TRANSFER_LIST_HANDOFF_X1_VALUE(
					REGISTER_CONVENTION_VERSION);
		}
		bl_mem_params->ep_info.args.arg3 =
			(uintptr_t)rpi_bl2_get_transfer_list();
#endif
		break;

	case BL33_IMAGE_ID:
		bl_mem_params->ep_info.pc = rpi4_staged_get_kernel_entrypoint();
		bl_mem_params->ep_info.spsr = rpi3_get_spsr_for_bl33_entry();

#if RPI3_DIRECT_LINUX_BOOT
# if RPI3_BL33_IN_AARCH32
		VERBOSE("rpi: Preparing to boot 32-bit Linux kernel\n");
		bl_mem_params->ep_info.args.arg0 = 0U;
		bl_mem_params->ep_info.args.arg1 = ~0U;
		bl_mem_params->ep_info.args.arg2 = rpi4_staged_get_dtb_address();
# else
		VERBOSE("rpi: Preparing to boot 64-bit Linux kernel\n");
		bl_mem_params->ep_info.args.arg0 = rpi4_staged_get_dtb_address();
		bl_mem_params->ep_info.args.arg1 = 0ULL;
		bl_mem_params->ep_info.args.arg2 = 0ULL;
		bl_mem_params->ep_info.args.arg3 = 0ULL;
# endif
#else
		bl_mem_params->ep_info.args.arg0 = 0xffff & read_mpidr();
#endif
		break;

	default:
		break;
	}

	return 0;
}
