/*
 * Copyright (c) 2017-2018, ARM Limited and Contributors. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef PLATFORM_DEF_H
#define PLATFORM_DEF_H

#include <ti_platform_defs.h>

#if !K3_SEC_PROXY_LITE
#define SEC_PROXY_DATA_BASE	0x32C00000
#define SEC_PROXY_DATA_SIZE	0x80000
#define SEC_PROXY_SCFG_BASE	0x32800000
#define SEC_PROXY_SCFG_SIZE	0x80000
#define SEC_PROXY_RT_BASE	0x32400000
#define SEC_PROXY_RT_SIZE	0x80000
#else
#define SEC_PROXY_DATA_BASE	0x4D000000
#define SEC_PROXY_DATA_SIZE	0x80000
#define SEC_PROXY_SCFG_BASE	0x4A400000
#define SEC_PROXY_SCFG_SIZE	0x80000
#define SEC_PROXY_RT_BASE	0x4A600000
#define SEC_PROXY_RT_SIZE	0x80000
#endif /* K3_SEC_PROXY_LITE */

#define SEC_PROXY_TIMEOUT_US		1000000
#define SEC_PROXY_MAX_MESSAGE_SIZE	56

#endif /* PLATFORM_DEF_H */
