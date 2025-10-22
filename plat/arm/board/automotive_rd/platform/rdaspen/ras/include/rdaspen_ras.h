/*
 * Copyright (c) 2025-2026, Arm Limited. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef RDASPEN_RAS_H
#define RDASPEN_RAS_H

#include <lib/extensions/ras.h>
#include <plat/common/platform.h>
#include <platform_def.h>

/*
 * CPU IRQ RAS Defines
 */
#define CPU_FAULT_IRQ				PLAT_CORE_FAULT_IRQ

/* CPU RAS Control Register Defines */
#define ERX_CTRL_CFI_ENABLE			U(1UL << 8)
#define ERX_CTRL_FI_ENABLE			U(1UL << 3)
#define ERX_CTRL_UI_ENABLE			U(1UL << 2)
#define ERX_CTRL_ED_ENABLE			U(1UL << 0)

/* CPU RAS STATUS Register Defines */
#define ERX_STATUS_AV				U(1UL << 31)
#define ERX_STATUS_ADDRV(x)			(((x) & ERX_STATUS_AV) != 0U)
#define ERX_STATUS_V				U(1UL << 30)
#define ERX_STATUS_CE				U(1UL << 25)
#define ERX_STATUS_UE				U(1UL << 29)
#define ERX_STATUS_DE				U(1UL << 23)

#define ERXMISC0_UNIT_MASK			ULL(0xF)
#define ERXMISC0_UNIT(x)			((unsigned int)((x) & ERXMISC0_UNIT_MASK))

#define ERXMISC0_UNIT_L1I			U(0x1)
#define ERXMISC0_UNIT_L2_TLB			U(0x2)
#define ERXMISC0_UNIT_L1D			U(0x4)
#define ERXMISC0_UNIT_L2_CACHE			U(0x8)

/* Interrupt ID to trigger to EL1 */
#define ERROR_NOTIFICATION_IRQ			89U

/* Assembly helpers for CPU RAS Registers */
void clear_cpu_pfg_ctrl_register(void);
void clear_cpu_pfg_cdn_register(void);
void clear_cpu_erx_misc0_register(void);

void rdaspen_ras_init_per_cpu(void);
void rdaspen_css_pwr_domain_on_finish(const psci_power_state_t *target_state);

#endif /* RDASPEN_RAS_H */
