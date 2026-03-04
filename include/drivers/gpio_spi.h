/*
 * Copyright (c) 2025-2026, Arm Limited. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef GPIO_SPI_H
#define GPIO_SPI_H

#include <stdint.h>

struct gpio_spi_config {
	uint8_t cs_gpio, sclk_gpio, mosi_gpio, miso_gpio, reset_gpio;
	unsigned int spi_mode;
	uint32_t spi_max_clock;
};

struct tpm_spi_priv;

struct tpm_spi_ops {
	int (*get_access)(struct tpm_spi_priv *context);
	void (*release_access)(struct tpm_spi_priv *context);
	void (*start)(struct tpm_spi_priv *context);
	void (*stop)(struct tpm_spi_priv *context);
	int (*xfer)(struct tpm_spi_priv *context, unsigned int bytes,
		    const uint8_t *dout, uint8_t *din);
};

struct tpm_spi_plat {
	struct tpm_spi_priv *priv;
	const struct tpm_spi_ops *ops;
};

struct tpm_spi_plat *gpio_spi_init(const struct gpio_spi_config *gpio_spi_config);

#endif /* GPIO_SPI_H */
