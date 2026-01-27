/***********************license start***********************************
* Copyright (C) 2021-2026 Marvell.
* SPDX-License-Identifier: BSD-3-Clause
* https://spdx.org/licenses
***********************license end**************************************/

/**
 * @file
 *
 * Functions for identifying ODY build version.
 *
 * <hr>$Revision$<hr>
 */


extern const char ody_version_str[];

/**
 * Return ODY version string
 *
 * @return ODY version string
 */
static inline const char *ody_version_string(void)
{
	return ody_version_str;
}
