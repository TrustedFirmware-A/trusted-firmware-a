/*
 * Copyright (c) 2020-2026, Renesas Electronics Corporation. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include <assert.h>

#include <common/tbbr/tbbr_img_def.h>
#include <drivers/io/io_driver.h>
#include <drivers/io/io_fip.h>
#include <drivers/io/io_memmap.h>
#include <drivers/io/io_storage.h>
#include <io_common.h>
#include <io_emmcdrv.h>
#include <lib/mmio.h>
#include "rpc.h"
#include <tools_share/firmware_image_package.h>

#include <platform_def.h>

#define SYS_BASE			PLAT_SYSC_BASE
#define SYS_LSI_MODE			(SYS_BASE + 0x0A00)
#define SYS_LSI_MODE_STAT_MD_BOOT_POS	0
#define SYS_LSI_MODE_STAT_MD_BOOT	(7 << SYS_LSI_MODE_STAT_MD_BOOT_POS)
#define STAT_MD_BOOT_SPI_1_8		3
#define STAT_MD_BOOT_SPI_3_3		4
#define STAT_MD_BOOT_SCIF		5

static uintptr_t memdrv_dev_handle;
static uintptr_t fip_dev_handle;
static uintptr_t boot_io_drv_id;

static const io_block_spec_t spirom_block_spec = {
	.offset = PLAT_SPIROM_FIP_BASE,
	.length = PLAT_SPIROM_FIP_SIZE,
};

static const io_uuid_spec_t bl31_file_spec = {
	.uuid = UUID_EL3_RUNTIME_FIRMWARE_BL31,
};

static const io_uuid_spec_t bl32_file_spec = {
	.uuid = UUID_SECURE_PAYLOAD_BL32,
};

static const io_uuid_spec_t bl33_file_spec = {
	.uuid = UUID_NON_TRUSTED_FIRMWARE_BL33,
};

static int32_t open_memmap(const uintptr_t spec);
static int32_t open_fipdrv(const uintptr_t spec);

struct plat_io_policy {
	uintptr_t *dev_handle;
	uintptr_t image_spec;
	int32_t (*check)(const uintptr_t spec);
};

static const struct plat_io_policy spirom_policies[] = {
	[FIP_IMAGE_ID] = { &memdrv_dev_handle, (uintptr_t)&spirom_block_spec,
			   &open_memmap },
	[BL31_IMAGE_ID] = { &fip_dev_handle, (uintptr_t)&bl31_file_spec,
			    &open_fipdrv },
	[BL32_IMAGE_ID] = { &fip_dev_handle, (uintptr_t)&bl32_file_spec,
			    &open_fipdrv },
	[BL33_IMAGE_ID] = { &fip_dev_handle, (uintptr_t)&bl33_file_spec,
			    &open_fipdrv },
};

static int32_t open_fipdrv(const uintptr_t spec)
{
	int32_t result;

	result = io_dev_init(fip_dev_handle, boot_io_drv_id);

	return result;
}

static int32_t open_memmap(const uintptr_t spec)
{
	uintptr_t handle;
	int32_t result;

	result = io_dev_init(memdrv_dev_handle, 0);
	if (result != 0)
		return result;

	result = io_open(memdrv_dev_handle, spec, &handle);
	if (result == 0)
		io_close(handle);

	return result;
}

void rza_io_setup(void)
{
	static const io_dev_connector_t *fip_dev_con;
	static const io_dev_connector_t *memmap_dev_con;
	uint32_t reg, boot_mode;

	int result __unused;

	boot_io_drv_id = FIP_IMAGE_ID;

	result = register_io_dev_fip(&fip_dev_con);
	assert(result == 0);

	result = io_dev_open(fip_dev_con, 0, &fip_dev_handle);
	assert(result == 0);

	reg = mmio_read_32(SYS_LSI_MODE);
	boot_mode = (reg & SYS_LSI_MODE_STAT_MD_BOOT) >> SYS_LSI_MODE_STAT_MD_BOOT_POS;

	if (boot_mode == STAT_MD_BOOT_SPI_1_8 ||
	    boot_mode == STAT_MD_BOOT_SPI_3_3) {
#if USE_SPI_NOR
		rpc_setup();
#endif /* USE_SPI_NOR */
		result = register_io_dev_memmap(&memmap_dev_con);
		assert(result == 0);

		result = io_dev_open(memmap_dev_con, 0, &memdrv_dev_handle);
		assert(result == 0);
	} else {
		panic();
	}
}

int plat_get_image_source(unsigned int image_id, uintptr_t *dev_handle,
			  uintptr_t *image_spec)
{
	const struct plat_io_policy *policy;
	int result;

	policy = &spirom_policies[image_id];

	result = policy->check(policy->image_spec);
	if (result != 0)
		return result;

	*image_spec = policy->image_spec;
	*dev_handle = *(policy->dev_handle);

	return 0;
}
