/*
 * Copyright (C) 2022-2026 Marvell.
 *
 * SPDX-License-Identifier:     BSD-3-Clause
 * https://spdx.org/licenses
 */

#ifndef __ODY_CSR_PLAT__
#define __ODY_CSR_PLAT__
/**
 * @file
 *
 * Functions and macros for the taget platform.
 *
 * @defgroup csr CSR support
 * @{
 */

#ifdef __KERNEL__

#include <asm/io.h>
#include <linux/types.h>

#define __ody_csr_fatal(name, num_args, arg1, arg2, arg3, arg4, arg5, arg6) { BUG_ON(0); return 0; }

#else

#include <assert.h>
#include <stdint.h>

#define __ody_csr_fatal(name, num_args, arg1, arg2, arg3, arg4, arg5, arg6) { assert(0); return 0; }

#endif

#endif
