#ifndef __ODY_CSRS_PCCPF_H__
#define __ODY_CSRS_PCCPF_H__
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
 * PCCPF.
 *
 * This file is auto generated. Do not edit.
 *
 */

/**
 * Enumeration pcc_dev_con_e
 *
 * PCC Device Connection Enumeration
 * Enumerates where the device is connected in the topology. Software must rely on discovery and
 * not use this enumeration as the values will vary by product, and the mnemonics are a super-set
 * of the devices available. The value of the enumeration is formatted as defined by
 * PCC_DEV_CON_S.
 */
#define ODY_PCC_DEV_CON_E_APAX(a) (0x480 + (a))
#define ODY_PCC_DEV_CON_E_AVS (0xf8)
#define ODY_PCC_DEV_CON_E_BTS (0x168)
#define ODY_PCC_DEV_CON_E_CPC (0xd0)
#define ODY_PCC_DEV_CON_E_CST (0x90)
#define ODY_PCC_DEV_CON_E_DSSX(a) (0x2c0 + (a))
#define ODY_PCC_DEV_CON_E_EHSM (0xd8)
#define ODY_PCC_DEV_CON_E_FUS (0x103)
#define ODY_PCC_DEV_CON_E_GIC (0x30)
#define ODY_PCC_DEV_CON_E_GPIO (0x88)
#define ODY_PCC_DEV_CON_E_GSERP_32GX(a) (0x1e0 + (a))
#define ODY_PCC_DEV_CON_E_GTI (0x38)
#define ODY_PCC_DEV_CON_E_I3CMOX(a) (0x4f0 + (a))
#define ODY_PCC_DEV_CON_E_I3CSMX(a) (0x4f4 + (a))
#define ODY_PCC_DEV_CON_E_IOBNX(a) (0x150 + (a))
#define ODY_PCC_DEV_CON_E_IOBPCX(a) (0x158 + (a))
#define ODY_PCC_DEV_CON_E_MDC (0x160)
#define ODY_PCC_DEV_CON_E_MIO_PTP (0x50)
#define ODY_PCC_DEV_CON_E_MIO_TWSX(a) (0x1c0 + (a))
#define ODY_PCC_DEV_CON_E_MRML (0x100)
#define ODY_PCC_DEV_CON_E_MRMLB1 (0x200)
#define ODY_PCC_DEV_CON_E_MRMLB2 (0x300)
#define ODY_PCC_DEV_CON_E_MRMLB3 (0x400)
#define ODY_PCC_DEV_CON_E_NCBX(a) (0x1a0 + (a))
#define ODY_PCC_DEV_CON_E_NCBPCX(a) (0x1b0 + (a))
#define ODY_PCC_DEV_CON_E_OCLAX(a) (0x301 + (a))
#define ODY_PCC_DEV_CON_E_ODM0 (0x800)
#define ODY_PCC_DEV_CON_E_PCCBR_MRML (8)
#define ODY_PCC_DEV_CON_E_PCCBR_MRMLB1 (0x60)
#define ODY_PCC_DEV_CON_E_PCCBR_MRMLB2 (0x68)
#define ODY_PCC_DEV_CON_E_PCCBR_MRMLB3 (0x70)
#define ODY_PCC_DEV_CON_E_PCCBR_ODM0 (0xc0)
#define ODY_PCC_DEV_CON_E_PCCBR_RNM (0x78)
#define ODY_PCC_DEV_CON_E_PCIERCX(a) (0x30000 + 0x10000 * (a))
#define ODY_PCC_DEV_CON_E_PEMX(a) (0x10080 + 8 * (a))
#define ODY_PCC_DEV_CON_E_PEMSECX(a) (0x10000 + 8 * (a))
#define ODY_PCC_DEV_CON_E_RNM (0x500)
#define ODY_PCC_DEV_CON_E_RST (0x101)
#define ODY_PCC_DEV_CON_E_SMMU0 (0x10)
#define ODY_PCC_DEV_CON_E_SMMU1 (0x18)
#define ODY_PCC_DEV_CON_E_SMMU2 (0x20)
#define ODY_PCC_DEV_CON_E_SMMU3 (0x28)
#define ODY_PCC_DEV_CON_E_SPIX(a) (0x40 + 8 * (a))
#define ODY_PCC_DEV_CON_E_TADX(a) (0x380 + (a))
#define ODY_PCC_DEV_CON_E_TSNX(a) (0x401 + (a))
#define ODY_PCC_DEV_CON_E_UAAX(a) (0x1d8 + (a))
#define ODY_PCC_DEV_CON_E_XCPX(a) (0xe0 + 8 * (a))

/**
 * Enumeration pcc_dev_idl_e
 *
 * PCC Device ID Low Enumeration
 * Enumerates the values of the PCI configuration header Device ID bits
 * \<7:0\>.
 */
#define ODY_PCC_DEV_IDL_E_AP5 (0x76)
#define ODY_PCC_DEV_IDL_E_AP6 (0x86)
#define ODY_PCC_DEV_IDL_E_APA (0x93)
#define ODY_PCC_DEV_IDL_E_AVS (0x6a)
#define ODY_PCC_DEV_IDL_E_BCH (0x43)
#define ODY_PCC_DEV_IDL_E_BCH_VF (0x44)
#define ODY_PCC_DEV_IDL_E_BGX (0x26)
#define ODY_PCC_DEV_IDL_E_BPHY (0x89)
#define ODY_PCC_DEV_IDL_E_BTS (0x88)
#define ODY_PCC_DEV_IDL_E_CCS (0x6e)
#define ODY_PCC_DEV_IDL_E_CCU (0x6f)
#define ODY_PCC_DEV_IDL_E_CGX (0x59)
#define ODY_PCC_DEV_IDL_E_CHIP (0)
#define ODY_PCC_DEV_IDL_E_CHIP_VF (3)
#define ODY_PCC_DEV_IDL_E_CPC (0x68)
#define ODY_PCC_DEV_IDL_E_CPT (0x40)
#define ODY_PCC_DEV_IDL_E_CPT_VF (0x41)
#define ODY_PCC_DEV_IDL_E_CST (0x9d)
#define ODY_PCC_DEV_IDL_E_DAP (0x2c)
#define ODY_PCC_DEV_IDL_E_DDF (0x45)
#define ODY_PCC_DEV_IDL_E_DDF_VF (0x46)
#define ODY_PCC_DEV_IDL_E_DFA (0x19)
#define ODY_PCC_DEV_IDL_E_DPI (0x57)
#define ODY_PCC_DEV_IDL_E_DPI5 (0x80)
#define ODY_PCC_DEV_IDL_E_DPI5_VF (0x81)
#define ODY_PCC_DEV_IDL_E_DPI_VF (0x58)
#define ODY_PCC_DEV_IDL_E_DSS (0x90)
#define ODY_PCC_DEV_IDL_E_EHSM (0x72)
#define ODY_PCC_DEV_IDL_E_EMMC2 (0x95)
#define ODY_PCC_DEV_IDL_E_FPA (0x52)
#define ODY_PCC_DEV_IDL_E_FPA_VF (0x53)
#define ODY_PCC_DEV_IDL_E_FUS5 (0x74)
#define ODY_PCC_DEV_IDL_E_FUSF (0x32)
#define ODY_PCC_DEV_IDL_E_GIC (9)
#define ODY_PCC_DEV_IDL_E_GIC5 (0x71)
#define ODY_PCC_DEV_IDL_E_GPIO (0xa)
#define ODY_PCC_DEV_IDL_E_GSER (0x25)
#define ODY_PCC_DEV_IDL_E_GSERC (0x3b)
#define ODY_PCC_DEV_IDL_E_GSERJ (0x3c)
#define ODY_PCC_DEV_IDL_E_GSERM (0x9a)
#define ODY_PCC_DEV_IDL_E_GSERP (0x3a)
#define ODY_PCC_DEV_IDL_E_GSERP_32G (0x3e)
#define ODY_PCC_DEV_IDL_E_GSERP_64G (0x3f)
#define ODY_PCC_DEV_IDL_E_GSERR (0x39)
#define ODY_PCC_DEV_IDL_E_GTI (0x17)
#define ODY_PCC_DEV_IDL_E_I3C (0x9c)
#define ODY_PCC_DEV_IDL_E_I3CMO (0xa0)
#define ODY_PCC_DEV_IDL_E_I3CSM (0xa1)
#define ODY_PCC_DEV_IDL_E_IOBN (0x27)
#define ODY_PCC_DEV_IDL_E_IOBN5 (0x6b)
#define ODY_PCC_DEV_IDL_E_IOBN6 (0x94)
#define ODY_PCC_DEV_IDL_E_IOBPC (0xa3)
#define ODY_PCC_DEV_IDL_E_KEY (0x16)
#define ODY_PCC_DEV_IDL_E_L2C (0x21)
#define ODY_PCC_DEV_IDL_E_L2C_CBC (0x2f)
#define ODY_PCC_DEV_IDL_E_L2C_MCI (0x30)
#define ODY_PCC_DEV_IDL_E_L2C_TAD (0x2e)
#define ODY_PCC_DEV_IDL_E_LBK (0x42)
#define ODY_PCC_DEV_IDL_E_LBK5 (0x61)
#define ODY_PCC_DEV_IDL_E_LMC (0x22)
#define ODY_PCC_DEV_IDL_E_MCC (0x70)
#define ODY_PCC_DEV_IDL_E_MCS (0x96)
#define ODY_PCC_DEV_IDL_E_MDC (0x73)
#define ODY_PCC_DEV_IDL_E_MIO_BOOT (0x11)
#define ODY_PCC_DEV_IDL_E_MIO_EMM (0x10)
#define ODY_PCC_DEV_IDL_E_MIO_FUS (0x31)
#define ODY_PCC_DEV_IDL_E_MIO_PTP (0xc)
#define ODY_PCC_DEV_IDL_E_MIO_PTP5 (0x9e)
#define ODY_PCC_DEV_IDL_E_MIO_TWS (0x12)
#define ODY_PCC_DEV_IDL_E_MIX (0xd)
#define ODY_PCC_DEV_IDL_E_ML (0x92)
#define ODY_PCC_DEV_IDL_E_MPI (0xb)
#define ODY_PCC_DEV_IDL_E_MRML (1)
#define ODY_PCC_DEV_IDL_E_MRML5 (0x75)
#define ODY_PCC_DEV_IDL_E_NCB (0x97)
#define ODY_PCC_DEV_IDL_E_NCBPC (0xa2)
#define ODY_PCC_DEV_IDL_E_NCSI (0x29)
#define ODY_PCC_DEV_IDL_E_NDF (0x4f)
#define ODY_PCC_DEV_IDL_E_NIC (0x1e)
#define ODY_PCC_DEV_IDL_E_NIC_VF (0x34)
#define ODY_PCC_DEV_IDL_E_OCLA (0x23)
#define ODY_PCC_DEV_IDL_E_OCX (0x13)
#define ODY_PCC_DEV_IDL_E_OCX5 (0x79)
#define ODY_PCC_DEV_IDL_E_ODM (0x8b)
#define ODY_PCC_DEV_IDL_E_ODM_VF (0x8c)
#define ODY_PCC_DEV_IDL_E_OSM (0x24)
#define ODY_PCC_DEV_IDL_E_PBUS (0x35)
#define ODY_PCC_DEV_IDL_E_PCCBR (2)
#define ODY_PCC_DEV_IDL_E_PCIERC (0x2d)
#define ODY_PCC_DEV_IDL_E_PCM (0x4e)
#define ODY_PCC_DEV_IDL_E_PEM (0x20)
#define ODY_PCC_DEV_IDL_E_PEM5 (0x6c)
#define ODY_PCC_DEV_IDL_E_PEMSEC (0x28)
#define ODY_PCC_DEV_IDL_E_PKI (0x47)
#define ODY_PCC_DEV_IDL_E_PKO (0x48)
#define ODY_PCC_DEV_IDL_E_PKO_VF (0x49)
#define ODY_PCC_DEV_IDL_E_PSBM (0x69)
#define ODY_PCC_DEV_IDL_E_RAD (0x1d)
#define ODY_PCC_DEV_IDL_E_RAD_VF (0x36)
#define ODY_PCC_DEV_IDL_E_RGX (0x54)
#define ODY_PCC_DEV_IDL_E_RNM (0x18)
#define ODY_PCC_DEV_IDL_E_RNM2 (0x98)
#define ODY_PCC_DEV_IDL_E_RNM2_VF (0x99)
#define ODY_PCC_DEV_IDL_E_RNM_VF (0x33)
#define ODY_PCC_DEV_IDL_E_RPM (0x60)
#define ODY_PCC_DEV_IDL_E_RPM2 (0x9f)
#define ODY_PCC_DEV_IDL_E_RST (0xe)
#define ODY_PCC_DEV_IDL_E_RST5 (0x85)
#define ODY_PCC_DEV_IDL_E_RSVD_NONE (0xff)
#define ODY_PCC_DEV_IDL_E_RTT (0x8a)
#define ODY_PCC_DEV_IDL_E_RVU (0x63)
#define ODY_PCC_DEV_IDL_E_RVU_AF (0x65)
#define ODY_PCC_DEV_IDL_E_RVU_VF (0x64)
#define ODY_PCC_DEV_IDL_E_SATA (0x1c)
#define ODY_PCC_DEV_IDL_E_SATA5 (0x84)
#define ODY_PCC_DEV_IDL_E_SGP (0x2a)
#define ODY_PCC_DEV_IDL_E_SLI (0x15)
#define ODY_PCC_DEV_IDL_E_SLIRE (0x38)
#define ODY_PCC_DEV_IDL_E_SMI (0x2b)
#define ODY_PCC_DEV_IDL_E_SMMU (8)
#define ODY_PCC_DEV_IDL_E_SMMU3 (0x62)
#define ODY_PCC_DEV_IDL_E_SPI (0x9b)
#define ODY_PCC_DEV_IDL_E_SSO (0x4a)
#define ODY_PCC_DEV_IDL_E_SSOW (0x4c)
#define ODY_PCC_DEV_IDL_E_SSOW_VF (0x4d)
#define ODY_PCC_DEV_IDL_E_SSO_VF (0x4b)
#define ODY_PCC_DEV_IDL_E_SW_RSVDX(a) (0xe0 + (a))
#define ODY_PCC_DEV_IDL_E_SW_RVU_AF_VF (0xf8)
#define ODY_PCC_DEV_IDL_E_SW_RVU_CPT10_PF (0xf2)
#define ODY_PCC_DEV_IDL_E_SW_RVU_CPT10_VF (0xf3)
#define ODY_PCC_DEV_IDL_E_SW_RVU_CPT_PF (0xfd)
#define ODY_PCC_DEV_IDL_E_SW_RVU_CPT_VF (0xfe)
#define ODY_PCC_DEV_IDL_E_SW_RVU_IPSEC_INLINE_PF (0xf0)
#define ODY_PCC_DEV_IDL_E_SW_RVU_IPSEC_INLINE_VF (0xf1)
#define ODY_PCC_DEV_IDL_E_SW_RVU_NPA_PF (0xfb)
#define ODY_PCC_DEV_IDL_E_SW_RVU_NPA_VF (0xfc)
#define ODY_PCC_DEV_IDL_E_SW_RVU_REE_PF (0xf4)
#define ODY_PCC_DEV_IDL_E_SW_RVU_REE_VF (0xf5)
#define ODY_PCC_DEV_IDL_E_SW_RVU_SDP_PF (0xf6)
#define ODY_PCC_DEV_IDL_E_SW_RVU_SDP_VF (0xf7)
#define ODY_PCC_DEV_IDL_E_SW_RVU_SSO_TIM_PF (0xf9)
#define ODY_PCC_DEV_IDL_E_SW_RVU_SSO_TIM_VF (0xfa)
#define ODY_PCC_DEV_IDL_E_TAD (0x91)
#define ODY_PCC_DEV_IDL_E_TIM (0x50)
#define ODY_PCC_DEV_IDL_E_TIM_VF (0x51)
#define ODY_PCC_DEV_IDL_E_TNS (0x1f)
#define ODY_PCC_DEV_IDL_E_TSN (0x6d)
#define ODY_PCC_DEV_IDL_E_UAA (0xf)
#define ODY_PCC_DEV_IDL_E_USBDRD (0x55)
#define ODY_PCC_DEV_IDL_E_USBH (0x1b)
#define ODY_PCC_DEV_IDL_E_VRM (0x14)
#define ODY_PCC_DEV_IDL_E_XCP (0x67)
#define ODY_PCC_DEV_IDL_E_XCV (0x56)
#define ODY_PCC_DEV_IDL_E_ZIP (0x1a)
#define ODY_PCC_DEV_IDL_E_ZIP5 (0x82)
#define ODY_PCC_DEV_IDL_E_ZIP5_VF (0x83)
#define ODY_PCC_DEV_IDL_E_ZIP_VF (0x37)

/**
 * Enumeration pcc_jtag_dev_e
 *
 * PCC JTAG Device Enumeration
 * Enumerates the device number sub-field of Marvell-assigned JTAG ID_Codes. Device number is
 * mapped to Part_Number[7:4]. Where Part_Number [15:0] is mapped to ID_Code[27:12].
 */
#define ODY_PCC_JTAG_DEV_E_DAP (1)
#define ODY_PCC_JTAG_DEV_E_ECP (4)
#define ODY_PCC_JTAG_DEV_E_EHSM (5)
#define ODY_PCC_JTAG_DEV_E_MAIN (0)
#define ODY_PCC_JTAG_DEV_E_MCP (3)
#define ODY_PCC_JTAG_DEV_E_SCP (2)

/**
 * Enumeration pcc_pidr_partnum0_e
 *
 * PCC PIDR Part Number 0 Enumeration
 * When *_PIDR1[PARTNUM1] = PCC_PIDR_PARTNUM1_E::COMP, enumerates the values of Marvell-
 * assigned CoreSight PIDR part number 0 fields.
 * For example SMMU()_PIDR0[PARTNUM0].
 */
#define ODY_PCC_PIDR_PARTNUM0_E_CTI (0xd)
#define ODY_PCC_PIDR_PARTNUM0_E_DBG (0xe)
#define ODY_PCC_PIDR_PARTNUM0_E_ETR (0x13)
#define ODY_PCC_PIDR_PARTNUM0_E_GTI_BZ (4)
#define ODY_PCC_PIDR_PARTNUM0_E_GTI_CC (5)
#define ODY_PCC_PIDR_PARTNUM0_E_GTI_CTL (6)
#define ODY_PCC_PIDR_PARTNUM0_E_GTI_RD (7)
#define ODY_PCC_PIDR_PARTNUM0_E_GTI_WC (8)
#define ODY_PCC_PIDR_PARTNUM0_E_GTI_WR (9)
#define ODY_PCC_PIDR_PARTNUM0_E_NONE (0)
#define ODY_PCC_PIDR_PARTNUM0_E_PMU (0xa)
#define ODY_PCC_PIDR_PARTNUM0_E_RAS (0x12)
#define ODY_PCC_PIDR_PARTNUM0_E_RAS_MCC (0x14)
#define ODY_PCC_PIDR_PARTNUM0_E_SMMU (0xb)
#define ODY_PCC_PIDR_PARTNUM0_E_SMMU3 (0x11)
#define ODY_PCC_PIDR_PARTNUM0_E_SYSCTI (0xf)
#define ODY_PCC_PIDR_PARTNUM0_E_TRC (0x10)
#define ODY_PCC_PIDR_PARTNUM0_E_UAA (0xc)

/**
 * Enumeration pcc_pidr_partnum1_e
 *
 * PCC PIDR Part Number 1 Enumeration
 * Enumerates the values of Marvell-assigned CoreSight PIDR PARTNUM1 fields, for example
 * SMMU()_PIDR1[PARTNUM1].
 */
#define ODY_PCC_PIDR_PARTNUM1_E_COMP (2)
#define ODY_PCC_PIDR_PARTNUM1_E_PROD (1)

/**
 * Enumeration pcc_prod_e
 *
 * PCC Device ID Product Enumeration
 * Enumerates the die's chip identifier, used in PCCPF_XXX_ID[DEVID]\<15:8\> and other
 * chip identification registers.
 *
 * See also GPIO_PKG_VER to differentiate between package variants.
 */
#define ODY_PCC_PROD_E_CN103XX (0xbd)
#define ODY_PCC_PROD_E_CN106XX (0xb9)
#define ODY_PCC_PROD_E_CN109XX (0xb8)
#define ODY_PCC_PROD_E_CN81XX (0xa2)
#define ODY_PCC_PROD_E_CN83XX (0xa3)
#define ODY_PCC_PROD_E_CN88XX (0xa1)
#define ODY_PCC_PROD_E_CN93XX (0xb2)
#define ODY_PCC_PROD_E_CN98XX (0xb1)
#define ODY_PCC_PROD_E_CN99XX (0xaf)
#define ODY_PCC_PROD_E_CNF105XX (0xba)
#define ODY_PCC_PROD_E_CNF95XX (0xb3)
#define ODY_PCC_PROD_E_CNF95XXMM (0xb5)
#define ODY_PCC_PROD_E_GEN (0xa0)
#define ODY_PCC_PROD_E_LOKI (0xb4)
#define ODY_PCC_PROD_E_ODYSSEY (0xbf)
#define ODY_PCC_PROD_E_THOR (0xbc)

/**
 * Enumeration pcc_vendor_e
 *
 * PCC Vendor ID Enumeration
 * Enumerates the values of the PCI configuration header vendor ID.
 */
#define ODY_PCC_VENDOR_E_CAVIUM (0x177d)

/**
 * Enumeration pcc_vsecid_e
 *
 * PCC Vendor-Specific Capability ID Enumeration
 * Enumerates the values of Marvell's vendor-specific PCI capability IDs.
 */
#define ODY_PCC_VSECID_E_NONE (0)
#define ODY_PCC_VSECID_E_SY_RAS_DES (2)
#define ODY_PCC_VSECID_E_SY_RAS_DP (1)
#define ODY_PCC_VSECID_E_SY_RSVDX(a) (0 + (a))
#define ODY_PCC_VSECID_E_TX_BR (0xa1)
#define ODY_PCC_VSECID_E_TX_PF (0xa0)
#define ODY_PCC_VSECID_E_TX_VF (0xa2)

/**
 * Structure pcc_class_code_s
 *
 * PCC Class Code Structure
 * Defines the components of the PCC class code.
 */
union ody_pcc_class_code_s {
	uint32_t u;
	struct ody_pcc_class_code_s_s {
		uint32_t pi                          : 8;
		uint32_t sc                          : 8;
		uint32_t bcc                         : 8;
		uint32_t reserved_24_31              : 8;
	} s;
	/* struct ody_pcc_class_code_s_s cn; */
};

/**
 * Structure pcc_dev_con_s
 *
 * PCC Device Connection Structure
 * Defines the components of the PCC device connection values enumerated by PCC_DEV_CON_E,
 * using ARI format.
 */
union ody_pcc_dev_con_s {
	uint32_t u;
	struct ody_pcc_dev_con_s_s {
		uint32_t func                        : 8;
		uint32_t bus                         : 8;
		uint32_t dmn                         : 6;
		uint32_t reserved_22_31              : 10;
	} s;
	/* struct ody_pcc_dev_con_s_s cn; */
};

/**
 * Structure pcc_ea_entry_s
 *
 * PCC PCI Enhanced Allocation Entry Structure
 * This structure describes the format of an enhanced allocation entry stored in
 * PCCPF_XXX_EA_ENTRY(). This describes what PCC hardware generates only; software must
 * implement a full EA parser including testing the [ENTRY_SIZE], [BASE64] and
 * [OFFSET64] fields.
 *
 * PCI configuration registers are 32-bits, however due to tool limitations this
 * structure is described as a little-endian 64-bit wide structure.
 */
union ody_pcc_ea_entry_s {
	uint64_t u[3];
	struct ody_pcc_ea_entry_s_s {
		uint64_t entry_size                  : 3;
		uint64_t reserved_3                  : 1;
		uint64_t bei                         : 4;
		uint64_t pri_prop                    : 8;
		uint64_t sec_prop                    : 8;
		uint64_t reserved_24_29              : 6;
		uint64_t w                           : 1;
		uint64_t enable                      : 1;
		uint64_t reserved_32                 : 1;
		uint64_t base64                      : 1;
		uint64_t basel                       : 30;
		uint64_t reserved_64                 : 1;
		uint64_t offset64                    : 1;
		uint64_t offsetl                     : 30;
		uint64_t baseh                       : 32;
		uint64_t offseth                     : 32;
		uint64_t reserved_160_191            : 32;
	} s;
	/* struct ody_pcc_ea_entry_s_s cn; */
};

/**
 * Register (PCCPF) pccpf_xxx_aer_cap_hdr
 *
 * PCC PF AER Capability Header Register
 * This register is the header of the 44-byte PCI advanced error reporting (AER) capability
 * structure.
 */
union ody_pccpf_xxx_aer_cap_hdr {
	uint32_t u;
	struct ody_pccpf_xxx_aer_cap_hdr_s {
		uint32_t aerid                       : 16;
		uint32_t cv                          : 4;
		uint32_t nco                         : 12;
	} s;
	/* struct ody_pccpf_xxx_aer_cap_hdr_s cn; */
};
typedef union ody_pccpf_xxx_aer_cap_hdr ody_pccpf_xxx_aer_cap_hdr_t;

#define ODY_PCCPF_XXX_AER_CAP_HDR ODY_PCCPF_XXX_AER_CAP_HDR_FUNC()
static inline uint64_t ODY_PCCPF_XXX_AER_CAP_HDR_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCCPF_XXX_AER_CAP_HDR_FUNC(void)
{
	return 0x140;
}

#define typedef_ODY_PCCPF_XXX_AER_CAP_HDR ody_pccpf_xxx_aer_cap_hdr_t
#define bustype_ODY_PCCPF_XXX_AER_CAP_HDR CSR_TYPE_PCCPF
#define basename_ODY_PCCPF_XXX_AER_CAP_HDR "PCCPF_XXX_AER_CAP_HDR"
#define busnum_ODY_PCCPF_XXX_AER_CAP_HDR 0
#define arguments_ODY_PCCPF_XXX_AER_CAP_HDR -1, -1, -1, -1

/**
 * Register (PCCPF) pccpf_xxx_aer_cor_mask
 *
 * PCC PF AER Correctable Error Mask Register
 * This register contains a mask bit for each nonreserved bit in PCCPF_XXX_AER_COR_STATUS.
 * The mask bits are R/W for PCIe and software compatibility but are not used by hardware.
 *
 * This register is reset on a chip domain reset.
 */
union ody_pccpf_xxx_aer_cor_mask {
	uint32_t u;
	struct ody_pccpf_xxx_aer_cor_mask_s {
		uint32_t rcvr                        : 1;
		uint32_t reserved_1_5                : 5;
		uint32_t bad_tlp                     : 1;
		uint32_t bad_dllp                    : 1;
		uint32_t rep_roll                    : 1;
		uint32_t reserved_9_11               : 3;
		uint32_t rep_timer                   : 1;
		uint32_t adv_nfat                    : 1;
		uint32_t cor_intn                    : 1;
		uint32_t reserved_15_31              : 17;
	} s;
	/* struct ody_pccpf_xxx_aer_cor_mask_s cn; */
};
typedef union ody_pccpf_xxx_aer_cor_mask ody_pccpf_xxx_aer_cor_mask_t;

#define ODY_PCCPF_XXX_AER_COR_MASK ODY_PCCPF_XXX_AER_COR_MASK_FUNC()
static inline uint64_t ODY_PCCPF_XXX_AER_COR_MASK_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCCPF_XXX_AER_COR_MASK_FUNC(void)
{
	return 0x154;
}

#define typedef_ODY_PCCPF_XXX_AER_COR_MASK ody_pccpf_xxx_aer_cor_mask_t
#define bustype_ODY_PCCPF_XXX_AER_COR_MASK CSR_TYPE_PCCPF
#define basename_ODY_PCCPF_XXX_AER_COR_MASK "PCCPF_XXX_AER_COR_MASK"
#define busnum_ODY_PCCPF_XXX_AER_COR_MASK 0
#define arguments_ODY_PCCPF_XXX_AER_COR_MASK -1, -1, -1, -1

/**
 * Register (PCCPF) pccpf_xxx_aer_cor_status
 *
 * PCC PF AER Correctable Error Status Register
 * This register is reset on a chip domain reset.
 */
union ody_pccpf_xxx_aer_cor_status {
	uint32_t u;
	struct ody_pccpf_xxx_aer_cor_status_s {
		uint32_t rcvr                        : 1;
		uint32_t reserved_1_5                : 5;
		uint32_t bad_tlp                     : 1;
		uint32_t bad_dllp                    : 1;
		uint32_t rep_roll                    : 1;
		uint32_t reserved_9_11               : 3;
		uint32_t rep_timer                   : 1;
		uint32_t adv_nfat                    : 1;
		uint32_t cor_intn                    : 1;
		uint32_t reserved_15_31              : 17;
	} s;
	/* struct ody_pccpf_xxx_aer_cor_status_s cn; */
};
typedef union ody_pccpf_xxx_aer_cor_status ody_pccpf_xxx_aer_cor_status_t;

#define ODY_PCCPF_XXX_AER_COR_STATUS ODY_PCCPF_XXX_AER_COR_STATUS_FUNC()
static inline uint64_t ODY_PCCPF_XXX_AER_COR_STATUS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCCPF_XXX_AER_COR_STATUS_FUNC(void)
{
	return 0x150;
}

#define typedef_ODY_PCCPF_XXX_AER_COR_STATUS ody_pccpf_xxx_aer_cor_status_t
#define bustype_ODY_PCCPF_XXX_AER_COR_STATUS CSR_TYPE_PCCPF
#define basename_ODY_PCCPF_XXX_AER_COR_STATUS "PCCPF_XXX_AER_COR_STATUS"
#define busnum_ODY_PCCPF_XXX_AER_COR_STATUS 0
#define arguments_ODY_PCCPF_XXX_AER_COR_STATUS -1, -1, -1, -1

/**
 * Register (PCCPF) pccpf_xxx_aer_uncor_mask
 *
 * PCC PF AER Uncorrectable Error Mask Register
 * This register contains a mask bit for each nonreserved bit in PCCPF_XXX_AER_UNCOR_STATUS.
 * The mask bits are R/W for PCIe and software compatibility but are not used by hardware.
 *
 * This register is reset on a chip domain reset.
 */
union ody_pccpf_xxx_aer_uncor_mask {
	uint32_t u;
	struct ody_pccpf_xxx_aer_uncor_mask_s {
		uint32_t reserved_0_3                : 4;
		uint32_t dlp                         : 1;
		uint32_t reserved_5_11               : 7;
		uint32_t poison_tlp                  : 1;
		uint32_t reserved_13                 : 1;
		uint32_t comp_time                   : 1;
		uint32_t reserved_15                 : 1;
		uint32_t unx_comp                    : 1;
		uint32_t reserved_17                 : 1;
		uint32_t malf_tlp                    : 1;
		uint32_t reserved_19                 : 1;
		uint32_t unsup                       : 1;
		uint32_t reserved_21                 : 1;
		uint32_t uncor_intn                  : 1;
		uint32_t reserved_23_31              : 9;
	} s;
	/* struct ody_pccpf_xxx_aer_uncor_mask_s cn; */
};
typedef union ody_pccpf_xxx_aer_uncor_mask ody_pccpf_xxx_aer_uncor_mask_t;

#define ODY_PCCPF_XXX_AER_UNCOR_MASK ODY_PCCPF_XXX_AER_UNCOR_MASK_FUNC()
static inline uint64_t ODY_PCCPF_XXX_AER_UNCOR_MASK_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCCPF_XXX_AER_UNCOR_MASK_FUNC(void)
{
	return 0x148;
}

#define typedef_ODY_PCCPF_XXX_AER_UNCOR_MASK ody_pccpf_xxx_aer_uncor_mask_t
#define bustype_ODY_PCCPF_XXX_AER_UNCOR_MASK CSR_TYPE_PCCPF
#define basename_ODY_PCCPF_XXX_AER_UNCOR_MASK "PCCPF_XXX_AER_UNCOR_MASK"
#define busnum_ODY_PCCPF_XXX_AER_UNCOR_MASK 0
#define arguments_ODY_PCCPF_XXX_AER_UNCOR_MASK -1, -1, -1, -1

/**
 * Register (PCCPF) pccpf_xxx_aer_uncor_sever
 *
 * PCC PF AER Uncorrectable Error Severity Register
 * This register controls whether an individual error is reported as a nonfatal or
 * fatal error. An error is reported as fatal when the corresponding severity bit is set, and
 * nonfatal otherwise.
 *
 * This register is reset on a chip domain reset.
 */
union ody_pccpf_xxx_aer_uncor_sever {
	uint32_t u;
	struct ody_pccpf_xxx_aer_uncor_sever_s {
		uint32_t reserved_0_3                : 4;
		uint32_t dlp                         : 1;
		uint32_t reserved_5_11               : 7;
		uint32_t poison_tlp                  : 1;
		uint32_t reserved_13                 : 1;
		uint32_t comp_time                   : 1;
		uint32_t reserved_15                 : 1;
		uint32_t unx_comp                    : 1;
		uint32_t reserved_17                 : 1;
		uint32_t malf_tlp                    : 1;
		uint32_t reserved_19                 : 1;
		uint32_t unsup                       : 1;
		uint32_t reserved_21                 : 1;
		uint32_t uncor_intn                  : 1;
		uint32_t reserved_23_31              : 9;
	} s;
	/* struct ody_pccpf_xxx_aer_uncor_sever_s cn; */
};
typedef union ody_pccpf_xxx_aer_uncor_sever ody_pccpf_xxx_aer_uncor_sever_t;

#define ODY_PCCPF_XXX_AER_UNCOR_SEVER ODY_PCCPF_XXX_AER_UNCOR_SEVER_FUNC()
static inline uint64_t ODY_PCCPF_XXX_AER_UNCOR_SEVER_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCCPF_XXX_AER_UNCOR_SEVER_FUNC(void)
{
	return 0x14c;
}

#define typedef_ODY_PCCPF_XXX_AER_UNCOR_SEVER ody_pccpf_xxx_aer_uncor_sever_t
#define bustype_ODY_PCCPF_XXX_AER_UNCOR_SEVER CSR_TYPE_PCCPF
#define basename_ODY_PCCPF_XXX_AER_UNCOR_SEVER "PCCPF_XXX_AER_UNCOR_SEVER"
#define busnum_ODY_PCCPF_XXX_AER_UNCOR_SEVER 0
#define arguments_ODY_PCCPF_XXX_AER_UNCOR_SEVER -1, -1, -1, -1

/**
 * Register (PCCPF) pccpf_xxx_aer_uncor_status
 *
 * PCC PF AER Uncorrectable Error Status Register
 * This register is reset on a chip domain reset.
 */
union ody_pccpf_xxx_aer_uncor_status {
	uint32_t u;
	struct ody_pccpf_xxx_aer_uncor_status_s {
		uint32_t reserved_0_3                : 4;
		uint32_t dlp                         : 1;
		uint32_t reserved_5_11               : 7;
		uint32_t poison_tlp                  : 1;
		uint32_t reserved_13                 : 1;
		uint32_t comp_time                   : 1;
		uint32_t reserved_15                 : 1;
		uint32_t unx_comp                    : 1;
		uint32_t reserved_17                 : 1;
		uint32_t malf_tlp                    : 1;
		uint32_t reserved_19                 : 1;
		uint32_t unsup                       : 1;
		uint32_t reserved_21                 : 1;
		uint32_t uncor_intn                  : 1;
		uint32_t reserved_23_31              : 9;
	} s;
	/* struct ody_pccpf_xxx_aer_uncor_status_s cn; */
};
typedef union ody_pccpf_xxx_aer_uncor_status ody_pccpf_xxx_aer_uncor_status_t;

#define ODY_PCCPF_XXX_AER_UNCOR_STATUS ODY_PCCPF_XXX_AER_UNCOR_STATUS_FUNC()
static inline uint64_t ODY_PCCPF_XXX_AER_UNCOR_STATUS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCCPF_XXX_AER_UNCOR_STATUS_FUNC(void)
{
	return 0x144;
}

#define typedef_ODY_PCCPF_XXX_AER_UNCOR_STATUS ody_pccpf_xxx_aer_uncor_status_t
#define bustype_ODY_PCCPF_XXX_AER_UNCOR_STATUS CSR_TYPE_PCCPF
#define basename_ODY_PCCPF_XXX_AER_UNCOR_STATUS "PCCPF_XXX_AER_UNCOR_STATUS"
#define busnum_ODY_PCCPF_XXX_AER_UNCOR_STATUS 0
#define arguments_ODY_PCCPF_XXX_AER_UNCOR_STATUS -1, -1, -1, -1

/**
 * Register (PCCPF) pccpf_xxx_ari_cap_hdr
 *
 * PCC PF ARI Capability Header Register
 * This register is the header of the eight-byte PCI ARI capability structure.
 * If this device is on bus 0x0, this ARI header is not present and reads as 0x0.
 */
union ody_pccpf_xxx_ari_cap_hdr {
	uint32_t u;
	struct ody_pccpf_xxx_ari_cap_hdr_s {
		uint32_t ariid                       : 16;
		uint32_t cv                          : 4;
		uint32_t nco                         : 12;
	} s;
	/* struct ody_pccpf_xxx_ari_cap_hdr_s cn; */
};
typedef union ody_pccpf_xxx_ari_cap_hdr ody_pccpf_xxx_ari_cap_hdr_t;

#define ODY_PCCPF_XXX_ARI_CAP_HDR ODY_PCCPF_XXX_ARI_CAP_HDR_FUNC()
static inline uint64_t ODY_PCCPF_XXX_ARI_CAP_HDR_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCCPF_XXX_ARI_CAP_HDR_FUNC(void)
{
	return 0x170;
}

#define typedef_ODY_PCCPF_XXX_ARI_CAP_HDR ody_pccpf_xxx_ari_cap_hdr_t
#define bustype_ODY_PCCPF_XXX_ARI_CAP_HDR CSR_TYPE_PCCPF
#define basename_ODY_PCCPF_XXX_ARI_CAP_HDR "PCCPF_XXX_ARI_CAP_HDR"
#define busnum_ODY_PCCPF_XXX_ARI_CAP_HDR 0
#define arguments_ODY_PCCPF_XXX_ARI_CAP_HDR -1, -1, -1, -1

/**
 * Register (PCCPF) pccpf_xxx_bar0l
 *
 * PCC PF Base Address 0 Lower Register
 */
union ody_pccpf_xxx_bar0l {
	uint32_t u;
	struct ody_pccpf_xxx_bar0l_s {
		uint32_t bar                         : 32;
	} s;
	/* struct ody_pccpf_xxx_bar0l_s cn; */
};
typedef union ody_pccpf_xxx_bar0l ody_pccpf_xxx_bar0l_t;

#define ODY_PCCPF_XXX_BAR0L ODY_PCCPF_XXX_BAR0L_FUNC()
static inline uint64_t ODY_PCCPF_XXX_BAR0L_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCCPF_XXX_BAR0L_FUNC(void)
{
	return 0x10;
}

#define typedef_ODY_PCCPF_XXX_BAR0L ody_pccpf_xxx_bar0l_t
#define bustype_ODY_PCCPF_XXX_BAR0L CSR_TYPE_PCCPF
#define basename_ODY_PCCPF_XXX_BAR0L "PCCPF_XXX_BAR0L"
#define busnum_ODY_PCCPF_XXX_BAR0L 0
#define arguments_ODY_PCCPF_XXX_BAR0L -1, -1, -1, -1

/**
 * Register (PCCPF) pccpf_xxx_bar0u
 *
 * PCC PF Base Address 0 Upper Register
 */
union ody_pccpf_xxx_bar0u {
	uint32_t u;
	struct ody_pccpf_xxx_bar0u_s {
		uint32_t bar                         : 32;
	} s;
	/* struct ody_pccpf_xxx_bar0u_s cn; */
};
typedef union ody_pccpf_xxx_bar0u ody_pccpf_xxx_bar0u_t;

#define ODY_PCCPF_XXX_BAR0U ODY_PCCPF_XXX_BAR0U_FUNC()
static inline uint64_t ODY_PCCPF_XXX_BAR0U_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCCPF_XXX_BAR0U_FUNC(void)
{
	return 0x14;
}

#define typedef_ODY_PCCPF_XXX_BAR0U ody_pccpf_xxx_bar0u_t
#define bustype_ODY_PCCPF_XXX_BAR0U CSR_TYPE_PCCPF
#define basename_ODY_PCCPF_XXX_BAR0U "PCCPF_XXX_BAR0U"
#define busnum_ODY_PCCPF_XXX_BAR0U 0
#define arguments_ODY_PCCPF_XXX_BAR0U -1, -1, -1, -1

/**
 * Register (PCCPF) pccpf_xxx_bar2l
 *
 * PCC PF Base Address 2 Lower Register
 */
union ody_pccpf_xxx_bar2l {
	uint32_t u;
	struct ody_pccpf_xxx_bar2l_s {
		uint32_t bar                         : 32;
	} s;
	/* struct ody_pccpf_xxx_bar2l_s cn; */
};
typedef union ody_pccpf_xxx_bar2l ody_pccpf_xxx_bar2l_t;

#define ODY_PCCPF_XXX_BAR2L ODY_PCCPF_XXX_BAR2L_FUNC()
static inline uint64_t ODY_PCCPF_XXX_BAR2L_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCCPF_XXX_BAR2L_FUNC(void)
{
	return 0x18;
}

#define typedef_ODY_PCCPF_XXX_BAR2L ody_pccpf_xxx_bar2l_t
#define bustype_ODY_PCCPF_XXX_BAR2L CSR_TYPE_PCCPF
#define basename_ODY_PCCPF_XXX_BAR2L "PCCPF_XXX_BAR2L"
#define busnum_ODY_PCCPF_XXX_BAR2L 0
#define arguments_ODY_PCCPF_XXX_BAR2L -1, -1, -1, -1

/**
 * Register (PCCPF) pccpf_xxx_bar2u
 *
 * PCC PF Base Address 2 Upper Register
 */
union ody_pccpf_xxx_bar2u {
	uint32_t u;
	struct ody_pccpf_xxx_bar2u_s {
		uint32_t bar                         : 32;
	} s;
	/* struct ody_pccpf_xxx_bar2u_s cn; */
};
typedef union ody_pccpf_xxx_bar2u ody_pccpf_xxx_bar2u_t;

#define ODY_PCCPF_XXX_BAR2U ODY_PCCPF_XXX_BAR2U_FUNC()
static inline uint64_t ODY_PCCPF_XXX_BAR2U_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCCPF_XXX_BAR2U_FUNC(void)
{
	return 0x1c;
}

#define typedef_ODY_PCCPF_XXX_BAR2U ody_pccpf_xxx_bar2u_t
#define bustype_ODY_PCCPF_XXX_BAR2U CSR_TYPE_PCCPF
#define basename_ODY_PCCPF_XXX_BAR2U "PCCPF_XXX_BAR2U"
#define busnum_ODY_PCCPF_XXX_BAR2U 0
#define arguments_ODY_PCCPF_XXX_BAR2U -1, -1, -1, -1

/**
 * Register (PCCPF) pccpf_xxx_bar4l
 *
 * PCC PF Base Address 4 Lower Register
 */
union ody_pccpf_xxx_bar4l {
	uint32_t u;
	struct ody_pccpf_xxx_bar4l_s {
		uint32_t bar                         : 32;
	} s;
	/* struct ody_pccpf_xxx_bar4l_s cn; */
};
typedef union ody_pccpf_xxx_bar4l ody_pccpf_xxx_bar4l_t;

#define ODY_PCCPF_XXX_BAR4L ODY_PCCPF_XXX_BAR4L_FUNC()
static inline uint64_t ODY_PCCPF_XXX_BAR4L_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCCPF_XXX_BAR4L_FUNC(void)
{
	return 0x20;
}

#define typedef_ODY_PCCPF_XXX_BAR4L ody_pccpf_xxx_bar4l_t
#define bustype_ODY_PCCPF_XXX_BAR4L CSR_TYPE_PCCPF
#define basename_ODY_PCCPF_XXX_BAR4L "PCCPF_XXX_BAR4L"
#define busnum_ODY_PCCPF_XXX_BAR4L 0
#define arguments_ODY_PCCPF_XXX_BAR4L -1, -1, -1, -1

/**
 * Register (PCCPF) pccpf_xxx_bar4u
 *
 * PCC PF Base Address 4 Upper Register
 */
union ody_pccpf_xxx_bar4u {
	uint32_t u;
	struct ody_pccpf_xxx_bar4u_s {
		uint32_t bar                         : 32;
	} s;
	/* struct ody_pccpf_xxx_bar4u_s cn; */
};
typedef union ody_pccpf_xxx_bar4u ody_pccpf_xxx_bar4u_t;

#define ODY_PCCPF_XXX_BAR4U ODY_PCCPF_XXX_BAR4U_FUNC()
static inline uint64_t ODY_PCCPF_XXX_BAR4U_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCCPF_XXX_BAR4U_FUNC(void)
{
	return 0x24;
}

#define typedef_ODY_PCCPF_XXX_BAR4U ody_pccpf_xxx_bar4u_t
#define bustype_ODY_PCCPF_XXX_BAR4U CSR_TYPE_PCCPF
#define basename_ODY_PCCPF_XXX_BAR4U "PCCPF_XXX_BAR4U"
#define busnum_ODY_PCCPF_XXX_BAR4U 0
#define arguments_ODY_PCCPF_XXX_BAR4U -1, -1, -1, -1

/**
 * Register (PCCPF) pccpf_xxx_cap_ptr
 *
 * PCC PF Capability Pointer Register
 */
union ody_pccpf_xxx_cap_ptr {
	uint32_t u;
	struct ody_pccpf_xxx_cap_ptr_s {
		uint32_t cp                          : 8;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_pccpf_xxx_cap_ptr_s cn; */
};
typedef union ody_pccpf_xxx_cap_ptr ody_pccpf_xxx_cap_ptr_t;

#define ODY_PCCPF_XXX_CAP_PTR ODY_PCCPF_XXX_CAP_PTR_FUNC()
static inline uint64_t ODY_PCCPF_XXX_CAP_PTR_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCCPF_XXX_CAP_PTR_FUNC(void)
{
	return 0x34;
}

#define typedef_ODY_PCCPF_XXX_CAP_PTR ody_pccpf_xxx_cap_ptr_t
#define bustype_ODY_PCCPF_XXX_CAP_PTR CSR_TYPE_PCCPF
#define basename_ODY_PCCPF_XXX_CAP_PTR "PCCPF_XXX_CAP_PTR"
#define busnum_ODY_PCCPF_XXX_CAP_PTR 0
#define arguments_ODY_PCCPF_XXX_CAP_PTR -1, -1, -1, -1

/**
 * Register (PCCPF) pccpf_xxx_clsize
 *
 * PCC PF Cache Line Size Register
 */
union ody_pccpf_xxx_clsize {
	uint32_t u;
	struct ody_pccpf_xxx_clsize_s {
		uint32_t clsize                      : 8;
		uint32_t lattim                      : 8;
		uint32_t hdrtype                     : 8;
		uint32_t bist                        : 8;
	} s;
	/* struct ody_pccpf_xxx_clsize_s cn; */
};
typedef union ody_pccpf_xxx_clsize ody_pccpf_xxx_clsize_t;

#define ODY_PCCPF_XXX_CLSIZE ODY_PCCPF_XXX_CLSIZE_FUNC()
static inline uint64_t ODY_PCCPF_XXX_CLSIZE_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCCPF_XXX_CLSIZE_FUNC(void)
{
	return 0xc;
}

#define typedef_ODY_PCCPF_XXX_CLSIZE ody_pccpf_xxx_clsize_t
#define bustype_ODY_PCCPF_XXX_CLSIZE CSR_TYPE_PCCPF
#define basename_ODY_PCCPF_XXX_CLSIZE "PCCPF_XXX_CLSIZE"
#define busnum_ODY_PCCPF_XXX_CLSIZE 0
#define arguments_ODY_PCCPF_XXX_CLSIZE -1, -1, -1, -1

/**
 * Register (PCCPF) pccpf_xxx_cmd
 *
 * PCC PF Command/Status Register
 * This register is reset on a block domain reset or PF function level reset.
 */
union ody_pccpf_xxx_cmd {
	uint32_t u;
	struct ody_pccpf_xxx_cmd_s {
		uint32_t reserved_0                  : 1;
		uint32_t msae                        : 1;
		uint32_t me                          : 1;
		uint32_t reserved_3_19               : 17;
		uint32_t cl                          : 1;
		uint32_t reserved_21_31              : 11;
	} s;
	/* struct ody_pccpf_xxx_cmd_s cn; */
};
typedef union ody_pccpf_xxx_cmd ody_pccpf_xxx_cmd_t;

#define ODY_PCCPF_XXX_CMD ODY_PCCPF_XXX_CMD_FUNC()
static inline uint64_t ODY_PCCPF_XXX_CMD_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCCPF_XXX_CMD_FUNC(void)
{
	return 4;
}

#define typedef_ODY_PCCPF_XXX_CMD ody_pccpf_xxx_cmd_t
#define bustype_ODY_PCCPF_XXX_CMD CSR_TYPE_PCCPF
#define basename_ODY_PCCPF_XXX_CMD "PCCPF_XXX_CMD"
#define busnum_ODY_PCCPF_XXX_CMD 0
#define arguments_ODY_PCCPF_XXX_CMD -1, -1, -1, -1

/**
 * Register (PCCPF) pccpf_xxx_e_cap_hdr
 *
 * PCC PF PCI Express Capabilities Register
 * This register is the header of the 64-byte PCIe capability header.
 */
union ody_pccpf_xxx_e_cap_hdr {
	uint32_t u;
	struct ody_pccpf_xxx_e_cap_hdr_s {
		uint32_t pcieid                      : 8;
		uint32_t ncp                         : 8;
		uint32_t pciecv                      : 4;
		uint32_t dpt                         : 4;
		uint32_t reserved_24_31              : 8;
	} s;
	/* struct ody_pccpf_xxx_e_cap_hdr_s cn; */
};
typedef union ody_pccpf_xxx_e_cap_hdr ody_pccpf_xxx_e_cap_hdr_t;

#define ODY_PCCPF_XXX_E_CAP_HDR ODY_PCCPF_XXX_E_CAP_HDR_FUNC()
static inline uint64_t ODY_PCCPF_XXX_E_CAP_HDR_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCCPF_XXX_E_CAP_HDR_FUNC(void)
{
	return 0x40;
}

#define typedef_ODY_PCCPF_XXX_E_CAP_HDR ody_pccpf_xxx_e_cap_hdr_t
#define bustype_ODY_PCCPF_XXX_E_CAP_HDR CSR_TYPE_PCCPF
#define basename_ODY_PCCPF_XXX_E_CAP_HDR "PCCPF_XXX_E_CAP_HDR"
#define busnum_ODY_PCCPF_XXX_E_CAP_HDR 0
#define arguments_ODY_PCCPF_XXX_E_CAP_HDR -1, -1, -1, -1

/**
 * Register (PCCPF) pccpf_xxx_e_dev_cap
 *
 * PCC PF PCI Express Device Capabilities Register
 */
union ody_pccpf_xxx_e_dev_cap {
	uint32_t u;
	struct ody_pccpf_xxx_e_dev_cap_s {
		uint32_t reserved_0_14               : 15;
		uint32_t rber                        : 1;
		uint32_t reserved_16_27              : 12;
		uint32_t flr                         : 1;
		uint32_t reserved_29_31              : 3;
	} s;
	/* struct ody_pccpf_xxx_e_dev_cap_s cn; */
};
typedef union ody_pccpf_xxx_e_dev_cap ody_pccpf_xxx_e_dev_cap_t;

#define ODY_PCCPF_XXX_E_DEV_CAP ODY_PCCPF_XXX_E_DEV_CAP_FUNC()
static inline uint64_t ODY_PCCPF_XXX_E_DEV_CAP_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCCPF_XXX_E_DEV_CAP_FUNC(void)
{
	return 0x44;
}

#define typedef_ODY_PCCPF_XXX_E_DEV_CAP ody_pccpf_xxx_e_dev_cap_t
#define bustype_ODY_PCCPF_XXX_E_DEV_CAP CSR_TYPE_PCCPF
#define basename_ODY_PCCPF_XXX_E_DEV_CAP "PCCPF_XXX_E_DEV_CAP"
#define busnum_ODY_PCCPF_XXX_E_DEV_CAP 0
#define arguments_ODY_PCCPF_XXX_E_DEV_CAP -1, -1, -1, -1

/**
 * Register (PCCPF) pccpf_xxx_e_dev_ctl
 *
 * PCC PF PCI Express Device Control and Status Register
 * This register is reset on a block domain reset or PF function level reset.
 */
union ody_pccpf_xxx_e_dev_ctl {
	uint32_t u;
	struct ody_pccpf_xxx_e_dev_ctl_s {
		uint32_t cere                        : 1;
		uint32_t nfere                       : 1;
		uint32_t fere                        : 1;
		uint32_t urre                        : 1;
		uint32_t reserved_4_14               : 11;
		uint32_t bcr_flr                     : 1;
		uint32_t ced                         : 1;
		uint32_t nfed                        : 1;
		uint32_t fed                         : 1;
		uint32_t urd                         : 1;
		uint32_t reserved_20                 : 1;
		uint32_t trpend                      : 1;
		uint32_t reserved_22_31              : 10;
	} s;
	/* struct ody_pccpf_xxx_e_dev_ctl_s cn; */
};
typedef union ody_pccpf_xxx_e_dev_ctl ody_pccpf_xxx_e_dev_ctl_t;

#define ODY_PCCPF_XXX_E_DEV_CTL ODY_PCCPF_XXX_E_DEV_CTL_FUNC()
static inline uint64_t ODY_PCCPF_XXX_E_DEV_CTL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCCPF_XXX_E_DEV_CTL_FUNC(void)
{
	return 0x48;
}

#define typedef_ODY_PCCPF_XXX_E_DEV_CTL ody_pccpf_xxx_e_dev_ctl_t
#define bustype_ODY_PCCPF_XXX_E_DEV_CTL CSR_TYPE_PCCPF
#define basename_ODY_PCCPF_XXX_E_DEV_CTL "PCCPF_XXX_E_DEV_CTL"
#define busnum_ODY_PCCPF_XXX_E_DEV_CTL 0
#define arguments_ODY_PCCPF_XXX_E_DEV_CTL -1, -1, -1, -1

/**
 * Register (PCCPF) pccpf_xxx_ea_cap_hdr
 *
 * PCC PF PCI Enhanced Allocation Capabilities Register
 * This register is the header of the variable-sized PCI enhanced allocation capability
 * structure for type 0 devices.
 */
union ody_pccpf_xxx_ea_cap_hdr {
	uint32_t u;
	struct ody_pccpf_xxx_ea_cap_hdr_s {
		uint32_t pcieid                      : 8;
		uint32_t ncp                         : 8;
		uint32_t num_entries                 : 6;
		uint32_t reserved_22_31              : 10;
	} s;
	/* struct ody_pccpf_xxx_ea_cap_hdr_s cn; */
};
typedef union ody_pccpf_xxx_ea_cap_hdr ody_pccpf_xxx_ea_cap_hdr_t;

#define ODY_PCCPF_XXX_EA_CAP_HDR ODY_PCCPF_XXX_EA_CAP_HDR_FUNC()
static inline uint64_t ODY_PCCPF_XXX_EA_CAP_HDR_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCCPF_XXX_EA_CAP_HDR_FUNC(void)
{
	return 0x98;
}

#define typedef_ODY_PCCPF_XXX_EA_CAP_HDR ody_pccpf_xxx_ea_cap_hdr_t
#define bustype_ODY_PCCPF_XXX_EA_CAP_HDR CSR_TYPE_PCCPF
#define basename_ODY_PCCPF_XXX_EA_CAP_HDR "PCCPF_XXX_EA_CAP_HDR"
#define busnum_ODY_PCCPF_XXX_EA_CAP_HDR 0
#define arguments_ODY_PCCPF_XXX_EA_CAP_HDR -1, -1, -1, -1

/**
 * Register (PCCPF) pccpf_xxx_ea_entry#
 *
 * PCC PF PCI Enhanced Allocation Entry Registers
 * These registers contain up to four sequential enhanced allocation entries. Each
 * entry consists of five sequential 32-bit words described by PCC_EA_ENTRY_S.
 */
union ody_pccpf_xxx_ea_entryx {
	uint32_t u;
	struct ody_pccpf_xxx_ea_entryx_s {
		uint32_t data                        : 32;
	} s;
	/* struct ody_pccpf_xxx_ea_entryx_s cn; */
};
typedef union ody_pccpf_xxx_ea_entryx ody_pccpf_xxx_ea_entryx_t;

static inline uint64_t ODY_PCCPF_XXX_EA_ENTRYX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCCPF_XXX_EA_ENTRYX(uint64_t a)
{
	if (a <= 24)
		return 0x9c + 4 * ((a) & 0x1f);
	__ody_csr_fatal("PCCPF_XXX_EA_ENTRYX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCCPF_XXX_EA_ENTRYX(a) ody_pccpf_xxx_ea_entryx_t
#define bustype_ODY_PCCPF_XXX_EA_ENTRYX(a) CSR_TYPE_PCCPF
#define basename_ODY_PCCPF_XXX_EA_ENTRYX(a) "PCCPF_XXX_EA_ENTRYX"
#define busnum_ODY_PCCPF_XXX_EA_ENTRYX(a) (a)
#define arguments_ODY_PCCPF_XXX_EA_ENTRYX(a) (a), -1, -1, -1

/**
 * Register (PCCPF) pccpf_xxx_id
 *
 * PCC PF Vendor and Device ID Register
 * This register is the header of the 64-byte PCI type 0 configuration structure.
 */
union ody_pccpf_xxx_id {
	uint32_t u;
	struct ody_pccpf_xxx_id_s {
		uint32_t vendid                      : 16;
		uint32_t devid                       : 16;
	} s;
	/* struct ody_pccpf_xxx_id_s cn; */
};
typedef union ody_pccpf_xxx_id ody_pccpf_xxx_id_t;

#define ODY_PCCPF_XXX_ID ODY_PCCPF_XXX_ID_FUNC()
static inline uint64_t ODY_PCCPF_XXX_ID_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCCPF_XXX_ID_FUNC(void)
{
	return 0;
}

#define typedef_ODY_PCCPF_XXX_ID ody_pccpf_xxx_id_t
#define bustype_ODY_PCCPF_XXX_ID CSR_TYPE_PCCPF
#define basename_ODY_PCCPF_XXX_ID "PCCPF_XXX_ID"
#define busnum_ODY_PCCPF_XXX_ID 0
#define arguments_ODY_PCCPF_XXX_ID -1, -1, -1, -1

/**
 * Register (PCCPF) pccpf_xxx_msix_cap_hdr
 *
 * PCC PF MSI-X Capability Header Register
 * This register is the header of the 36-byte PCI MSI-X capability structure.
 *
 * This register is reset on a block domain reset or PF function level reset.
 */
union ody_pccpf_xxx_msix_cap_hdr {
	uint32_t u;
	struct ody_pccpf_xxx_msix_cap_hdr_s {
		uint32_t msixcid                     : 8;
		uint32_t ncp                         : 8;
		uint32_t msixts                      : 11;
		uint32_t reserved_27_29              : 3;
		uint32_t funm                        : 1;
		uint32_t msixen                      : 1;
	} s;
	/* struct ody_pccpf_xxx_msix_cap_hdr_s cn; */
};
typedef union ody_pccpf_xxx_msix_cap_hdr ody_pccpf_xxx_msix_cap_hdr_t;

#define ODY_PCCPF_XXX_MSIX_CAP_HDR ODY_PCCPF_XXX_MSIX_CAP_HDR_FUNC()
static inline uint64_t ODY_PCCPF_XXX_MSIX_CAP_HDR_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCCPF_XXX_MSIX_CAP_HDR_FUNC(void)
{
	return 0x80;
}

#define typedef_ODY_PCCPF_XXX_MSIX_CAP_HDR ody_pccpf_xxx_msix_cap_hdr_t
#define bustype_ODY_PCCPF_XXX_MSIX_CAP_HDR CSR_TYPE_PCCPF
#define basename_ODY_PCCPF_XXX_MSIX_CAP_HDR "PCCPF_XXX_MSIX_CAP_HDR"
#define busnum_ODY_PCCPF_XXX_MSIX_CAP_HDR 0
#define arguments_ODY_PCCPF_XXX_MSIX_CAP_HDR -1, -1, -1, -1

/**
 * Register (PCCPF) pccpf_xxx_msix_pba
 *
 * PCC PF MSI-X PBA Offset and BIR Register
 */
union ody_pccpf_xxx_msix_pba {
	uint32_t u;
	struct ody_pccpf_xxx_msix_pba_s {
		uint32_t msixpbir                    : 3;
		uint32_t msixpoffs                   : 29;
	} s;
	/* struct ody_pccpf_xxx_msix_pba_s cn; */
};
typedef union ody_pccpf_xxx_msix_pba ody_pccpf_xxx_msix_pba_t;

#define ODY_PCCPF_XXX_MSIX_PBA ODY_PCCPF_XXX_MSIX_PBA_FUNC()
static inline uint64_t ODY_PCCPF_XXX_MSIX_PBA_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCCPF_XXX_MSIX_PBA_FUNC(void)
{
	return 0x88;
}

#define typedef_ODY_PCCPF_XXX_MSIX_PBA ody_pccpf_xxx_msix_pba_t
#define bustype_ODY_PCCPF_XXX_MSIX_PBA CSR_TYPE_PCCPF
#define basename_ODY_PCCPF_XXX_MSIX_PBA "PCCPF_XXX_MSIX_PBA"
#define busnum_ODY_PCCPF_XXX_MSIX_PBA 0
#define arguments_ODY_PCCPF_XXX_MSIX_PBA -1, -1, -1, -1

/**
 * Register (PCCPF) pccpf_xxx_msix_table
 *
 * PCC PF MSI-X Table Offset and BIR Register
 */
union ody_pccpf_xxx_msix_table {
	uint32_t u;
	struct ody_pccpf_xxx_msix_table_s {
		uint32_t msixtbir                    : 3;
		uint32_t msixtoffs                   : 29;
	} s;
	/* struct ody_pccpf_xxx_msix_table_s cn; */
};
typedef union ody_pccpf_xxx_msix_table ody_pccpf_xxx_msix_table_t;

#define ODY_PCCPF_XXX_MSIX_TABLE ODY_PCCPF_XXX_MSIX_TABLE_FUNC()
static inline uint64_t ODY_PCCPF_XXX_MSIX_TABLE_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCCPF_XXX_MSIX_TABLE_FUNC(void)
{
	return 0x84;
}

#define typedef_ODY_PCCPF_XXX_MSIX_TABLE ody_pccpf_xxx_msix_table_t
#define bustype_ODY_PCCPF_XXX_MSIX_TABLE CSR_TYPE_PCCPF
#define basename_ODY_PCCPF_XXX_MSIX_TABLE "PCCPF_XXX_MSIX_TABLE"
#define busnum_ODY_PCCPF_XXX_MSIX_TABLE 0
#define arguments_ODY_PCCPF_XXX_MSIX_TABLE -1, -1, -1, -1

/**
 * Register (PCCPF) pccpf_xxx_rev
 *
 * PCC PF Class Code/Revision ID Register
 */
union ody_pccpf_xxx_rev {
	uint32_t u;
	struct ody_pccpf_xxx_rev_s {
		uint32_t rid                         : 8;
		uint32_t pi                          : 8;
		uint32_t sc                          : 8;
		uint32_t bcc                         : 8;
	} s;
	/* struct ody_pccpf_xxx_rev_s cn; */
};
typedef union ody_pccpf_xxx_rev ody_pccpf_xxx_rev_t;

#define ODY_PCCPF_XXX_REV ODY_PCCPF_XXX_REV_FUNC()
static inline uint64_t ODY_PCCPF_XXX_REV_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCCPF_XXX_REV_FUNC(void)
{
	return 8;
}

#define typedef_ODY_PCCPF_XXX_REV ody_pccpf_xxx_rev_t
#define bustype_ODY_PCCPF_XXX_REV CSR_TYPE_PCCPF
#define basename_ODY_PCCPF_XXX_REV "PCCPF_XXX_REV"
#define busnum_ODY_PCCPF_XXX_REV 0
#define arguments_ODY_PCCPF_XXX_REV -1, -1, -1, -1

/**
 * Register (PCCPF) pccpf_xxx_sari_nxt
 *
 * PCC PF ARI Capability Register
 * If this device is on bus 0x0, this ARI header is not present and reads as 0x0.
 */
union ody_pccpf_xxx_sari_nxt {
	uint32_t u;
	struct ody_pccpf_xxx_sari_nxt_s {
		uint32_t reserved_0_7                : 8;
		uint32_t nxtfn                       : 8;
		uint32_t reserved_16_31              : 16;
	} s;
	/* struct ody_pccpf_xxx_sari_nxt_s cn; */
};
typedef union ody_pccpf_xxx_sari_nxt ody_pccpf_xxx_sari_nxt_t;

#define ODY_PCCPF_XXX_SARI_NXT ODY_PCCPF_XXX_SARI_NXT_FUNC()
static inline uint64_t ODY_PCCPF_XXX_SARI_NXT_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCCPF_XXX_SARI_NXT_FUNC(void)
{
	return 0x174;
}

#define typedef_ODY_PCCPF_XXX_SARI_NXT ody_pccpf_xxx_sari_nxt_t
#define bustype_ODY_PCCPF_XXX_SARI_NXT CSR_TYPE_PCCPF
#define basename_ODY_PCCPF_XXX_SARI_NXT "PCCPF_XXX_SARI_NXT"
#define busnum_ODY_PCCPF_XXX_SARI_NXT 0
#define arguments_ODY_PCCPF_XXX_SARI_NXT -1, -1, -1, -1

/**
 * Register (PCCPF) pccpf_xxx_sriov_bar0l
 *
 * PCC PF SR-IOV BAR 0 Lower Register
 */
union ody_pccpf_xxx_sriov_bar0l {
	uint32_t u;
	struct ody_pccpf_xxx_sriov_bar0l_s {
		uint32_t bar                         : 32;
	} s;
	/* struct ody_pccpf_xxx_sriov_bar0l_s cn; */
};
typedef union ody_pccpf_xxx_sriov_bar0l ody_pccpf_xxx_sriov_bar0l_t;

#define ODY_PCCPF_XXX_SRIOV_BAR0L ODY_PCCPF_XXX_SRIOV_BAR0L_FUNC()
static inline uint64_t ODY_PCCPF_XXX_SRIOV_BAR0L_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCCPF_XXX_SRIOV_BAR0L_FUNC(void)
{
	return 0x1a4;
}

#define typedef_ODY_PCCPF_XXX_SRIOV_BAR0L ody_pccpf_xxx_sriov_bar0l_t
#define bustype_ODY_PCCPF_XXX_SRIOV_BAR0L CSR_TYPE_PCCPF
#define basename_ODY_PCCPF_XXX_SRIOV_BAR0L "PCCPF_XXX_SRIOV_BAR0L"
#define busnum_ODY_PCCPF_XXX_SRIOV_BAR0L 0
#define arguments_ODY_PCCPF_XXX_SRIOV_BAR0L -1, -1, -1, -1

/**
 * Register (PCCPF) pccpf_xxx_sriov_bar0u
 *
 * PCC PF SR-IOV BAR 0 Upper Register
 */
union ody_pccpf_xxx_sriov_bar0u {
	uint32_t u;
	struct ody_pccpf_xxx_sriov_bar0u_s {
		uint32_t bar                         : 32;
	} s;
	/* struct ody_pccpf_xxx_sriov_bar0u_s cn; */
};
typedef union ody_pccpf_xxx_sriov_bar0u ody_pccpf_xxx_sriov_bar0u_t;

#define ODY_PCCPF_XXX_SRIOV_BAR0U ODY_PCCPF_XXX_SRIOV_BAR0U_FUNC()
static inline uint64_t ODY_PCCPF_XXX_SRIOV_BAR0U_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCCPF_XXX_SRIOV_BAR0U_FUNC(void)
{
	return 0x1a8;
}

#define typedef_ODY_PCCPF_XXX_SRIOV_BAR0U ody_pccpf_xxx_sriov_bar0u_t
#define bustype_ODY_PCCPF_XXX_SRIOV_BAR0U CSR_TYPE_PCCPF
#define basename_ODY_PCCPF_XXX_SRIOV_BAR0U "PCCPF_XXX_SRIOV_BAR0U"
#define busnum_ODY_PCCPF_XXX_SRIOV_BAR0U 0
#define arguments_ODY_PCCPF_XXX_SRIOV_BAR0U -1, -1, -1, -1

/**
 * Register (PCCPF) pccpf_xxx_sriov_bar2l
 *
 * PCC PF SR-IOV BAR 2 Lower Register
 */
union ody_pccpf_xxx_sriov_bar2l {
	uint32_t u;
	struct ody_pccpf_xxx_sriov_bar2l_s {
		uint32_t bar                         : 32;
	} s;
	/* struct ody_pccpf_xxx_sriov_bar2l_s cn; */
};
typedef union ody_pccpf_xxx_sriov_bar2l ody_pccpf_xxx_sriov_bar2l_t;

#define ODY_PCCPF_XXX_SRIOV_BAR2L ODY_PCCPF_XXX_SRIOV_BAR2L_FUNC()
static inline uint64_t ODY_PCCPF_XXX_SRIOV_BAR2L_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCCPF_XXX_SRIOV_BAR2L_FUNC(void)
{
	return 0x1ac;
}

#define typedef_ODY_PCCPF_XXX_SRIOV_BAR2L ody_pccpf_xxx_sriov_bar2l_t
#define bustype_ODY_PCCPF_XXX_SRIOV_BAR2L CSR_TYPE_PCCPF
#define basename_ODY_PCCPF_XXX_SRIOV_BAR2L "PCCPF_XXX_SRIOV_BAR2L"
#define busnum_ODY_PCCPF_XXX_SRIOV_BAR2L 0
#define arguments_ODY_PCCPF_XXX_SRIOV_BAR2L -1, -1, -1, -1

/**
 * Register (PCCPF) pccpf_xxx_sriov_bar2u
 *
 * PCC PF SR-IOV BAR 2 Upper Register
 */
union ody_pccpf_xxx_sriov_bar2u {
	uint32_t u;
	struct ody_pccpf_xxx_sriov_bar2u_s {
		uint32_t bar                         : 32;
	} s;
	/* struct ody_pccpf_xxx_sriov_bar2u_s cn; */
};
typedef union ody_pccpf_xxx_sriov_bar2u ody_pccpf_xxx_sriov_bar2u_t;

#define ODY_PCCPF_XXX_SRIOV_BAR2U ODY_PCCPF_XXX_SRIOV_BAR2U_FUNC()
static inline uint64_t ODY_PCCPF_XXX_SRIOV_BAR2U_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCCPF_XXX_SRIOV_BAR2U_FUNC(void)
{
	return 0x1b0;
}

#define typedef_ODY_PCCPF_XXX_SRIOV_BAR2U ody_pccpf_xxx_sriov_bar2u_t
#define bustype_ODY_PCCPF_XXX_SRIOV_BAR2U CSR_TYPE_PCCPF
#define basename_ODY_PCCPF_XXX_SRIOV_BAR2U "PCCPF_XXX_SRIOV_BAR2U"
#define busnum_ODY_PCCPF_XXX_SRIOV_BAR2U 0
#define arguments_ODY_PCCPF_XXX_SRIOV_BAR2U -1, -1, -1, -1

/**
 * Register (PCCPF) pccpf_xxx_sriov_bar4l
 *
 * PCC PF SR-IOV BAR 4 Lower Register
 */
union ody_pccpf_xxx_sriov_bar4l {
	uint32_t u;
	struct ody_pccpf_xxx_sriov_bar4l_s {
		uint32_t bar                         : 32;
	} s;
	/* struct ody_pccpf_xxx_sriov_bar4l_s cn; */
};
typedef union ody_pccpf_xxx_sriov_bar4l ody_pccpf_xxx_sriov_bar4l_t;

#define ODY_PCCPF_XXX_SRIOV_BAR4L ODY_PCCPF_XXX_SRIOV_BAR4L_FUNC()
static inline uint64_t ODY_PCCPF_XXX_SRIOV_BAR4L_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCCPF_XXX_SRIOV_BAR4L_FUNC(void)
{
	return 0x1b4;
}

#define typedef_ODY_PCCPF_XXX_SRIOV_BAR4L ody_pccpf_xxx_sriov_bar4l_t
#define bustype_ODY_PCCPF_XXX_SRIOV_BAR4L CSR_TYPE_PCCPF
#define basename_ODY_PCCPF_XXX_SRIOV_BAR4L "PCCPF_XXX_SRIOV_BAR4L"
#define busnum_ODY_PCCPF_XXX_SRIOV_BAR4L 0
#define arguments_ODY_PCCPF_XXX_SRIOV_BAR4L -1, -1, -1, -1

/**
 * Register (PCCPF) pccpf_xxx_sriov_bar4u
 *
 * PCC PF SR-IOV BAR 4 Upper Register
 */
union ody_pccpf_xxx_sriov_bar4u {
	uint32_t u;
	struct ody_pccpf_xxx_sriov_bar4u_s {
		uint32_t bar                         : 32;
	} s;
	/* struct ody_pccpf_xxx_sriov_bar4u_s cn; */
};
typedef union ody_pccpf_xxx_sriov_bar4u ody_pccpf_xxx_sriov_bar4u_t;

#define ODY_PCCPF_XXX_SRIOV_BAR4U ODY_PCCPF_XXX_SRIOV_BAR4U_FUNC()
static inline uint64_t ODY_PCCPF_XXX_SRIOV_BAR4U_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCCPF_XXX_SRIOV_BAR4U_FUNC(void)
{
	return 0x1b8;
}

#define typedef_ODY_PCCPF_XXX_SRIOV_BAR4U ody_pccpf_xxx_sriov_bar4u_t
#define bustype_ODY_PCCPF_XXX_SRIOV_BAR4U CSR_TYPE_PCCPF
#define basename_ODY_PCCPF_XXX_SRIOV_BAR4U "PCCPF_XXX_SRIOV_BAR4U"
#define busnum_ODY_PCCPF_XXX_SRIOV_BAR4U 0
#define arguments_ODY_PCCPF_XXX_SRIOV_BAR4U -1, -1, -1, -1

/**
 * Register (PCCPF) pccpf_xxx_sriov_cap
 *
 * PCC PF SR-IOV Capability Register
 */
union ody_pccpf_xxx_sriov_cap {
	uint32_t u;
	struct ody_pccpf_xxx_sriov_cap_s {
		uint32_t vfmc                        : 1;
		uint32_t arichp                      : 1;
		uint32_t reserved_2_20               : 19;
		uint32_t vfmimn                      : 11;
	} s;
	/* struct ody_pccpf_xxx_sriov_cap_s cn; */
};
typedef union ody_pccpf_xxx_sriov_cap ody_pccpf_xxx_sriov_cap_t;

#define ODY_PCCPF_XXX_SRIOV_CAP ODY_PCCPF_XXX_SRIOV_CAP_FUNC()
static inline uint64_t ODY_PCCPF_XXX_SRIOV_CAP_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCCPF_XXX_SRIOV_CAP_FUNC(void)
{
	return 0x184;
}

#define typedef_ODY_PCCPF_XXX_SRIOV_CAP ody_pccpf_xxx_sriov_cap_t
#define bustype_ODY_PCCPF_XXX_SRIOV_CAP CSR_TYPE_PCCPF
#define basename_ODY_PCCPF_XXX_SRIOV_CAP "PCCPF_XXX_SRIOV_CAP"
#define busnum_ODY_PCCPF_XXX_SRIOV_CAP 0
#define arguments_ODY_PCCPF_XXX_SRIOV_CAP -1, -1, -1, -1

/**
 * Register (PCCPF) pccpf_xxx_sriov_cap_hdr
 *
 * PCC PF SR-IOV Capability Header Register
 * This register is the header of the 64-byte PCI SR-IOV capability structure.
 */
union ody_pccpf_xxx_sriov_cap_hdr {
	uint32_t u;
	struct ody_pccpf_xxx_sriov_cap_hdr_s {
		uint32_t pcieec                      : 16;
		uint32_t cv                          : 4;
		uint32_t nco                         : 12;
	} s;
	/* struct ody_pccpf_xxx_sriov_cap_hdr_s cn; */
};
typedef union ody_pccpf_xxx_sriov_cap_hdr ody_pccpf_xxx_sriov_cap_hdr_t;

#define ODY_PCCPF_XXX_SRIOV_CAP_HDR ODY_PCCPF_XXX_SRIOV_CAP_HDR_FUNC()
static inline uint64_t ODY_PCCPF_XXX_SRIOV_CAP_HDR_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCCPF_XXX_SRIOV_CAP_HDR_FUNC(void)
{
	return 0x180;
}

#define typedef_ODY_PCCPF_XXX_SRIOV_CAP_HDR ody_pccpf_xxx_sriov_cap_hdr_t
#define bustype_ODY_PCCPF_XXX_SRIOV_CAP_HDR CSR_TYPE_PCCPF
#define basename_ODY_PCCPF_XXX_SRIOV_CAP_HDR "PCCPF_XXX_SRIOV_CAP_HDR"
#define busnum_ODY_PCCPF_XXX_SRIOV_CAP_HDR 0
#define arguments_ODY_PCCPF_XXX_SRIOV_CAP_HDR -1, -1, -1, -1

/**
 * Register (PCCPF) pccpf_xxx_sriov_ctl
 *
 * PCC PF SR-IOV Control/Status Register
 * This register is reset on a chip domain reset.
 */
union ody_pccpf_xxx_sriov_ctl {
	uint32_t u;
	struct ody_pccpf_xxx_sriov_ctl_s {
		uint32_t vfe                         : 1;
		uint32_t me                          : 1;
		uint32_t mie                         : 1;
		uint32_t mse                         : 1;
		uint32_t ach                         : 1;
		uint32_t reserved_5_15               : 11;
		uint32_t ms                          : 1;
		uint32_t reserved_17_31              : 15;
	} s;
	/* struct ody_pccpf_xxx_sriov_ctl_s cn; */
};
typedef union ody_pccpf_xxx_sriov_ctl ody_pccpf_xxx_sriov_ctl_t;

#define ODY_PCCPF_XXX_SRIOV_CTL ODY_PCCPF_XXX_SRIOV_CTL_FUNC()
static inline uint64_t ODY_PCCPF_XXX_SRIOV_CTL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCCPF_XXX_SRIOV_CTL_FUNC(void)
{
	return 0x188;
}

#define typedef_ODY_PCCPF_XXX_SRIOV_CTL ody_pccpf_xxx_sriov_ctl_t
#define bustype_ODY_PCCPF_XXX_SRIOV_CTL CSR_TYPE_PCCPF
#define basename_ODY_PCCPF_XXX_SRIOV_CTL "PCCPF_XXX_SRIOV_CTL"
#define busnum_ODY_PCCPF_XXX_SRIOV_CTL 0
#define arguments_ODY_PCCPF_XXX_SRIOV_CTL -1, -1, -1, -1

/**
 * Register (PCCPF) pccpf_xxx_sriov_dev
 *
 * PCC PF SR-IOV VF Device ID Register
 */
union ody_pccpf_xxx_sriov_dev {
	uint32_t u;
	struct ody_pccpf_xxx_sriov_dev_s {
		uint32_t reserved_0_15               : 16;
		uint32_t vfdev                       : 16;
	} s;
	/* struct ody_pccpf_xxx_sriov_dev_s cn; */
};
typedef union ody_pccpf_xxx_sriov_dev ody_pccpf_xxx_sriov_dev_t;

#define ODY_PCCPF_XXX_SRIOV_DEV ODY_PCCPF_XXX_SRIOV_DEV_FUNC()
static inline uint64_t ODY_PCCPF_XXX_SRIOV_DEV_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCCPF_XXX_SRIOV_DEV_FUNC(void)
{
	return 0x198;
}

#define typedef_ODY_PCCPF_XXX_SRIOV_DEV ody_pccpf_xxx_sriov_dev_t
#define bustype_ODY_PCCPF_XXX_SRIOV_DEV CSR_TYPE_PCCPF
#define basename_ODY_PCCPF_XXX_SRIOV_DEV "PCCPF_XXX_SRIOV_DEV"
#define busnum_ODY_PCCPF_XXX_SRIOV_DEV 0
#define arguments_ODY_PCCPF_XXX_SRIOV_DEV -1, -1, -1, -1

/**
 * Register (PCCPF) pccpf_xxx_sriov_fo
 *
 * PCC PF SR-IOV First VF Offset/VF Stride Register
 */
union ody_pccpf_xxx_sriov_fo {
	uint32_t u;
	struct ody_pccpf_xxx_sriov_fo_s {
		uint32_t fo                          : 16;
		uint32_t vfs                         : 16;
	} s;
	/* struct ody_pccpf_xxx_sriov_fo_s cn; */
};
typedef union ody_pccpf_xxx_sriov_fo ody_pccpf_xxx_sriov_fo_t;

#define ODY_PCCPF_XXX_SRIOV_FO ODY_PCCPF_XXX_SRIOV_FO_FUNC()
static inline uint64_t ODY_PCCPF_XXX_SRIOV_FO_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCCPF_XXX_SRIOV_FO_FUNC(void)
{
	return 0x194;
}

#define typedef_ODY_PCCPF_XXX_SRIOV_FO ody_pccpf_xxx_sriov_fo_t
#define bustype_ODY_PCCPF_XXX_SRIOV_FO CSR_TYPE_PCCPF
#define basename_ODY_PCCPF_XXX_SRIOV_FO "PCCPF_XXX_SRIOV_FO"
#define busnum_ODY_PCCPF_XXX_SRIOV_FO 0
#define arguments_ODY_PCCPF_XXX_SRIOV_FO -1, -1, -1, -1

/**
 * Register (PCCPF) pccpf_xxx_sriov_nvf
 *
 * PCC PF SR-IOV Number of VFs/Function Dependency Link Register
 */
union ody_pccpf_xxx_sriov_nvf {
	uint32_t u;
	struct ody_pccpf_xxx_sriov_nvf_s {
		uint32_t nvf                         : 16;
		uint32_t fdl                         : 8;
		uint32_t reserved_24_31              : 8;
	} s;
	/* struct ody_pccpf_xxx_sriov_nvf_s cn; */
};
typedef union ody_pccpf_xxx_sriov_nvf ody_pccpf_xxx_sriov_nvf_t;

#define ODY_PCCPF_XXX_SRIOV_NVF ODY_PCCPF_XXX_SRIOV_NVF_FUNC()
static inline uint64_t ODY_PCCPF_XXX_SRIOV_NVF_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCCPF_XXX_SRIOV_NVF_FUNC(void)
{
	return 0x190;
}

#define typedef_ODY_PCCPF_XXX_SRIOV_NVF ody_pccpf_xxx_sriov_nvf_t
#define bustype_ODY_PCCPF_XXX_SRIOV_NVF CSR_TYPE_PCCPF
#define basename_ODY_PCCPF_XXX_SRIOV_NVF "PCCPF_XXX_SRIOV_NVF"
#define busnum_ODY_PCCPF_XXX_SRIOV_NVF 0
#define arguments_ODY_PCCPF_XXX_SRIOV_NVF -1, -1, -1, -1

/**
 * Register (PCCPF) pccpf_xxx_sriov_ps
 *
 * PCC PF SR-IOV System Page Sizes Register
 */
union ody_pccpf_xxx_sriov_ps {
	uint32_t u;
	struct ody_pccpf_xxx_sriov_ps_s {
		uint32_t ps                          : 32;
	} s;
	/* struct ody_pccpf_xxx_sriov_ps_s cn; */
};
typedef union ody_pccpf_xxx_sriov_ps ody_pccpf_xxx_sriov_ps_t;

#define ODY_PCCPF_XXX_SRIOV_PS ODY_PCCPF_XXX_SRIOV_PS_FUNC()
static inline uint64_t ODY_PCCPF_XXX_SRIOV_PS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCCPF_XXX_SRIOV_PS_FUNC(void)
{
	return 0x1a0;
}

#define typedef_ODY_PCCPF_XXX_SRIOV_PS ody_pccpf_xxx_sriov_ps_t
#define bustype_ODY_PCCPF_XXX_SRIOV_PS CSR_TYPE_PCCPF
#define basename_ODY_PCCPF_XXX_SRIOV_PS "PCCPF_XXX_SRIOV_PS"
#define busnum_ODY_PCCPF_XXX_SRIOV_PS 0
#define arguments_ODY_PCCPF_XXX_SRIOV_PS -1, -1, -1, -1

/**
 * Register (PCCPF) pccpf_xxx_sriov_supps
 *
 * PCC PF SR-IOV Supported Page Sizes Register
 */
union ody_pccpf_xxx_sriov_supps {
	uint32_t u;
	struct ody_pccpf_xxx_sriov_supps_s {
		uint32_t supps                       : 32;
	} s;
	/* struct ody_pccpf_xxx_sriov_supps_s cn; */
};
typedef union ody_pccpf_xxx_sriov_supps ody_pccpf_xxx_sriov_supps_t;

#define ODY_PCCPF_XXX_SRIOV_SUPPS ODY_PCCPF_XXX_SRIOV_SUPPS_FUNC()
static inline uint64_t ODY_PCCPF_XXX_SRIOV_SUPPS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCCPF_XXX_SRIOV_SUPPS_FUNC(void)
{
	return 0x19c;
}

#define typedef_ODY_PCCPF_XXX_SRIOV_SUPPS ody_pccpf_xxx_sriov_supps_t
#define bustype_ODY_PCCPF_XXX_SRIOV_SUPPS CSR_TYPE_PCCPF
#define basename_ODY_PCCPF_XXX_SRIOV_SUPPS "PCCPF_XXX_SRIOV_SUPPS"
#define busnum_ODY_PCCPF_XXX_SRIOV_SUPPS 0
#define arguments_ODY_PCCPF_XXX_SRIOV_SUPPS -1, -1, -1, -1

/**
 * Register (PCCPF) pccpf_xxx_sriov_vfs
 *
 * PCC PF SR-IOV Initial VFs/Total VFs Register
 */
union ody_pccpf_xxx_sriov_vfs {
	uint32_t u;
	struct ody_pccpf_xxx_sriov_vfs_s {
		uint32_t ivf                         : 16;
		uint32_t tvf                         : 16;
	} s;
	/* struct ody_pccpf_xxx_sriov_vfs_s cn; */
};
typedef union ody_pccpf_xxx_sriov_vfs ody_pccpf_xxx_sriov_vfs_t;

#define ODY_PCCPF_XXX_SRIOV_VFS ODY_PCCPF_XXX_SRIOV_VFS_FUNC()
static inline uint64_t ODY_PCCPF_XXX_SRIOV_VFS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCCPF_XXX_SRIOV_VFS_FUNC(void)
{
	return 0x18c;
}

#define typedef_ODY_PCCPF_XXX_SRIOV_VFS ody_pccpf_xxx_sriov_vfs_t
#define bustype_ODY_PCCPF_XXX_SRIOV_VFS CSR_TYPE_PCCPF
#define basename_ODY_PCCPF_XXX_SRIOV_VFS "PCCPF_XXX_SRIOV_VFS"
#define busnum_ODY_PCCPF_XXX_SRIOV_VFS 0
#define arguments_ODY_PCCPF_XXX_SRIOV_VFS -1, -1, -1, -1

/**
 * Register (PCCPF) pccpf_xxx_subid
 *
 * PCC PF Subsystem ID/Subsystem Vendor ID Register
 */
union ody_pccpf_xxx_subid {
	uint32_t u;
	struct ody_pccpf_xxx_subid_s {
		uint32_t ssvid                       : 16;
		uint32_t ssid                        : 16;
	} s;
	/* struct ody_pccpf_xxx_subid_s cn; */
};
typedef union ody_pccpf_xxx_subid ody_pccpf_xxx_subid_t;

#define ODY_PCCPF_XXX_SUBID ODY_PCCPF_XXX_SUBID_FUNC()
static inline uint64_t ODY_PCCPF_XXX_SUBID_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCCPF_XXX_SUBID_FUNC(void)
{
	return 0x2c;
}

#define typedef_ODY_PCCPF_XXX_SUBID ody_pccpf_xxx_subid_t
#define bustype_ODY_PCCPF_XXX_SUBID CSR_TYPE_PCCPF
#define basename_ODY_PCCPF_XXX_SUBID "PCCPF_XXX_SUBID"
#define busnum_ODY_PCCPF_XXX_SUBID 0
#define arguments_ODY_PCCPF_XXX_SUBID -1, -1, -1, -1

/**
 * Register (PCCPF) pccpf_xxx_vsec_cap_hdr
 *
 * PCC PF Vendor-Specific Capability Header Register
 * This register is the header of the 64-byte {ProductLine} family PF capability
 * structure.
 */
union ody_pccpf_xxx_vsec_cap_hdr {
	uint32_t u;
	struct ody_pccpf_xxx_vsec_cap_hdr_s {
		uint32_t vsecid                      : 16;
		uint32_t cv                          : 4;
		uint32_t nco                         : 12;
	} s;
	/* struct ody_pccpf_xxx_vsec_cap_hdr_s cn; */
};
typedef union ody_pccpf_xxx_vsec_cap_hdr ody_pccpf_xxx_vsec_cap_hdr_t;

#define ODY_PCCPF_XXX_VSEC_CAP_HDR ODY_PCCPF_XXX_VSEC_CAP_HDR_FUNC()
static inline uint64_t ODY_PCCPF_XXX_VSEC_CAP_HDR_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCCPF_XXX_VSEC_CAP_HDR_FUNC(void)
{
	return 0x100;
}

#define typedef_ODY_PCCPF_XXX_VSEC_CAP_HDR ody_pccpf_xxx_vsec_cap_hdr_t
#define bustype_ODY_PCCPF_XXX_VSEC_CAP_HDR CSR_TYPE_PCCPF
#define basename_ODY_PCCPF_XXX_VSEC_CAP_HDR "PCCPF_XXX_VSEC_CAP_HDR"
#define busnum_ODY_PCCPF_XXX_VSEC_CAP_HDR 0
#define arguments_ODY_PCCPF_XXX_VSEC_CAP_HDR -1, -1, -1, -1

/**
 * Register (PCCPF) pccpf_xxx_vsec_ctl
 *
 * PCC PF Vendor-Specific Control Register
 * This register is reset on a chip domain reset.
 */
union ody_pccpf_xxx_vsec_ctl {
	uint32_t u;
	struct ody_pccpf_xxx_vsec_ctl_s {
		uint32_t inst_num                    : 8;
		uint32_t poison_tlp                  : 1;
		uint32_t uncor_intn                  : 1;
		uint32_t adv_nfat                    : 1;
		uint32_t cor_intn                    : 1;
		uint32_t reserved_12_23              : 12;
		uint32_t nxtfn_ns                    : 8;
	} s;
	/* struct ody_pccpf_xxx_vsec_ctl_s cn; */
};
typedef union ody_pccpf_xxx_vsec_ctl ody_pccpf_xxx_vsec_ctl_t;

#define ODY_PCCPF_XXX_VSEC_CTL ODY_PCCPF_XXX_VSEC_CTL_FUNC()
static inline uint64_t ODY_PCCPF_XXX_VSEC_CTL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCCPF_XXX_VSEC_CTL_FUNC(void)
{
	return 0x108;
}

#define typedef_ODY_PCCPF_XXX_VSEC_CTL ody_pccpf_xxx_vsec_ctl_t
#define bustype_ODY_PCCPF_XXX_VSEC_CTL CSR_TYPE_PCCPF
#define basename_ODY_PCCPF_XXX_VSEC_CTL "PCCPF_XXX_VSEC_CTL"
#define busnum_ODY_PCCPF_XXX_VSEC_CTL 0
#define arguments_ODY_PCCPF_XXX_VSEC_CTL -1, -1, -1, -1

/**
 * Register (PCCPF) pccpf_xxx_vsec_id
 *
 * PCC PF Vendor-Specific Identification Register
 */
union ody_pccpf_xxx_vsec_id {
	uint32_t u;
	struct ody_pccpf_xxx_vsec_id_s {
		uint32_t id                          : 16;
		uint32_t rev                         : 4;
		uint32_t len                         : 12;
	} s;
	/* struct ody_pccpf_xxx_vsec_id_s cn; */
};
typedef union ody_pccpf_xxx_vsec_id ody_pccpf_xxx_vsec_id_t;

#define ODY_PCCPF_XXX_VSEC_ID ODY_PCCPF_XXX_VSEC_ID_FUNC()
static inline uint64_t ODY_PCCPF_XXX_VSEC_ID_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCCPF_XXX_VSEC_ID_FUNC(void)
{
	return 0x104;
}

#define typedef_ODY_PCCPF_XXX_VSEC_ID ody_pccpf_xxx_vsec_id_t
#define bustype_ODY_PCCPF_XXX_VSEC_ID CSR_TYPE_PCCPF
#define basename_ODY_PCCPF_XXX_VSEC_ID "PCCPF_XXX_VSEC_ID"
#define busnum_ODY_PCCPF_XXX_VSEC_ID 0
#define arguments_ODY_PCCPF_XXX_VSEC_ID -1, -1, -1, -1

/**
 * Register (PCCPF) pccpf_xxx_vsec_sctl
 *
 * PCC PF Vendor-Specific Secure Control Register
 * This register is reset on a chip domain reset.
 */
union ody_pccpf_xxx_vsec_sctl {
	uint32_t u;
	struct ody_pccpf_xxx_vsec_sctl_s {
		uint32_t msix_phys                   : 1;
		uint32_t msix_sec                    : 1;
		uint32_t msix_sec_en                 : 1;
		uint32_t ea                          : 1;
		uint32_t node                        : 2;
		uint32_t gia_timeout                 : 6;
		uint32_t reserved_12_14              : 3;
		uint32_t msix_sec_phys               : 1;
		uint32_t rid                         : 8;
		uint32_t nxtfn_s                     : 8;
	} s;
	/* struct ody_pccpf_xxx_vsec_sctl_s cn; */
};
typedef union ody_pccpf_xxx_vsec_sctl ody_pccpf_xxx_vsec_sctl_t;

#define ODY_PCCPF_XXX_VSEC_SCTL ODY_PCCPF_XXX_VSEC_SCTL_FUNC()
static inline uint64_t ODY_PCCPF_XXX_VSEC_SCTL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCCPF_XXX_VSEC_SCTL_FUNC(void)
{
	return 0x10c;
}

#define typedef_ODY_PCCPF_XXX_VSEC_SCTL ody_pccpf_xxx_vsec_sctl_t
#define bustype_ODY_PCCPF_XXX_VSEC_SCTL CSR_TYPE_PCCPF
#define basename_ODY_PCCPF_XXX_VSEC_SCTL "PCCPF_XXX_VSEC_SCTL"
#define busnum_ODY_PCCPF_XXX_VSEC_SCTL 0
#define arguments_ODY_PCCPF_XXX_VSEC_SCTL -1, -1, -1, -1

/**
 * Register (PCCPF) pccpf_xxx_vsec_sctl2
 *
 * PCC PF Vendor-Specific Secure Control 2 Register
 * This register is reset on a chip domain reset.
 */
union ody_pccpf_xxx_vsec_sctl2 {
	uint32_t u;
	struct ody_pccpf_xxx_vsec_sctl2_s {
		uint32_t ssid                        : 16;
		uint32_t reserved_16_31              : 16;
	} s;
	/* struct ody_pccpf_xxx_vsec_sctl2_s cn; */
};
typedef union ody_pccpf_xxx_vsec_sctl2 ody_pccpf_xxx_vsec_sctl2_t;

#define ODY_PCCPF_XXX_VSEC_SCTL2 ODY_PCCPF_XXX_VSEC_SCTL2_FUNC()
static inline uint64_t ODY_PCCPF_XXX_VSEC_SCTL2_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCCPF_XXX_VSEC_SCTL2_FUNC(void)
{
	return 0x110;
}

#define typedef_ODY_PCCPF_XXX_VSEC_SCTL2 ody_pccpf_xxx_vsec_sctl2_t
#define bustype_ODY_PCCPF_XXX_VSEC_SCTL2 CSR_TYPE_PCCPF
#define basename_ODY_PCCPF_XXX_VSEC_SCTL2 "PCCPF_XXX_VSEC_SCTL2"
#define busnum_ODY_PCCPF_XXX_VSEC_SCTL2 0
#define arguments_ODY_PCCPF_XXX_VSEC_SCTL2 -1, -1, -1, -1

#endif /* __ODY_CSRS_PCCPF_H__ */
