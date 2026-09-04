/*
 * Copyright (c) 2019, Arm Limited. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include <string.h>

#undef memrchr

void *memrchr(const void *src, int c, size_t len)
{
	if (len > 0) {
		const unsigned char *s = (const unsigned char *)src + (len - 1);

		while (len--) {
			if (*s == (unsigned char)c) {
				return (void*) s;
			}

			if (s != src) {
				s--;
			}
		}
	}

	return NULL;
}
