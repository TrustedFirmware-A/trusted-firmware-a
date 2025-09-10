/*
 * Copyright (c) 2024-2026, Rockchip, Inc. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef SECURE_H
#define SECURE_H

#define SGRF_FIREWALL_SLV_CON(i)	(0x240 + i * 4)

#define FIREWALL_DDR_CON		0x80

void secure_timer_init(void);
void sgrf_init(void);

#endif /* SECURE_H */
