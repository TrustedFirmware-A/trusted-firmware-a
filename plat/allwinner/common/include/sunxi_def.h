/*
 * Copyright (c) 2017-2018, ARM Limited and Contributors. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef SUNXI_DEF_H
#define SUNXI_DEF_H

/* Clock configuration */
#define SUNXI_OSC24M_CLK_IN_HZ		24000000

/* UART configuration */
#define SUNXI_UART0_BAUDRATE		115200
#define SUNXI_UART0_CLK_IN_HZ		SUNXI_OSC24M_CLK_IN_HZ

#define SUNXI_SOC_A64			0x1689
#define SUNXI_SOC_H5			0x1718
#define SUNXI_SOC_H6			0x1728
#define SUNXI_SOC_H616			0x1823
#define SUNXI_SOC_R329			0x1851

#define SUNXI_VER_BITS_MASK		0xffU
#define JEDEC_ALLWINNER_BKID		9U
#define JEDEC_ALLWINNER_MFID		0x9eU

#endif /* SUNXI_DEF_H */
