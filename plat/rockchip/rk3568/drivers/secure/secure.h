/*
 * Copyright (c) 2024-2026, Rockchip, Inc. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef SECURE_H
#define SECURE_H

#define SGRF_FIREWALL_SLV_CON(i)	(0x240 + i * 4)

/* ddr firewall */
#define FIREWALL_DDR_RGN(i)		((i) * 0x4)
#define FIREWALL_DDR_RGN_CNT		16
#define FIREWALL_DDR_CON		0x80

#define RG_MAP_SECURE(top, base)	\
	(((((top) - 1) & 0x7fff) << 16) | ((base) & 0x7fff))

void secure_timer_init(void);
void sgrf_init(void);

#endif /* SECURE_H */
