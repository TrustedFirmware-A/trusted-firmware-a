/*
 * Copyright (c) 2026, Arm Limited and Contributors. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <string.h>

#include <event_measure.h>
#include <tpm2.h>
#include <tpm2_chip.h>

#include <common/debug.h>
#include <drivers/delay_timer.h>
#include <drivers/gpio_spi.h>
#include <drivers/tpm/tpm2_slb9670/slb9670_gpio.h>
#include <lib/utils_def.h>

#include <rpi_shared.h>

extern struct tpm_chip_data tpm_chip_data;

#if TPM_INTERFACE_FIFO_SPI
static int rpi_tpm_early_interface_setup(bool reset)
{
	const struct gpio_spi_config *tpm_gpio_data;
	const struct tpm_timeout_ops timeout_ops = {
		.timeout_init_us = timeout_init_us,
		.timeout_elapsed = timeout_elapsed
	};
	struct tpm_spi_plat *spidev;

	tpm_gpio_data = tpm2_slb9670_get_config();

	tpm2_slb9670_gpio_init(tpm_gpio_data);
	if (reset) {
		tpm2_slb9670_reset_chip(tpm_gpio_data);
	}

	spidev = gpio_spi_init(tpm_gpio_data);
	return tpm_interface_init(spidev, &timeout_ops, &tpm_chip_data, 0);
}
#else
static int rpi_tpm_early_interface_setup(bool reset)
{
	(void)reset;

	return 0;
}
#endif

#if defined(IMAGE_BL1)
static bool rpi_tpm_pcr_bank_cb(uint16_t hash_alg,
				const uint8_t *pcr_select,
				uint8_t sizeof_select,
				tpm_pcr_bank_ctx_t *ctx)
{
	uint32_t select = 0U;

	for (uint8_t i = 0U; i < sizeof_select; i++) {
		select |= (uint32_t)pcr_select[i] << (i * 8U);
	}

	INFO("PCR bank for alg=0x%04x: 0x%08x\n", hash_alg, select);
	if (hash_alg == TPM_ALG_ID) {
		ctx->flags = select;
	}

	return false;
}

#if RPI_TPM_PROVISION
#if !DEBUG
#error DEBUG must be enabled to provision TPM PCR banks
#endif

static int rpi_tpm_allocate_pcr_bank(uint16_t hash_alg)
{
	size_t i;
	int rc;
	bool success = false;
	uint32_t max_pcr = 0U;
	uint32_t size_needed = 0U;
	uint32_t size_available = 0U;
	tpm_pcr_allocate_bank_t banks[] = {
		{ .hash_alg = TPM_ALG_SHA1, .pcr_select = { 0 } },
		{ .hash_alg = TPM_ALG_SHA256, .pcr_select = { 0 } },
		{ .hash_alg = TPM_ALG_SHA384, .pcr_select = { 0 } },
		{ .hash_alg = TPM_ALG_NULL }
	};

	for (i = 0U; i < ARRAY_SIZE(banks); i++) {
		if (banks[i].hash_alg == hash_alg) {
			memset(banks[i].pcr_select, 0xFF,
			       TPM_PCR_SELECT_SIZE);
			break;
		}
		if (banks[i].hash_alg == TPM_ALG_NULL) {
			ERROR("PCR bank 0x%04x not found\n", hash_alg);
			return -1;
		}
	}

	rc = tpm_pcr_allocate_auth_password(&tpm_chip_data, NULL, 0, banks,
					    &success, &max_pcr, &size_needed,
					    &size_available);
	if (rc != TPM_SUCCESS) {
		ERROR("PCR allocate failure\n");
		return rc;
	}

	INFO("PCR allocate success=%s max_pcr=%u size_needed=%u size_available=%u\n",
	     success ? "yes" : "no", max_pcr, size_needed, size_available);

	return success ? TPM_SUCCESS : TPM_ERR_RESPONSE;
}
#endif /* RPI_TPM_PROVISION */
#endif /* IMAGE_BL1 */

void rpi_bl1_tpm_setup(void)
{
	int rc;

	rc = rpi_tpm_early_interface_setup(true);
	if (rc != 0) {
		ERROR("BL1: TPM interface init failed\n");
		panic();
	}

	rc = tpm_startup(&tpm_chip_data, TPM_SU_CLEAR);
	if (rc != 0) {
		ERROR("BL1: TPM Startup failed\n");
		panic();
	}
}

#if defined(IMAGE_BL1)
void rpi_bl1_tpm_validate(uint32_t required_pcr_mask)
{
	tpm_pcr_bank_ctx_t ctx = { 0 };
	tpm_alg_query_t alg_query[] = {
		{ .alg_id = TPM_ALG_SHA256 },
		{ .alg_id = EVLOG_TPM_ALG_SHA384 },
		{ .alg_id = EVLOG_TPM_ALG_SHA512 },
		{ .alg_id = TPM_ALG_NULL },
	};
	int rc;

	rc = tpm_getcap_query_algs(&tpm_chip_data, alg_query);
	if (rc < 0) {
		ERROR("Failed to query TPM algs (%d).\n", rc);
		panic();
	}

	for (size_t i = 0U; i < ARRAY_SIZE(alg_query); i++) {
		if (alg_query[i].enabled) {
			INFO("Hash 0x%04x enabled\n", alg_query[i].alg_id);
		} else {
			INFO("Hash 0x%04x disabled\n", alg_query[i].alg_id);
		}
	}

	rc = tpm_for_each_pcr_bank(&tpm_chip_data, rpi_tpm_pcr_bank_cb,
				   &ctx);
	if (rc < 0) {
		ERROR("Failed to query TPM PCR banks (%d).\n", rc);
		panic();
	}

	if ((ctx.flags & required_pcr_mask) == required_pcr_mask) {
		return;
	}

#if RPI_TPM_PROVISION
	WARN("Reallocating TPM PCRs\n");
	rc = rpi_tpm_allocate_pcr_bank(TPM_ALG_ID);
	if (rc < 0) {
		ERROR("Failed to provision TPM PCR banks (%d).\n", rc);
		panic();
	}
#else
	ERROR("Required PCRs missing for bank 0x%04x\n", TPM_ALG_ID);
	ERROR("Change MBOOT_TPM_HASH_ALG or provision TPM\n");
	panic();
#endif
}
#endif /* IMAGE_BL1 */

void rpi_bl2_tpm_setup(void)
{
	int rc;

	rc = rpi_tpm_early_interface_setup(false);
	if (rc != 0) {
		ERROR("BL2: TPM interface init failed\n");
		panic();
	}
}

void rpi_tpm_close(void)
{
	int rc;

	rc = tpm_interface_close(&tpm_chip_data, 0);
	if (rc != 0) {
#if defined(IMAGE_BL1)
		ERROR("BL1: TPM interface close failed\n");
#elif defined(IMAGE_BL2)
		ERROR("BL2: TPM interface close failed\n");
#else
#error rpi_tpm.c must be built for BL1 or BL2
#endif
		panic();
	}
}
