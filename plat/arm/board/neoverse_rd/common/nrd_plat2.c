/*
 * Copyright (c) 2021-2026, Arm Limited and Contributors. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include <assert.h>

#include <platform_def.h>

#include <lib/utils_def.h>
#include <drivers/arm/css/sds.h>
#include <drivers/arm/sbsa.h>
#include <plat/arm/common/plat_arm.h>
#include <plat/common/platform.h>

/*
 * Table of regions for different BL stages to map using the MMU.
 */
#ifdef IMAGE_BL1
const mmap_region_t plat_arm_mmap[] = {
	NRD_CSS_SHARED_RAM_MMAP(0),
	NRD_ROS_FLASH0_RO_MMAP,
	NRD_CSS_PERIPH_MMAP(0),
	NRD_ROS_PLATFORM_PERIPH_MMAP,
	NRD_ROS_SYSTEM_PERIPH_MMAP,
	{0}
};
#endif

#ifdef IMAGE_BL2
const mmap_region_t plat_arm_mmap[] = {
	NRD_CSS_SHARED_RAM_MMAP(0),
	NRD_ROS_FLASH0_RO_MMAP,
#ifdef PLAT_ARM_MEM_PROT_ADDR
	ARM_V2M_MAP_MEM_PROTECT,
#endif
	NRD_CSS_PERIPH_MMAP(0),
	NRD_ROS_MEMCNTRL_MMAP(0),
	NRD_ROS_PLATFORM_PERIPH_MMAP,
	NRD_ROS_SYSTEM_PERIPH_MMAP,
	ARM_MAP_NS_DRAM1,
#if NRD_CHIP_COUNT > 1
	NRD_ROS_MEMCNTRL_MMAP(1),
#endif
#if NRD_CHIP_COUNT > 2
	NRD_ROS_MEMCNTRL_MMAP(2),
#endif
#if NRD_CHIP_COUNT > 3
	NRD_ROS_MEMCNTRL_MMAP(3),
#endif
#if ARM_BL31_IN_DRAM
	ARM_MAP_BL31_SEC_DRAM,
#endif
#if SPMC_AT_EL3 && SPMC_AT_EL3_SEL0_SP
	ARM_SP_IMAGE_MMAP,
#endif
#if TRUSTED_BOARD_BOOT && !RESET_TO_BL2
	ARM_MAP_BL1_RW,
#endif
	{0}
};
#endif

#ifdef IMAGE_BL31
const mmap_region_t plat_arm_mmap[] = {
	NRD_CSS_SHARED_RAM_MMAP(0),
#ifdef PLAT_ARM_MEM_PROT_ADDR
	ARM_V2M_MAP_MEM_PROTECT,
#endif
	NRD_CSS_PERIPH_MMAP(0),
	NRD_ROS_PLATFORM_PERIPH_MMAP,
	NRD_ROS_SYSTEM_PERIPH_MMAP,
#if SPMC_AT_EL3 && SPMC_AT_EL3_SEL0_SP
	ARM_SPM_BUF_EL3_MMAP,
#endif
	{0}
};

#endif

ARM_CASSERT_MMAP

#if TRUSTED_BOARD_BOOT
int plat_get_mbedtls_heap(void **heap_addr, size_t *heap_size)
{
	assert(heap_addr != NULL);
	assert(heap_size != NULL);

	return arm_get_mbedtls_heap(heap_addr, heap_size);
}
#endif

void plat_arm_secure_wdt_start(void)
{
	sbsa_wdog_start(NRD_CSS_SECURE_WDOG_BASE, NRD_CSS_SECURE_WDOG_TIMEOUT);
}

void plat_arm_secure_wdt_stop(void)
{
	sbsa_wdog_stop(NRD_CSS_SECURE_WDOG_BASE);
}

static sds_region_desc_t nrd_sds_regions[] = {
	{ .base = PLAT_ARM_SDS_MEM_BASE },
};

sds_region_desc_t *plat_sds_get_regions(unsigned int *region_count)
{
	*region_count = ARRAY_SIZE(nrd_sds_regions);

	return nrd_sds_regions;
}
