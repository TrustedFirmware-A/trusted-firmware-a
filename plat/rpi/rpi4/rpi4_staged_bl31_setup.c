/*
 * Copyright (c) 2026, Arm Limited and Contributors. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include <assert.h>

#include <common/bl_common.h>
#include <common/debug.h>
#include <drivers/arm/gicv2.h>
#include <lib/mmio.h>
#include <lib/xlat_tables/xlat_mmu_helpers.h>
#include <lib/xlat_tables/xlat_tables_defs.h>
#include <lib/xlat_tables/xlat_tables_v2.h>
#include <plat/common/platform.h>

#include <platform_def.h>
#include <rpi_shared.h>

static const gicv2_driver_data_t rpi_gic_data = {
	.gicd_base = RPI4_GIC_GICD_BASE,
	.gicc_base = RPI4_GIC_GICC_BASE,
};

static entry_point_info_t bl32_image_ep_info;
static entry_point_info_t bl33_image_ep_info;

entry_point_info_t *bl31_plat_get_next_image_ep_info(uint32_t type)
{
	entry_point_info_t *next_image_info;

	assert(sec_state_is_valid(type) != 0);

	next_image_info = (type == NON_SECURE)
			? &bl33_image_ep_info : &bl32_image_ep_info;

	if (next_image_info->pc != 0U) {
		return next_image_info;
	}

	return NULL;
}

uintptr_t plat_get_ns_image_entrypoint(void)
{
	return bl33_image_ep_info.pc;
}

uintptr_t rpi4_get_dtb_address(void)
{
#ifdef RPI3_PRELOADED_DTB_BASE
	return RPI3_PRELOADED_DTB_BASE;
#elif RPI3_DIRECT_LINUX_BOOT
# if RPI3_BL33_IN_AARCH32
	return bl33_image_ep_info.args.arg2;
# else
	return bl33_image_ep_info.args.arg0;
# endif
#else
	return 0;
#endif
}

static void ldelay(register_t delay)
{
	__asm__ volatile (
		"1:\tcbz %0, 2f\n\t"
		"sub %0, %0, #1\n\t"
		"b 1b\n"
		"2:"
		: "=&r" (delay) : "0" (delay)
	);
}

static void rpi4_staged_setup_local_timer(void)
{
	mmio_write_32(RPI4_LOCAL_CONTROL_BASE_ADDRESS, 0);
	mmio_write_32(RPI4_LOCAL_CONTROL_PRESCALER, 0x80000000);
	ldelay(100000);
}

void bl31_early_platform_setup2(u_register_t arg0, u_register_t arg1,
				u_register_t arg2, u_register_t arg3)
{
	bl_params_t *params_from_bl2 = (bl_params_t *)arg0;
	bl_params_node_t *bl_params;

	rpi4_staged_setup_local_timer();
	rpi3_console_init();

#if DEBUG
	assert(arg1 == RPI3_BL31_PLAT_PARAM_VAL);
#endif

	assert(params_from_bl2 != NULL);
	assert(params_from_bl2->h.type == PARAM_BL_PARAMS);
	assert(params_from_bl2->h.version >= VERSION_2);

	bl_params = params_from_bl2->head;

	while (bl_params != NULL) {
		if (bl_params->image_id == BL32_IMAGE_ID) {
			bl32_image_ep_info = *bl_params->ep_info;
		}

		if (bl_params->image_id == BL33_IMAGE_ID) {
			bl33_image_ep_info = *bl_params->ep_info;
		}

		bl_params = bl_params->next_params_info;
	}

	if (bl33_image_ep_info.pc == 0U) {
		panic();
	}
}

void bl31_plat_arch_setup(void)
{
	uintptr_t dtb_addr = rpi4_get_dtb_address();

	/* BL31 uses the first page to release secondary CPUs through PSCI. */
	mmap_add_region(PLAT_RPI_STUB_HEADER_BASE,
			PLAT_RPI_STUB_HEADER_BASE,
			PLAT_RPI_STUB_HEADER_SIZE,
			MT_NON_CACHEABLE | MT_RW | MT_SECURE);

	if (dtb_addr != 0U) {
		uintptr_t dtb_region = dtb_addr & ~ULL(0x1fffff);

		/* Map two 2 MiB blocks to cover a DTB crossing a block boundary. */
		mmap_add_region(dtb_region, dtb_region, 4U << 20,
				MT_MEMORY | MT_RW | MT_NS);
	}

	rpi3_setup_page_tables(BL31_BASE, BL31_END - BL31_BASE,
			      BL_CODE_BASE, BL_CODE_END,
			      BL_RO_DATA_BASE, BL_RO_DATA_END
#if USE_COHERENT_MEM
			      , BL_COHERENT_RAM_BASE, BL_COHERENT_RAM_END
#endif
			     );

	enable_mmu_el3(0);
}

void bl31_platform_setup(void)
{
	gicv2_driver_init(&rpi_gic_data);
	gicv2_distif_init();
	gicv2_pcpu_distif_init();
	gicv2_cpuif_enable();

	plat_rpi_bl31_custom_setup();
}
