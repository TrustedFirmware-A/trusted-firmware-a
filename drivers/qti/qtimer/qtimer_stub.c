/*
 * Copyright (c) 2026, Qualcomm Technologies, Inc. and/or its subsidiaries.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include <common/debug.h>
#include <drivers/qti/qtimer/qtimer.h>

void qti_qtimer_init(void)
{
}

uint64_t qti_qtimer_get_raw(void)
{
	WARN("Qtimer not supported\n");
	return 0LL;
}

uint64_t qti_qtimer_get_usec(void)
{
	WARN("Qtimer not supported.\n");
	return 0LL;
}

