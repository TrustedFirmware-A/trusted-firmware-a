#ifndef __ODY_ARCH_H__
#define __ODY_ARCH_H__
/***********************license start***********************************
* Copyright (C) 2021-2026 Marvell.
* SPDX-License-Identifier: BSD-3-Clause
* https://spdx.org/licenses
***********************license end**************************************/

/**
 * @file
 *
 * Master include file for architecture support. Use ody.h
 * instead of including this file directly.
 *
 * <hr>$Revision: 49448 $<hr>
 */

#ifndef __BYTE_ORDER
    #if !defined(__ORDER_BIG_ENDIAN__) || !defined(__ORDER_LITTLE_ENDIAN__) || !defined(__BYTE_ORDER__)
	#error Unable to determine Endian mode
    #elif __BYTE_ORDER__ == __ORDER_BIG_ENDIAN__
	#define __BYTE_ORDER __ORDER_BIG_ENDIAN__
	#define ODY_LITTLE_ENDIAN_STRUCT __attribute__ ((scalar_storage_order("little-endian")))
    #elif __BYTE_ORDER__ == __ORDER_LITTLE_ENDIAN__
	#define __BYTE_ORDER __ORDER_LITTLE_ENDIAN__
	#define ODY_LITTLE_ENDIAN_STRUCT
    #else
	#error Unable to determine Endian mode
    #endif
    #define __BIG_ENDIAN    __ORDER_BIG_ENDIAN__
    #define __LITTLE_ENDIAN __ORDER_LITTLE_ENDIAN__
#endif

#include "ody-csr-plat.h"
#include "ody-require.h"
#include "ody-swap.h"
#ifndef ODY_BUILD_HOST
#include "ody-asm.h"
#endif
#include "ody-model.h"
#include "ody-csr.h"
#include "ody-warn.h"
#include "ody-version.h"
#ifndef ODY_BUILD_HOST
#include "ody-platform.h"
#endif

#endif
