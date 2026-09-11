/*
 * Copyright (c) 2026, Qualcomm Technologies, Inc. and/or its subsidiaries.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef QTI_CPUCP_HWIO_H
#define QTI_CPUCP_HWIO_H

/*
 * CPUCP / EPSS shared-memory and APSS IPC register addresses for lemans
 * (qcs9075).
 *
 * Derived from qtiseclib-migration register headers:
 *   APSS_HM_BASE              = 0x17800000
 *   EPSSEPSS_PDMEM_BASE       = APSS_HM_BASE + 0x00d00000 = 0x18500000
 *   CPUCP_INSTR_MEM_SIZE      = 0x8000
 *   CPUCP_DATA_MEM_BASE       = PDMEM + 0x8000
 *   CPUCP_SHARED_DATA_SIZE    = 0x1000
 *   CPUCP_IPC_SEC_BUF_BASE    = CPUCP_SHARED_DATA_BASE + CPUCP_SHARED_DATA_SIZE
 *                             = PDMEM + 0x9000 = 0x18509000
 *   APSS_SHARED_APSS_INTU_REG_BASE = APSS_HM_BASE + 0x00400000 = 0x17c00000
 */
#define CPUCP_IPC_SEC_BUF_BASE			(0x18509000U)

/* APSS -> CPUCP doorbell. Writing the OSM_IPC bit raises the IRQ. */
#define APSS_SHARED_TZ_IPC_INTERRUPT_ADDR	(0x17c00008U)
#define APSS_SHARED_TZ_IPC_INTERRUPT_OSM_IPC_SHFT	(28U)

#endif /* QTI_CPUCP_HWIO_H */
