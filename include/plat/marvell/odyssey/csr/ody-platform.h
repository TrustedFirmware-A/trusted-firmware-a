/***********************license start***********************************
* Copyright (C) 2021-2026 Marvell.
* SPDX-License-Identifier: BSD-3-Clause
* https://spdx.org/licenses
***********************license end**************************************/

/**
 * @file
 *
 * Functions for information about the run platform.
 *
 * <hr>$Revision: 49448 $<hr>
 * @addtogroup hal
 * @{
 */

/**
 * This typedef defines the possible platforms for the ODY. The
 * numbers represent fuse setting in Fuses[197:195].
 */
typedef enum {
	PLATFORM_HW = 0,
	PLATFORM_EMULATOR = 1,
	PLATFORM_RTL = 2,
	PLATFORM_ASIM = 3,
} ody_platform_t;

/**
 * Check which platform we are currently running on. This allows a ODY binary to
 * run on various platforms without a recompile.
 *
 * @param platform to check for
 *
 * @return Non zero if we are on the platform
 */
static inline int ody_is_platform(ody_platform_t platform) __attribute__ ((pure, always_inline));
static inline int ody_is_platform(ody_platform_t platform)
{
	extern ody_platform_t __ody_platform;

	return (__ody_platform == platform);
}

/**
 * Call to initialize the platform state
 */
extern void __ody_platform_init(void);

/** @} */
