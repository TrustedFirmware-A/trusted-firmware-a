#ifndef __ODY_CSRS_FUSE_H__
#define __ODY_CSRS_FUSE_H__
/* This file is auto-generated. Do not edit */

/***********************license start***********************************
* Copyright (C) 2021-2026 Marvell.
* SPDX-License-Identifier: BSD-3-Clause
* https://spdx.org/licenses
***********************license end**************************************/


/**
 * @file
 *
 * Configuration and status register (CSR) address and type definitions for
 * FUSE.
 *
 * This file is auto generated. Do not edit.
 *
 */

/**
 * Enumeration fuse_num_e
 *
 * Fuse Number Enumeration
 * Enumerates the fuse numbers.
 */
#define ODY_FUSE_NUM_E_ALT_BANKX(a) (0xf80 + (a))
#define ODY_FUSE_NUM_E_ALT_FUSEX(a) (0x7b + (a))
#define ODY_FUSE_NUM_E_AP_DISABLEX(a) (0x400 + (a))
#define ODY_FUSE_NUM_E_AP_NOCRYPTOX(a) (0x200 + (a))
#define ODY_FUSE_NUM_E_AP_POWER_LIMITX(a) (0x259 + (a))
#define ODY_FUSE_NUM_E_ARM_EMAX(a) (0x90 + (a))
#define ODY_FUSE_NUM_E_BISR_FUSED_ONLY (0x73)
#define ODY_FUSE_NUM_E_BPHY_PRESENT (0x251)
#define ODY_FUSE_NUM_E_BSR_LOBE_DISABLEX(a) (0x28c + (a))
#define ODY_FUSE_NUM_E_CHIP_IDX(a) (8 + (a))
#define ODY_FUSE_NUM_E_CHIP_TYPEX(a) (0 + (a))
#define ODY_FUSE_NUM_E_CPT0_NOCRYPTOX(a) (0x255 + (a))
#define ODY_FUSE_NUM_E_CPT1_NOCRYPTOX(a) (0x257 + (a))
#define ODY_FUSE_NUM_E_CSK_CRIPPLE (0x252)
#define ODY_FUSE_NUM_E_DESX(a) (0x540 + (a))
#define ODY_FUSE_NUM_E_DLL_REFRESH_RATEX(a) (0x80 + (a))
#define ODY_FUSE_NUM_E_DRO_CRIPPLE (0x171)
#define ODY_FUSE_NUM_E_DSS_CRIPPLEX(a) (0x300 + (a))
#define ODY_FUSE_NUM_E_EFUS_LCK_CFG (0x78)
#define ODY_FUSE_NUM_E_EFUS_LCK_MAN (0x79)
#define ODY_FUSE_NUM_E_EFUS_LCK_PRD (0x7a)
#define ODY_FUSE_NUM_E_EHSM_NOCRYPTOX(a) (0x209 + (a))
#define ODY_FUSE_NUM_E_ELADISABLE (0x215)
#define ODY_FUSE_NUM_E_EMA_RAMX(a) (0x10 + (a))
#define ODY_FUSE_NUM_E_EMA_ROMX(a) (0x67 + (a))
#define ODY_FUSE_NUM_E_EMA_TCAMX(a) (0x5c + (a))
#define ODY_FUSE_NUM_E_GSERP_PROCESSX(a) (0x150 + (a))
#define ODY_FUSE_NUM_E_GSER_ERCX(a) (0xf00 + (a))
#define ODY_FUSE_NUM_E_INIT_MULX(a) (0x88 + (a))
#define ODY_FUSE_NUM_E_LLC_CRIPPLEX(a) (0x216 + (a))
#define ODY_FUSE_NUM_E_MCS_FULL_CRIPPLEX(a) (0x172 + (a))
#define ODY_FUSE_NUM_E_MCS_ROUTABLE_CRIPPLE0X(a) (0x179 + (a))
#define ODY_FUSE_NUM_E_MCS_ROUTABLE_CRIPPLE1X(a) (0x16a + (a))
#define ODY_FUSE_NUM_E_MESH_ESEL_ECOSEL_V1X(a) (0x348 + (a))
#define ODY_FUSE_NUM_E_MESH_ESEL_ECOSEL_V2X(a) (0x350 + (a))
#define ODY_FUSE_NUM_E_MESH_ESEL_ECOSEL_V3X(a) (0x358 + (a))
#define ODY_FUSE_NUM_E_METAL_FIXX(a) (0x6d + (a))
#define ODY_FUSE_NUM_E_MFG_INFO16X(a) (0x800 + (a))
#define ODY_FUSE_NUM_E_MFG_INFO27X(a) (0xdd8 + (a))
#define ODY_FUSE_NUM_E_MFG_INFO28X(a) (0xe00 + (a))
#define ODY_FUSE_NUM_E_MFG_INFO3X(a) (0x180 + (a))
#define ODY_FUSE_NUM_E_ML_DISABLE (0x254)
#define ODY_FUSE_NUM_E_MSW_DISABLEX(a) (0x700 + (a))
#define ODY_FUSE_NUM_E_NODE1TRAPENA (0x250)
#define ODY_FUSE_NUM_E_PCC_SSIDX(a) (0x310 + (a))
#define ODY_FUSE_NUM_E_PDFX(a) (0x8c0 + (a))
#define ODY_FUSE_NUM_E_PEM_CRIPPLEX(a) (0x230 + (a))
#define ODY_FUSE_NUM_E_POWER_LIMITX(a) (0x225 + (a))
#define ODY_FUSE_NUM_E_PVTX(a) (0x900 + (a))
#define ODY_FUSE_NUM_E_REE_CRIPPLEX(a) (0x221 + (a))
#define ODY_FUSE_NUM_E_REPAIRX(a) (0x1000 + (a))
#define ODY_FUSE_NUM_E_ROM_INFOX(a) (0x3f0 + (a))
#define ODY_FUSE_NUM_E_RPM_CRIPPLEX(a) (0x2f7 + (a))
#define ODY_FUSE_NUM_E_RSVD12FX(a) (0x12f + (a))
#define ODY_FUSE_NUM_E_RSVD160X(a) (0x160 + (a))
#define ODY_FUSE_NUM_E_RSVD20BX(a) (0x20b + (a))
#define ODY_FUSE_NUM_E_RSVD219X(a) (0x219 + (a))
#define ODY_FUSE_NUM_E_RSVD227X(a) (0x227 + (a))
#define ODY_FUSE_NUM_E_RSVD25BX(a) (0x25b + (a))
#define ODY_FUSE_NUM_E_RSVD264X(a) (0x264 + (a))
#define ODY_FUSE_NUM_E_RSVD2B0X(a) (0x2b0 + (a))
#define ODY_FUSE_NUM_E_RSVD318X(a) (0x318 + (a))
#define ODY_FUSE_NUM_E_RSVD346X(a) (0x346 + (a))
#define ODY_FUSE_NUM_E_RSVD378X(a) (0x378 + (a))
#define ODY_FUSE_NUM_E_RSVD3B9X(a) (0x3b9 + (a))
#define ODY_FUSE_NUM_E_RSVD580X(a) (0x580 + (a))
#define ODY_FUSE_NUM_E_RSVD72 (0x72)
#define ODY_FUSE_NUM_E_RSVD74 (0x74)
#define ODY_FUSE_NUM_E_RSVD8F (0x8f)
#define ODY_FUSE_NUM_E_RSVDB4X(a) (0xb4 + (a))
#define ODY_FUSE_NUM_E_RUN_PLATFORMX(a) (0x75 + (a))
#define ODY_FUSE_NUM_E_SCNT_SROSELX(a) (0x340 + (a))
#define ODY_FUSE_NUM_E_SENSORS_ENABLEX(a) (0x202 + (a))
#define ODY_FUSE_NUM_E_SERIALX(a) (0x500 + (a))
#define ODY_FUSE_NUM_E_SKU_CUSTX(a) (0x3e6 + (a))
#define ODY_FUSE_NUM_E_SSO_CRIPPLE (0x253)
#define ODY_FUSE_NUM_E_TAD_DISABLEX(a) (0x600 + (a))
#define ODY_FUSE_NUM_E_TNI_BASE_V1X(a) (0x360 + (a))
#define ODY_FUSE_NUM_E_TNI_BASE_V2X(a) (0x368 + (a))
#define ODY_FUSE_NUM_E_TNI_BASE_V3X(a) (0x370 + (a))
#define ODY_FUSE_NUM_E_TNI_OFFSET_V1X(a) (0xa00 + (a))
#define ODY_FUSE_NUM_E_TNI_OFFSET_V2X(a) (0xb48 + (a))
#define ODY_FUSE_NUM_E_TNI_OFFSET_V3X(a) (0xc90 + (a))
#define ODY_FUSE_NUM_E_TSN_BG_TRIMX(a) (0xd0 + (a))
#define ODY_FUSE_NUM_E_TSN_CALIBRATEDX(a) (0xd4 + (a))
#define ODY_FUSE_NUM_E_ULTX(a) (0x880 + (a))
#define ODY_FUSE_NUM_E_UUIDX(a) (0x58e + (a))
#define ODY_FUSE_NUM_E_XSX_SMEM_CRIPPLEX(a) (0x3b7 + (a))

#endif /* __ODY_CSRS_FUSE_H__ */
