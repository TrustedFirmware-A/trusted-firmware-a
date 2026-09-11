/*
 * Copyright 2024-2026 NXP
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include <common/debug.h>
#include <drivers/arm/gicv3.h>
#include <lib/psci/psci.h>
#include <plat/common/platform.h>

#include <imx_intercore_svc.h>
#include <plat_imx8.h>


static uint64_t imx_cpu_off(uint32_t id, uint32_t flags,
		void *handle, void *cookie)
{
	unsigned int cpu_id = plat_my_core_pos();
	int ret;

	/* Mask all exceptions */
	write_daifset(0xf);
	/* Clean and disable SPIs routing to this Core */
	imx_gicv3_distif_cpu_clear();
	/* Clean and disable all SGIs/PPIs in this redistributor interface */
	imx_gicv3_rdistif_cpu_clear(cpu_id);
	isb();
	/* Will not return in case of success */
	ret = psci_cpu_off();
	if (ret != PSCI_E_SUCCESS) {
		WARN("CPU off failed\n");
	}

	return ret;
}

void imx_cpuoff_init(void)
{
	int rc;

	/* CPU off intercore service */
	rc = register_intercore_cpuoff_svc(imx_cpu_off);
	if (rc) {
		panic();
	}
}
