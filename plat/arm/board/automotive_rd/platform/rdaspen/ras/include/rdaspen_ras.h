/*
 * Copyright (c) 2025-2026, Arm Limited. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef RDASPEN_RAS_H
#define RDASPEN_RAS_H

#include <lib/extensions/ras.h>
#include <plat/common/platform.h>

/*
 * CPU IRQ RAS Defines
 */
#define CPU_FAULT_IRQ				PLAT_CORE_FAULT_IRQ

/* CPU RAS Control Register Defines */
#define ERX_CTRL_CFI_ENABLE			U(1UL << 8)
#define ERX_CTRL_FI_ENABLE			U(1UL << 3)
#define ERX_CTRL_ED_ENABLE			U(1UL << 0)

void rdaspen_ras_init_per_cpu(void);
void rdaspen_css_pwr_domain_on_finish(const psci_power_state_t *target_state);

#endif /* RDASPEN_RAS_H */
