/*
 * Copyright (c) 2020-2026, Renesas Electronics Corporation. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef __SYC_H__
#define __SYC_H__

void syc_init(unsigned int freq);
unsigned int syc_get_freq(void);

#endif	/* __SYC_H__ */
