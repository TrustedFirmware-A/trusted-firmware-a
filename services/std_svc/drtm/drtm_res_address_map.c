/*
 * Copyright (c) 2022-2025 Arm Limited. All rights reserved.
 *
 * SPDX-License-Identifier:    BSD-3-Clause
 */

#include <stdint.h>
#include <stdlib.h>

#include <plat/common/platform.h>
#include <services/drtm_svc.h>
#include <platform_def.h>

/* Address map revision generated by this code. */
#define DRTM_ADDRESS_MAP_REVISION	U(0x0001)

/* Amount of space needed for address map based on PLAT_DRTM_MMAP_ENTRIES */
#define DRTM_ADDRESS_MAP_SIZE (sizeof(drtm_memory_region_descriptor_table_t) + \
			       (sizeof(drtm_mem_region_t) * \
				PLAT_DRTM_MMAP_ENTRIES))

/* Allocate space for DRTM-formatted address map to be constructed. */
static uint8_t drtm_address_map[DRTM_ADDRESS_MAP_SIZE];

static uint64_t drtm_address_map_size;

static int compare_regions(const void *a, const void *b)
{
	const drtm_mem_region_t *region_a = (const drtm_mem_region_t *)a;
	const drtm_mem_region_t *region_b = (const drtm_mem_region_t *)b;

	if (region_a->region_address < region_b->region_address) {
		return -1;
	} else if (region_a->region_address > region_b->region_address) {
		return 1;
	} else {
		return 0;
	}
}

drtm_memory_region_descriptor_table_t *drtm_build_address_map(void)
{
	/* Set up pointer to DRTM memory map. */
	drtm_memory_region_descriptor_table_t *map =
		(drtm_memory_region_descriptor_table_t *)drtm_address_map;

	/* Get the platform memory map. */
	const mmap_region_t *mmap = plat_get_addr_mmap();
	unsigned int i;

	/* Set up header for address map structure. */
	map->revision = DRTM_ADDRESS_MAP_REVISION;
	map->reserved = 0x0000;

	/* Iterate through mmap and generate DRTM address map. */
	for (i = 0U; mmap[i].base_pa != 0UL; i++) {
		/* Set PA of region. */
		map->region[i].region_address = mmap[i].base_pa;

		/* Set size of region (in 4kb chunks). */
		map->region[i].region_size_type = 0;
		ARM_DRTM_REGION_SIZE_TYPE_SET_4K_PAGE_NUM(
			map->region[i].region_size_type,
			mmap[i].size / PAGE_SIZE_4KB);

		/* Set type and cacheability. */
		switch (MT_TYPE(mmap[i].attr)) {
		case MT_DEVICE:
			ARM_DRTM_REGION_SIZE_TYPE_SET_REGION_TYPE(
				map->region[i].region_size_type,
				ARM_DRTM_REGION_SIZE_TYPE_REGION_TYPE_DEVICE);
			break;
		case MT_NON_CACHEABLE:
			ARM_DRTM_REGION_SIZE_TYPE_SET_REGION_TYPE(
				map->region[i].region_size_type,
				ARM_DRTM_REGION_SIZE_TYPE_REGION_TYPE_NCAR);
			ARM_DRTM_REGION_SIZE_TYPE_SET_CACHEABILITY(
				map->region[i].region_size_type,
				ARM_DRTM_REGION_SIZE_TYPE_CACHEABILITY_NC);
			break;
		case MT_MEMORY:
			ARM_DRTM_REGION_SIZE_TYPE_SET_REGION_TYPE(
				map->region[i].region_size_type,
				ARM_DRTM_REGION_SIZE_TYPE_REGION_TYPE_NORMAL);
			break;
		default:
			return NULL;
		}
	}

	map->num_regions = i;

	qsort(map->region, map->num_regions, sizeof(drtm_mem_region_t),
	     compare_regions);

	/* Store total size of address map. */
	drtm_address_map_size = sizeof(drtm_memory_region_descriptor_table_t);
	drtm_address_map_size += (i * sizeof(drtm_mem_region_t));

	return map;
}

uint64_t drtm_get_address_map_size(void)
{
	return drtm_address_map_size;
}
