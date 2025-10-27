/*
 * Copyright (c) 2026, Qualcomm Technologies, Inc. and/or its subsidiaries.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include <arch_helpers.h>
#include <drivers/qti/qtimer/qtimer.h>
#include <lib/mmio.h>

#include <qtimer_defs.h>

#define	QTIMER_FREQ_IN_100KHZ		192ULL

#define VOFF_FG0_LO_OFFSET(n)		(0x80 + 0x8 * (n))
#define VOFF_FG0_HI_OFFSET(n)		(0x84 + 0x8 * (n))
#define ACR_FG0_OFFSET(n)		(0x40 + 0x4 * (n))
#define SAR_FG0_OFFSET			(0x4)

/* Security configuration */
void qti_qtimer_init(void)
{
	uint8_t i;

	mmio_write_32(QTI_QTIMER_BASE + SAR_FG0_OFFSET, 0x7F);

	for (i = 0; i < QTIMER_NBR_FRAMES; i++) {
		mmio_write_32(QTI_QTIMER_BASE + ACR_FG0_OFFSET(i), 0x3F);
		mmio_write_32(QTI_QTIMER_BASE + VOFF_FG0_LO_OFFSET(i), 0x0);
		mmio_write_32(QTI_QTIMER_BASE + VOFF_FG0_HI_OFFSET(i), 0x0);
	}

	dsbsy();
	isb();
}

uint64_t qti_qtimer_get_raw(void)
{
	/* Assumes atomics reads */
	return mmio_read_64(QTIMER0_F2V1_BASE_ADDRESS);
}

uint64_t qti_qtimer_get_usec(void)
{
	uint64_t ticks = qti_qtimer_get_raw();

	return ((ticks * 10ULL) / QTIMER_FREQ_IN_100KHZ);
}

