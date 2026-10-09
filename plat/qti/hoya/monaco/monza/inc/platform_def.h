/*
 * Copyright (c) 2026, Qualcomm Technologies, Inc. and/or its subsidiaries.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */
#ifndef PLATFORM_DEF_H
#define PLATFORM_DEF_H

#include <monaco_def.h>

#define MAX_IO_HANDLES			U(2)
#define MAX_IO_DEVICES			U(2)
#define MAX_IO_BLOCK_DEVICES		U(1)

/* XBL enters the TZ image in system IMEM on Monaco. */
#define BL2_BASE			0x14680000
#define BL2_SIZE			0x1a000
#define BL2_LIMIT			(BL2_BASE + BL2_SIZE)

#define BL31_BASE			0x1c200000
#define BL31_SIZE			0x00100000
#define BL31_LIMIT			(BL31_BASE + BL31_SIZE)

#define BL32_BASE			0x1c300000
#define BL32_SIZE			0x00200000
#define BL32_LIMIT			(BL32_BASE + BL32_SIZE)

#define BL33_BASE			0xaf400000
#define BL33_SIZE			0x00400000

#define PLAT_QTI_FIP_IOBASE		0xaf000000
#define PLAT_QTI_FIP_MAXSIZE		0x00400000

/* Debug UART: QUPv3 wrap 0, serial engine 7. */
#define PLAT_QTI_UART_BASE		0x99c000

#endif /* PLATFORM_DEF_H */
