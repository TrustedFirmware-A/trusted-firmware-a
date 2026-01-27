#ifndef __ODY_CSRS_GIC_H__
#define __ODY_CSRS_GIC_H__
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
 * GIC.
 *
 * This file is auto generated. Do not edit.
 *
 */

/**
 * Enumeration gic_bar_e
 *
 * GIC Base Address Register Enumeration
 * Enumerates the base address registers.
 */
#define ODY_GIC_BAR_E_GICDA_BAR (0x801001500000ll)
#define ODY_GIC_BAR_E_GICDA_BAR_SIZE 0x10000ull
#define ODY_GIC_BAR_E_GIC_PF_BAR0 (0x801000000000ll)
#define ODY_GIC_BAR_E_GIC_PF_BAR0_SIZE 0x80000000ull
#define ODY_GIC_BAR_E_GIC_PF_BAR4 (0x801080000000ll)
#define ODY_GIC_BAR_E_GIC_PF_BAR4_SIZE 0x80000000ull

/**
 * Enumeration gic_int_vec_e
 *
 * GIC MSI-X Vector Enumeration
 * Enumerates the MSI-X interrupt vectors.
 */
#define ODY_GIC_INT_VEC_E_GICD_INT (0x52)
#define ODY_GIC_INT_VEC_E_GIC_WAKE_INTX(a) (0 + (a))

/**
 * Enumeration gicp_event_id_e
 *
 * GIC Performance Counter Event ID Enumeration
 * Enumerates the index of GIC_INT_REQ()_PC.
 */
#define ODY_GICP_EVENT_ID_E_GIC_ACC (0x80)
#define ODY_GICP_EVENT_ID_E_GIC_CLC_CYCL (0)
#define ODY_GICP_EVENT_ID_E_GIC_DN_MSG_PHY (4)
#define ODY_GICP_EVENT_ID_E_GIC_DN_SET_PHY (5)
#define ODY_GICP_EVENT_ID_E_GIC_DN_SET_VIRT (0x88)
#define ODY_GICP_EVENT_ID_E_GIC_ITS_COL_MISS (0x26)
#define ODY_GICP_EVENT_ID_E_GIC_ITS_DID_MISS (0x24)
#define ODY_GICP_EVENT_ID_E_GIC_ITS_LAT (0x27)
#define ODY_GICP_EVENT_ID_E_GIC_ITS_LL_LPI (0x21)
#define ODY_GICP_EVENT_ID_E_GIC_ITS_LPI (0x22)
#define ODY_GICP_EVENT_ID_E_GIC_ITS_LPI_CMD (0x23)
#define ODY_GICP_EVENT_ID_E_GIC_ITS_MPFA (0x28)
#define ODY_GICP_EVENT_ID_E_GIC_ITS_NLL_LPI (0x20)
#define ODY_GICP_EVENT_ID_E_GIC_ITS_VID_MISS (0x25)
#define ODY_GICP_EVENT_ID_E_GIC_LPI_FAS (0x36)
#define ODY_GICP_EVENT_ID_E_GIC_LPI_HIT (0x34)
#define ODY_GICP_EVENT_ID_E_GIC_LPI_HIT_DIS (0x33)
#define ODY_GICP_EVENT_ID_E_GIC_LPI_HIT_EN (0x32)
#define ODY_GICP_EVENT_ID_E_GIC_LPI_MATCH (0x35)
#define ODY_GICP_EVENT_ID_E_GIC_LPI_OOL_STORED (0x31)
#define ODY_GICP_EVENT_ID_E_GIC_LPI_OWN_STORED (0x30)
#define ODY_GICP_EVENT_ID_E_GIC_LPI_PROP (0x39)
#define ODY_GICP_EVENT_ID_E_GIC_LPI_PROP_DIS (0x38)
#define ODY_GICP_EVENT_ID_E_GIC_LPI_PROP_EN (0x37)
#define ODY_GICP_EVENT_ID_E_GIC_NG (1)
#define ODY_GICP_EVENT_ID_E_GIC_OFLOW (0x81)
#define ODY_GICP_EVENT_ID_E_GIC_PT_IN (0x63)
#define ODY_GICP_EVENT_ID_E_GIC_PT_IN_DIS (0x61)
#define ODY_GICP_EVENT_ID_E_GIC_PT_IN_EN (0x60)
#define ODY_GICP_EVENT_ID_E_GIC_PT_MATCH (0x64)
#define ODY_GICP_EVENT_ID_E_GIC_PT_OUT (0x67)
#define ODY_GICP_EVENT_ID_E_GIC_PT_OUT_DIS (0x66)
#define ODY_GICP_EVENT_ID_E_GIC_PT_OUT_EN (0x65)
#define ODY_GICP_EVENT_ID_E_GIC_PT_PRI (0x62)
#define ODY_GICP_EVENT_ID_E_GIC_RES_COMP (0x79)
#define ODY_GICP_EVENT_ID_E_GIC_RES_START (0x78)
#define ODY_GICP_EVENT_ID_E_GIC_SGI_ACC (0x13)
#define ODY_GICP_EVENT_ID_E_GIC_SGI_ALL (0x12)
#define ODY_GICP_EVENT_ID_E_GIC_SGI_BRD (0x10)
#define ODY_GICP_EVENT_ID_E_GIC_SGI_TAR (0x11)
#define ODY_GICP_EVENT_ID_E_GIC_SPI_COL_MSG (0x50)
#define ODY_GICP_EVENT_ID_E_GIC_SPI_DISABLED (0x52)
#define ODY_GICP_EVENT_ID_E_GIC_SPI_ENABLED (0x51)
#define ODY_GICP_EVENT_ID_E_GIC_SPI_MATCH (0x55)
#define ODY_GICP_EVENT_ID_E_GIC_SPI_PENDING_CLR (0x54)
#define ODY_GICP_EVENT_ID_E_GIC_SPI_PENDING_SET (0x53)
#define ODY_GICP_EVENT_ID_E_GIC_UP_ACT_DBL (0xe)
#define ODY_GICP_EVENT_ID_E_GIC_UP_ACT_LPI (0xb)
#define ODY_GICP_EVENT_ID_E_GIC_UP_ACT_SPI (9)
#define ODY_GICP_EVENT_ID_E_GIC_UP_ACT_VLPI (0x8a)
#define ODY_GICP_EVENT_ID_E_GIC_UP_ACT_VSGI (0x8b)
#define ODY_GICP_EVENT_ID_E_GIC_UP_DEACT (0xd)
#define ODY_GICP_EVENT_ID_E_GIC_UP_MSG_PHY (8)
#define ODY_GICP_EVENT_ID_E_GIC_UP_REL_PHY (0xa)
#define ODY_GICP_EVENT_ID_E_GIC_UP_REL_VIRT (0x89)
#define ODY_GICP_EVENT_ID_E_GIC_UP_SET_COMP_PHY (0xc)
#define ODY_GICP_EVENT_ID_E_GIC_UP_SET_COMP_VIRT (0x8c)
#define ODY_GICP_EVENT_ID_E_GIC_VLPI_BUFF_FILL (0x73)
#define ODY_GICP_EVENT_ID_E_GIC_VSGI_IN_RAM (0x72)
#define ODY_GICP_EVENT_ID_E_GIT_DN_SET1OFN_PHY (6)

/**
 * Enumeration gits_cmd_err_e
 *
 * GIC ITS Command Error Enumeration
 * The actual 24-bit ITS command SEI is defined as {8'h01,
 * GITS_CMD_TYPE_E(8-bit), GITS_CMD_ERR_E(8-bit)}.
 */
#define ODY_GITS_CMD_ERR_E_CSEI_CMDVCPU_INVALID (0x17)
#define ODY_GITS_CMD_ERR_E_CSEI_CMD_TO (0xe0)
#define ODY_GITS_CMD_ERR_E_CSEI_COLLECTION_OOR (3)
#define ODY_GITS_CMD_ERR_E_CSEI_DEVICE_OOR (0)
#define ODY_GITS_CMD_ERR_E_CSEI_ID_IS_PHYSICAL (0x15)
#define ODY_GITS_CMD_ERR_E_CSEI_ID_OOR (5)
#define ODY_GITS_CMD_ERR_E_CSEI_INVALID_COMMAND (1)
#define ODY_GITS_CMD_ERR_E_CSEI_ITEVCPU_INVALID (0x16)
#define ODY_GITS_CMD_ERR_E_CSEI_ITE_INVALID (0x10)
#define ODY_GITS_CMD_ERR_E_CSEI_ITTSIZE_OOR (2)
#define ODY_GITS_CMD_ERR_E_CSEI_PHYSICALID_OOR (6)
#define ODY_GITS_CMD_ERR_E_CSEI_SYNCACK_INVALID (0xe1)
#define ODY_GITS_CMD_ERR_E_CSEI_TA_INVALID (0xfe)
#define ODY_GITS_CMD_ERR_E_CSEI_UNMAPPED_COLLECTION (9)
#define ODY_GITS_CMD_ERR_E_CSEI_UNMAPPED_DEVICE (4)
#define ODY_GITS_CMD_ERR_E_CSEI_UNMAPPED_INTERRUPT (7)
#define ODY_GITS_CMD_ERR_E_CSEI_UNSUPPORTED_CMD (0xff)
#define ODY_GITS_CMD_ERR_E_CSEI_VCPU_INVALID (0x14)
#define ODY_GITS_CMD_ERR_E_CSEI_VCPU_OOR (0x11)
#define ODY_GITS_CMD_ERR_E_CSEI_VIRTUALID_OOR (0x13)
#define ODY_GITS_CMD_ERR_E_CSEI_VPTSIZE_OOR (0x12)

/**
 * Enumeration gits_cmd_type_e
 *
 * GIC ITS Command Type Enumeration
 * Enumerates the ITS commands.
 */
#define ODY_GITS_CMD_TYPE_E_CMD_CLEAR (4)
#define ODY_GITS_CMD_TYPE_E_CMD_DISCARD (0xf)
#define ODY_GITS_CMD_TYPE_E_CMD_INT (3)
#define ODY_GITS_CMD_TYPE_E_CMD_INV (0xc)
#define ODY_GITS_CMD_TYPE_E_CMD_INVALL (0xd)
#define ODY_GITS_CMD_TYPE_E_CMD_MAPC (9)
#define ODY_GITS_CMD_TYPE_E_CMD_MAPD (8)
#define ODY_GITS_CMD_TYPE_E_CMD_MAPI (0xb)
#define ODY_GITS_CMD_TYPE_E_CMD_MAPTI (0xa)
#define ODY_GITS_CMD_TYPE_E_CMD_MOVALL (0xe)
#define ODY_GITS_CMD_TYPE_E_CMD_MOVI (1)
#define ODY_GITS_CMD_TYPE_E_CMD_SYNC (5)
#define ODY_GITS_CMD_TYPE_E_CMD_UDF (0)
#define ODY_GITS_CMD_TYPE_E_CMD_VINVALL (0x2d)
#define ODY_GITS_CMD_TYPE_E_CMD_VMAPI (0x2b)
#define ODY_GITS_CMD_TYPE_E_CMD_VMAPP (0x29)
#define ODY_GITS_CMD_TYPE_E_CMD_VMAPTI (0x2a)
#define ODY_GITS_CMD_TYPE_E_CMD_VMOVI (0x21)
#define ODY_GITS_CMD_TYPE_E_CMD_VMOVP (0x22)
#define ODY_GITS_CMD_TYPE_E_CMD_VSYNC (0x25)

/**
 * Structure gits_cmd_clear_s
 *
 * GIC ITS Clear Command Structure
 */
union ody_gits_cmd_clear_s {
	uint64_t u[4];
	struct ody_gits_cmd_clear_s_s {
		uint64_t cmd_type                    : 8;
		uint64_t reserved_8_31               : 24;
		uint64_t dev_id                      : 32;
		uint64_t evnt_id                     : 32;
		uint64_t reserved_96_127             : 32;
		uint64_t reserved_128_191            : 64;
		uint64_t reserved_192_255            : 64;
	} s;
	/* struct ody_gits_cmd_clear_s_s cn; */
};

/**
 * Structure gits_cmd_discard_s
 *
 * GIC ITS Discard Command Structure
 */
union ody_gits_cmd_discard_s {
	uint64_t u[4];
	struct ody_gits_cmd_discard_s_s {
		uint64_t cmd_type                    : 8;
		uint64_t reserved_8_31               : 24;
		uint64_t dev_id                      : 32;
		uint64_t evnt_id                     : 32;
		uint64_t reserved_96_127             : 32;
		uint64_t reserved_128_191            : 64;
		uint64_t reserved_192_255            : 64;
	} s;
	/* struct ody_gits_cmd_discard_s_s cn; */
};

/**
 * Structure gits_cmd_int_s
 *
 * GIC ITS INT Command Structure
 */
union ody_gits_cmd_int_s {
	uint64_t u[4];
	struct ody_gits_cmd_int_s_s {
		uint64_t cmd_type                    : 8;
		uint64_t reserved_8_31               : 24;
		uint64_t dev_id                      : 32;
		uint64_t evnt_id                     : 32;
		uint64_t reserved_96_127             : 32;
		uint64_t reserved_128_191            : 64;
		uint64_t reserved_192_255            : 64;
	} s;
	/* struct ody_gits_cmd_int_s_s cn; */
};

/**
 * Structure gits_cmd_inv_s
 *
 * GIC ITS INV Command Structure
 */
union ody_gits_cmd_inv_s {
	uint64_t u[4];
	struct ody_gits_cmd_inv_s_s {
		uint64_t cmd_type                    : 8;
		uint64_t reserved_8_31               : 24;
		uint64_t dev_id                      : 32;
		uint64_t evnt_id                     : 32;
		uint64_t reserved_96_127             : 32;
		uint64_t reserved_128_191            : 64;
		uint64_t reserved_192_255            : 64;
	} s;
	/* struct ody_gits_cmd_inv_s_s cn; */
};

/**
 * Structure gits_cmd_invall_s
 *
 * GIC ITS INVALL Command Structure
 */
union ody_gits_cmd_invall_s {
	uint64_t u[4];
	struct ody_gits_cmd_invall_s_s {
		uint64_t cmd_type                    : 8;
		uint64_t reserved_8_63               : 56;
		uint64_t reserved_64_127             : 64;
		uint64_t icid                        : 16;
		uint64_t reserved_144_191            : 48;
		uint64_t reserved_192_255            : 64;
	} s;
	/* struct ody_gits_cmd_invall_s_s cn; */
};

/**
 * Structure gits_cmd_mapc_s
 *
 * GIC ITS MAPC Command Structure
 */
union ody_gits_cmd_mapc_s {
	uint64_t u[4];
	struct ody_gits_cmd_mapc_s_s {
		uint64_t cmd_type                    : 8;
		uint64_t reserved_8_63               : 56;
		uint64_t reserved_64_127             : 64;
		uint64_t icid                        : 16;
		uint64_t rdbase                      : 35;
		uint64_t reserved_179_190            : 12;
		uint64_t v                           : 1;
		uint64_t reserved_192_255            : 64;
	} s;
	/* struct ody_gits_cmd_mapc_s_s cn; */
};

/**
 * Structure gits_cmd_mapd_s
 *
 * GIC ITS MAPD Command Structure
 */
union ody_gits_cmd_mapd_s {
	uint64_t u[4];
	struct ody_gits_cmd_mapd_s_s {
		uint64_t cmd_type                    : 8;
		uint64_t reserved_8_31               : 24;
		uint64_t dev_id                      : 32;
		uint64_t size                        : 5;
		uint64_t reserved_69_127             : 59;
		uint64_t reserved_128_135            : 8;
		uint64_t itt_addr                    : 43;
		uint64_t reserved_179_190            : 12;
		uint64_t v                           : 1;
		uint64_t reserved_192_255            : 64;
	} s;
	/* struct ody_gits_cmd_mapd_s_s cn; */
};

/**
 * Structure gits_cmd_mapi_s
 *
 * GIC ITS MAPI Command Structure
 */
union ody_gits_cmd_mapi_s {
	uint64_t u[4];
	struct ody_gits_cmd_mapi_s_s {
		uint64_t cmd_type                    : 8;
		uint64_t reserved_8_31               : 24;
		uint64_t dev_id                      : 32;
		uint64_t evnt_id                     : 32;
		uint64_t reserved_96_127             : 32;
		uint64_t cid                         : 16;
		uint64_t reserved_144_191            : 48;
		uint64_t reserved_192_255            : 64;
	} s;
	/* struct ody_gits_cmd_mapi_s_s cn; */
};

/**
 * Structure gits_cmd_mapti_s
 *
 * GIC ITS MAPTI Command Structure
 */
union ody_gits_cmd_mapti_s {
	uint64_t u[4];
	struct ody_gits_cmd_mapti_s_s {
		uint64_t cmd_type                    : 8;
		uint64_t reserved_8_31               : 24;
		uint64_t dev_id                      : 32;
		uint64_t evnt_id                     : 32;
		uint64_t pint_id                     : 32;
		uint64_t cid                         : 16;
		uint64_t reserved_144_191            : 48;
		uint64_t reserved_192_255            : 64;
	} s;
	/* struct ody_gits_cmd_mapti_s_s cn; */
};

/**
 * Structure gits_cmd_movall_s
 *
 * GIC ITS MOVALL Command Structure
 */
union ody_gits_cmd_movall_s {
	uint64_t u[4];
	struct ody_gits_cmd_movall_s_s {
		uint64_t cmd_type                    : 8;
		uint64_t reserved_8_63               : 56;
		uint64_t reserved_64_127             : 64;
		uint64_t reserved_128_143            : 16;
		uint64_t rdbase1                     : 35;
		uint64_t reserved_179_191            : 13;
		uint64_t reserved_192_207            : 16;
		uint64_t rdbase2                     : 35;
		uint64_t reserved_243_255            : 13;
	} s;
	/* struct ody_gits_cmd_movall_s_s cn; */
};

/**
 * Structure gits_cmd_movi_s
 *
 * GIC ITS MOVI Command Structure
 */
union ody_gits_cmd_movi_s {
	uint64_t u[4];
	struct ody_gits_cmd_movi_s_s {
		uint64_t cmd_type                    : 8;
		uint64_t reserved_8_31               : 24;
		uint64_t dev_id                      : 32;
		uint64_t evnt_id                     : 32;
		uint64_t reserved_96_127             : 32;
		uint64_t cid                         : 16;
		uint64_t reserved_144_191            : 48;
		uint64_t reserved_192_255            : 64;
	} s;
	/* struct ody_gits_cmd_movi_s_s cn; */
};

/**
 * Structure gits_cmd_sync_s
 *
 * GIC ITS SYNC Command Structure
 */
union ody_gits_cmd_sync_s {
	uint64_t u[4];
	struct ody_gits_cmd_sync_s_s {
		uint64_t cmd_type                    : 8;
		uint64_t reserved_8_63               : 56;
		uint64_t reserved_64_127             : 64;
		uint64_t reserved_128_143            : 16;
		uint64_t rdbase                      : 32;
		uint64_t reserved_176_191            : 16;
		uint64_t reserved_192_255            : 64;
	} s;
	/* struct ody_gits_cmd_sync_s_s cn; */
};

/**
 * Structure gits_cmd_vinvall_s
 *
 * GIC ITS VINVALL Command Structure
 */
union ody_gits_cmd_vinvall_s {
	uint64_t u[4];
	struct ody_gits_cmd_vinvall_s_s {
		uint64_t cmd_type                    : 8;
		uint64_t reserved_8_63               : 56;
		uint64_t reserved_64_95              : 32;
		uint64_t vpeid                       : 16;
		uint64_t reserved_112_127            : 16;
		uint64_t reserved_128_191            : 64;
		uint64_t reserved_192_255            : 64;
	} s;
	/* struct ody_gits_cmd_vinvall_s_s cn; */
};

/**
 * Structure gits_cmd_vmapi_s
 *
 * GIC ITS VMAPI Command Structure
 */
union ody_gits_cmd_vmapi_s {
	uint64_t u[4];
	struct ody_gits_cmd_vmapi_s_s {
		uint64_t cmd_type                    : 8;
		uint64_t reserved_8_63               : 56;
		uint64_t evnt_id                     : 32;
		uint64_t vpeid                       : 16;
		uint64_t reserved_112_127            : 16;
		uint64_t reserved_128_159            : 32;
		uint64_t dbell_pintid                : 32;
		uint64_t reserved_192_255            : 64;
	} s;
	/* struct ody_gits_cmd_vmapi_s_s cn; */
};

/**
 * Structure gits_cmd_vmapp_s
 *
 * GIC ITS VMAPP Command Structure
 */
union ody_gits_cmd_vmapp_s {
	uint64_t u[4];
	struct ody_gits_cmd_vmapp_s_s {
		uint64_t cmd_type                    : 8;
		uint64_t reserved_8_63               : 56;
		uint64_t reserved_64_95              : 32;
		uint64_t vpeid                       : 16;
		uint64_t reserved_112_127            : 16;
		uint64_t reserved_128_143            : 16;
		uint64_t rdbase                      : 35;
		uint64_t reserved_179_190            : 12;
		uint64_t v                           : 1;
		uint64_t vpt_size                    : 5;
		uint64_t reserved_197_207            : 11;
		uint64_t vpt_addr                    : 35;
		uint64_t reserved_243_255            : 13;
	} s;
	/* struct ody_gits_cmd_vmapp_s_s cn; */
};

/**
 * Structure gits_cmd_vmapti_s
 *
 * GIC ITS VMAPTI Command Structure
 */
union ody_gits_cmd_vmapti_s {
	uint64_t u[4];
	struct ody_gits_cmd_vmapti_s_s {
		uint64_t cmd_type                    : 8;
		uint64_t reserved_8_31               : 24;
		uint64_t dev_id                      : 32;
		uint64_t evnt_id                     : 32;
		uint64_t vpeid                       : 16;
		uint64_t reserved_112_127            : 16;
		uint64_t vintid                      : 32;
		uint64_t dbell_pintid                : 32;
		uint64_t reserved_192_255            : 64;
	} s;
	/* struct ody_gits_cmd_vmapti_s_s cn; */
};

/**
 * Structure gits_cmd_vmovi_s
 *
 * GIC ITS VMOVI Command Structure
 */
union ody_gits_cmd_vmovi_s {
	uint64_t u[4];
	struct ody_gits_cmd_vmovi_s_s {
		uint64_t cmd_type                    : 8;
		uint64_t reserved_8_31               : 24;
		uint64_t dev_id                      : 32;
		uint64_t evnt_id                     : 32;
		uint64_t vpeid                       : 16;
		uint64_t reserved_112_127            : 16;
		uint64_t d_vld                       : 1;
		uint64_t reserved_129_159            : 31;
		uint64_t dbell_pintid                : 32;
		uint64_t reserved_192_255            : 64;
	} s;
	/* struct ody_gits_cmd_vmovi_s_s cn; */
};

/**
 * Structure gits_cmd_vmovp_s
 *
 * GIC ITS VMOVP Command Structure
 */
union ody_gits_cmd_vmovp_s {
	uint64_t u[4];
	struct ody_gits_cmd_vmovp_s_s {
		uint64_t cmd_type                    : 8;
		uint64_t reserved_8_31               : 24;
		uint64_t seq_num                     : 18;
		uint64_t reserved_50_63              : 14;
		uint64_t its_list                    : 16;
		uint64_t reserved_80_95              : 16;
		uint64_t vpeid                       : 16;
		uint64_t reserved_112_127            : 16;
		uint64_t reserved_128_143            : 16;
		uint64_t rdbase                      : 35;
		uint64_t reserved_179_191            : 13;
		uint64_t reserved_192_255            : 64;
	} s;
	/* struct ody_gits_cmd_vmovp_s_s cn; */
};

/**
 * Structure gits_cmd_vsync_s
 *
 * GIC ITS VSYNC Command Structure
 */
union ody_gits_cmd_vsync_s {
	uint64_t u[4];
	struct ody_gits_cmd_vsync_s_s {
		uint64_t cmd_type                    : 8;
		uint64_t reserved_8_63               : 56;
		uint64_t reserved_64_95              : 32;
		uint64_t vpeid                       : 16;
		uint64_t reserved_112_127            : 16;
		uint64_t reserved_128_191            : 64;
		uint64_t reserved_192_255            : 64;
	} s;
	/* struct ody_gits_cmd_vsync_s_s cn; */
};

/**
 * Register (NCB) gic_anb_aximstr_status
 *
 * ANB AXISLV Block Status Register
 */
union ody_gic_anb_aximstr_status {
	uint64_t u;
	struct ody_gic_anb_aximstr_status_s {
		uint64_t anb_aximstr_rd_resp_nok     : 1;
		uint64_t anb_aximstr_wr_resp_nok     : 1;
		uint64_t reserved_2_63               : 62;
	} s;
	/* struct ody_gic_anb_aximstr_status_s cn; */
};
typedef union ody_gic_anb_aximstr_status ody_gic_anb_aximstr_status_t;

#define ODY_GIC_ANB_AXIMSTR_STATUS ODY_GIC_ANB_AXIMSTR_STATUS_FUNC()
static inline uint64_t ODY_GIC_ANB_AXIMSTR_STATUS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GIC_ANB_AXIMSTR_STATUS_FUNC(void)
{
	return 0x801010012060ll;
}

#define typedef_ODY_GIC_ANB_AXIMSTR_STATUS ody_gic_anb_aximstr_status_t
#define bustype_ODY_GIC_ANB_AXIMSTR_STATUS CSR_TYPE_NCB
#define basename_ODY_GIC_ANB_AXIMSTR_STATUS "GIC_ANB_AXIMSTR_STATUS"
#define device_bar_ODY_GIC_ANB_AXIMSTR_STATUS 0x0 /* PF_BAR0 */
#define busnum_ODY_GIC_ANB_AXIMSTR_STATUS 0
#define arguments_ODY_GIC_ANB_AXIMSTR_STATUS -1, -1, -1, -1

/**
 * Register (NCB) gic_anb_axislv_status
 *
 * ANB AXISLV Block Status Register
 */
union ody_gic_anb_axislv_status {
	uint64_t u;
	struct ody_gic_anb_axislv_status_s {
		uint64_t anb_axislv_b_fifo_overrun   : 1;
		uint64_t anb_axislv_r_fifo_overrun   : 1;
		uint64_t anb_axislv_load_size_exc    : 1;
		uint64_t anb_axislv_write_size_exc   : 1;
		uint64_t anb_axislv_empty_write      : 1;
		uint64_t anb_axislv_multi_beat_nrw_wr : 1;
		uint64_t anb_axislv_multi_beat_nrw_rd : 1;
		uint64_t anb_axislv_single_beat_nrw_wr : 1;
		uint64_t anb_axislv_single_beat_nrw_rd : 1;
		uint64_t anb_axislv_bad_narrow_write_8 : 1;
		uint64_t anb_axislv_bad_narrow_write_16 : 1;
		uint64_t anb_axislv_bad_narrow_write_32 : 1;
		uint64_t anb_axislv_bad_narrow_write_64 : 1;
		uint64_t reserved_13_63              : 51;
	} s;
	/* struct ody_gic_anb_axislv_status_s cn; */
};
typedef union ody_gic_anb_axislv_status ody_gic_anb_axislv_status_t;

#define ODY_GIC_ANB_AXISLV_STATUS ODY_GIC_ANB_AXISLV_STATUS_FUNC()
static inline uint64_t ODY_GIC_ANB_AXISLV_STATUS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GIC_ANB_AXISLV_STATUS_FUNC(void)
{
	return 0x801010012030ll;
}

#define typedef_ODY_GIC_ANB_AXISLV_STATUS ody_gic_anb_axislv_status_t
#define bustype_ODY_GIC_ANB_AXISLV_STATUS CSR_TYPE_NCB
#define basename_ODY_GIC_ANB_AXISLV_STATUS "GIC_ANB_AXISLV_STATUS"
#define device_bar_ODY_GIC_ANB_AXISLV_STATUS 0x0 /* PF_BAR0 */
#define busnum_ODY_GIC_ANB_AXISLV_STATUS 0
#define arguments_ODY_GIC_ANB_AXISLV_STATUS -1, -1, -1, -1

/**
 * Register (NCB) gic_anb_backp_disable
 *
 * ANB Backpressure Configuration Register
 */
union ody_gic_anb_backp_disable {
	uint64_t u;
	struct ody_gic_anb_backp_disable_s {
		uint64_t anb_extmstr_b_backp_disable : 1;
		uint64_t anb_extmstr_r_backp_disable : 1;
		uint64_t anb_chicken_w_wait_for_aw   : 1;
		uint64_t anb_force_ncb_rst_active    : 1;
		uint64_t anb_ncb_rst_drain_axislv_fifos : 1;
		uint64_t reserved_5_63               : 59;
	} s;
	/* struct ody_gic_anb_backp_disable_s cn; */
};
typedef union ody_gic_anb_backp_disable ody_gic_anb_backp_disable_t;

#define ODY_GIC_ANB_BACKP_DISABLE ODY_GIC_ANB_BACKP_DISABLE_FUNC()
static inline uint64_t ODY_GIC_ANB_BACKP_DISABLE_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GIC_ANB_BACKP_DISABLE_FUNC(void)
{
	return 0x801010012000ll;
}

#define typedef_ODY_GIC_ANB_BACKP_DISABLE ody_gic_anb_backp_disable_t
#define bustype_ODY_GIC_ANB_BACKP_DISABLE CSR_TYPE_NCB
#define basename_ODY_GIC_ANB_BACKP_DISABLE "GIC_ANB_BACKP_DISABLE"
#define device_bar_ODY_GIC_ANB_BACKP_DISABLE 0x0 /* PF_BAR0 */
#define busnum_ODY_GIC_ANB_BACKP_DISABLE 0
#define arguments_ODY_GIC_ANB_BACKP_DISABLE -1, -1, -1, -1

/**
 * Register (NCB) gic_anb_ncbi_np_ovr
 *
 * ANB NCBITXT NP Path CMD Overrides Register
 */
union ody_gic_anb_ncbi_np_ovr {
	uint64_t u;
	struct ody_gic_anb_ncbi_np_ovr_s {
		uint64_t anb_ncbi_np_msh_dst_ovr_vld : 1;
		uint64_t anb_ncbi_np_msh_dst_ovr     : 11;
		uint64_t anb_ncbi_np_ns_ovr_vld      : 1;
		uint64_t anb_ncbi_np_ns_ovr          : 1;
		uint64_t anb_ncbi_np_paddr_ovr_vld   : 1;
		uint64_t anb_ncbi_np_paddr_ovr       : 1;
		uint64_t anb_ncbi_np_ro_ovr_vld      : 1;
		uint64_t anb_ncbi_np_ro_ovr          : 1;
		uint64_t anb_ncbi_np_mpadid_val_ovr_vld : 1;
		uint64_t anb_ncbi_np_mpadid_val_ovr  : 1;
		uint64_t anb_ncbi_np_mpamdid_ovr_vld : 1;
		uint64_t anb_ncbi_np_mpamdid_ovr     : 10;
		uint64_t anb_ncbi_np_ldd_frc         : 1;
		uint64_t reserved_32_63              : 32;
	} s;
	/* struct ody_gic_anb_ncbi_np_ovr_s cn; */
};
typedef union ody_gic_anb_ncbi_np_ovr ody_gic_anb_ncbi_np_ovr_t;

#define ODY_GIC_ANB_NCBI_NP_OVR ODY_GIC_ANB_NCBI_NP_OVR_FUNC()
static inline uint64_t ODY_GIC_ANB_NCBI_NP_OVR_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GIC_ANB_NCBI_NP_OVR_FUNC(void)
{
	return 0x801010012020ll;
}

#define typedef_ODY_GIC_ANB_NCBI_NP_OVR ody_gic_anb_ncbi_np_ovr_t
#define bustype_ODY_GIC_ANB_NCBI_NP_OVR CSR_TYPE_NCB
#define basename_ODY_GIC_ANB_NCBI_NP_OVR "GIC_ANB_NCBI_NP_OVR"
#define device_bar_ODY_GIC_ANB_NCBI_NP_OVR 0x0 /* PF_BAR0 */
#define busnum_ODY_GIC_ANB_NCBI_NP_OVR 0
#define arguments_ODY_GIC_ANB_NCBI_NP_OVR -1, -1, -1, -1

/**
 * Register (NCB) gic_anb_ncbi_p_ovr
 *
 * ANB NCBITXT P Overrides Register
 */
union ody_gic_anb_ncbi_p_ovr {
	uint64_t u;
	struct ody_gic_anb_ncbi_p_ovr_s {
		uint64_t anb_ncbi_p_msh_dst_ovr_vld  : 1;
		uint64_t anb_ncbi_p_msh_dst_ovr      : 11;
		uint64_t anb_ncbi_p_ns_ovr_vld       : 1;
		uint64_t anb_ncbi_p_ns_ovr           : 1;
		uint64_t anb_ncbi_p_paddr_ovr_vld    : 1;
		uint64_t anb_ncbi_p_paddr_ovr        : 1;
		uint64_t anb_ncbi_p_ro_ovr_vld       : 1;
		uint64_t anb_ncbi_p_ro_ovr           : 1;
		uint64_t anb_ncbi_p_mpadid_val_ovr_vld : 1;
		uint64_t anb_ncbi_p_mpadid_val_ovr   : 1;
		uint64_t anb_ncbi_p_mpamdid_ovr_vld  : 1;
		uint64_t anb_ncbi_p_mpamdid_ovr      : 10;
		uint64_t anb_ncbi_p_stt_frc          : 1;
		uint64_t reserved_32_63              : 32;
	} s;
	/* struct ody_gic_anb_ncbi_p_ovr_s cn; */
};
typedef union ody_gic_anb_ncbi_p_ovr ody_gic_anb_ncbi_p_ovr_t;

#define ODY_GIC_ANB_NCBI_P_OVR ODY_GIC_ANB_NCBI_P_OVR_FUNC()
static inline uint64_t ODY_GIC_ANB_NCBI_P_OVR_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GIC_ANB_NCBI_P_OVR_FUNC(void)
{
	return 0x801010012010ll;
}

#define typedef_ODY_GIC_ANB_NCBI_P_OVR ody_gic_anb_ncbi_p_ovr_t
#define bustype_ODY_GIC_ANB_NCBI_P_OVR CSR_TYPE_NCB
#define basename_ODY_GIC_ANB_NCBI_P_OVR "GIC_ANB_NCBI_P_OVR"
#define device_bar_ODY_GIC_ANB_NCBI_P_OVR 0x0 /* PF_BAR0 */
#define busnum_ODY_GIC_ANB_NCBI_P_OVR 0
#define arguments_ODY_GIC_ANB_NCBI_P_OVR -1, -1, -1, -1

/**
 * Register (NCB) gic_anb_ncbitx_status
 *
 * ANB AXISLV Block Status Register
 */
union ody_gic_anb_ncbitx_status {
	uint64_t u;
	struct ody_gic_anb_ncbitx_status_s {
		uint64_t anb_ncbitx_split_rd         : 1;
		uint64_t anb_ncbitx_split_wr         : 1;
		uint64_t reserved_2_63               : 62;
	} s;
	/* struct ody_gic_anb_ncbitx_status_s cn; */
};
typedef union ody_gic_anb_ncbitx_status ody_gic_anb_ncbitx_status_t;

#define ODY_GIC_ANB_NCBITX_STATUS ODY_GIC_ANB_NCBITX_STATUS_FUNC()
static inline uint64_t ODY_GIC_ANB_NCBITX_STATUS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GIC_ANB_NCBITX_STATUS_FUNC(void)
{
	return 0x801010012040ll;
}

#define typedef_ODY_GIC_ANB_NCBITX_STATUS ody_gic_anb_ncbitx_status_t
#define bustype_ODY_GIC_ANB_NCBITX_STATUS CSR_TYPE_NCB
#define basename_ODY_GIC_ANB_NCBITX_STATUS "GIC_ANB_NCBITX_STATUS"
#define device_bar_ODY_GIC_ANB_NCBITX_STATUS 0x0 /* PF_BAR0 */
#define busnum_ODY_GIC_ANB_NCBITX_STATUS 0
#define arguments_ODY_GIC_ANB_NCBITX_STATUS -1, -1, -1, -1

/**
 * Register (NCB) gic_anb_ncborx_status
 *
 * ANB AXISLV Block Status Register
 */
union ody_gic_anb_ncborx_status {
	uint64_t u;
	struct ody_gic_anb_ncborx_status_s {
		uint64_t anb_ncborx_rcvd_unsupported_op : 1;
		uint64_t anb_nbcorx_max_num_ncb_ld_exc : 1;
		uint64_t anb_nbcorx_max_size_ncb_ld_exc : 1;
		uint64_t anb_nbcorx_max_num_ncb_st_exc : 1;
		uint64_t anb_nbcorx_max_size_ncb_st_exc : 1;
		uint64_t reserved_5_63               : 59;
	} s;
	/* struct ody_gic_anb_ncborx_status_s cn; */
};
typedef union ody_gic_anb_ncborx_status ody_gic_anb_ncborx_status_t;

#define ODY_GIC_ANB_NCBORX_STATUS ODY_GIC_ANB_NCBORX_STATUS_FUNC()
static inline uint64_t ODY_GIC_ANB_NCBORX_STATUS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GIC_ANB_NCBORX_STATUS_FUNC(void)
{
	return 0x801010012050ll;
}

#define typedef_ODY_GIC_ANB_NCBORX_STATUS ody_gic_anb_ncborx_status_t
#define bustype_ODY_GIC_ANB_NCBORX_STATUS CSR_TYPE_NCB
#define basename_ODY_GIC_ANB_NCBORX_STATUS "GIC_ANB_NCBORX_STATUS"
#define device_bar_ODY_GIC_ANB_NCBORX_STATUS 0x0 /* PF_BAR0 */
#define busnum_ODY_GIC_ANB_NCBORX_STATUS 0
#define arguments_ODY_GIC_ANB_NCBORX_STATUS -1, -1, -1, -1

/**
 * Register (NCB) gic_msix_pba#
 *
 * GIC MSI-X Pending Bit Array Registers
 */
union ody_gic_msix_pbax {
	uint64_t u;
	struct ody_gic_msix_pbax_s {
		uint64_t pend                        : 64;
	} s;
	/* struct ody_gic_msix_pbax_s cn; */
};
typedef union ody_gic_msix_pbax ody_gic_msix_pbax_t;

static inline uint64_t ODY_GIC_MSIX_PBAX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GIC_MSIX_PBAX(uint64_t a)
{
	if (a <= 1)
		return 0x8010800f0000ll + 8ll * ((a) & 0x1);
	__ody_csr_fatal("GIC_MSIX_PBAX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GIC_MSIX_PBAX(a) ody_gic_msix_pbax_t
#define bustype_ODY_GIC_MSIX_PBAX(a) CSR_TYPE_NCB
#define basename_ODY_GIC_MSIX_PBAX(a) "GIC_MSIX_PBAX"
#define device_bar_ODY_GIC_MSIX_PBAX(a) 0x4 /* PF_BAR4 */
#define busnum_ODY_GIC_MSIX_PBAX(a) (a)
#define arguments_ODY_GIC_MSIX_PBAX(a) (a), -1, -1, -1

/**
 * Register (NCB) gic_msix_vec#_addr
 *
 * GIC MSI-X Vector-Table Address Register
 * This register is the MSI-X vector table, indexed by the GIC_INT_VEC_E enumeration.
 */
union ody_gic_msix_vecx_addr {
	uint64_t u;
	struct ody_gic_msix_vecx_addr_s {
		uint64_t secvec                      : 1;
		uint64_t reserved_1                  : 1;
		uint64_t addr                        : 51;
		uint64_t reserved_53_63              : 11;
	} s;
	/* struct ody_gic_msix_vecx_addr_s cn; */
};
typedef union ody_gic_msix_vecx_addr ody_gic_msix_vecx_addr_t;

static inline uint64_t ODY_GIC_MSIX_VECX_ADDR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GIC_MSIX_VECX_ADDR(uint64_t a)
{
	if (a <= 82)
		return 0x801080000000ll + 0x10ll * ((a) & 0x7f);
	__ody_csr_fatal("GIC_MSIX_VECX_ADDR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GIC_MSIX_VECX_ADDR(a) ody_gic_msix_vecx_addr_t
#define bustype_ODY_GIC_MSIX_VECX_ADDR(a) CSR_TYPE_NCB
#define basename_ODY_GIC_MSIX_VECX_ADDR(a) "GIC_MSIX_VECX_ADDR"
#define device_bar_ODY_GIC_MSIX_VECX_ADDR(a) 0x4 /* PF_BAR4 */
#define busnum_ODY_GIC_MSIX_VECX_ADDR(a) (a)
#define arguments_ODY_GIC_MSIX_VECX_ADDR(a) (a), -1, -1, -1

/**
 * Register (NCB) gic_msix_vec#_ctl
 *
 * GIC MSI-X Vector-Table Control and Data Register
 * This register is the MSI-X vector table, indexed by the GIC_INT_VEC_E enumeration.
 */
union ody_gic_msix_vecx_ctl {
	uint64_t u;
	struct ody_gic_msix_vecx_ctl_s {
		uint64_t data                        : 32;
		uint64_t mask                        : 1;
		uint64_t reserved_33_63              : 31;
	} s;
	/* struct ody_gic_msix_vecx_ctl_s cn; */
};
typedef union ody_gic_msix_vecx_ctl ody_gic_msix_vecx_ctl_t;

static inline uint64_t ODY_GIC_MSIX_VECX_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GIC_MSIX_VECX_CTL(uint64_t a)
{
	if (a <= 82)
		return 0x801080000008ll + 0x10ll * ((a) & 0x7f);
	__ody_csr_fatal("GIC_MSIX_VECX_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GIC_MSIX_VECX_CTL(a) ody_gic_msix_vecx_ctl_t
#define bustype_ODY_GIC_MSIX_VECX_CTL(a) CSR_TYPE_NCB
#define basename_ODY_GIC_MSIX_VECX_CTL(a) "GIC_MSIX_VECX_CTL"
#define device_bar_ODY_GIC_MSIX_VECX_CTL(a) 0x4 /* PF_BAR4 */
#define busnum_ODY_GIC_MSIX_VECX_CTL(a) (a)
#define arguments_ODY_GIC_MSIX_VECX_CTL(a) (a), -1, -1, -1

/**
 * Register (NCB) gic_wake_int_ena_w1c#
 *
 * GIC Wake Interrupt Enable Set Register
 * This register clears interrupt enable bits.
 */
union ody_gic_wake_int_ena_w1cx {
	uint64_t u;
	struct ody_gic_wake_int_ena_w1cx_s {
		uint64_t pe_wake                     : 1;
		uint64_t reserved_1_63               : 63;
	} s;
	/* struct ody_gic_wake_int_ena_w1cx_s cn; */
};
typedef union ody_gic_wake_int_ena_w1cx ody_gic_wake_int_ena_w1cx_t;

static inline uint64_t ODY_GIC_WAKE_INT_ENA_W1CX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GIC_WAKE_INT_ENA_W1CX(uint64_t a)
{
	if (a <= 81)
		return 0x801010001018ll + 0x20ll * ((a) & 0x7f);
	__ody_csr_fatal("GIC_WAKE_INT_ENA_W1CX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GIC_WAKE_INT_ENA_W1CX(a) ody_gic_wake_int_ena_w1cx_t
#define bustype_ODY_GIC_WAKE_INT_ENA_W1CX(a) CSR_TYPE_NCB
#define basename_ODY_GIC_WAKE_INT_ENA_W1CX(a) "GIC_WAKE_INT_ENA_W1CX"
#define device_bar_ODY_GIC_WAKE_INT_ENA_W1CX(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_GIC_WAKE_INT_ENA_W1CX(a) (a)
#define arguments_ODY_GIC_WAKE_INT_ENA_W1CX(a) (a), -1, -1, -1

/**
 * Register (NCB) gic_wake_int_ena_w1s#
 *
 * GIC Wake Interrupt Enable Set Register
 * This register sets interrupt enable bits.
 */
union ody_gic_wake_int_ena_w1sx {
	uint64_t u;
	struct ody_gic_wake_int_ena_w1sx_s {
		uint64_t pe_wake                     : 1;
		uint64_t reserved_1_63               : 63;
	} s;
	/* struct ody_gic_wake_int_ena_w1sx_s cn; */
};
typedef union ody_gic_wake_int_ena_w1sx ody_gic_wake_int_ena_w1sx_t;

static inline uint64_t ODY_GIC_WAKE_INT_ENA_W1SX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GIC_WAKE_INT_ENA_W1SX(uint64_t a)
{
	if (a <= 81)
		return 0x801010001010ll + 0x20ll * ((a) & 0x7f);
	__ody_csr_fatal("GIC_WAKE_INT_ENA_W1SX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GIC_WAKE_INT_ENA_W1SX(a) ody_gic_wake_int_ena_w1sx_t
#define bustype_ODY_GIC_WAKE_INT_ENA_W1SX(a) CSR_TYPE_NCB
#define basename_ODY_GIC_WAKE_INT_ENA_W1SX(a) "GIC_WAKE_INT_ENA_W1SX"
#define device_bar_ODY_GIC_WAKE_INT_ENA_W1SX(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_GIC_WAKE_INT_ENA_W1SX(a) (a)
#define arguments_ODY_GIC_WAKE_INT_ENA_W1SX(a) (a), -1, -1, -1

/**
 * Register (NCB) gic_wake_int_w1c#
 *
 * GIC Wake Interrupt Clear Register
 */
union ody_gic_wake_int_w1cx {
	uint64_t u;
	struct ody_gic_wake_int_w1cx_s {
		uint64_t pe_wake                     : 1;
		uint64_t reserved_1_63               : 63;
	} s;
	/* struct ody_gic_wake_int_w1cx_s cn; */
};
typedef union ody_gic_wake_int_w1cx ody_gic_wake_int_w1cx_t;

static inline uint64_t ODY_GIC_WAKE_INT_W1CX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GIC_WAKE_INT_W1CX(uint64_t a)
{
	if (a <= 81)
		return 0x801010001000ll + 0x20ll * ((a) & 0x7f);
	__ody_csr_fatal("GIC_WAKE_INT_W1CX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GIC_WAKE_INT_W1CX(a) ody_gic_wake_int_w1cx_t
#define bustype_ODY_GIC_WAKE_INT_W1CX(a) CSR_TYPE_NCB
#define basename_ODY_GIC_WAKE_INT_W1CX(a) "GIC_WAKE_INT_W1CX"
#define device_bar_ODY_GIC_WAKE_INT_W1CX(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_GIC_WAKE_INT_W1CX(a) (a)
#define arguments_ODY_GIC_WAKE_INT_W1CX(a) (a), -1, -1, -1

/**
 * Register (NCB) gic_wake_int_w1s#
 *
 * GIC Wake Interrupt Set Register
 * This register sets interrupt bits.
 */
union ody_gic_wake_int_w1sx {
	uint64_t u;
	struct ody_gic_wake_int_w1sx_s {
		uint64_t pe_wake                     : 1;
		uint64_t reserved_1_63               : 63;
	} s;
	/* struct ody_gic_wake_int_w1sx_s cn; */
};
typedef union ody_gic_wake_int_w1sx ody_gic_wake_int_w1sx_t;

static inline uint64_t ODY_GIC_WAKE_INT_W1SX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GIC_WAKE_INT_W1SX(uint64_t a)
{
	if (a <= 81)
		return 0x801010001008ll + 0x20ll * ((a) & 0x7f);
	__ody_csr_fatal("GIC_WAKE_INT_W1SX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GIC_WAKE_INT_W1SX(a) ody_gic_wake_int_w1sx_t
#define bustype_ODY_GIC_WAKE_INT_W1SX(a) CSR_TYPE_NCB
#define basename_ODY_GIC_WAKE_INT_W1SX(a) "GIC_WAKE_INT_W1SX"
#define device_bar_ODY_GIC_WAKE_INT_W1SX(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_GIC_WAKE_INT_W1SX(a) (a)
#define arguments_ODY_GIC_WAKE_INT_W1SX(a) (a), -1, -1, -1

/**
 * Register (NCB32b) gica_cidr0
 *
 * GICA Cidr0 Register
 * The GICA_CIDR0 characteristics are:
 *
 * * Purpose
 * This register is one of the Component Identification Registers and returns the first
 * part of the Preamble.
 *
 * * Usage constraints
 * There are no usage constraints.
 */
union ody_gica_cidr0 {
	uint32_t u;
	struct ody_gica_cidr0_s {
		uint32_t prmbl_0                     : 8;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_gica_cidr0_s cn; */
};
typedef union ody_gica_cidr0 ody_gica_cidr0_t;

#define ODY_GICA_CIDR0 ODY_GICA_CIDR0_FUNC()
static inline uint64_t ODY_GICA_CIDR0_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICA_CIDR0_FUNC(void)
{
	return 0x80100001fff0ll;
}

#define typedef_ODY_GICA_CIDR0 ody_gica_cidr0_t
#define bustype_ODY_GICA_CIDR0 CSR_TYPE_NCB32b
#define basename_ODY_GICA_CIDR0 "GICA_CIDR0"
#define device_bar_ODY_GICA_CIDR0 0x0 /* PF_BAR0 */
#define busnum_ODY_GICA_CIDR0 0
#define arguments_ODY_GICA_CIDR0 -1, -1, -1, -1

/**
 * Register (NCB32b) gica_cidr1
 *
 * GICA Cidr1 Register
 * The GICA_CIDR1 characteristics are:
 *
 * * Purpose
 * This register is one of the Component Identification Registers and returns the
 * second part of the Preamble as well as the Component Class.
 *
 * * Usage constraints
 * There are no usage constraints.
 */
union ody_gica_cidr1 {
	uint32_t u;
	struct ody_gica_cidr1_s {
		uint32_t prmbl_1                     : 4;
		uint32_t class_f                     : 4;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_gica_cidr1_s cn; */
};
typedef union ody_gica_cidr1 ody_gica_cidr1_t;

#define ODY_GICA_CIDR1 ODY_GICA_CIDR1_FUNC()
static inline uint64_t ODY_GICA_CIDR1_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICA_CIDR1_FUNC(void)
{
	return 0x80100001fff4ll;
}

#define typedef_ODY_GICA_CIDR1 ody_gica_cidr1_t
#define bustype_ODY_GICA_CIDR1 CSR_TYPE_NCB32b
#define basename_ODY_GICA_CIDR1 "GICA_CIDR1"
#define device_bar_ODY_GICA_CIDR1 0x0 /* PF_BAR0 */
#define busnum_ODY_GICA_CIDR1 0
#define arguments_ODY_GICA_CIDR1 -1, -1, -1, -1

/**
 * Register (NCB32b) gica_cidr2
 *
 * GICA Cidr2 Register
 * The GICA_CIDR2 characteristics are:
 *
 * * Purpose
 * This register is one of the Component Identification Registers and returns the third
 * part of the Preamble.
 *
 * * Usage constraints
 * There are no usage constraints.
 */
union ody_gica_cidr2 {
	uint32_t u;
	struct ody_gica_cidr2_s {
		uint32_t prmbl_2                     : 8;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_gica_cidr2_s cn; */
};
typedef union ody_gica_cidr2 ody_gica_cidr2_t;

#define ODY_GICA_CIDR2 ODY_GICA_CIDR2_FUNC()
static inline uint64_t ODY_GICA_CIDR2_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICA_CIDR2_FUNC(void)
{
	return 0x80100001fff8ll;
}

#define typedef_ODY_GICA_CIDR2 ody_gica_cidr2_t
#define bustype_ODY_GICA_CIDR2 CSR_TYPE_NCB32b
#define basename_ODY_GICA_CIDR2 "GICA_CIDR2"
#define device_bar_ODY_GICA_CIDR2 0x0 /* PF_BAR0 */
#define busnum_ODY_GICA_CIDR2 0
#define arguments_ODY_GICA_CIDR2 -1, -1, -1, -1

/**
 * Register (NCB32b) gica_cidr3
 *
 * GICA Cidr3 Register
 * The GICA_CIDR3 characteristics are:
 *
 * * Purpose
 * This register is one of the Component Identification Registers and returns the
 * fourth part of the Preamble.
 *
 * * Usage constraints
 * There are no usage constraints.
 */
union ody_gica_cidr3 {
	uint32_t u;
	struct ody_gica_cidr3_s {
		uint32_t prmbl_3                     : 8;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_gica_cidr3_s cn; */
};
typedef union ody_gica_cidr3 ody_gica_cidr3_t;

#define ODY_GICA_CIDR3 ODY_GICA_CIDR3_FUNC()
static inline uint64_t ODY_GICA_CIDR3_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICA_CIDR3_FUNC(void)
{
	return 0x80100001fffcll;
}

#define typedef_ODY_GICA_CIDR3 ody_gica_cidr3_t
#define bustype_ODY_GICA_CIDR3 CSR_TYPE_NCB32b
#define basename_ODY_GICA_CIDR3 "GICA_CIDR3"
#define device_bar_ODY_GICA_CIDR3 0x0 /* PF_BAR0 */
#define busnum_ODY_GICA_CIDR3 0
#define arguments_ODY_GICA_CIDR3 -1, -1, -1, -1

/**
 * Register (NCB32b) gica_clrspi_nsr
 *
 * GICA Clrspi Nsr Register
 * The GICA_CLRSPI_NSR characteristics are:
 *
 * * Purpose
 * Removes the pending state to a valid SPI if permitted by the Security state of the
 * access and the GICD(A)_NSACR[E] value for that SPI.
 * A write to this register changes the state of an pending SPI to inactive, and the
 * state of an active and penmding SPI to active.
 *
 * * Usage constraints
 * The function of this register depends on whether the targeted SPI is configured to
 * be an edge-triggered or level-sensitive interrupt:
 *
 * * For an edge-triggered interrupt, a write to GICx_SETSPI_NSR or GICx_SETSPI_SR adds
 * the pending state to the targeted interrupt. It will stop being pending on
 * activation, or if the pending state is removed by a write to GICx_CLRSPI_NSR,
 * GICx_CLRSPI_SR, or GICD(A)_ICPENDR.
 * * For a level-sensitive interrupt, a write to GICx_SETSPI_NSR or GICx_SETSPI_SR adds
 * the pending state to the targeted interrupt. It will remain pending until it is
 * deasserted by a write to GICx_CLRSPI_NSR or GICx_CLRSPI_SR. If the interrupt is
 * activated between having the pending state added and being deactivated, then the
 * interrupt will be active and pending.
 *
 * Writes to this register have no effect if:
 *
 * * The value written specifies a Secure SPI, the value is written by a Non-secure
 * access, and the value of the corresponding GICD(A)_NSACR register is less than
 * 0b10.
 * * The value written specifies an invalid SPI.
 * * The SPI is not pending.
 *
 * When GICD(A)_CTLR.DS==1, this register provides functionality for all SPIs.
 */
union ody_gica_clrspi_nsr {
	uint32_t u;
	struct ody_gica_clrspi_nsr_s {
		uint32_t id                          : 16;
		uint32_t reserved_16_31              : 16;
	} s;
	/* struct ody_gica_clrspi_nsr_s cn; */
};
typedef union ody_gica_clrspi_nsr ody_gica_clrspi_nsr_t;

#define ODY_GICA_CLRSPI_NSR ODY_GICA_CLRSPI_NSR_FUNC()
static inline uint64_t ODY_GICA_CLRSPI_NSR_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICA_CLRSPI_NSR_FUNC(void)
{
	return 0x801000010048ll;
}

#define typedef_ODY_GICA_CLRSPI_NSR ody_gica_clrspi_nsr_t
#define bustype_ODY_GICA_CLRSPI_NSR CSR_TYPE_NCB32b
#define basename_ODY_GICA_CLRSPI_NSR "GICA_CLRSPI_NSR"
#define device_bar_ODY_GICA_CLRSPI_NSR 0x0 /* PF_BAR0 */
#define busnum_ODY_GICA_CLRSPI_NSR 0
#define arguments_ODY_GICA_CLRSPI_NSR -1, -1, -1, -1

/**
 * Register (NCB32b) gica_clrspi_sr
 *
 * GICA Clrspi Sr Register
 * The GICA_CLRSPI_SR characteristics are:
 *
 * * Purpose
 * Removes the pending state from a valid SPI.
 * A write to this register changes the state of a pending SPI to inactive, and the
 * state of an active and pending SPI to active.
 *
 * * Usage constraints
 * The function of this register depends on whether the targeted SPI is configured to
 * be an edge-triggered or level-sensitive interrupt:
 *
 * * For an edge-triggered interrupt, a write to GICx_SETSPI_NSR or GICx_SETSPI_SR adds
 * the pending state to the targeted interrupt. It will stop being pending on
 * activation, or if the pending state is removed by a write to GICx_CLRSPI_NSR,
 * GICx_CLRSPI_SR, or GICD(A)_ICPENDR.
 * * For a level-sensitive interrupt, a write to GICx_SETSPI_NSR or GICx_SETSPI_SR adds
 * the pending state to the targeted interrupt. It will remain pending until it is
 * deasserted by a write to GICx_CLRSPI_NSR or GICx_CLRSPI_SR. If the interrupt is
 * activated between having the pending state added and being deactivated, then the
 * interrupt will be active and pending.
 *
 * Writes to this register have no effect if:
 *
 * * The value is written by a Non-secure access.
 * * The value written specifies an invalid SPI.
 * * The SPI is not pending.
 *
 * When GICD(A)_CTLR.DS==1, this register is WI.
 * When GICD(A)_CTLR.DS==0, only secure-access.
 */
union ody_gica_clrspi_sr {
	uint32_t u;
	struct ody_gica_clrspi_sr_s {
		uint32_t id                          : 16;
		uint32_t reserved_16_31              : 16;
	} s;
	/* struct ody_gica_clrspi_sr_s cn; */
};
typedef union ody_gica_clrspi_sr ody_gica_clrspi_sr_t;

#define ODY_GICA_CLRSPI_SR ODY_GICA_CLRSPI_SR_FUNC()
static inline uint64_t ODY_GICA_CLRSPI_SR_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICA_CLRSPI_SR_FUNC(void)
{
	return 0x801000010058ll;
}

#define typedef_ODY_GICA_CLRSPI_SR ody_gica_clrspi_sr_t
#define bustype_ODY_GICA_CLRSPI_SR CSR_TYPE_NCB32b
#define basename_ODY_GICA_CLRSPI_SR "GICA_CLRSPI_SR"
#define device_bar_ODY_GICA_CLRSPI_SR 0x0 /* PF_BAR0 */
#define busnum_ODY_GICA_CLRSPI_SR 0
#define arguments_ODY_GICA_CLRSPI_SR -1, -1, -1, -1

/**
 * Register (NCB32b) gica_iidr
 *
 * GICA Iidr Register
 * The GICA_IIDR characteristics are:
 *
 * * Purpose
 * This register provides information about the implementer and revision of the
 * message-based Distributor page.
 *
 * * Usage constraints
 * There are no usage constraints.
 */
union ody_gica_iidr {
	uint32_t u;
	struct ody_gica_iidr_s {
		uint32_t implementer                 : 12;
		uint32_t revision                    : 4;
		uint32_t variant                     : 4;
		uint32_t reserved_20_23              : 4;
		uint32_t productid                   : 8;
	} s;
	/* struct ody_gica_iidr_s cn; */
};
typedef union ody_gica_iidr ody_gica_iidr_t;

#define ODY_GICA_IIDR ODY_GICA_IIDR_FUNC()
static inline uint64_t ODY_GICA_IIDR_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICA_IIDR_FUNC(void)
{
	return 0x801000010fccll;
}

#define typedef_ODY_GICA_IIDR ody_gica_iidr_t
#define bustype_ODY_GICA_IIDR CSR_TYPE_NCB32b
#define basename_ODY_GICA_IIDR "GICA_IIDR"
#define device_bar_ODY_GICA_IIDR 0x0 /* PF_BAR0 */
#define busnum_ODY_GICA_IIDR 0
#define arguments_ODY_GICA_IIDR -1, -1, -1, -1

/**
 * Register (NCB32b) gica_pidr0
 *
 * GICA Pidr0 Register
 * The GICA_PIDR0 characteristics are:
 *
 * * Purpose
 * This register returns byte[0] of the peripheral ID of the message-based Distributor page.
 *
 * * Usage constraints
 * There are no usage constraints.
 */
union ody_gica_pidr0 {
	uint32_t u;
	struct ody_gica_pidr0_s {
		uint32_t part_0                      : 8;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_gica_pidr0_s cn; */
};
typedef union ody_gica_pidr0 ody_gica_pidr0_t;

#define ODY_GICA_PIDR0 ODY_GICA_PIDR0_FUNC()
static inline uint64_t ODY_GICA_PIDR0_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICA_PIDR0_FUNC(void)
{
	return 0x80100001ffe0ll;
}

#define typedef_ODY_GICA_PIDR0 ody_gica_pidr0_t
#define bustype_ODY_GICA_PIDR0 CSR_TYPE_NCB32b
#define basename_ODY_GICA_PIDR0 "GICA_PIDR0"
#define device_bar_ODY_GICA_PIDR0 0x0 /* PF_BAR0 */
#define busnum_ODY_GICA_PIDR0 0
#define arguments_ODY_GICA_PIDR0 -1, -1, -1, -1

/**
 * Register (NCB32b) gica_pidr1
 *
 * GICA Pidr1 Register
 * The GICA_PIDR1 characteristics are:
 *
 * * Purpose
 * This register returns byte[1] of the peripheral ID of the message-based Distributor page.
 *
 * * Usage constraints
 * There are no usage constraints.
 */
union ody_gica_pidr1 {
	uint32_t u;
	struct ody_gica_pidr1_s {
		uint32_t part_1                      : 4;
		uint32_t des_0                       : 4;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_gica_pidr1_s cn; */
};
typedef union ody_gica_pidr1 ody_gica_pidr1_t;

#define ODY_GICA_PIDR1 ODY_GICA_PIDR1_FUNC()
static inline uint64_t ODY_GICA_PIDR1_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICA_PIDR1_FUNC(void)
{
	return 0x80100001ffe4ll;
}

#define typedef_ODY_GICA_PIDR1 ody_gica_pidr1_t
#define bustype_ODY_GICA_PIDR1 CSR_TYPE_NCB32b
#define basename_ODY_GICA_PIDR1 "GICA_PIDR1"
#define device_bar_ODY_GICA_PIDR1 0x0 /* PF_BAR0 */
#define busnum_ODY_GICA_PIDR1 0
#define arguments_ODY_GICA_PIDR1 -1, -1, -1, -1

/**
 * Register (NCB32b) gica_pidr2
 *
 * GICA Pidr2 Register
 * The GICA_PIDR2 characteristics are:
 *
 * * Purpose
 * This register returns byte[2] of the peripheral ID of the message-based Distributor page.
 *
 * * Usage constraints
 * There are no usage constraints.
 */
union ody_gica_pidr2 {
	uint32_t u;
	struct ody_gica_pidr2_s {
		uint32_t des_1                       : 3;
		uint32_t jedec                       : 1;
		uint32_t revision                    : 4;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_gica_pidr2_s cn; */
};
typedef union ody_gica_pidr2 ody_gica_pidr2_t;

#define ODY_GICA_PIDR2 ODY_GICA_PIDR2_FUNC()
static inline uint64_t ODY_GICA_PIDR2_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICA_PIDR2_FUNC(void)
{
	return 0x80100001ffe8ll;
}

#define typedef_ODY_GICA_PIDR2 ody_gica_pidr2_t
#define bustype_ODY_GICA_PIDR2 CSR_TYPE_NCB32b
#define basename_ODY_GICA_PIDR2 "GICA_PIDR2"
#define device_bar_ODY_GICA_PIDR2 0x0 /* PF_BAR0 */
#define busnum_ODY_GICA_PIDR2 0
#define arguments_ODY_GICA_PIDR2 -1, -1, -1, -1

/**
 * Register (NCB32b) gica_pidr3
 *
 * GICA Pidr3 Register
 * The GICA_PIDR3 characteristics are:
 *
 * * Purpose
 * This register returns byte[3] of the peripheral ID of the message-based Distributor page.
 *
 * * Usage constraints
 * There are no usage constraints.
 */
union ody_gica_pidr3 {
	uint32_t u;
	struct ody_gica_pidr3_s {
		uint32_t cmod                        : 3;
		uint32_t reserved_3                  : 1;
		uint32_t revand                      : 4;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_gica_pidr3_s cn; */
};
typedef union ody_gica_pidr3 ody_gica_pidr3_t;

#define ODY_GICA_PIDR3 ODY_GICA_PIDR3_FUNC()
static inline uint64_t ODY_GICA_PIDR3_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICA_PIDR3_FUNC(void)
{
	return 0x80100001ffecll;
}

#define typedef_ODY_GICA_PIDR3 ody_gica_pidr3_t
#define bustype_ODY_GICA_PIDR3 CSR_TYPE_NCB32b
#define basename_ODY_GICA_PIDR3 "GICA_PIDR3"
#define device_bar_ODY_GICA_PIDR3 0x0 /* PF_BAR0 */
#define busnum_ODY_GICA_PIDR3 0
#define arguments_ODY_GICA_PIDR3 -1, -1, -1, -1

/**
 * Register (NCB32b) gica_pidr4
 *
 * GICA Pidr4 Register
 * The GICA_PIDR4 characteristics are:
 *
 * * Purpose
 * This register returns byte[4] of the peripheral ID of the message-based Distributor page.
 *
 * * Usage constraints
 * There are no usage constraints.
 */
union ody_gica_pidr4 {
	uint32_t u;
	struct ody_gica_pidr4_s {
		uint32_t des_2                       : 4;
		uint32_t size                        : 4;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_gica_pidr4_s cn; */
};
typedef union ody_gica_pidr4 ody_gica_pidr4_t;

#define ODY_GICA_PIDR4 ODY_GICA_PIDR4_FUNC()
static inline uint64_t ODY_GICA_PIDR4_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICA_PIDR4_FUNC(void)
{
	return 0x80100001ffd0ll;
}

#define typedef_ODY_GICA_PIDR4 ody_gica_pidr4_t
#define bustype_ODY_GICA_PIDR4 CSR_TYPE_NCB32b
#define basename_ODY_GICA_PIDR4 "GICA_PIDR4"
#define device_bar_ODY_GICA_PIDR4 0x0 /* PF_BAR0 */
#define busnum_ODY_GICA_PIDR4 0
#define arguments_ODY_GICA_PIDR4 -1, -1, -1, -1

/**
 * Register (NCB32b) gica_pidr5
 *
 * GICA Pidr5 Register
 * The GICA_PIDR5 characteristics are:
 *
 * * Purpose
 * This register returns byte[5] of the peripheral ID of the message-based Distributor page.
 *
 * * Usage constraints
 * There are no usage constraints.
 */
union ody_gica_pidr5 {
	uint32_t u;
	struct ody_gica_pidr5_s {
		uint32_t reserved_0_31               : 32;
	} s;
	struct ody_gica_pidr5_cn {
		uint32_t reserved_0_7                : 8;
		uint32_t reserved_8_31               : 24;
	} cn;
};
typedef union ody_gica_pidr5 ody_gica_pidr5_t;

#define ODY_GICA_PIDR5 ODY_GICA_PIDR5_FUNC()
static inline uint64_t ODY_GICA_PIDR5_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICA_PIDR5_FUNC(void)
{
	return 0x80100001ffd4ll;
}

#define typedef_ODY_GICA_PIDR5 ody_gica_pidr5_t
#define bustype_ODY_GICA_PIDR5 CSR_TYPE_NCB32b
#define basename_ODY_GICA_PIDR5 "GICA_PIDR5"
#define device_bar_ODY_GICA_PIDR5 0x0 /* PF_BAR0 */
#define busnum_ODY_GICA_PIDR5 0
#define arguments_ODY_GICA_PIDR5 -1, -1, -1, -1

/**
 * Register (NCB32b) gica_pidr6
 *
 * GICA Pidr6 Register
 * The GICA_PIDR6 characteristics are:
 *
 * * Purpose
 * This register returns byte[6] of the peripheral ID of the message-based Distributor page.
 *
 * * Usage constraints
 * There are no usage constraints.
 */
union ody_gica_pidr6 {
	uint32_t u;
	struct ody_gica_pidr6_s {
		uint32_t reserved_0_31               : 32;
	} s;
	struct ody_gica_pidr6_cn {
		uint32_t reserved_0_7                : 8;
		uint32_t reserved_8_31               : 24;
	} cn;
};
typedef union ody_gica_pidr6 ody_gica_pidr6_t;

#define ODY_GICA_PIDR6 ODY_GICA_PIDR6_FUNC()
static inline uint64_t ODY_GICA_PIDR6_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICA_PIDR6_FUNC(void)
{
	return 0x80100001ffd8ll;
}

#define typedef_ODY_GICA_PIDR6 ody_gica_pidr6_t
#define bustype_ODY_GICA_PIDR6 CSR_TYPE_NCB32b
#define basename_ODY_GICA_PIDR6 "GICA_PIDR6"
#define device_bar_ODY_GICA_PIDR6 0x0 /* PF_BAR0 */
#define busnum_ODY_GICA_PIDR6 0
#define arguments_ODY_GICA_PIDR6 -1, -1, -1, -1

/**
 * Register (NCB32b) gica_pidr7
 *
 * GICA Pidr7 Register
 * The GICA_PIDR7 characteristics are:
 *
 * * Purpose
 * This register returns byte[7] of the peripheral ID of the message-based Distributor page.
 *
 * * Usage constraints
 * There are no usage constraints.
 */
union ody_gica_pidr7 {
	uint32_t u;
	struct ody_gica_pidr7_s {
		uint32_t reserved_0_31               : 32;
	} s;
	struct ody_gica_pidr7_cn {
		uint32_t reserved_0_7                : 8;
		uint32_t reserved_8_31               : 24;
	} cn;
};
typedef union ody_gica_pidr7 ody_gica_pidr7_t;

#define ODY_GICA_PIDR7 ODY_GICA_PIDR7_FUNC()
static inline uint64_t ODY_GICA_PIDR7_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICA_PIDR7_FUNC(void)
{
	return 0x80100001ffdcll;
}

#define typedef_ODY_GICA_PIDR7 ody_gica_pidr7_t
#define bustype_ODY_GICA_PIDR7 CSR_TYPE_NCB32b
#define basename_ODY_GICA_PIDR7 "GICA_PIDR7"
#define device_bar_ODY_GICA_PIDR7 0x0 /* PF_BAR0 */
#define busnum_ODY_GICA_PIDR7 0
#define arguments_ODY_GICA_PIDR7 -1, -1, -1, -1

/**
 * Register (NCB32b) gica_setspi_nsr
 *
 * GICA Setspi Nsr Register
 * The GICA_SETSPI_NSR characteristics are:
 *
 * * Purpose
 * Adds the pending state to a valid SPI if permitted by the Security state of the
 * access and the GICD(A)_NSACR[E] value for that SPI.
 * A write to this register changes the state of an inactive SPI to pending, and the
 * state of an active SPI to active and pending.
 *
 * * Usage constraints
 * The function of this register depends on whether the targeted SPI is configured to
 * be an edge-triggered or level-sensitive interrupt:
 *
 * * For an edge-triggered interrupt, a write to GICx_SETSPI_NSR or GICx_SETSPI_SR adds
 * the pending state to the targeted interrupt. It will stop being pending on
 * activation, or if the pending state is removed by a write to GICx_CLRSPI_NSR,
 * GICx_CLRSPI_SR, or GICD(A)_ICPENDR.
 * * For a level-sensitive interrupt, a write to GICx_SETSPI_NSR or GICx_SETSPI_SR adds
 * the pending state to the targeted interrupt. It will remain pending until it is
 * deasserted by a write to GICx_CLRSPI_NSR or GICx_CLRSPI_SR. If the interrupt is
 * activated between having the pending state added and being deactivated, then the
 * interrupt will be active and pending.
 *
 * Writes to this register have no effect if:
 *
 * * The value written specifies a Secure SPI, the value is written by a Non-secure
 * access, and the value of the corresponding GICD(A)_NSACR register is 0.
 * * The value written specifies an invalid SPI.
 * * The SPI is already pending.
 *
 * When GICD(A)_CTLR.DS==1, this register provides functionality for all SPIs.
 */
union ody_gica_setspi_nsr {
	uint32_t u;
	struct ody_gica_setspi_nsr_s {
		uint32_t id                          : 16;
		uint32_t reserved_16_31              : 16;
	} s;
	/* struct ody_gica_setspi_nsr_s cn; */
};
typedef union ody_gica_setspi_nsr ody_gica_setspi_nsr_t;

#define ODY_GICA_SETSPI_NSR ODY_GICA_SETSPI_NSR_FUNC()
static inline uint64_t ODY_GICA_SETSPI_NSR_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICA_SETSPI_NSR_FUNC(void)
{
	return 0x801000010040ll;
}

#define typedef_ODY_GICA_SETSPI_NSR ody_gica_setspi_nsr_t
#define bustype_ODY_GICA_SETSPI_NSR CSR_TYPE_NCB32b
#define basename_ODY_GICA_SETSPI_NSR "GICA_SETSPI_NSR"
#define device_bar_ODY_GICA_SETSPI_NSR 0x0 /* PF_BAR0 */
#define busnum_ODY_GICA_SETSPI_NSR 0
#define arguments_ODY_GICA_SETSPI_NSR -1, -1, -1, -1

/**
 * Register (NCB32b) gica_setspi_sr
 *
 * GICA Setspi Sr Register
 * The GICA_SETSPI_SR characteristics are:
 *
 * * Purpose
 * Adds the pending state to a valid SPI.
 * A write to this register changes the state of an inactive SPI to pending, and the
 * state of an active SPI to active and pending.
 *
 * * Usage constraints
 * The function of this register depends on whether the targeted SPI is configured to
 * be an edge-triggered or level-sensitive interrupt:
 *
 * * For an edge-triggered interrupt, a write to GICx_SETSPI_NSR or GICx_SETSPI_SR adds
 * the pending state to the targeted interrupt. It will stop being pending on
 * activation, or if the pending state is removed by a write to GICx_CLRSPI_NSR,
 * GICx_CLRSPI_SR, or GICD(A)_ICPENDR.
 * * For a level-sensitive interrupt, a write to GICx_SETSPI_NSR or GICx_SETSPI_SR adds
 * the pending state to the targeted interrupt. It will remain pending until it is
 * deasserted by a write to GICx_CLRSPI_NSR or GICx_CLRSPI_SR. If the interrupt is
 * activated between having the pending state added and being deactivated, then the
 * interrupt will be active and pending.
 *
 * Writes to this register have no effect if:
 *
 * * The value is written by a Non-secure access.
 * * The value written specifies an invalid SPI.
 * * The SPI is already pending.
 *
 * When GICD(A)_CTLR.DS==1, this register is WI.
 * When GICD(A)_CTLR.DS==0, only secure-access.
 */
union ody_gica_setspi_sr {
	uint32_t u;
	struct ody_gica_setspi_sr_s {
		uint32_t id                          : 16;
		uint32_t reserved_16_31              : 16;
	} s;
	/* struct ody_gica_setspi_sr_s cn; */
};
typedef union ody_gica_setspi_sr ody_gica_setspi_sr_t;

#define ODY_GICA_SETSPI_SR ODY_GICA_SETSPI_SR_FUNC()
static inline uint64_t ODY_GICA_SETSPI_SR_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICA_SETSPI_SR_FUNC(void)
{
	return 0x801000010050ll;
}

#define typedef_ODY_GICA_SETSPI_SR ody_gica_setspi_sr_t
#define bustype_ODY_GICA_SETSPI_SR CSR_TYPE_NCB32b
#define basename_ODY_GICA_SETSPI_SR "GICA_SETSPI_SR"
#define device_bar_ODY_GICA_SETSPI_SR 0x0 /* PF_BAR0 */
#define busnum_ODY_GICA_SETSPI_SR 0
#define arguments_ODY_GICA_SETSPI_SR -1, -1, -1, -1

/**
 * Register (NCB) gica_typer
 *
 * GICA Typer Register
 * The GICA_TYPER characteristics are:
 *
 * * Purpose
 * This register returns information about the number of SPIs that are assigned to the frame.
 *
 * * Usage constraints
 * There are no usage constraints.
 */
union ody_gica_typer {
	uint64_t u;
	struct ody_gica_typer_s {
		uint64_t numspis                     : 11;
		uint64_t reserved_11_15              : 5;
		uint64_t intid                       : 13;
		uint64_t sr                          : 1;
		uint64_t clr                         : 1;
		uint64_t valid                       : 1;
		uint64_t reserved_32_63              : 32;
	} s;
	/* struct ody_gica_typer_s cn; */
};
typedef union ody_gica_typer ody_gica_typer_t;

#define ODY_GICA_TYPER ODY_GICA_TYPER_FUNC()
static inline uint64_t ODY_GICA_TYPER_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICA_TYPER_FUNC(void)
{
	return 0x801000010008ll;
}

#define typedef_ODY_GICA_TYPER ody_gica_typer_t
#define bustype_ODY_GICA_TYPER CSR_TYPE_NCB
#define basename_ODY_GICA_TYPER "GICA_TYPER"
#define device_bar_ODY_GICA_TYPER 0x0 /* PF_BAR0 */
#define busnum_ODY_GICA_TYPER 0
#define arguments_ODY_GICA_TYPER -1, -1, -1, -1

/**
 * Register (NCB) gicd_cfgid
 *
 * GICD Cfgid Register
 * The GICD_CFGID characteristics are:
 *
 * * Purpose
 * This register contains information that enables test software to determine if the
 * GIC-700 system is compatible.
 *
 * * Usage constraints
 * Some bits are only visible to secure accesses.
 */
union ody_gicd_cfgid {
	uint64_t u;
	struct ody_gicd_cfgid_s {
		uint64_t socketonline                : 1;
		uint64_t reserved_1_3                : 3;
		uint64_t socketnumber                : 4;
		uint64_t itscount                    : 4;
		uint64_t lpisupport                  : 1;
		uint64_t v41support                  : 1;
		uint64_t chipaffinitylevel           : 1;
		uint64_t spigroups                   : 6;
		uint64_t localchipaddressing         : 1;
		uint64_t reserved_22_23              : 2;
		uint64_t rdcollapsesupport           : 1;
		uint64_t extendeditssupport          : 1;
		uint64_t reserved_26_27              : 2;
		uint64_t chips                       : 4;
		uint64_t affinity0bits               : 4;
		uint64_t affinity1bits               : 4;
		uint64_t affinity2bits               : 4;
		uint64_t affinity3bits               : 4;
		uint64_t pewidth                     : 5;
		uint64_t reserved_53_63              : 11;
	} s;
	/* struct ody_gicd_cfgid_s cn; */
};
typedef union ody_gicd_cfgid ody_gicd_cfgid_t;

#define ODY_GICD_CFGID ODY_GICD_CFGID_FUNC()
static inline uint64_t ODY_GICD_CFGID_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICD_CFGID_FUNC(void)
{
	return 0x80100000f000ll;
}

#define typedef_ODY_GICD_CFGID ody_gicd_cfgid_t
#define bustype_ODY_GICD_CFGID CSR_TYPE_NCB
#define basename_ODY_GICD_CFGID "GICD_CFGID"
#define device_bar_ODY_GICD_CFGID 0x0 /* PF_BAR0 */
#define busnum_ODY_GICD_CFGID 0
#define arguments_ODY_GICD_CFGID -1, -1, -1, -1

/**
 * Register (NCB32b) gicd_cidr0
 *
 * GICD Cidr0 Register
 * The GICD_CIDR0 characteristics are:
 *
 * * Purpose
 * This register is one of the Component Identification Registers and returns the first
 * part of the Preamble.
 *
 * * Usage constraints
 * There are no usage constraints.
 */
union ody_gicd_cidr0 {
	uint32_t u;
	struct ody_gicd_cidr0_s {
		uint32_t prmbl_0                     : 8;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_gicd_cidr0_s cn; */
};
typedef union ody_gicd_cidr0 ody_gicd_cidr0_t;

#define ODY_GICD_CIDR0 ODY_GICD_CIDR0_FUNC()
static inline uint64_t ODY_GICD_CIDR0_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICD_CIDR0_FUNC(void)
{
	return 0x80100000fff0ll;
}

#define typedef_ODY_GICD_CIDR0 ody_gicd_cidr0_t
#define bustype_ODY_GICD_CIDR0 CSR_TYPE_NCB32b
#define basename_ODY_GICD_CIDR0 "GICD_CIDR0"
#define device_bar_ODY_GICD_CIDR0 0x0 /* PF_BAR0 */
#define busnum_ODY_GICD_CIDR0 0
#define arguments_ODY_GICD_CIDR0 -1, -1, -1, -1

/**
 * Register (NCB32b) gicd_cidr1
 *
 * GICD Cidr1 Register
 * The GICD_CIDR1 characteristics are:
 *
 * * Purpose
 * This register is one of the Component Identification Registers and returns the
 * second part of the Preamble as well as the Component Class.
 *
 * * Usage constraints
 * There are no usage constraints.
 */
union ody_gicd_cidr1 {
	uint32_t u;
	struct ody_gicd_cidr1_s {
		uint32_t prmbl_1                     : 4;
		uint32_t class_f                     : 4;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_gicd_cidr1_s cn; */
};
typedef union ody_gicd_cidr1 ody_gicd_cidr1_t;

#define ODY_GICD_CIDR1 ODY_GICD_CIDR1_FUNC()
static inline uint64_t ODY_GICD_CIDR1_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICD_CIDR1_FUNC(void)
{
	return 0x80100000fff4ll;
}

#define typedef_ODY_GICD_CIDR1 ody_gicd_cidr1_t
#define bustype_ODY_GICD_CIDR1 CSR_TYPE_NCB32b
#define basename_ODY_GICD_CIDR1 "GICD_CIDR1"
#define device_bar_ODY_GICD_CIDR1 0x0 /* PF_BAR0 */
#define busnum_ODY_GICD_CIDR1 0
#define arguments_ODY_GICD_CIDR1 -1, -1, -1, -1

/**
 * Register (NCB32b) gicd_cidr2
 *
 * GICD Cidr2 Register
 * The GICD_CIDR2 characteristics are:
 *
 * * Purpose
 * This register is one of the Component Identification Registers and returns the third
 * part of the Preamble.
 *
 * * Usage constraints
 * There are no usage constraints.
 */
union ody_gicd_cidr2 {
	uint32_t u;
	struct ody_gicd_cidr2_s {
		uint32_t prmbl_2                     : 8;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_gicd_cidr2_s cn; */
};
typedef union ody_gicd_cidr2 ody_gicd_cidr2_t;

#define ODY_GICD_CIDR2 ODY_GICD_CIDR2_FUNC()
static inline uint64_t ODY_GICD_CIDR2_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICD_CIDR2_FUNC(void)
{
	return 0x80100000fff8ll;
}

#define typedef_ODY_GICD_CIDR2 ody_gicd_cidr2_t
#define bustype_ODY_GICD_CIDR2 CSR_TYPE_NCB32b
#define basename_ODY_GICD_CIDR2 "GICD_CIDR2"
#define device_bar_ODY_GICD_CIDR2 0x0 /* PF_BAR0 */
#define busnum_ODY_GICD_CIDR2 0
#define arguments_ODY_GICD_CIDR2 -1, -1, -1, -1

/**
 * Register (NCB32b) gicd_cidr3
 *
 * GICD Cidr3 Register
 * The GICD_CIDR3 characteristics are:
 *
 * * Purpose
 * This register is one of the Component Identification Registers and returns the
 * fourth part of the Preamble.
 *
 * * Usage constraints
 * There are no usage constraints.
 */
union ody_gicd_cidr3 {
	uint32_t u;
	struct ody_gicd_cidr3_s {
		uint32_t prmbl_3                     : 8;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_gicd_cidr3_s cn; */
};
typedef union ody_gicd_cidr3 ody_gicd_cidr3_t;

#define ODY_GICD_CIDR3 ODY_GICD_CIDR3_FUNC()
static inline uint64_t ODY_GICD_CIDR3_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICD_CIDR3_FUNC(void)
{
	return 0x80100000fffcll;
}

#define typedef_ODY_GICD_CIDR3 ody_gicd_cidr3_t
#define bustype_ODY_GICD_CIDR3 CSR_TYPE_NCB32b
#define basename_ODY_GICD_CIDR3 "GICD_CIDR3"
#define device_bar_ODY_GICD_CIDR3 0x0 /* PF_BAR0 */
#define busnum_ODY_GICD_CIDR3 0
#define arguments_ODY_GICD_CIDR3 -1, -1, -1, -1

/**
 * Register (NCB32b) gicd_clrspi_nsr
 *
 * GICD Clrspi Nsr Register
 * The GICD_CLRSPI_NSR characteristics are:
 *
 * * Purpose
 * Removes the pending state to a valid SPI if permitted by the Security state of the
 * access and the GICD(A)_NSACR value for that SPI.
 * A write to this register changes the state of an pending SPI to inactive, and the
 * state of an active and penmding SPI to active.
 *
 * * Usage constraints
 * The function of this register depends on whether the targeted SPI is configured to
 * be an edge-triggered or level-sensitive interrupt:
 *
 * * For an edge-triggered interrupt, a write to GICx_SETSPI_NSR or GICx_SETSPI_SR adds
 * the pending state to the targeted interrupt. It will stop being pending on
 * activation, or if the pending state is removed by a write to GICD(A)_CLRSPI_NSR,
 * GICx_CLRSPI_SR, or GICD(A)_ICPENDR.
 * * For a level-sensitive interrupt, a write to GICx_SETSPI_NSR or GICx_SETSPI_SR adds
 * the pending state to the targeted interrupt. It will remain pending until it is
 * deasserted by a write to GICD(A)_CLRSPI_NSR or GICx_CLRSPI_SR. If the interrupt is
 * activated between having the pending state added and being deactivated, then the
 * interrupt will be active and pending.
 *
 * Writes to this register have no effect if:
 *
 * * The value written specifies a Secure SPI, the value is written by a Non-secure
 * access, and the value of the corresponding GICD(A)_NSACR register is less than 0b10.
 * * The value written specifies an invalid SPI.
 * * The SPI is not pending.
 *
 * * Configurations
 * When GICD(A)_CTLR.DS==1, this register provides functionality for all SPIs.
 */
union ody_gicd_clrspi_nsr {
	uint32_t u;
	struct ody_gicd_clrspi_nsr_s {
		uint32_t id                          : 16;
		uint32_t reserved_16_31              : 16;
	} s;
	/* struct ody_gicd_clrspi_nsr_s cn; */
};
typedef union ody_gicd_clrspi_nsr ody_gicd_clrspi_nsr_t;

#define ODY_GICD_CLRSPI_NSR ODY_GICD_CLRSPI_NSR_FUNC()
static inline uint64_t ODY_GICD_CLRSPI_NSR_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICD_CLRSPI_NSR_FUNC(void)
{
	return 0x801000000048ll;
}

#define typedef_ODY_GICD_CLRSPI_NSR ody_gicd_clrspi_nsr_t
#define bustype_ODY_GICD_CLRSPI_NSR CSR_TYPE_NCB32b
#define basename_ODY_GICD_CLRSPI_NSR "GICD_CLRSPI_NSR"
#define device_bar_ODY_GICD_CLRSPI_NSR 0x0 /* PF_BAR0 */
#define busnum_ODY_GICD_CLRSPI_NSR 0
#define arguments_ODY_GICD_CLRSPI_NSR -1, -1, -1, -1

/**
 * Register (NCB32b) gicd_clrspi_sr
 *
 * GICD Clrspi Sr Register
 * The GICD_CLRSPI_SR characteristics are:
 *
 * * Purpose
 * Removes the pending state from a valid SPI.
 * A write to this register changes the state of a pending SPI to inactive, and the
 * state of an active and pending SPI to active.
 *
 * * Usage constraints
 * The function of this register depends on whether the targeted SPI is configured to
 * be an edge-triggered or level-sensitive interrupt:
 *
 * * For an edge-triggered interrupt, a write to GICx_SETSPI_NSR or GICx_SETSPI_SR adds
 * the pending state to the targeted interrupt. It will stop being pending on
 * activation, or if the pending state is removed by a write to GICD(A)_CLRSPI_NSR,
 * GICx_CLRSPI_SR, or GICD(A)_ICPENDR.
 * * For a level-sensitive interrupt, a write to GICx_SETSPI_NSR or GICx_SETSPI_SR adds
 * the pending state to the targeted interrupt. It will remain pending until it is
 * deasserted by a write to GICD(A)_CLRSPI_NSR or GICx_CLRSPI_SR. If the interrupt is
 * activated between having the pending state added and being deactivated, then the
 * interrupt will be active and pending.
 *
 * Writes to this register have no effect if:
 *
 * * The value is written by a Non-secure access.
 * * The value written specifies an invalid SPI.
 * * The SPI is not pending.
 *
 * * Configurations
 * When GICD(A)_CTLR.DS==1, this register is WI.
 * When GICD(A)_CTLR.DS==0, only secure-access.
 */
union ody_gicd_clrspi_sr {
	uint32_t u;
	struct ody_gicd_clrspi_sr_s {
		uint32_t id                          : 16;
		uint32_t reserved_16_31              : 16;
	} s;
	/* struct ody_gicd_clrspi_sr_s cn; */
};
typedef union ody_gicd_clrspi_sr ody_gicd_clrspi_sr_t;

#define ODY_GICD_CLRSPI_SR ODY_GICD_CLRSPI_SR_FUNC()
static inline uint64_t ODY_GICD_CLRSPI_SR_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICD_CLRSPI_SR_FUNC(void)
{
	return 0x801000000058ll;
}

#define typedef_ODY_GICD_CLRSPI_SR ody_gicd_clrspi_sr_t
#define bustype_ODY_GICD_CLRSPI_SR CSR_TYPE_NCB32b
#define basename_ODY_GICD_CLRSPI_SR "GICD_CLRSPI_SR"
#define device_bar_ODY_GICD_CLRSPI_SR 0x0 /* PF_BAR0 */
#define busnum_ODY_GICD_CLRSPI_SR 0
#define arguments_ODY_GICD_CLRSPI_SR -1, -1, -1, -1

/**
 * Register (NCB32b) gicd_ctlr
 *
 * GICD Ctlr Register
 * The GICD_CTLR characteristics are:
 *
 * * Purpose
 * Contains Distributor controls including interrupt group enables
 *
 * * Usage constraints
 * None
 *
 * * Configurations
 * The format of this register depends on the Security state of the access and the
 * number of Security states supported, which is specified by GICD(A)_CTLR.DS.
 */
union ody_gicd_ctlr {
	uint32_t u;
	struct ody_gicd_ctlr_s {
		uint32_t enablegrp0                  : 1;
		uint32_t enablegrp1_ns               : 1;
		uint32_t enablegrp1_s                : 1;
		uint32_t reserved_3                  : 1;
		uint32_t are_s                       : 1;
		uint32_t are_ns                      : 1;
		uint32_t ds                          : 1;
		uint32_t e1nwf                       : 1;
		uint32_t reserved_8_30               : 23;
		uint32_t rwp                         : 1;
	} s;
	/* struct ody_gicd_ctlr_s cn; */
};
typedef union ody_gicd_ctlr ody_gicd_ctlr_t;

#define ODY_GICD_CTLR ODY_GICD_CTLR_FUNC()
static inline uint64_t ODY_GICD_CTLR_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICD_CTLR_FUNC(void)
{
	return 0x801000000000ll;
}

#define typedef_ODY_GICD_CTLR ody_gicd_ctlr_t
#define bustype_ODY_GICD_CTLR CSR_TYPE_NCB32b
#define basename_ODY_GICD_CTLR "GICD_CTLR"
#define device_bar_ODY_GICD_CTLR 0x0 /* PF_BAR0 */
#define busnum_ODY_GICD_CTLR 0
#define arguments_ODY_GICD_CTLR -1, -1, -1, -1

/**
 * Register (NCB) gicd_errinsr#
 *
 * GICD Errinsr Register
 * The GICD_ERRINSR0 characteristics are:
 *
 * * Purpose
 * This register can inject errors into the SGI RAM. You can use this register to test
 * your error recovery software.
 *
 * * Usage constraints
 * If GICD(A)_SAC.GICTNS == 0, then only Secure software can access the functions of this register.
 *
 * \> *Note*
 * \> The bit assignments within this register depend on whether a write access or read access occurs.
 */
union ody_gicd_errinsrx {
	uint64_t u;
	struct ody_gicd_errinsrx_s {
		uint64_t errins1loc                  : 9;
		uint64_t reserved_9_14               : 6;
		uint64_t errins1valid                : 1;
		uint64_t errins2loc                  : 9;
		uint64_t reserved_25_30              : 6;
		uint64_t errins2valid                : 1;
		uint64_t addr                        : 16;
		uint64_t reserved_48_59              : 12;
		uint64_t disablewritecheck           : 1;
		uint64_t reserved_61_62              : 2;
		uint64_t valid                       : 1;
	} s;
	/* struct ody_gicd_errinsrx_s cn; */
};
typedef union ody_gicd_errinsrx ody_gicd_errinsrx_t;

static inline uint64_t ODY_GICD_ERRINSRX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICD_ERRINSRX(uint64_t a)
{
	if (a <= 14)
		return 0x80100000ea00ll + 8ll * ((a) & 0xf);
	__ody_csr_fatal("GICD_ERRINSRX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GICD_ERRINSRX(a) ody_gicd_errinsrx_t
#define bustype_ODY_GICD_ERRINSRX(a) CSR_TYPE_NCB
#define basename_ODY_GICD_ERRINSRX(a) "GICD_ERRINSRX"
#define device_bar_ODY_GICD_ERRINSRX(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_GICD_ERRINSRX(a) (a)
#define arguments_ODY_GICD_ERRINSRX(a) (a), -1, -1, -1

/**
 * Register (NCB32b) gicd_fctlr
 *
 * GICD Fctlr Register
 * The GICD_FCTLR characteristics are:
 *
 * * Purpose
 * This register controls non-architectural functionality such as the scrubbing of all
 * RAMs in the local Distributor.
 *
 * * Usage constraints
 * Some bits are only accessible by Secure accesses.
 */
union ody_gicd_fctlr {
	uint32_t u;
	struct ody_gicd_fctlr_s {
		uint32_t sip                         : 1;
		uint32_t reserved_1_15               : 15;
		uint32_t nsacr                       : 2;
		uint32_t reserved_18_19              : 2;
		uint32_t clpl                        : 4;
		uint32_t reserved_24_25              : 2;
		uint32_t pos                         : 1;
		uint32_t reserved_27_31              : 5;
	} s;
	struct ody_gicd_fctlr_cn {
		uint32_t sip                         : 1;
		uint32_t reserved_1                  : 1;
		uint32_t reserved_2                  : 1;
		uint32_t reserved_3                  : 1;
		uint32_t reserved_4_15               : 12;
		uint32_t nsacr                       : 2;
		uint32_t reserved_18                 : 1;
		uint32_t reserved_19                 : 1;
		uint32_t clpl                        : 4;
		uint32_t reserved_24_25              : 2;
		uint32_t pos                         : 1;
		uint32_t reserved_27_31              : 5;
	} cn;
};
typedef union ody_gicd_fctlr ody_gicd_fctlr_t;

#define ODY_GICD_FCTLR ODY_GICD_FCTLR_FUNC()
static inline uint64_t ODY_GICD_FCTLR_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICD_FCTLR_FUNC(void)
{
	return 0x801000000020ll;
}

#define typedef_ODY_GICD_FCTLR ody_gicd_fctlr_t
#define bustype_ODY_GICD_FCTLR CSR_TYPE_NCB32b
#define basename_ODY_GICD_FCTLR "GICD_FCTLR"
#define device_bar_ODY_GICD_FCTLR 0x0 /* PF_BAR0 */
#define busnum_ODY_GICD_FCTLR 0
#define arguments_ODY_GICD_FCTLR -1, -1, -1, -1

/**
 * Register (NCB32b) gicd_fctlr2
 *
 * GICD Fctlr2 Register
 * The GICD_FCTLR2 characteristics are:
 *
 * * Purpose
 * This register controls clock gating and other non-architectural controls in the local Distributor.
 *
 * * Usage constraints
 * Only accessible by Secure accesses or when GICD(A)_DS.DS == 1.
 */
union ody_gicd_fctlr2 {
	uint32_t u;
	struct ody_gicd_fctlr2_s {
		uint32_t cgo                         : 12;
		uint32_t reserved_12_15              : 4;
		uint32_t rws                         : 1;
		uint32_t dcc                         : 1;
		uint32_t qdeny                       : 1;
		uint32_t rwc                         : 1;
		uint32_t reserved_20_24              : 5;
		uint32_t slc                         : 1;
		uint32_t reserved_26_27              : 2;
		uint32_t rcd                         : 1;
		uint32_t irp                         : 1;
		uint32_t awp                         : 1;
		uint32_t arp                         : 1;
	} s;
	struct ody_gicd_fctlr2_cn {
		uint32_t cgo                         : 12;
		uint32_t reserved_12_14              : 3;
		uint32_t reserved_15                 : 1;
		uint32_t rws                         : 1;
		uint32_t dcc                         : 1;
		uint32_t qdeny                       : 1;
		uint32_t rwc                         : 1;
		uint32_t reserved_20_24              : 5;
		uint32_t slc                         : 1;
		uint32_t reserved_26_27              : 2;
		uint32_t rcd                         : 1;
		uint32_t irp                         : 1;
		uint32_t awp                         : 1;
		uint32_t arp                         : 1;
	} cn;
};
typedef union ody_gicd_fctlr2 ody_gicd_fctlr2_t;

#define ODY_GICD_FCTLR2 ODY_GICD_FCTLR2_FUNC()
static inline uint64_t ODY_GICD_FCTLR2_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICD_FCTLR2_FUNC(void)
{
	return 0x801000000030ll;
}

#define typedef_ODY_GICD_FCTLR2 ody_gicd_fctlr2_t
#define bustype_ODY_GICD_FCTLR2 CSR_TYPE_NCB32b
#define basename_ODY_GICD_FCTLR2 "GICD_FCTLR2"
#define device_bar_ODY_GICD_FCTLR2 0x0 /* PF_BAR0 */
#define busnum_ODY_GICD_FCTLR2 0
#define arguments_ODY_GICD_FCTLR2 -1, -1, -1, -1

/**
 * Register (NCB32b) gicd_fctlr3
 *
 * GICD Fctlr3 Register
 * The GICD_FCTLR3 characteristics are:
 *
 * * Purpose
 *
 * This register is RES0.
 *
 * * Usage constraints
 * Only accessible by Secure accesses or when GICD(A)_DS.DS == 1.
 */
union ody_gicd_fctlr3 {
	uint32_t u;
	struct ody_gicd_fctlr3_s {
		uint32_t ncp0                        : 5;
		uint32_t reserved_5_6                : 2;
		uint32_t scp1                        : 1;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_gicd_fctlr3_s cn; */
};
typedef union ody_gicd_fctlr3 ody_gicd_fctlr3_t;

#define ODY_GICD_FCTLR3 ODY_GICD_FCTLR3_FUNC()
static inline uint64_t ODY_GICD_FCTLR3_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICD_FCTLR3_FUNC(void)
{
	return 0x801000000038ll;
}

#define typedef_ODY_GICD_FCTLR3 ody_gicd_fctlr3_t
#define bustype_ODY_GICD_FCTLR3 CSR_TYPE_NCB32b
#define basename_ODY_GICD_FCTLR3 "GICD_FCTLR3"
#define device_bar_ODY_GICD_FCTLR3 0x0 /* PF_BAR0 */
#define busnum_ODY_GICD_FCTLR3 0
#define arguments_ODY_GICD_FCTLR3 -1, -1, -1, -1

/**
 * Register (NCB32b) gicd_icactiver#
 *
 * GICD Icactiver Register
 * The GICDGICD_ICACTIVER1 characteristics are:
 *
 * * Purpose
 * Deactivates the corresponding interrupt. These registers are used when saving and
 * restoring state for interrupts 32 to 63.
 *
 * * Usage constraints
 * For INTID m, when DIV and MOD are the integer division and modulo operations:
 *
 * * The corresponding GICD(A)_ICACTIVER number, n, is given by n = m DIV 32.
 * * The offset of the required ICACTIVER is (0x380 + (4*n)).
 * * The bit number of the required group modifier bit in this register is m MOD 32.
 *
 * If GICD(A)_CTLR.DS==0, unless the GICD(A)_NSACR registers permit Non-secure software
 * to control Group 0 and Secure Group 1 interrupts, any bits that correspond to Group
 * 0 or Secure Group 1 interrupts are accessible only by Secure accesses and are RAZ/WI
 * to Non-secure accesses.
 *
 * * Configurations
 * Accessing registers where n is greater than (GICD(A)_TYPER.ITLinesNumber+1) may
 * result in an error being logged. (See GICD_ERR0CTLR for details)
 */
union ody_gicd_icactiverx {
	uint32_t u;
	struct ody_gicd_icactiverx_s {
		uint32_t clear_active_bit0           : 1;
		uint32_t clear_active_bit1           : 1;
		uint32_t clear_active_bit2           : 1;
		uint32_t clear_active_bit3           : 1;
		uint32_t clear_active_bit4           : 1;
		uint32_t clear_active_bit5           : 1;
		uint32_t clear_active_bit6           : 1;
		uint32_t clear_active_bit7           : 1;
		uint32_t clear_active_bit8           : 1;
		uint32_t clear_active_bit9           : 1;
		uint32_t clear_active_bit10          : 1;
		uint32_t clear_active_bit11          : 1;
		uint32_t clear_active_bit12          : 1;
		uint32_t clear_active_bit13          : 1;
		uint32_t clear_active_bit14          : 1;
		uint32_t clear_active_bit15          : 1;
		uint32_t clear_active_bit16          : 1;
		uint32_t clear_active_bit17          : 1;
		uint32_t clear_active_bit18          : 1;
		uint32_t clear_active_bit19          : 1;
		uint32_t clear_active_bit20          : 1;
		uint32_t clear_active_bit21          : 1;
		uint32_t clear_active_bit22          : 1;
		uint32_t clear_active_bit23          : 1;
		uint32_t clear_active_bit24          : 1;
		uint32_t clear_active_bit25          : 1;
		uint32_t clear_active_bit26          : 1;
		uint32_t clear_active_bit27          : 1;
		uint32_t clear_active_bit28          : 1;
		uint32_t clear_active_bit29          : 1;
		uint32_t clear_active_bit30          : 1;
		uint32_t clear_active_bit31          : 1;
	} s;
	/* struct ody_gicd_icactiverx_s cn; */
};
typedef union ody_gicd_icactiverx ody_gicd_icactiverx_t;

static inline uint64_t ODY_GICD_ICACTIVERX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICD_ICACTIVERX(uint64_t a)
{
	if ((a >= 1) && (a <= 16))
		return 0x801000000380ll + 4ll * ((a) & 0x1f);
	__ody_csr_fatal("GICD_ICACTIVERX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GICD_ICACTIVERX(a) ody_gicd_icactiverx_t
#define bustype_ODY_GICD_ICACTIVERX(a) CSR_TYPE_NCB32b
#define basename_ODY_GICD_ICACTIVERX(a) "GICD_ICACTIVERX"
#define device_bar_ODY_GICD_ICACTIVERX(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_GICD_ICACTIVERX(a) (a)
#define arguments_ODY_GICD_ICACTIVERX(a) (a), -1, -1, -1

/**
 * Register (NCB32b) gicd_icenabler#
 *
 * GICD Icenabler Register
 * The GICD_ICENABLER1 characteristics are:
 *
 * * Purpose
 * Disables forwarding of the corresponding interrupt to the CPU interfaces for interrupts 32 to 63.
 *
 * * Usage constraints
 * For INTID m, when DIV and MOD are the integer division and modulo operations:
 *
 * * The corresponding GICD(A)_ICENABLER number, n, is given by n = m DIV 32.
 * * The offset of the required ICENABLER is (0x180 + (4*n)).
 * * The bit number of the required group modifier bit in this register is m MOD 32.
 *
 * \> *Note*
 * \> Writing a 1 to a GICD(A)_ICENABLER bit only disables the forwarding of the
 * corresponding interrupt from the Distributor to any CPU interface. It does not
 * prevent the interrupt from changing state, for example becoming pending or active
 * and pending if it is already active.
 *
 * When GICD(A)_CTLR.DS==0, bits corresponding to Group 0 and Secure Group 1 interrupts
 * are RAZ/WI to Non-secure accesses.
 *
 * Completion of a write to this register does not guarantee that the effects of the
 * write are visible throughout the affinity hierarchy. To ensure an enable has been
 * cleared, software must write to the register with bits set to 1 to clear the
 * required enables. Software must then poll GICD(A)_CTLR.RWP until it has the value
 * zero.
 *
 * * Configurations
 * Accessing registers where n is greater than (GICD(A)_TYPER.ITLinesNumber+1) may
 * result in an error being logged. (See GICD_ERR0CTLR for details)
 */
union ody_gicd_icenablerx {
	uint32_t u;
	struct ody_gicd_icenablerx_s {
		uint32_t clear_enable_bit0           : 1;
		uint32_t clear_enable_bit1           : 1;
		uint32_t clear_enable_bit2           : 1;
		uint32_t clear_enable_bit3           : 1;
		uint32_t clear_enable_bit4           : 1;
		uint32_t clear_enable_bit5           : 1;
		uint32_t clear_enable_bit6           : 1;
		uint32_t clear_enable_bit7           : 1;
		uint32_t clear_enable_bit8           : 1;
		uint32_t clear_enable_bit9           : 1;
		uint32_t clear_enable_bit10          : 1;
		uint32_t clear_enable_bit11          : 1;
		uint32_t clear_enable_bit12          : 1;
		uint32_t clear_enable_bit13          : 1;
		uint32_t clear_enable_bit14          : 1;
		uint32_t clear_enable_bit15          : 1;
		uint32_t clear_enable_bit16          : 1;
		uint32_t clear_enable_bit17          : 1;
		uint32_t clear_enable_bit18          : 1;
		uint32_t clear_enable_bit19          : 1;
		uint32_t clear_enable_bit20          : 1;
		uint32_t clear_enable_bit21          : 1;
		uint32_t clear_enable_bit22          : 1;
		uint32_t clear_enable_bit23          : 1;
		uint32_t clear_enable_bit24          : 1;
		uint32_t clear_enable_bit25          : 1;
		uint32_t clear_enable_bit26          : 1;
		uint32_t clear_enable_bit27          : 1;
		uint32_t clear_enable_bit28          : 1;
		uint32_t clear_enable_bit29          : 1;
		uint32_t clear_enable_bit30          : 1;
		uint32_t clear_enable_bit31          : 1;
	} s;
	/* struct ody_gicd_icenablerx_s cn; */
};
typedef union ody_gicd_icenablerx ody_gicd_icenablerx_t;

static inline uint64_t ODY_GICD_ICENABLERX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICD_ICENABLERX(uint64_t a)
{
	if ((a >= 1) && (a <= 16))
		return 0x801000000180ll + 4ll * ((a) & 0x1f);
	__ody_csr_fatal("GICD_ICENABLERX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GICD_ICENABLERX(a) ody_gicd_icenablerx_t
#define bustype_ODY_GICD_ICENABLERX(a) CSR_TYPE_NCB32b
#define basename_ODY_GICD_ICENABLERX(a) "GICD_ICENABLERX"
#define device_bar_ODY_GICD_ICENABLERX(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_GICD_ICENABLERX(a) (a)
#define arguments_ODY_GICD_ICENABLERX(a) (a), -1, -1, -1

/**
 * Register (NCB32b) gicd_icerrr#
 *
 * GICD Icerrr Register
 * The GICD_ICERRR1 characteristics are:
 *
 * * Purpose
 *
 * These registers can clear the error status of an SPI or return the error status of
 * an SPI for interrupts 16 to 31.
 *
 * * Usage constraints
 * For interrupt ID m, when DIV and MOD are the integer division and modulo operations:
 *
 * * The corresponding GICD(A)_ICERRR number, n, is given by n = m DIV 16.
 * * The offset of the required ICERRR register is (0xE100 + (4*n)).
 *
 * * Configurations
 * Accessing registers where n is greater than 2*(GICD(A)_TYPER.ITLinesNumber+1) may
 * result in an error being logged. (See GICD_ERR0CTLR for details)
 */
union ody_gicd_icerrrx {
	uint32_t u;
	struct ody_gicd_icerrrx_s {
		uint32_t status0                     : 1;
		uint32_t status1                     : 1;
		uint32_t status2                     : 1;
		uint32_t status3                     : 1;
		uint32_t status4                     : 1;
		uint32_t status5                     : 1;
		uint32_t status6                     : 1;
		uint32_t status7                     : 1;
		uint32_t status8                     : 1;
		uint32_t status9                     : 1;
		uint32_t status10                    : 1;
		uint32_t status11                    : 1;
		uint32_t status12                    : 1;
		uint32_t status13                    : 1;
		uint32_t status14                    : 1;
		uint32_t status15                    : 1;
		uint32_t status16                    : 1;
		uint32_t status17                    : 1;
		uint32_t status18                    : 1;
		uint32_t status19                    : 1;
		uint32_t status20                    : 1;
		uint32_t status21                    : 1;
		uint32_t status22                    : 1;
		uint32_t status23                    : 1;
		uint32_t status24                    : 1;
		uint32_t status25                    : 1;
		uint32_t status26                    : 1;
		uint32_t status27                    : 1;
		uint32_t status28                    : 1;
		uint32_t status29                    : 1;
		uint32_t status30                    : 1;
		uint32_t status31                    : 1;
	} s;
	/* struct ody_gicd_icerrrx_s cn; */
};
typedef union ody_gicd_icerrrx ody_gicd_icerrrx_t;

static inline uint64_t ODY_GICD_ICERRRX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICD_ICERRRX(uint64_t a)
{
	if ((a >= 1) && (a <= 16))
		return 0x80100000e100ll + 4ll * ((a) & 0x1f);
	__ody_csr_fatal("GICD_ICERRRX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GICD_ICERRRX(a) ody_gicd_icerrrx_t
#define bustype_ODY_GICD_ICERRRX(a) CSR_TYPE_NCB32b
#define basename_ODY_GICD_ICERRRX(a) "GICD_ICERRRX"
#define device_bar_ODY_GICD_ICERRRX(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_GICD_ICERRRX(a) (a)
#define arguments_ODY_GICD_ICERRRX(a) (a), -1, -1, -1

/**
 * Register (NCB32b) gicd_icfgr#
 *
 * GICD Icfgr Register
 * The GICD_ICFGR2 characteristics are:
 *
 * * Purpose
 * Determines whether the corresponding interrupt is edge-triggered or level-sensitive
 * for interrupts 32 to 47.
 *
 * * Usage constraints
 * For INTID m, when DIV and MOD are the integer division and modulo operations:
 *
 * * The corresponding GICD(A)_ICFGR number, n, is given by n = m DIV 16.
 * * The offset of the required ICFGR is (0xC00 + (4*n)).
 * * The bit number of the required group modifier bit in this register is m MOD 32.
 *
 * Possible values for each interrupt are
 *
 * * 0b00 - Corresponding interrupt is level-sensitive.
 * * 0b10 - Corresponding interrupt is edge-triggered.
 *
 * The GIC will not update the Int_config2 bit if the corresponding interrupt is
 * enabled via GICD(A)_ISENABLER2
 *
 * * Configurations
 * Accessing registers where n is greater than 2*(GICD(A)_TYPER.ITLinesNumber+1) may
 * result in an error being logged. (See GICD_ERR0CTLR for details)
 */
union ody_gicd_icfgrx {
	uint32_t u;
	struct ody_gicd_icfgrx_s {
		uint32_t int_config0                 : 2;
		uint32_t int_config1                 : 2;
		uint32_t int_config2                 : 2;
		uint32_t int_config3                 : 2;
		uint32_t int_config4                 : 2;
		uint32_t int_config5                 : 2;
		uint32_t int_config6                 : 2;
		uint32_t int_config7                 : 2;
		uint32_t int_config8                 : 2;
		uint32_t int_config9                 : 2;
		uint32_t int_config10                : 2;
		uint32_t int_config11                : 2;
		uint32_t int_config12                : 2;
		uint32_t int_config13                : 2;
		uint32_t int_config14                : 2;
		uint32_t int_config15                : 2;
	} s;
	/* struct ody_gicd_icfgrx_s cn; */
};
typedef union ody_gicd_icfgrx ody_gicd_icfgrx_t;

static inline uint64_t ODY_GICD_ICFGRX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICD_ICFGRX(uint64_t a)
{
	if ((a >= 2) && (a <= 33))
		return 0x801000000c00ll + 4ll * ((a) & 0x3f);
	__ody_csr_fatal("GICD_ICFGRX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GICD_ICFGRX(a) ody_gicd_icfgrx_t
#define bustype_ODY_GICD_ICFGRX(a) CSR_TYPE_NCB32b
#define basename_ODY_GICD_ICFGRX(a) "GICD_ICFGRX"
#define device_bar_ODY_GICD_ICFGRX(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_GICD_ICFGRX(a) (a)
#define arguments_ODY_GICD_ICFGRX(a) (a), -1, -1, -1

/**
 * Register (NCB32b) gicd_icgerrr#
 *
 * GICD Icgerrr Register
 * The GICD_ICGERRR1 characteristics are:
 *
 * * Purpose
 *
 * These registers can clear the error status of the GICD(A)_IGROUPRn,
 * GICD(A)_IGRPMODRn, and GICD(A)_NSACRn registers of an SPI or return the error status
 * of an SPI.
 * Applies to interrupts 16 to 31.
 *
 * * Usage constraints
 * This register is Secure access only.
 *
 * For interrupt ID m, when DIV and MOD are the integer division and modulo operations:
 *
 * * The corresponding GICD(A)_ICGERRR number, n, is given by n = m DIV 16.
 * * The offset of the required ICGERRR register is (0xE180 + (4*n)).
 *
 * * Configurations
 * Accessing registers where n is greater than 2*(GICD(A)_TYPER.ITLinesNumber+1) may
 * result in an error being logged. (See GICD_ERR0CTLR for details)
 */
union ody_gicd_icgerrrx {
	uint32_t u;
	struct ody_gicd_icgerrrx_s {
		uint32_t status0                     : 1;
		uint32_t status1                     : 1;
		uint32_t status2                     : 1;
		uint32_t status3                     : 1;
		uint32_t status4                     : 1;
		uint32_t status5                     : 1;
		uint32_t status6                     : 1;
		uint32_t status7                     : 1;
		uint32_t status8                     : 1;
		uint32_t status9                     : 1;
		uint32_t status10                    : 1;
		uint32_t status11                    : 1;
		uint32_t status12                    : 1;
		uint32_t status13                    : 1;
		uint32_t status14                    : 1;
		uint32_t status15                    : 1;
		uint32_t status16                    : 1;
		uint32_t status17                    : 1;
		uint32_t status18                    : 1;
		uint32_t status19                    : 1;
		uint32_t status20                    : 1;
		uint32_t status21                    : 1;
		uint32_t status22                    : 1;
		uint32_t status23                    : 1;
		uint32_t status24                    : 1;
		uint32_t status25                    : 1;
		uint32_t status26                    : 1;
		uint32_t status27                    : 1;
		uint32_t status28                    : 1;
		uint32_t status29                    : 1;
		uint32_t status30                    : 1;
		uint32_t status31                    : 1;
	} s;
	/* struct ody_gicd_icgerrrx_s cn; */
};
typedef union ody_gicd_icgerrrx ody_gicd_icgerrrx_t;

static inline uint64_t ODY_GICD_ICGERRRX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICD_ICGERRRX(uint64_t a)
{
	if ((a >= 1) && (a <= 16))
		return 0x80100000e180ll + 4ll * ((a) & 0x1f);
	__ody_csr_fatal("GICD_ICGERRRX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GICD_ICGERRRX(a) ody_gicd_icgerrrx_t
#define bustype_ODY_GICD_ICGERRRX(a) CSR_TYPE_NCB32b
#define basename_ODY_GICD_ICGERRRX(a) "GICD_ICGERRRX"
#define device_bar_ODY_GICD_ICGERRRX(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_GICD_ICGERRRX(a) (a)
#define arguments_ODY_GICD_ICGERRRX(a) (a), -1, -1, -1

/**
 * Register (NCB32b) gicd_iclar#
 *
 * GICD Iclar Register
 * The GICD_ICLAR2 characteristics are:
 *
 * * Purpose
 * These registers control whether a 1 of N SPI can target a core that is assigned to
 * class 0 or class 1 group for interrupts 32 to 47.
 *
 * * Usage constraints
 * For interrupt ID m, when DIV and MOD are the integer division and modulo operations:
 *
 * * The corresponding GICD(A)_ICLAR number, n, is given by n = m DIV 16.
 * * The offset of the required ICLAR register is (0xE000 + (4*n)).
 *
 * These registers are only accessible when the corresponding
 * GICD(A)_IROUTERn.Interrupt_Routing_Mode == 1.
 *
 * * Configurations
 * Accessing registers where n is greater than 2*(GICD(A)_TYPER.ITLinesNumber+1) may
 * result in an error being logged. (See GICD_ERR0CTLR for details)
 */
union ody_gicd_iclarx {
	uint32_t u;
	struct ody_gicd_iclarx_s {
		uint32_t classes0                    : 2;
		uint32_t classes1                    : 2;
		uint32_t classes2                    : 2;
		uint32_t classes3                    : 2;
		uint32_t classes4                    : 2;
		uint32_t classes5                    : 2;
		uint32_t classes6                    : 2;
		uint32_t classes7                    : 2;
		uint32_t classes8                    : 2;
		uint32_t classes9                    : 2;
		uint32_t classes10                   : 2;
		uint32_t classes11                   : 2;
		uint32_t classes12                   : 2;
		uint32_t classes13                   : 2;
		uint32_t classes14                   : 2;
		uint32_t classes15                   : 2;
	} s;
	/* struct ody_gicd_iclarx_s cn; */
};
typedef union ody_gicd_iclarx ody_gicd_iclarx_t;

static inline uint64_t ODY_GICD_ICLARX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICD_ICLARX(uint64_t a)
{
	if ((a >= 2) && (a <= 33))
		return 0x80100000e000ll + 4ll * ((a) & 0x3f);
	__ody_csr_fatal("GICD_ICLARX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GICD_ICLARX(a) ody_gicd_iclarx_t
#define bustype_ODY_GICD_ICLARX(a) CSR_TYPE_NCB32b
#define basename_ODY_GICD_ICLARX(a) "GICD_ICLARX"
#define device_bar_ODY_GICD_ICLARX(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_GICD_ICLARX(a) (a)
#define arguments_ODY_GICD_ICLARX(a) (a), -1, -1, -1

/**
 * Register (NCB32b) gicd_icpendr#
 *
 * GICD Icpendr Register
 * The GICD_ICPENDR1 characteristics are:
 *
 * * Purpose
 * Removes the pending state from the corresponding interrupt for interrupts 32 to 63.
 *
 * * Usage constraints
 * For INTID m, when DIV and MOD are the integer division and modulo operations:
 *
 * * The corresponding GICD(A)_ICPENDR number, n, is given by n = m DIV 32.
 * * The offset of the required ICPENDR is (0x280 + (4*n)).
 * * The bit number of the required group modifier bit in this register is m MOD 32.
 *
 * If GICD(A)_CTLR.DS==0, unless the GICD(A)_NSACR registers permit Non-secure software
 * to control Group 0 and Secure Group 1 interrupts, any bits that correspond to Group
 * 0 or Secure Group 1 interrupts are accessible only by Secure accesses and are RAZ/WI
 * to Non-secure accesses.
 *
 * * Configurations
 * Accessing registers where n is greater than (GICD(A)_TYPER.ITLinesNumber+1) may
 * result in an error being logged. (See GICD_ERR0CTLR for details)
 */
union ody_gicd_icpendrx {
	uint32_t u;
	struct ody_gicd_icpendrx_s {
		uint32_t clear_pending_bit0          : 1;
		uint32_t clear_pending_bit1          : 1;
		uint32_t clear_pending_bit2          : 1;
		uint32_t clear_pending_bit3          : 1;
		uint32_t clear_pending_bit4          : 1;
		uint32_t clear_pending_bit5          : 1;
		uint32_t clear_pending_bit6          : 1;
		uint32_t clear_pending_bit7          : 1;
		uint32_t clear_pending_bit8          : 1;
		uint32_t clear_pending_bit9          : 1;
		uint32_t clear_pending_bit10         : 1;
		uint32_t clear_pending_bit11         : 1;
		uint32_t clear_pending_bit12         : 1;
		uint32_t clear_pending_bit13         : 1;
		uint32_t clear_pending_bit14         : 1;
		uint32_t clear_pending_bit15         : 1;
		uint32_t clear_pending_bit16         : 1;
		uint32_t clear_pending_bit17         : 1;
		uint32_t clear_pending_bit18         : 1;
		uint32_t clear_pending_bit19         : 1;
		uint32_t clear_pending_bit20         : 1;
		uint32_t clear_pending_bit21         : 1;
		uint32_t clear_pending_bit22         : 1;
		uint32_t clear_pending_bit23         : 1;
		uint32_t clear_pending_bit24         : 1;
		uint32_t clear_pending_bit25         : 1;
		uint32_t clear_pending_bit26         : 1;
		uint32_t clear_pending_bit27         : 1;
		uint32_t clear_pending_bit28         : 1;
		uint32_t clear_pending_bit29         : 1;
		uint32_t clear_pending_bit30         : 1;
		uint32_t clear_pending_bit31         : 1;
	} s;
	/* struct ody_gicd_icpendrx_s cn; */
};
typedef union ody_gicd_icpendrx ody_gicd_icpendrx_t;

static inline uint64_t ODY_GICD_ICPENDRX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICD_ICPENDRX(uint64_t a)
{
	if ((a >= 1) && (a <= 16))
		return 0x801000000280ll + 4ll * ((a) & 0x1f);
	__ody_csr_fatal("GICD_ICPENDRX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GICD_ICPENDRX(a) ody_gicd_icpendrx_t
#define bustype_ODY_GICD_ICPENDRX(a) CSR_TYPE_NCB32b
#define basename_ODY_GICD_ICPENDRX(a) "GICD_ICPENDRX"
#define device_bar_ODY_GICD_ICPENDRX(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_GICD_ICPENDRX(a) (a)
#define arguments_ODY_GICD_ICPENDRX(a) (a), -1, -1, -1

/**
 * Register (NCB32b) gicd_igroupr#
 *
 * GICD Igroupr Register
 * The GICD_IGROUPR1 characteristics are:
 *
 * * Purpose
 * Controls whether the corresponding interrupt is in Group 0 or Group 1 for interrupts 32 to 63.
 *
 * * Usage constraints
 * When GICD(A)_CTLR.DS==0, the register is RAZ/WI to Non-secure accesses.
 *
 * For INTID m, when DIV and MOD are the integer division and modulo operations:
 *
 * * The corresponding GICD(A)_IGROUP number, n, is given by n = m DIV 32.
 * * The offset of the required IGROUP register is (0x080 + (4*n)).
 * * The bit number of the required group modifier bit in this register is m MOD 32.
 *
 * * Configurations
 * Accessing registers where n is greater than (GICD(A)_TYPER.ITLinesNumber+1) may
 * result in an error being logged. (See GICD_ERR0CTLR for details)
 */
union ody_gicd_igrouprx {
	uint32_t u;
	struct ody_gicd_igrouprx_s {
		uint32_t group_status_bit0           : 1;
		uint32_t group_status_bit1           : 1;
		uint32_t group_status_bit2           : 1;
		uint32_t group_status_bit3           : 1;
		uint32_t group_status_bit4           : 1;
		uint32_t group_status_bit5           : 1;
		uint32_t group_status_bit6           : 1;
		uint32_t group_status_bit7           : 1;
		uint32_t group_status_bit8           : 1;
		uint32_t group_status_bit9           : 1;
		uint32_t group_status_bit10          : 1;
		uint32_t group_status_bit11          : 1;
		uint32_t group_status_bit12          : 1;
		uint32_t group_status_bit13          : 1;
		uint32_t group_status_bit14          : 1;
		uint32_t group_status_bit15          : 1;
		uint32_t group_status_bit16          : 1;
		uint32_t group_status_bit17          : 1;
		uint32_t group_status_bit18          : 1;
		uint32_t group_status_bit19          : 1;
		uint32_t group_status_bit20          : 1;
		uint32_t group_status_bit21          : 1;
		uint32_t group_status_bit22          : 1;
		uint32_t group_status_bit23          : 1;
		uint32_t group_status_bit24          : 1;
		uint32_t group_status_bit25          : 1;
		uint32_t group_status_bit26          : 1;
		uint32_t group_status_bit27          : 1;
		uint32_t group_status_bit28          : 1;
		uint32_t group_status_bit29          : 1;
		uint32_t group_status_bit30          : 1;
		uint32_t group_status_bit31          : 1;
	} s;
	/* struct ody_gicd_igrouprx_s cn; */
};
typedef union ody_gicd_igrouprx ody_gicd_igrouprx_t;

static inline uint64_t ODY_GICD_IGROUPRX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICD_IGROUPRX(uint64_t a)
{
	if ((a >= 1) && (a <= 16))
		return 0x801000000080ll + 4ll * ((a) & 0x1f);
	__ody_csr_fatal("GICD_IGROUPRX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GICD_IGROUPRX(a) ody_gicd_igrouprx_t
#define bustype_ODY_GICD_IGROUPRX(a) CSR_TYPE_NCB32b
#define basename_ODY_GICD_IGROUPRX(a) "GICD_IGROUPRX"
#define device_bar_ODY_GICD_IGROUPRX(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_GICD_IGROUPRX(a) (a)
#define arguments_ODY_GICD_IGROUPRX(a) (a), -1, -1, -1

/**
 * Register (NCB32b) gicd_igrpmodr#
 *
 * GICD Igrpmodr Register
 * The GICD_IGRPMODR1 characteristics are:
 *
 * * Purpose
 * When GICD(A)_CTLR.DS==0, this register together with the GICD(A)_IGROUPR1 register,
 * controls whether the corresponding interrupt is in:
 *
 * * Secure Group 0.
 * * Non-secure Group 1.
 * * Secure Group 1.
 *
 * Applies to interrupts 32 to 63
 *
 * * Usage constraints
 * For INTID m, when DIV and MOD are the integer division and modulo operations:
 *
 * * The corresponding GICD(A)_IGRPMODR number, n, is given by n = m DIV 32.
 * * The offset of the required IGRPMODR is (0xD00 + (4*n)).
 * * The bit number of the required group modifier bit in this register is m MOD 32.
 *
 * When GICD(A)_CTLR.DS==0, the register is RAZ/WI to Non-secure accesses.
 * When GICD(A)_CTLR.DS==1, the GICD(A)_IGRPMODR registers are RAZ/WI.
 *
 * * Configurations
 * Accessing registers where n is greater than (GICD(A)_TYPER.ITLinesNumber+1) may
 * result in an error being logged. (See GICD_ERR0CTLR for details)
 */
union ody_gicd_igrpmodrx {
	uint32_t u;
	struct ody_gicd_igrpmodrx_s {
		uint32_t group_modifier_bit0         : 1;
		uint32_t group_modifier_bit1         : 1;
		uint32_t group_modifier_bit2         : 1;
		uint32_t group_modifier_bit3         : 1;
		uint32_t group_modifier_bit4         : 1;
		uint32_t group_modifier_bit5         : 1;
		uint32_t group_modifier_bit6         : 1;
		uint32_t group_modifier_bit7         : 1;
		uint32_t group_modifier_bit8         : 1;
		uint32_t group_modifier_bit9         : 1;
		uint32_t group_modifier_bit10        : 1;
		uint32_t group_modifier_bit11        : 1;
		uint32_t group_modifier_bit12        : 1;
		uint32_t group_modifier_bit13        : 1;
		uint32_t group_modifier_bit14        : 1;
		uint32_t group_modifier_bit15        : 1;
		uint32_t group_modifier_bit16        : 1;
		uint32_t group_modifier_bit17        : 1;
		uint32_t group_modifier_bit18        : 1;
		uint32_t group_modifier_bit19        : 1;
		uint32_t group_modifier_bit20        : 1;
		uint32_t group_modifier_bit21        : 1;
		uint32_t group_modifier_bit22        : 1;
		uint32_t group_modifier_bit23        : 1;
		uint32_t group_modifier_bit24        : 1;
		uint32_t group_modifier_bit25        : 1;
		uint32_t group_modifier_bit26        : 1;
		uint32_t group_modifier_bit27        : 1;
		uint32_t group_modifier_bit28        : 1;
		uint32_t group_modifier_bit29        : 1;
		uint32_t group_modifier_bit30        : 1;
		uint32_t group_modifier_bit31        : 1;
	} s;
	/* struct ody_gicd_igrpmodrx_s cn; */
};
typedef union ody_gicd_igrpmodrx ody_gicd_igrpmodrx_t;

static inline uint64_t ODY_GICD_IGRPMODRX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICD_IGRPMODRX(uint64_t a)
{
	if ((a >= 1) && (a <= 16))
		return 0x801000000d00ll + 4ll * ((a) & 0x1f);
	__ody_csr_fatal("GICD_IGRPMODRX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GICD_IGRPMODRX(a) ody_gicd_igrpmodrx_t
#define bustype_ODY_GICD_IGRPMODRX(a) CSR_TYPE_NCB32b
#define basename_ODY_GICD_IGRPMODRX(a) "GICD_IGRPMODRX"
#define device_bar_ODY_GICD_IGRPMODRX(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_GICD_IGRPMODRX(a) (a)
#define arguments_ODY_GICD_IGRPMODRX(a) (a), -1, -1, -1

/**
 * Register (NCB32b) gicd_iidr
 *
 * GICD Iidr Register
 * The GICD_IIDR characteristics are:
 *
 * * Purpose
 * Provides information about the implementer and revision of the Distributor
 *
 * * Usage constraints
 * There are no usage constraints.
 *
 * * Configurations
 * This register is available in all configurations of the GIC.
 */
union ody_gicd_iidr {
	uint32_t u;
	struct ody_gicd_iidr_s {
		uint32_t implementer                 : 12;
		uint32_t revision                    : 4;
		uint32_t variant                     : 4;
		uint32_t reserved_20_23              : 4;
		uint32_t productid                   : 8;
	} s;
	/* struct ody_gicd_iidr_s cn; */
};
typedef union ody_gicd_iidr ody_gicd_iidr_t;

#define ODY_GICD_IIDR ODY_GICD_IIDR_FUNC()
static inline uint64_t ODY_GICD_IIDR_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICD_IIDR_FUNC(void)
{
	return 0x801000000008ll;
}

#define typedef_ODY_GICD_IIDR ody_gicd_iidr_t
#define bustype_ODY_GICD_IIDR CSR_TYPE_NCB32b
#define basename_ODY_GICD_IIDR "GICD_IIDR"
#define device_bar_ODY_GICD_IIDR 0x0 /* PF_BAR0 */
#define busnum_ODY_GICD_IIDR 0
#define arguments_ODY_GICD_IIDR -1, -1, -1, -1

/**
 * Register (NCB) gicd_int_ena_w1c
 *
 * GICD Interrupt Enable Set Register
 * This register clears interrupt enable bits.
 */
union ody_gicd_int_ena_w1c {
	uint64_t u;
	struct ody_gicd_int_ena_w1c_s {
		uint64_t err_int                     : 1;
		uint64_t fault_int                   : 1;
		uint64_t pmu_int                     : 1;
		uint64_t msix_vmem_sbe_int           : 1;
		uint64_t msix_vmem_dbe_int           : 1;
		uint64_t reserved_5_63               : 59;
	} s;
	/* struct ody_gicd_int_ena_w1c_s cn; */
};
typedef union ody_gicd_int_ena_w1c ody_gicd_int_ena_w1c_t;

#define ODY_GICD_INT_ENA_W1C ODY_GICD_INT_ENA_W1C_FUNC()
static inline uint64_t ODY_GICD_INT_ENA_W1C_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICD_INT_ENA_W1C_FUNC(void)
{
	return 0x801010002018ll;
}

#define typedef_ODY_GICD_INT_ENA_W1C ody_gicd_int_ena_w1c_t
#define bustype_ODY_GICD_INT_ENA_W1C CSR_TYPE_NCB
#define basename_ODY_GICD_INT_ENA_W1C "GICD_INT_ENA_W1C"
#define device_bar_ODY_GICD_INT_ENA_W1C 0x0 /* PF_BAR0 */
#define busnum_ODY_GICD_INT_ENA_W1C 0
#define arguments_ODY_GICD_INT_ENA_W1C -1, -1, -1, -1

/**
 * Register (NCB) gicd_int_ena_w1s
 *
 * GICD Interrupt Enable Set Register
 * This register sets interrupt enable bits.
 */
union ody_gicd_int_ena_w1s {
	uint64_t u;
	struct ody_gicd_int_ena_w1s_s {
		uint64_t err_int                     : 1;
		uint64_t fault_int                   : 1;
		uint64_t pmu_int                     : 1;
		uint64_t msix_vmem_sbe_int           : 1;
		uint64_t msix_vmem_dbe_int           : 1;
		uint64_t reserved_5_63               : 59;
	} s;
	/* struct ody_gicd_int_ena_w1s_s cn; */
};
typedef union ody_gicd_int_ena_w1s ody_gicd_int_ena_w1s_t;

#define ODY_GICD_INT_ENA_W1S ODY_GICD_INT_ENA_W1S_FUNC()
static inline uint64_t ODY_GICD_INT_ENA_W1S_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICD_INT_ENA_W1S_FUNC(void)
{
	return 0x801010002010ll;
}

#define typedef_ODY_GICD_INT_ENA_W1S ody_gicd_int_ena_w1s_t
#define bustype_ODY_GICD_INT_ENA_W1S CSR_TYPE_NCB
#define basename_ODY_GICD_INT_ENA_W1S "GICD_INT_ENA_W1S"
#define device_bar_ODY_GICD_INT_ENA_W1S 0x0 /* PF_BAR0 */
#define busnum_ODY_GICD_INT_ENA_W1S 0
#define arguments_ODY_GICD_INT_ENA_W1S -1, -1, -1, -1

/**
 * Register (NCB) gicd_int_w1c
 *
 * GICD Interrupt Clear Register
 */
union ody_gicd_int_w1c {
	uint64_t u;
	struct ody_gicd_int_w1c_s {
		uint64_t err_int                     : 1;
		uint64_t fault_int                   : 1;
		uint64_t pmu_int                     : 1;
		uint64_t msix_vmem_sbe_int           : 1;
		uint64_t msix_vmem_dbe_int           : 1;
		uint64_t reserved_5_63               : 59;
	} s;
	/* struct ody_gicd_int_w1c_s cn; */
};
typedef union ody_gicd_int_w1c ody_gicd_int_w1c_t;

#define ODY_GICD_INT_W1C ODY_GICD_INT_W1C_FUNC()
static inline uint64_t ODY_GICD_INT_W1C_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICD_INT_W1C_FUNC(void)
{
	return 0x801010002000ll;
}

#define typedef_ODY_GICD_INT_W1C ody_gicd_int_w1c_t
#define bustype_ODY_GICD_INT_W1C CSR_TYPE_NCB
#define basename_ODY_GICD_INT_W1C "GICD_INT_W1C"
#define device_bar_ODY_GICD_INT_W1C 0x0 /* PF_BAR0 */
#define busnum_ODY_GICD_INT_W1C 0
#define arguments_ODY_GICD_INT_W1C -1, -1, -1, -1

/**
 * Register (NCB) gicd_int_w1s
 *
 * GICD Interrupt Set Register
 * This register sets interrupt bits.
 */
union ody_gicd_int_w1s {
	uint64_t u;
	struct ody_gicd_int_w1s_s {
		uint64_t err_int                     : 1;
		uint64_t fault_int                   : 1;
		uint64_t pmu_int                     : 1;
		uint64_t msix_vmem_sbe_int           : 1;
		uint64_t msix_vmem_dbe_int           : 1;
		uint64_t reserved_5_63               : 59;
	} s;
	/* struct ody_gicd_int_w1s_s cn; */
};
typedef union ody_gicd_int_w1s ody_gicd_int_w1s_t;

#define ODY_GICD_INT_W1S ODY_GICD_INT_W1S_FUNC()
static inline uint64_t ODY_GICD_INT_W1S_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICD_INT_W1S_FUNC(void)
{
	return 0x801010002008ll;
}

#define typedef_ODY_GICD_INT_W1S ody_gicd_int_w1s_t
#define bustype_ODY_GICD_INT_W1S CSR_TYPE_NCB
#define basename_ODY_GICD_INT_W1S "GICD_INT_W1S"
#define device_bar_ODY_GICD_INT_W1S 0x0 /* PF_BAR0 */
#define busnum_ODY_GICD_INT_W1S 0
#define arguments_ODY_GICD_INT_W1S -1, -1, -1, -1

/**
 * Register (NCB32b) gicd_ipriorityr#
 *
 * GICD Ipriorityr Register
 * The GICD_IPRIORITYR8 characteristics are:
 *
 * * Purpose
 * Holds the priority of interrupts 32 to 35.
 *
 * * Usage constraints
 * For interrupt ID m, when DIV and MOD are the integer division and modulo operations:
 *
 * * The corresponding GICD(A)_IPRIORITYR8 number, n, is given by n = m DIV 4.
 * * The offset of the required IPRIORITYR register is (0x400 + (4*n)).
 * * The byte offset of the required Priority field in this register is m MOD 4, where:
 *     * Byte offset 0 refers to register bits [7:0].
 *     * Byte offset 1 refers to register bits [15:8].
 *     * Byte offset 2 refers to register bits [23:16].
 *     * Byte offset 3 refers to register bits [31:24].
 *
 * These registers are byte-accessible.
 *
 * The GIC implements 5 bits of priority and in each field, unimplemented bits are
 * RAZ/WI, see Interrupt prioritization on page 4-65.
 *
 * When GICD(A)_CTLR.DS==0:
 *
 * * A register bit that corresponds to a Group 0 or Secure Group 1 interrupt is RAZ/WI
 * to Non-secure accesses.
 * * A Non-secure access to a field that corresponds to a Non-secure Group 1 interrupt
 * behaves as described in Software accesses of interrupt priority on page 4-72.
 *
 * * Configurations
 * Accessing registers where n is greater than 4*(GICD(A)_TYPER.ITLinesNumber+1) may
 * result in an error being logged. (See GICD_ERR0CTLR for details)
 */
union ody_gicd_ipriorityrx {
	uint32_t u;
	struct ody_gicd_ipriorityrx_s {
		uint32_t offset0                     : 8;
		uint32_t offset1                     : 8;
		uint32_t offset2                     : 8;
		uint32_t offset3                     : 8;
	} s;
	/* struct ody_gicd_ipriorityrx_s cn; */
};
typedef union ody_gicd_ipriorityrx ody_gicd_ipriorityrx_t;

static inline uint64_t ODY_GICD_IPRIORITYRX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICD_IPRIORITYRX(uint64_t a)
{
	if ((a >= 8) && (a <= 135))
		return 0x801000000400ll + 4ll * ((a) & 0xff);
	__ody_csr_fatal("GICD_IPRIORITYRX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GICD_IPRIORITYRX(a) ody_gicd_ipriorityrx_t
#define bustype_ODY_GICD_IPRIORITYRX(a) CSR_TYPE_NCB32b
#define basename_ODY_GICD_IPRIORITYRX(a) "GICD_IPRIORITYRX"
#define device_bar_ODY_GICD_IPRIORITYRX(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_GICD_IPRIORITYRX(a) (a)
#define arguments_ODY_GICD_IPRIORITYRX(a) (a), -1, -1, -1

/**
 * Register (NCB) gicd_irouter#
 *
 * GICD Irouter Register
 * The GICD_IROUTER32 characteristics are:
 *
 * * Purpose
 * Provides routing information for the corresponding SPI of ID 32:
 * * Usage constraints
 * When GICD(A)_CTLR.DS==0, a register that corresponds to a Group 0 or Secure Group 1
 * interrupt is RAZ/WI to Non-secure accesses (unless enabled by GICD(A)_CTLR.NSACR)
 * * Configurations
 * These registers are available in all GIC configurations.
 *
 * Accessing registers where n is greater than 32*(GICD(A)_TYPER.ITLinesNumber+1) may
 * result in an error being logged. (See GICD_ERR0CTLR for details)
 */
union ody_gicd_irouterx {
	uint64_t u;
	struct ody_gicd_irouterx_s {
		uint64_t affinity0                   : 8;
		uint64_t affinity1                   : 8;
		uint64_t affinity2                   : 8;
		uint64_t reserved_24_30              : 7;
		uint64_t interruptroutingmode        : 1;
		uint64_t affinity3                   : 8;
		uint64_t reserved_40_63              : 24;
	} s;
	/* struct ody_gicd_irouterx_s cn; */
};
typedef union ody_gicd_irouterx ody_gicd_irouterx_t;

static inline uint64_t ODY_GICD_IROUTERX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICD_IROUTERX(uint64_t a)
{
	if ((a >= 32) && (a <= 543))
		return 0x801000006000ll + 8ll * ((a) & 0x3ff);
	__ody_csr_fatal("GICD_IROUTERX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GICD_IROUTERX(a) ody_gicd_irouterx_t
#define bustype_ODY_GICD_IROUTERX(a) CSR_TYPE_NCB
#define basename_ODY_GICD_IROUTERX(a) "GICD_IROUTERX"
#define device_bar_ODY_GICD_IROUTERX(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_GICD_IROUTERX(a) (a)
#define arguments_ODY_GICD_IROUTERX(a) (a), -1, -1, -1

/**
 * Register (NCB32b) gicd_isactiver#
 *
 * GICD Isactiver Register
 * The GICD_ISACTIVER1 characteristics are:
 *
 * * Purpose
 * Activates the corresponding interrupt. These registers are used when saving and
 * restoring state for interrupts 32 to 63.
 *
 * * Usage constraints
 * For INTID m, when DIV and MOD are the integer division and modulo operations:
 *
 * * The corresponding GICD(A)_ISACTIVER number, n, is given by n = m DIV 32.
 * * The offset of the required ISACTIVER is (0x300 + (4*n)).
 * * The bit number of the required group modifier bit in this register is m MOD 32.
 *
 * If GICD(A)_CTLR.DS==0, unless the GICD(A)_NSACR registers permit Non-secure software
 * to control Group 0 and Secure Group 1 interrupts, any bits that correspond to Group
 * 0 or Secure Group 1 interrupts are accessible only by Secure accesses and are RAZ/WI
 * to Non-secure accesses.
 * The bit reads as one if the status of the interrupt is active or active and pending.
 * GICD(A)_ISPENDR1 and GICD(A)_ICPENDR1 provide the pending status of the interrupt.
 *
 * * Configurations
 * Accessing registers where n is greater than (GICD(A)_TYPER.ITLinesNumber+1) may
 * result in an error being logged. (See GICD_ERR0CTLR for details)
 */
union ody_gicd_isactiverx {
	uint32_t u;
	struct ody_gicd_isactiverx_s {
		uint32_t set_active_bit0             : 1;
		uint32_t set_active_bit1             : 1;
		uint32_t set_active_bit2             : 1;
		uint32_t set_active_bit3             : 1;
		uint32_t set_active_bit4             : 1;
		uint32_t set_active_bit5             : 1;
		uint32_t set_active_bit6             : 1;
		uint32_t set_active_bit7             : 1;
		uint32_t set_active_bit8             : 1;
		uint32_t set_active_bit9             : 1;
		uint32_t set_active_bit10            : 1;
		uint32_t set_active_bit11            : 1;
		uint32_t set_active_bit12            : 1;
		uint32_t set_active_bit13            : 1;
		uint32_t set_active_bit14            : 1;
		uint32_t set_active_bit15            : 1;
		uint32_t set_active_bit16            : 1;
		uint32_t set_active_bit17            : 1;
		uint32_t set_active_bit18            : 1;
		uint32_t set_active_bit19            : 1;
		uint32_t set_active_bit20            : 1;
		uint32_t set_active_bit21            : 1;
		uint32_t set_active_bit22            : 1;
		uint32_t set_active_bit23            : 1;
		uint32_t set_active_bit24            : 1;
		uint32_t set_active_bit25            : 1;
		uint32_t set_active_bit26            : 1;
		uint32_t set_active_bit27            : 1;
		uint32_t set_active_bit28            : 1;
		uint32_t set_active_bit29            : 1;
		uint32_t set_active_bit30            : 1;
		uint32_t set_active_bit31            : 1;
	} s;
	/* struct ody_gicd_isactiverx_s cn; */
};
typedef union ody_gicd_isactiverx ody_gicd_isactiverx_t;

static inline uint64_t ODY_GICD_ISACTIVERX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICD_ISACTIVERX(uint64_t a)
{
	if ((a >= 1) && (a <= 16))
		return 0x801000000300ll + 4ll * ((a) & 0x1f);
	__ody_csr_fatal("GICD_ISACTIVERX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GICD_ISACTIVERX(a) ody_gicd_isactiverx_t
#define bustype_ODY_GICD_ISACTIVERX(a) CSR_TYPE_NCB32b
#define basename_ODY_GICD_ISACTIVERX(a) "GICD_ISACTIVERX"
#define device_bar_ODY_GICD_ISACTIVERX(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_GICD_ISACTIVERX(a) (a)
#define arguments_ODY_GICD_ISACTIVERX(a) (a), -1, -1, -1

/**
 * Register (NCB32b) gicd_isenabler#
 *
 * GICD Isenabler Register
 * The GICD_ISENABLER1 characteristics are:
 *
 * * Purpose
 * Enables forwarding of the corresponding interrupt to the CPU interfaces for interrupts 32 to 63.
 *
 * * Usage constraints
 * For INTID m, when DIV and MOD are the integer division and modulo operations:
 *
 * * The corresponding GICD(A)_ISENABLER number, n, is given by n = m DIV 32.
 * * The offset of the ISENABLER is (0x100 + (4*n)).
 * * The bit number of the required group modifier bit in this register is m MOD 32.
 *
 * When GICD(A)_CTLR.DS==0, bits corresponding to Group 0 and Secure Group 1 interrupts
 * are RAZ/WI to Non-secure accesses.
 *
 * At start-up, and after a reset, a PE can use this register to discover which
 * peripheral INTIDs the GIC supports. If GICD(A)_CTLR.DS==0 in a system that supports
 * EL3, the PE must do this for the Secure view of the available interrupts, and Non-
 * secure software running on the PE must do this discovery after the Secure software
 * has configured interrupts as Group 0/Secure Group 1 and Non-secure Group 1.
 *
 * * Configurations
 * Accessing registers where n is greater than (GICD(A)_TYPER.ITLinesNumber+1) may
 * result in an error being logged. (See GICD_ERR0CTLR for details)
 */
union ody_gicd_isenablerx {
	uint32_t u;
	struct ody_gicd_isenablerx_s {
		uint32_t set_enable_bit0             : 1;
		uint32_t set_enable_bit1             : 1;
		uint32_t set_enable_bit2             : 1;
		uint32_t set_enable_bit3             : 1;
		uint32_t set_enable_bit4             : 1;
		uint32_t set_enable_bit5             : 1;
		uint32_t set_enable_bit6             : 1;
		uint32_t set_enable_bit7             : 1;
		uint32_t set_enable_bit8             : 1;
		uint32_t set_enable_bit9             : 1;
		uint32_t set_enable_bit10            : 1;
		uint32_t set_enable_bit11            : 1;
		uint32_t set_enable_bit12            : 1;
		uint32_t set_enable_bit13            : 1;
		uint32_t set_enable_bit14            : 1;
		uint32_t set_enable_bit15            : 1;
		uint32_t set_enable_bit16            : 1;
		uint32_t set_enable_bit17            : 1;
		uint32_t set_enable_bit18            : 1;
		uint32_t set_enable_bit19            : 1;
		uint32_t set_enable_bit20            : 1;
		uint32_t set_enable_bit21            : 1;
		uint32_t set_enable_bit22            : 1;
		uint32_t set_enable_bit23            : 1;
		uint32_t set_enable_bit24            : 1;
		uint32_t set_enable_bit25            : 1;
		uint32_t set_enable_bit26            : 1;
		uint32_t set_enable_bit27            : 1;
		uint32_t set_enable_bit28            : 1;
		uint32_t set_enable_bit29            : 1;
		uint32_t set_enable_bit30            : 1;
		uint32_t set_enable_bit31            : 1;
	} s;
	/* struct ody_gicd_isenablerx_s cn; */
};
typedef union ody_gicd_isenablerx ody_gicd_isenablerx_t;

static inline uint64_t ODY_GICD_ISENABLERX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICD_ISENABLERX(uint64_t a)
{
	if ((a >= 1) && (a <= 16))
		return 0x801000000100ll + 4ll * ((a) & 0x1f);
	__ody_csr_fatal("GICD_ISENABLERX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GICD_ISENABLERX(a) ody_gicd_isenablerx_t
#define bustype_ODY_GICD_ISENABLERX(a) CSR_TYPE_NCB32b
#define basename_ODY_GICD_ISENABLERX(a) "GICD_ISENABLERX"
#define device_bar_ODY_GICD_ISENABLERX(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_GICD_ISENABLERX(a) (a)
#define arguments_ODY_GICD_ISENABLERX(a) (a), -1, -1, -1

/**
 * Register (NCB32b) gicd_iserrr#
 *
 * GICD Iserrr Register
 * The GICD_ISERRR1 characteristics are:
 *
 * * Purpose
 *
 * These registers can set the error status of an SPI or return the error status of an
 * SPI for interrupts 16 to 31.
 *
 * * Usage constraints
 * This register is Secure access only
 *
 * For interrupt ID m, when DIV and MOD are the integer division and modulo operations:
 *
 * * The corresponding GICD(A)_ISERRR number, n, is given by n = m DIV 16.
 * * The offset of the required ISERRR register is (0xE200 + (4*n)).
 *
 * * Configurations
 * Accessing registers where n is greater than 2*(GICD(A)_TYPER.ITLinesNumber+1) may
 * result in an error being logged. (See GICD_ERR0CTLR for details)
 */
union ody_gicd_iserrrx {
	uint32_t u;
	struct ody_gicd_iserrrx_s {
		uint32_t status0                     : 1;
		uint32_t status1                     : 1;
		uint32_t status2                     : 1;
		uint32_t status3                     : 1;
		uint32_t status4                     : 1;
		uint32_t status5                     : 1;
		uint32_t status6                     : 1;
		uint32_t status7                     : 1;
		uint32_t status8                     : 1;
		uint32_t status9                     : 1;
		uint32_t status10                    : 1;
		uint32_t status11                    : 1;
		uint32_t status12                    : 1;
		uint32_t status13                    : 1;
		uint32_t status14                    : 1;
		uint32_t status15                    : 1;
		uint32_t status16                    : 1;
		uint32_t status17                    : 1;
		uint32_t status18                    : 1;
		uint32_t status19                    : 1;
		uint32_t status20                    : 1;
		uint32_t status21                    : 1;
		uint32_t status22                    : 1;
		uint32_t status23                    : 1;
		uint32_t status24                    : 1;
		uint32_t status25                    : 1;
		uint32_t status26                    : 1;
		uint32_t status27                    : 1;
		uint32_t status28                    : 1;
		uint32_t status29                    : 1;
		uint32_t status30                    : 1;
		uint32_t status31                    : 1;
	} s;
	/* struct ody_gicd_iserrrx_s cn; */
};
typedef union ody_gicd_iserrrx ody_gicd_iserrrx_t;

static inline uint64_t ODY_GICD_ISERRRX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICD_ISERRRX(uint64_t a)
{
	if ((a >= 1) && (a <= 16))
		return 0x80100000e200ll + 4ll * ((a) & 0x1f);
	__ody_csr_fatal("GICD_ISERRRX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GICD_ISERRRX(a) ody_gicd_iserrrx_t
#define bustype_ODY_GICD_ISERRRX(a) CSR_TYPE_NCB32b
#define basename_ODY_GICD_ISERRRX(a) "GICD_ISERRRX"
#define device_bar_ODY_GICD_ISERRRX(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_GICD_ISERRRX(a) (a)
#define arguments_ODY_GICD_ISERRRX(a) (a), -1, -1, -1

/**
 * Register (NCB32b) gicd_ispendr#
 *
 * GICD Ispendr Register
 * The GICD_ISPENDR1 characteristics are:
 *
 * * Purpose
 * Adds the pending state to the corresponding interrupt for interrupts 32 to 63.
 *
 * * Usage constraints
 * For INTID m, when DIV and MOD are the integer division and modulo operations:
 *
 * * The corresponding GICD(A)_ISPENDR number, n, is given by n = m DIV 32.
 * * The offset of the required ISPENDR is (0x200 + (4*n)).
 * * The bit number of the required group modifier bit in this register is m MOD 32.
 *
 * If GICD(A)_CTLR.DS==0, unless the GICD(A)_NSACR registers permit Non-secure software
 * to control Group 0 and Secure Group 1 interrupts, any bits that correspond to Group
 * 0 or Secure Group 1 interrupts are accessible only by Secure accesses and are RAZ/WI
 * to Non-secure accesses.
 *
 * * Configurations
 * Accessing registers where n is greater than (GICD(A)_TYPER.ITLinesNumber+1) may
 * result in an error being logged. (See GICD_ERR0CTLR for details)
 */
union ody_gicd_ispendrx {
	uint32_t u;
	struct ody_gicd_ispendrx_s {
		uint32_t set_pending_bit0            : 1;
		uint32_t set_pending_bit1            : 1;
		uint32_t set_pending_bit2            : 1;
		uint32_t set_pending_bit3            : 1;
		uint32_t set_pending_bit4            : 1;
		uint32_t set_pending_bit5            : 1;
		uint32_t set_pending_bit6            : 1;
		uint32_t set_pending_bit7            : 1;
		uint32_t set_pending_bit8            : 1;
		uint32_t set_pending_bit9            : 1;
		uint32_t set_pending_bit10           : 1;
		uint32_t set_pending_bit11           : 1;
		uint32_t set_pending_bit12           : 1;
		uint32_t set_pending_bit13           : 1;
		uint32_t set_pending_bit14           : 1;
		uint32_t set_pending_bit15           : 1;
		uint32_t set_pending_bit16           : 1;
		uint32_t set_pending_bit17           : 1;
		uint32_t set_pending_bit18           : 1;
		uint32_t set_pending_bit19           : 1;
		uint32_t set_pending_bit20           : 1;
		uint32_t set_pending_bit21           : 1;
		uint32_t set_pending_bit22           : 1;
		uint32_t set_pending_bit23           : 1;
		uint32_t set_pending_bit24           : 1;
		uint32_t set_pending_bit25           : 1;
		uint32_t set_pending_bit26           : 1;
		uint32_t set_pending_bit27           : 1;
		uint32_t set_pending_bit28           : 1;
		uint32_t set_pending_bit29           : 1;
		uint32_t set_pending_bit30           : 1;
		uint32_t set_pending_bit31           : 1;
	} s;
	/* struct ody_gicd_ispendrx_s cn; */
};
typedef union ody_gicd_ispendrx ody_gicd_ispendrx_t;

static inline uint64_t ODY_GICD_ISPENDRX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICD_ISPENDRX(uint64_t a)
{
	if ((a >= 1) && (a <= 16))
		return 0x801000000200ll + 4ll * ((a) & 0x1f);
	__ody_csr_fatal("GICD_ISPENDRX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GICD_ISPENDRX(a) ody_gicd_ispendrx_t
#define bustype_ODY_GICD_ISPENDRX(a) CSR_TYPE_NCB32b
#define basename_ODY_GICD_ISPENDRX(a) "GICD_ISPENDRX"
#define device_bar_ODY_GICD_ISPENDRX(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_GICD_ISPENDRX(a) (a)
#define arguments_ODY_GICD_ISPENDRX(a) (a), -1, -1, -1

/**
 * Register (NCB32b) gicd_nsacr#
 *
 * GICD Nsacr Register
 * The GICD_NSACR2 characteristics are:
 *
 * * Purpose
 * Enables Secure software to permit Non-secure software on a particular PE to create
 * and control Group 0 interrupts for interrupts 32 to 47.
 *
 * * Usage constraints
 * For interrupt ID m, when DIV and MOD are the integer division and modulo operations:
 *
 * * The corresponding GICD(A)_NSACR number, n, is given by n = m DIV 16.
 * * The offset of the required NSACR register is (0xE00 + (4*n)).
 *
 * When GICD(A)_CTLR.DS==1, this register is RAZ/WI.
 * These registers are Secure, and are RAZ/WI to Non-secure accesses.
 *
 * * Configurations
 * These registers are available in all GIC configurations.
 *
 * Accessing registers where n is greater than 2*(GICD(A)_TYPER.ITLinesNumber+1) may
 * result in an error being logged. (See GICD_ERR0CTLR for details)
 */
union ody_gicd_nsacrx {
	uint32_t u;
	struct ody_gicd_nsacrx_s {
		uint32_t ns_access0                  : 2;
		uint32_t ns_access1                  : 2;
		uint32_t ns_access2                  : 2;
		uint32_t ns_access3                  : 2;
		uint32_t ns_access4                  : 2;
		uint32_t ns_access5                  : 2;
		uint32_t ns_access6                  : 2;
		uint32_t ns_access7                  : 2;
		uint32_t ns_access8                  : 2;
		uint32_t ns_access9                  : 2;
		uint32_t ns_access10                 : 2;
		uint32_t ns_access11                 : 2;
		uint32_t ns_access12                 : 2;
		uint32_t ns_access13                 : 2;
		uint32_t ns_access14                 : 2;
		uint32_t ns_access15                 : 2;
	} s;
	/* struct ody_gicd_nsacrx_s cn; */
};
typedef union ody_gicd_nsacrx ody_gicd_nsacrx_t;

static inline uint64_t ODY_GICD_NSACRX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICD_NSACRX(uint64_t a)
{
	if ((a >= 2) && (a <= 33))
		return 0x801000000e00ll + 4ll * ((a) & 0x3f);
	__ody_csr_fatal("GICD_NSACRX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GICD_NSACRX(a) ody_gicd_nsacrx_t
#define bustype_ODY_GICD_NSACRX(a) CSR_TYPE_NCB32b
#define basename_ODY_GICD_NSACRX(a) "GICD_NSACRX"
#define device_bar_ODY_GICD_NSACRX(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_GICD_NSACRX(a) (a)
#define arguments_ODY_GICD_NSACRX(a) (a), -1, -1, -1

/**
 * Register (NCB32b) gicd_pidr0
 *
 * GICD Pidr0 Register
 * The GICD_PIDR0 characteristics are:
 *
 * * Purpose
 * This register returns byte[0] of the peripheral ID of the GIC Distributor page.
 *
 * * Usage constraints
 * There are no usage constraints.
 */
union ody_gicd_pidr0 {
	uint32_t u;
	struct ody_gicd_pidr0_s {
		uint32_t part_0                      : 8;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_gicd_pidr0_s cn; */
};
typedef union ody_gicd_pidr0 ody_gicd_pidr0_t;

#define ODY_GICD_PIDR0 ODY_GICD_PIDR0_FUNC()
static inline uint64_t ODY_GICD_PIDR0_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICD_PIDR0_FUNC(void)
{
	return 0x80100000ffe0ll;
}

#define typedef_ODY_GICD_PIDR0 ody_gicd_pidr0_t
#define bustype_ODY_GICD_PIDR0 CSR_TYPE_NCB32b
#define basename_ODY_GICD_PIDR0 "GICD_PIDR0"
#define device_bar_ODY_GICD_PIDR0 0x0 /* PF_BAR0 */
#define busnum_ODY_GICD_PIDR0 0
#define arguments_ODY_GICD_PIDR0 -1, -1, -1, -1

/**
 * Register (NCB32b) gicd_pidr1
 *
 * GICD Pidr1 Register
 * The GICD_PIDR1 characteristics are:
 *
 * * Purpose
 * This register returns byte[1] of the peripheral ID of the GIC Distributor page.
 *
 * * Usage constraints
 * There are no usage constraints.
 */
union ody_gicd_pidr1 {
	uint32_t u;
	struct ody_gicd_pidr1_s {
		uint32_t part_1                      : 4;
		uint32_t des_0                       : 4;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_gicd_pidr1_s cn; */
};
typedef union ody_gicd_pidr1 ody_gicd_pidr1_t;

#define ODY_GICD_PIDR1 ODY_GICD_PIDR1_FUNC()
static inline uint64_t ODY_GICD_PIDR1_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICD_PIDR1_FUNC(void)
{
	return 0x80100000ffe4ll;
}

#define typedef_ODY_GICD_PIDR1 ody_gicd_pidr1_t
#define bustype_ODY_GICD_PIDR1 CSR_TYPE_NCB32b
#define basename_ODY_GICD_PIDR1 "GICD_PIDR1"
#define device_bar_ODY_GICD_PIDR1 0x0 /* PF_BAR0 */
#define busnum_ODY_GICD_PIDR1 0
#define arguments_ODY_GICD_PIDR1 -1, -1, -1, -1

/**
 * Register (NCB32b) gicd_pidr2
 *
 * GICD Pidr2 Register
 * The GICD_PIDR2 characteristics are:
 *
 * * Purpose
 * This register returns byte[2] of the peripheral ID of the GIC Distributor page.
 *
 * * Usage constraints
 * There are no usage constraints.
 */
union ody_gicd_pidr2 {
	uint32_t u;
	struct ody_gicd_pidr2_s {
		uint32_t des_1                       : 3;
		uint32_t jedec                       : 1;
		uint32_t revision                    : 4;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_gicd_pidr2_s cn; */
};
typedef union ody_gicd_pidr2 ody_gicd_pidr2_t;

#define ODY_GICD_PIDR2 ODY_GICD_PIDR2_FUNC()
static inline uint64_t ODY_GICD_PIDR2_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICD_PIDR2_FUNC(void)
{
	return 0x80100000ffe8ll;
}

#define typedef_ODY_GICD_PIDR2 ody_gicd_pidr2_t
#define bustype_ODY_GICD_PIDR2 CSR_TYPE_NCB32b
#define basename_ODY_GICD_PIDR2 "GICD_PIDR2"
#define device_bar_ODY_GICD_PIDR2 0x0 /* PF_BAR0 */
#define busnum_ODY_GICD_PIDR2 0
#define arguments_ODY_GICD_PIDR2 -1, -1, -1, -1

/**
 * Register (NCB32b) gicd_pidr3
 *
 * GICD Pidr3 Register
 * The GICD_PIDR3 characteristics are:
 *
 * * Purpose
 * This register returns byte[3] of the peripheral ID of the GIC Distributor page.
 *
 * * Usage constraints
 * There are no usage constraints.
 */
union ody_gicd_pidr3 {
	uint32_t u;
	struct ody_gicd_pidr3_s {
		uint32_t cmod                        : 3;
		uint32_t reserved_3                  : 1;
		uint32_t revand                      : 4;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_gicd_pidr3_s cn; */
};
typedef union ody_gicd_pidr3 ody_gicd_pidr3_t;

#define ODY_GICD_PIDR3 ODY_GICD_PIDR3_FUNC()
static inline uint64_t ODY_GICD_PIDR3_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICD_PIDR3_FUNC(void)
{
	return 0x80100000ffecll;
}

#define typedef_ODY_GICD_PIDR3 ody_gicd_pidr3_t
#define bustype_ODY_GICD_PIDR3 CSR_TYPE_NCB32b
#define basename_ODY_GICD_PIDR3 "GICD_PIDR3"
#define device_bar_ODY_GICD_PIDR3 0x0 /* PF_BAR0 */
#define busnum_ODY_GICD_PIDR3 0
#define arguments_ODY_GICD_PIDR3 -1, -1, -1, -1

/**
 * Register (NCB32b) gicd_pidr4
 *
 * GICD Pidr4 Register
 * The GICD_PIDR4 characteristics are:
 *
 * * Purpose
 * This register returns byte[4] of the peripheral ID of the GIC Distributor page.
 *
 * * Usage constraints
 * There are no usage constraints.
 */
union ody_gicd_pidr4 {
	uint32_t u;
	struct ody_gicd_pidr4_s {
		uint32_t des_2                       : 4;
		uint32_t size                        : 4;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_gicd_pidr4_s cn; */
};
typedef union ody_gicd_pidr4 ody_gicd_pidr4_t;

#define ODY_GICD_PIDR4 ODY_GICD_PIDR4_FUNC()
static inline uint64_t ODY_GICD_PIDR4_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICD_PIDR4_FUNC(void)
{
	return 0x80100000ffd0ll;
}

#define typedef_ODY_GICD_PIDR4 ody_gicd_pidr4_t
#define bustype_ODY_GICD_PIDR4 CSR_TYPE_NCB32b
#define basename_ODY_GICD_PIDR4 "GICD_PIDR4"
#define device_bar_ODY_GICD_PIDR4 0x0 /* PF_BAR0 */
#define busnum_ODY_GICD_PIDR4 0
#define arguments_ODY_GICD_PIDR4 -1, -1, -1, -1

/**
 * Register (NCB32b) gicd_pidr5
 *
 * GICD Pidr5 Register
 * The GICD_PIDR5 characteristics are:
 *
 * * Purpose
 * This register returns byte[5] of the peripheral ID of the GIC Distributor page.
 *
 * * Usage constraints
 * There are no usage constraints.
 */
union ody_gicd_pidr5 {
	uint32_t u;
	struct ody_gicd_pidr5_s {
		uint32_t reserved_0_31               : 32;
	} s;
	struct ody_gicd_pidr5_cn {
		uint32_t reserved_0_7                : 8;
		uint32_t reserved_8_31               : 24;
	} cn;
};
typedef union ody_gicd_pidr5 ody_gicd_pidr5_t;

#define ODY_GICD_PIDR5 ODY_GICD_PIDR5_FUNC()
static inline uint64_t ODY_GICD_PIDR5_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICD_PIDR5_FUNC(void)
{
	return 0x80100000ffd4ll;
}

#define typedef_ODY_GICD_PIDR5 ody_gicd_pidr5_t
#define bustype_ODY_GICD_PIDR5 CSR_TYPE_NCB32b
#define basename_ODY_GICD_PIDR5 "GICD_PIDR5"
#define device_bar_ODY_GICD_PIDR5 0x0 /* PF_BAR0 */
#define busnum_ODY_GICD_PIDR5 0
#define arguments_ODY_GICD_PIDR5 -1, -1, -1, -1

/**
 * Register (NCB32b) gicd_pidr6
 *
 * GICD Pidr6 Register
 * The GICD_PIDR6 characteristics are:
 *
 * * Purpose
 * This register returns byte[6] of the peripheral ID of the GIC Distributor page.
 *
 * * Usage constraints
 * There are no usage constraints.
 */
union ody_gicd_pidr6 {
	uint32_t u;
	struct ody_gicd_pidr6_s {
		uint32_t reserved_0_31               : 32;
	} s;
	struct ody_gicd_pidr6_cn {
		uint32_t reserved_0_7                : 8;
		uint32_t reserved_8_31               : 24;
	} cn;
};
typedef union ody_gicd_pidr6 ody_gicd_pidr6_t;

#define ODY_GICD_PIDR6 ODY_GICD_PIDR6_FUNC()
static inline uint64_t ODY_GICD_PIDR6_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICD_PIDR6_FUNC(void)
{
	return 0x80100000ffd8ll;
}

#define typedef_ODY_GICD_PIDR6 ody_gicd_pidr6_t
#define bustype_ODY_GICD_PIDR6 CSR_TYPE_NCB32b
#define basename_ODY_GICD_PIDR6 "GICD_PIDR6"
#define device_bar_ODY_GICD_PIDR6 0x0 /* PF_BAR0 */
#define busnum_ODY_GICD_PIDR6 0
#define arguments_ODY_GICD_PIDR6 -1, -1, -1, -1

/**
 * Register (NCB32b) gicd_pidr7
 *
 * GICD Pidr7 Register
 * The GICD_PIDR7 characteristics are:
 *
 * * Purpose
 * This register returns byte[7] of the peripheral ID of the GIC Distributor page.
 *
 * * Usage constraints
 * There are no usage constraints.
 */
union ody_gicd_pidr7 {
	uint32_t u;
	struct ody_gicd_pidr7_s {
		uint32_t reserved_0_31               : 32;
	} s;
	struct ody_gicd_pidr7_cn {
		uint32_t reserved_0_7                : 8;
		uint32_t reserved_8_31               : 24;
	} cn;
};
typedef union ody_gicd_pidr7 ody_gicd_pidr7_t;

#define ODY_GICD_PIDR7 ODY_GICD_PIDR7_FUNC()
static inline uint64_t ODY_GICD_PIDR7_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICD_PIDR7_FUNC(void)
{
	return 0x80100000ffdcll;
}

#define typedef_ODY_GICD_PIDR7 ody_gicd_pidr7_t
#define bustype_ODY_GICD_PIDR7 CSR_TYPE_NCB32b
#define basename_ODY_GICD_PIDR7 "GICD_PIDR7"
#define device_bar_ODY_GICD_PIDR7 0x0 /* PF_BAR0 */
#define busnum_ODY_GICD_PIDR7 0
#define arguments_ODY_GICD_PIDR7 -1, -1, -1, -1

/**
 * Register (NCB32b) gicd_sac
 *
 * GICD Sac Register
 * The GICD_SAC characteristics are:
 *
 * * Purpose
 * This register allows Secure software to control Non-secure access to GIC-700 Secure
 * features by other software.
 *
 * * Usage constraints
 * Only accessible by Secure accesses or when GICD(A)_CTLR.DS == 1.
 */
union ody_gicd_sac {
	uint32_t u;
	struct ody_gicd_sac_s {
		uint32_t reserved_0                  : 1;
		uint32_t gictns                      : 1;
		uint32_t gicpns                      : 1;
		uint32_t reserved_3_31               : 29;
	} s;
	/* struct ody_gicd_sac_s cn; */
};
typedef union ody_gicd_sac ody_gicd_sac_t;

#define ODY_GICD_SAC ODY_GICD_SAC_FUNC()
static inline uint64_t ODY_GICD_SAC_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICD_SAC_FUNC(void)
{
	return 0x801000000024ll;
}

#define typedef_ODY_GICD_SAC ody_gicd_sac_t
#define bustype_ODY_GICD_SAC CSR_TYPE_NCB32b
#define basename_ODY_GICD_SAC "GICD_SAC"
#define device_bar_ODY_GICD_SAC 0x0 /* PF_BAR0 */
#define busnum_ODY_GICD_SAC 0
#define arguments_ODY_GICD_SAC -1, -1, -1, -1

/**
 * Register (NCB32b) gicd_setspi_nsr
 *
 * GICD Setspi Nsr Register
 * The GICD_SETSPI_NSR characteristics are:
 *
 * * Purpose
 * Adds the pending state to a valid SPI if permitted by the Security state of the
 * access and the GICD(A)_NSACR value for that SPI.
 * A write to this register changes the state of an inactive SPI to pending, and the
 * state of an active SPI to active and pending.
 *
 * * Usage constraints
 * The function of this register depends on whether the targeted SPI is configured to
 * be an edge-triggered or level-sensitive interrupt:
 *
 * * For an edge-triggered interrupt, a write to GICx_SETSPI_NSR or GICx_SETSPI_SR adds
 * the pending state to the targeted interrupt. It will stop being pending on
 * activation, or if the pending state is removed by a write to GICD(A)_CLRSPI_NSR,
 * GICx_CLRSPI_SR, or GICD(A)_ICPENDR.
 * * For a level-sensitive interrupt, a write to GICx_SETSPI_NSR or GICx_SETSPI_SR adds
 * the pending state to the targeted interrupt. It will remain pending until it is
 * deasserted by a write to GICD(A)_CLRSPI_NSR or GICx_CLRSPI_SR. If the interrupt is
 * activated between having the pending state added and being deactivated, then the
 * interrupt will be active and pending.
 *
 * Writes to this register have no effect if:
 *
 * * The value written specifies a Secure SPI, the value is written by a Non-secure
 * access, and the value of the corresponding GICD(A)_NSACR register is 0.
 * * The value written specifies an invalid SPI.
 * * The SPI is already pending.
 *
 * * Configurations
 * When GICD(A)_CTLR.DS==1, this register provides functionality for all SPIs.
 */
union ody_gicd_setspi_nsr {
	uint32_t u;
	struct ody_gicd_setspi_nsr_s {
		uint32_t id                          : 16;
		uint32_t reserved_16_31              : 16;
	} s;
	/* struct ody_gicd_setspi_nsr_s cn; */
};
typedef union ody_gicd_setspi_nsr ody_gicd_setspi_nsr_t;

#define ODY_GICD_SETSPI_NSR ODY_GICD_SETSPI_NSR_FUNC()
static inline uint64_t ODY_GICD_SETSPI_NSR_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICD_SETSPI_NSR_FUNC(void)
{
	return 0x801000000040ll;
}

#define typedef_ODY_GICD_SETSPI_NSR ody_gicd_setspi_nsr_t
#define bustype_ODY_GICD_SETSPI_NSR CSR_TYPE_NCB32b
#define basename_ODY_GICD_SETSPI_NSR "GICD_SETSPI_NSR"
#define device_bar_ODY_GICD_SETSPI_NSR 0x0 /* PF_BAR0 */
#define busnum_ODY_GICD_SETSPI_NSR 0
#define arguments_ODY_GICD_SETSPI_NSR -1, -1, -1, -1

/**
 * Register (NCB32b) gicd_setspi_sr
 *
 * GICD Setspi Sr Register
 * The GICD_SETSPI_SR characteristics are:
 *
 * * Purpose
 * Adds the pending state to a valid SPI.
 * A write to this register changes the state of an inactive SPI to pending, and the
 * state of an active SPI to active and pending.
 *
 * * Usage constraints
 * The function of this register depends on whether the targeted SPI is configured to
 * be an edge-triggered or level-sensitive interrupt:
 *
 * * For an edge-triggered interrupt, a write to GICx_SETSPI_NSR or GICx_SETSPI_SR adds
 * the pending state to the targeted interrupt. It will stop being pending on
 * activation, or if the pending state is removed by a write to GICD(A)_CLRSPI_NSR,
 * GICx_CLRSPI_SR, or GICD(A)_ICPENDR.
 * * For a level-sensitive interrupt, a write to GICx_SETSPI_NSR or GICx_SETSPI_SR adds
 * the pending state to the targeted interrupt. It will remain pending until it is
 * deasserted by a write to GICD(A)_CLRSPI_NSR or GICx_CLRSPI_SR. If the interrupt is
 * activated between having the pending state added and being deactivated, then the
 * interrupt will be active and pending.
 *
 * Writes to this register have no effect if:
 *
 * * The value is written by a Non-secure access.
 * * The value written specifies an invalid SPI.
 * * The SPI is already pending.
 *
 * * Configurations
 * When GICD(A)_CTLR.DS==1, this register is WI.
 * When GICD(A)_CTLR.DS==0, only secure-access.
 */
union ody_gicd_setspi_sr {
	uint32_t u;
	struct ody_gicd_setspi_sr_s {
		uint32_t id                          : 16;
		uint32_t reserved_16_31              : 16;
	} s;
	/* struct ody_gicd_setspi_sr_s cn; */
};
typedef union ody_gicd_setspi_sr ody_gicd_setspi_sr_t;

#define ODY_GICD_SETSPI_SR ODY_GICD_SETSPI_SR_FUNC()
static inline uint64_t ODY_GICD_SETSPI_SR_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICD_SETSPI_SR_FUNC(void)
{
	return 0x801000000050ll;
}

#define typedef_ODY_GICD_SETSPI_SR ody_gicd_setspi_sr_t
#define bustype_ODY_GICD_SETSPI_SR CSR_TYPE_NCB32b
#define basename_ODY_GICD_SETSPI_SR "GICD_SETSPI_SR"
#define device_bar_ODY_GICD_SETSPI_SR 0x0 /* PF_BAR0 */
#define busnum_ODY_GICD_SETSPI_SR 0
#define arguments_ODY_GICD_SETSPI_SR -1, -1, -1, -1

/**
 * Register (NCB32b) gicd_statusr
 *
 * GICD Statusr Register
 * The GICD_STATUS characteristics are:
 *
 * * Purpose
 * This register is not used.
 *
 * See the GICT register page for details of error reporting by the GIC
 *
 * * Usage constraints
 * There are no usage constraints.
 *
 * * Configurations
 * This register is RES0 in all GIC configurations.
 */
union ody_gicd_statusr {
	uint32_t u;
	struct ody_gicd_statusr_s {
		uint32_t reserved_0_31               : 32;
	} s;
	/* struct ody_gicd_statusr_s cn; */
};
typedef union ody_gicd_statusr ody_gicd_statusr_t;

#define ODY_GICD_STATUSR ODY_GICD_STATUSR_FUNC()
static inline uint64_t ODY_GICD_STATUSR_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICD_STATUSR_FUNC(void)
{
	return 0x801000000010ll;
}

#define typedef_ODY_GICD_STATUSR ody_gicd_statusr_t
#define bustype_ODY_GICD_STATUSR CSR_TYPE_NCB32b
#define basename_ODY_GICD_STATUSR "GICD_STATUSR"
#define device_bar_ODY_GICD_STATUSR 0x0 /* PF_BAR0 */
#define busnum_ODY_GICD_STATUSR 0
#define arguments_ODY_GICD_STATUSR -1, -1, -1, -1

/**
 * Register (NCB32b) gicd_typer
 *
 * GICD Typer Register
 * The GICD_TYPER characteristics are:
 *
 * * Purpose
 * Provides information about what features the GIC implementation supports. It indicates:
 *
 * * Whether the GIC implementation supports two Security states.
 * * The maximum number of INTIDs that the GIC implementation supports.
 * * The number of PEs that can be used as interrupt targets.
 *
 * * Usage constraints
 * There are no usage constraints.
 */
union ody_gicd_typer {
	uint32_t u;
	struct ody_gicd_typer_s {
		uint32_t itlinesnumber               : 5;
		uint32_t cpunumber                   : 3;
		uint32_t espi                        : 1;
		uint32_t reserved_9                  : 1;
		uint32_t securityextn                : 1;
		uint32_t lspi                        : 5;
		uint32_t mbis                        : 1;
		uint32_t lpis                        : 1;
		uint32_t dvis                        : 1;
		uint32_t idbits                      : 5;
		uint32_t a3v                         : 1;
		uint32_t no1n                        : 1;
		uint32_t rss                         : 1;
		uint32_t espi_range                  : 5;
	} s;
	/* struct ody_gicd_typer_s cn; */
};
typedef union ody_gicd_typer ody_gicd_typer_t;

#define ODY_GICD_TYPER ODY_GICD_TYPER_FUNC()
static inline uint64_t ODY_GICD_TYPER_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICD_TYPER_FUNC(void)
{
	return 0x801000000004ll;
}

#define typedef_ODY_GICD_TYPER ody_gicd_typer_t
#define bustype_ODY_GICD_TYPER CSR_TYPE_NCB32b
#define basename_ODY_GICD_TYPER "GICD_TYPER"
#define device_bar_ODY_GICD_TYPER 0x0 /* PF_BAR0 */
#define busnum_ODY_GICD_TYPER 0
#define arguments_ODY_GICD_TYPER -1, -1, -1, -1

/**
 * Register (NCB32b) gicd_typer2
 *
 * GICD Typer2 Register
 * The GICD_TYPER2 characteristics are:
 *
 * * Purpose
 * Provides information about which features the GIC implementation supports.
 *
 * * Usage constraints
 * There are no usage constraints.
 */
union ody_gicd_typer2 {
	uint32_t u;
	struct ody_gicd_typer2_s {
		uint32_t vid                         : 5;
		uint32_t reserved_5_6                : 2;
		uint32_t vil                         : 1;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_gicd_typer2_s cn; */
};
typedef union ody_gicd_typer2 ody_gicd_typer2_t;

#define ODY_GICD_TYPER2 ODY_GICD_TYPER2_FUNC()
static inline uint64_t ODY_GICD_TYPER2_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICD_TYPER2_FUNC(void)
{
	return 0x80100000000cll;
}

#define typedef_ODY_GICD_TYPER2 ody_gicd_typer2_t
#define bustype_ODY_GICD_TYPER2 CSR_TYPE_NCB32b
#define basename_ODY_GICD_TYPER2 "GICD_TYPER2"
#define device_bar_ODY_GICD_TYPER2 0x0 /* PF_BAR0 */
#define busnum_ODY_GICD_TYPER2 0
#define arguments_ODY_GICD_TYPER2 -1, -1, -1, -1

/**
 * Register (NCB32b) gicd_utilr
 *
 * GICD Utilr Register
 * The GICD_UTILR characteristics are:
 *
 * * Purpose
 *
 * This register controls the utilization engine in the LPI caches.
 *
 * * Usage constraints
 * There are no usage constraints.
 *
 * This register is RES0.
 */
union ody_gicd_utilr {
	uint32_t u;
	struct ody_gicd_utilr_s {
		uint32_t uedu                        : 4;
		uint32_t reserved_4_12               : 9;
		uint32_t ueda                        : 1;
		uint32_t uede                        : 1;
		uint32_t uedt                        : 1;
		uint32_t ueou                        : 4;
		uint32_t reserved_20_28              : 9;
		uint32_t ueoa                        : 1;
		uint32_t ueoe                        : 1;
		uint32_t ueot                        : 1;
	} s;
	/* struct ody_gicd_utilr_s cn; */
};
typedef union ody_gicd_utilr ody_gicd_utilr_t;

#define ODY_GICD_UTILR ODY_GICD_UTILR_FUNC()
static inline uint64_t ODY_GICD_UTILR_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICD_UTILR_FUNC(void)
{
	return 0x801000000034ll;
}

#define typedef_ODY_GICD_UTILR ody_gicd_utilr_t
#define bustype_ODY_GICD_UTILR CSR_TYPE_NCB32b
#define basename_ODY_GICD_UTILR "GICD_UTILR"
#define device_bar_ODY_GICD_UTILR 0x0 /* PF_BAR0 */
#define busnum_ODY_GICD_UTILR 0
#define arguments_ODY_GICD_UTILR -1, -1, -1, -1

/**
 * Register (NCB) gicda_cfgid
 *
 * GICDA Cfgid Register
 * The GICDA_CFGID characteristics are:
 *
 * * Purpose
 * This register contains information that enables test software to determine if the
 * GIC-700 system is compatible.
 *
 * * Usage constraints
 * Some bits are only visible to secure accesses.
 */
union ody_gicda_cfgid {
	uint64_t u;
	struct ody_gicda_cfgid_s {
		uint64_t socketonline                : 1;
		uint64_t reserved_1_3                : 3;
		uint64_t socketnumber                : 4;
		uint64_t itscount                    : 4;
		uint64_t lpisupport                  : 1;
		uint64_t v41support                  : 1;
		uint64_t chipaffinitylevel           : 1;
		uint64_t spigroups                   : 6;
		uint64_t localchipaddressing         : 1;
		uint64_t reserved_22_23              : 2;
		uint64_t rdcollapsesupport           : 1;
		uint64_t extendeditssupport          : 1;
		uint64_t reserved_26_27              : 2;
		uint64_t chips                       : 4;
		uint64_t affinity0bits               : 4;
		uint64_t affinity1bits               : 4;
		uint64_t affinity2bits               : 4;
		uint64_t affinity3bits               : 4;
		uint64_t pewidth                     : 5;
		uint64_t reserved_53_63              : 11;
	} s;
	/* struct ody_gicda_cfgid_s cn; */
};
typedef union ody_gicda_cfgid ody_gicda_cfgid_t;

#define ODY_GICDA_CFGID ODY_GICDA_CFGID_FUNC()
static inline uint64_t ODY_GICDA_CFGID_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICDA_CFGID_FUNC(void)
{
	return 0x80100150f000ll;
}

#define typedef_ODY_GICDA_CFGID ody_gicda_cfgid_t
#define bustype_ODY_GICDA_CFGID CSR_TYPE_NCB
#define basename_ODY_GICDA_CFGID "GICDA_CFGID"
#define busnum_ODY_GICDA_CFGID 0
#define arguments_ODY_GICDA_CFGID -1, -1, -1, -1

/**
 * Register (NCB32b) gicda_cidr0
 *
 * GICDA Cidr0 Register
 * The GICDA_CIDR0 characteristics are:
 *
 * * Purpose
 * This register is one of the Component Identification Registers and returns the first
 * part of the Preamble.
 *
 * * Usage constraints
 * There are no usage constraints.
 */
union ody_gicda_cidr0 {
	uint32_t u;
	struct ody_gicda_cidr0_s {
		uint32_t prmbl_0                     : 8;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_gicda_cidr0_s cn; */
};
typedef union ody_gicda_cidr0 ody_gicda_cidr0_t;

#define ODY_GICDA_CIDR0 ODY_GICDA_CIDR0_FUNC()
static inline uint64_t ODY_GICDA_CIDR0_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICDA_CIDR0_FUNC(void)
{
	return 0x80100150fff0ll;
}

#define typedef_ODY_GICDA_CIDR0 ody_gicda_cidr0_t
#define bustype_ODY_GICDA_CIDR0 CSR_TYPE_NCB32b
#define basename_ODY_GICDA_CIDR0 "GICDA_CIDR0"
#define busnum_ODY_GICDA_CIDR0 0
#define arguments_ODY_GICDA_CIDR0 -1, -1, -1, -1

/**
 * Register (NCB32b) gicda_cidr1
 *
 * GICDA Cidr1 Register
 * The GICDA_CIDR1 characteristics are:
 *
 * * Purpose
 * This register is one of the Component Identification Registers and returns the
 * second part of the Preamble as well as the Component Class.
 *
 * * Usage constraints
 * There are no usage constraints.
 */
union ody_gicda_cidr1 {
	uint32_t u;
	struct ody_gicda_cidr1_s {
		uint32_t prmbl_1                     : 4;
		uint32_t class_f                     : 4;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_gicda_cidr1_s cn; */
};
typedef union ody_gicda_cidr1 ody_gicda_cidr1_t;

#define ODY_GICDA_CIDR1 ODY_GICDA_CIDR1_FUNC()
static inline uint64_t ODY_GICDA_CIDR1_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICDA_CIDR1_FUNC(void)
{
	return 0x80100150fff4ll;
}

#define typedef_ODY_GICDA_CIDR1 ody_gicda_cidr1_t
#define bustype_ODY_GICDA_CIDR1 CSR_TYPE_NCB32b
#define basename_ODY_GICDA_CIDR1 "GICDA_CIDR1"
#define busnum_ODY_GICDA_CIDR1 0
#define arguments_ODY_GICDA_CIDR1 -1, -1, -1, -1

/**
 * Register (NCB32b) gicda_cidr2
 *
 * GICDA Cidr2 Register
 * The GICDA_CIDR2 characteristics are:
 *
 * * Purpose
 * This register is one of the Component Identification Registers and returns the third
 * part of the Preamble.
 *
 * * Usage constraints
 * There are no usage constraints.
 */
union ody_gicda_cidr2 {
	uint32_t u;
	struct ody_gicda_cidr2_s {
		uint32_t prmbl_2                     : 8;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_gicda_cidr2_s cn; */
};
typedef union ody_gicda_cidr2 ody_gicda_cidr2_t;

#define ODY_GICDA_CIDR2 ODY_GICDA_CIDR2_FUNC()
static inline uint64_t ODY_GICDA_CIDR2_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICDA_CIDR2_FUNC(void)
{
	return 0x80100150fff8ll;
}

#define typedef_ODY_GICDA_CIDR2 ody_gicda_cidr2_t
#define bustype_ODY_GICDA_CIDR2 CSR_TYPE_NCB32b
#define basename_ODY_GICDA_CIDR2 "GICDA_CIDR2"
#define busnum_ODY_GICDA_CIDR2 0
#define arguments_ODY_GICDA_CIDR2 -1, -1, -1, -1

/**
 * Register (NCB32b) gicda_cidr3
 *
 * GICDA Cidr3 Register
 * The GICDA_CIDR3 characteristics are:
 *
 * * Purpose
 * This register is one of the Component Identification Registers and returns the
 * fourth part of the Preamble.
 *
 * * Usage constraints
 * There are no usage constraints.
 */
union ody_gicda_cidr3 {
	uint32_t u;
	struct ody_gicda_cidr3_s {
		uint32_t prmbl_3                     : 8;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_gicda_cidr3_s cn; */
};
typedef union ody_gicda_cidr3 ody_gicda_cidr3_t;

#define ODY_GICDA_CIDR3 ODY_GICDA_CIDR3_FUNC()
static inline uint64_t ODY_GICDA_CIDR3_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICDA_CIDR3_FUNC(void)
{
	return 0x80100150fffcll;
}

#define typedef_ODY_GICDA_CIDR3 ody_gicda_cidr3_t
#define bustype_ODY_GICDA_CIDR3 CSR_TYPE_NCB32b
#define basename_ODY_GICDA_CIDR3 "GICDA_CIDR3"
#define busnum_ODY_GICDA_CIDR3 0
#define arguments_ODY_GICDA_CIDR3 -1, -1, -1, -1

/**
 * Register (NCB32b) gicda_clrspi_nsr
 *
 * GICDA Clrspi Nsr Register
 * The GICDA_CLRSPI_NSR characteristics are:
 *
 * * Purpose
 * Removes the pending state to a valid SPI if permitted by the Security state of the
 * access and the GICD(A)_NSACR value for that SPI.
 * A write to this register changes the state of an pending SPI to inactive, and the
 * state of an active and pending SPI to active.
 *
 * * Usage constraints
 * The function of this register depends on whether the targeted SPI is configured to
 * be an edge-triggered or level-sensitive interrupt:
 *
 * * For an edge-triggered interrupt, a write to GICx_SETSPI_NSR or GICx_SETSPI_SR adds
 * the pending state to the targeted interrupt. It will stop being pending on
 * activation, or if the pending state is removed by a write to GICD(A)_CLRSPI_NSR,
 * GICx_CLRSPI_SR, or GICD(A)_ICPENDR.
 * * For a level-sensitive interrupt, a write to GICx_SETSPI_NSR or GICx_SETSPI_SR adds
 * the pending state to the targeted interrupt. It will remain pending until it is
 * deasserted by a write to GICD(A)_CLRSPI_NSR or GICx_CLRSPI_SR. If the interrupt is
 * activated between having the pending state added and being deactivated, then the
 * interrupt will be active and pending.
 *
 * Writes to this register have no effect if:
 *
 * * The value written specifies a Secure SPI, the value is written by a Non-secure
 * access, and the value of the corresponding GICD(A)_NSACR register is less than 0b10.
 * * The value written specifies an invalid SPI.
 * * The SPI is not pending.
 *
 * * Configurations
 * When GICD(A)_CTLR.DS==1, this register provides functionality for all SPIs.
 */
union ody_gicda_clrspi_nsr {
	uint32_t u;
	struct ody_gicda_clrspi_nsr_s {
		uint32_t id                          : 16;
		uint32_t reserved_16_31              : 16;
	} s;
	/* struct ody_gicda_clrspi_nsr_s cn; */
};
typedef union ody_gicda_clrspi_nsr ody_gicda_clrspi_nsr_t;

#define ODY_GICDA_CLRSPI_NSR ODY_GICDA_CLRSPI_NSR_FUNC()
static inline uint64_t ODY_GICDA_CLRSPI_NSR_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICDA_CLRSPI_NSR_FUNC(void)
{
	return 0x801001500048ll;
}

#define typedef_ODY_GICDA_CLRSPI_NSR ody_gicda_clrspi_nsr_t
#define bustype_ODY_GICDA_CLRSPI_NSR CSR_TYPE_NCB32b
#define basename_ODY_GICDA_CLRSPI_NSR "GICDA_CLRSPI_NSR"
#define busnum_ODY_GICDA_CLRSPI_NSR 0
#define arguments_ODY_GICDA_CLRSPI_NSR -1, -1, -1, -1

/**
 * Register (NCB32b) gicda_clrspi_sr
 *
 * GICDA Clrspi Sr Register
 * The GICDA_CLRSPI_SR characteristics are:
 *
 * * Purpose
 * Removes the pending state from a valid SPI.
 * A write to this register changes the state of a pending SPI to inactive, and the
 * state of an active and pending SPI to active.
 *
 * * Usage constraints
 * The function of this register depends on whether the targeted SPI is configured to
 * be an edge-triggered or level-sensitive interrupt:
 *
 * * For an edge-triggered interrupt, a write to GICx_SETSPI_NSR or GICx_SETSPI_SR adds
 * the pending state to the targeted interrupt. It will stop being pending on
 * activation, or if the pending state is removed by a write to GICD(A)_CLRSPI_NSR,
 * GICx_CLRSPI_SR, or GICD(A)_ICPENDR.
 * * For a level-sensitive interrupt, a write to GICx_SETSPI_NSR or GICx_SETSPI_SR adds
 * the pending state to the targeted interrupt. It will remain pending until it is
 * deasserted by a write to GICD(A)_CLRSPI_NSR or GICx_CLRSPI_SR. If the interrupt is
 * activated between having the pending state added and being deactivated, then the
 * interrupt will be active and pending.
 *
 * Writes to this register have no effect if:
 *
 * * The value is written by a Non-secure access.
 * * The value written specifies an invalid SPI.
 * * The SPI is not pending.
 *
 * * Configurations
 * When GICD(A)_CTLR.DS==1, this register is WI.
 * When GICD(A)_CTLR.DS==0, only secure-access.
 */
union ody_gicda_clrspi_sr {
	uint32_t u;
	struct ody_gicda_clrspi_sr_s {
		uint32_t id                          : 16;
		uint32_t reserved_16_31              : 16;
	} s;
	/* struct ody_gicda_clrspi_sr_s cn; */
};
typedef union ody_gicda_clrspi_sr ody_gicda_clrspi_sr_t;

#define ODY_GICDA_CLRSPI_SR ODY_GICDA_CLRSPI_SR_FUNC()
static inline uint64_t ODY_GICDA_CLRSPI_SR_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICDA_CLRSPI_SR_FUNC(void)
{
	return 0x801001500058ll;
}

#define typedef_ODY_GICDA_CLRSPI_SR ody_gicda_clrspi_sr_t
#define bustype_ODY_GICDA_CLRSPI_SR CSR_TYPE_NCB32b
#define basename_ODY_GICDA_CLRSPI_SR "GICDA_CLRSPI_SR"
#define busnum_ODY_GICDA_CLRSPI_SR 0
#define arguments_ODY_GICDA_CLRSPI_SR -1, -1, -1, -1

/**
 * Register (NCB32b) gicda_ctlr
 *
 * GICDA Ctlr Register
 * The GICDA_CTLR characteristics are:
 *
 * * Purpose
 * Contains Distributor controls including interrupt group enables
 *
 * * Usage constraints
 * None
 *
 * * Configurations
 * The format of this register depends on the Security state of the access and the
 * number of Security states supported, which is specified by GICD(A)_CTLR.DS.
 */
union ody_gicda_ctlr {
	uint32_t u;
	struct ody_gicda_ctlr_s {
		uint32_t enablegrp0                  : 1;
		uint32_t enablegrp1_ns               : 1;
		uint32_t enablegrp1_s                : 1;
		uint32_t reserved_3                  : 1;
		uint32_t are_s                       : 1;
		uint32_t are_ns                      : 1;
		uint32_t ds                          : 1;
		uint32_t e1nwf                       : 1;
		uint32_t reserved_8_30               : 23;
		uint32_t rwp                         : 1;
	} s;
	/* struct ody_gicda_ctlr_s cn; */
};
typedef union ody_gicda_ctlr ody_gicda_ctlr_t;

#define ODY_GICDA_CTLR ODY_GICDA_CTLR_FUNC()
static inline uint64_t ODY_GICDA_CTLR_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICDA_CTLR_FUNC(void)
{
	return 0x801001500000ll;
}

#define typedef_ODY_GICDA_CTLR ody_gicda_ctlr_t
#define bustype_ODY_GICDA_CTLR CSR_TYPE_NCB32b
#define basename_ODY_GICDA_CTLR "GICDA_CTLR"
#define busnum_ODY_GICDA_CTLR 0
#define arguments_ODY_GICDA_CTLR -1, -1, -1, -1

/**
 * Register (NCB) gicda_errinsr#
 *
 * GICDA Errinsr Register
 * The GICDA_ERRINSR0 characteristics are:
 *
 * * Purpose
 * This register can inject errors into the SGI RAM. You can use this register to test
 * your error recovery software.
 *
 * * Usage constraints
 * If GICD(A)_SAC.GICTNS == 0, then only Secure software can access the functions of this register.
 *
 * \> *Note*
 * \> The bit assignments within this register depend on whether a write access or read access occurs.
 */
union ody_gicda_errinsrx {
	uint64_t u;
	struct ody_gicda_errinsrx_s {
		uint64_t errins1loc                  : 9;
		uint64_t reserved_9_14               : 6;
		uint64_t errins1valid                : 1;
		uint64_t errins2loc                  : 9;
		uint64_t reserved_25_30              : 6;
		uint64_t errins2valid                : 1;
		uint64_t addr                        : 16;
		uint64_t reserved_48_59              : 12;
		uint64_t disablewritecheck           : 1;
		uint64_t reserved_61_62              : 2;
		uint64_t valid                       : 1;
	} s;
	/* struct ody_gicda_errinsrx_s cn; */
};
typedef union ody_gicda_errinsrx ody_gicda_errinsrx_t;

static inline uint64_t ODY_GICDA_ERRINSRX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICDA_ERRINSRX(uint64_t a)
{
	if (a <= 14)
		return 0x80100150ea00ll + 8ll * ((a) & 0xf);
	__ody_csr_fatal("GICDA_ERRINSRX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GICDA_ERRINSRX(a) ody_gicda_errinsrx_t
#define bustype_ODY_GICDA_ERRINSRX(a) CSR_TYPE_NCB
#define basename_ODY_GICDA_ERRINSRX(a) "GICDA_ERRINSRX"
#define busnum_ODY_GICDA_ERRINSRX(a) (a)
#define arguments_ODY_GICDA_ERRINSRX(a) (a), -1, -1, -1

/**
 * Register (NCB32b) gicda_fctlr
 *
 * GICDA Fctlr Register
 * The GICDA_FCTLR characteristics are:
 *
 * * Purpose
 * This register controls non-architectural functionality such as the scrubbing of all
 * RAMs in the local Distributor.
 *
 * * Usage constraints
 * Some bits are only accessible by Secure accesses.
 */
union ody_gicda_fctlr {
	uint32_t u;
	struct ody_gicda_fctlr_s {
		uint32_t sip                         : 1;
		uint32_t reserved_1_15               : 15;
		uint32_t nsacr                       : 2;
		uint32_t reserved_18_19              : 2;
		uint32_t clpl                        : 4;
		uint32_t reserved_24_25              : 2;
		uint32_t pos                         : 1;
		uint32_t reserved_27_31              : 5;
	} s;
	struct ody_gicda_fctlr_cn {
		uint32_t sip                         : 1;
		uint32_t reserved_1                  : 1;
		uint32_t reserved_2                  : 1;
		uint32_t reserved_3                  : 1;
		uint32_t reserved_4_15               : 12;
		uint32_t nsacr                       : 2;
		uint32_t reserved_18                 : 1;
		uint32_t reserved_19                 : 1;
		uint32_t clpl                        : 4;
		uint32_t reserved_24_25              : 2;
		uint32_t pos                         : 1;
		uint32_t reserved_27_31              : 5;
	} cn;
};
typedef union ody_gicda_fctlr ody_gicda_fctlr_t;

#define ODY_GICDA_FCTLR ODY_GICDA_FCTLR_FUNC()
static inline uint64_t ODY_GICDA_FCTLR_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICDA_FCTLR_FUNC(void)
{
	return 0x801001500020ll;
}

#define typedef_ODY_GICDA_FCTLR ody_gicda_fctlr_t
#define bustype_ODY_GICDA_FCTLR CSR_TYPE_NCB32b
#define basename_ODY_GICDA_FCTLR "GICDA_FCTLR"
#define busnum_ODY_GICDA_FCTLR 0
#define arguments_ODY_GICDA_FCTLR -1, -1, -1, -1

/**
 * Register (NCB32b) gicda_fctlr2
 *
 * GICDA Fctlr2 Register
 * The GICDA_FCTLR2 characteristics are:
 *
 * * Purpose
 * This register controls clock gating and other non-architectural controls in the local Distributor.
 *
 * * Usage constraints
 * Only accessible by Secure accesses or when GICD(A)_DS.DS == 1.
 */
union ody_gicda_fctlr2 {
	uint32_t u;
	struct ody_gicda_fctlr2_s {
		uint32_t cgo                         : 12;
		uint32_t reserved_12_15              : 4;
		uint32_t rws                         : 1;
		uint32_t dcc                         : 1;
		uint32_t qdeny                       : 1;
		uint32_t rwc                         : 1;
		uint32_t reserved_20_24              : 5;
		uint32_t slc                         : 1;
		uint32_t reserved_26_27              : 2;
		uint32_t rcd                         : 1;
		uint32_t irp                         : 1;
		uint32_t awp                         : 1;
		uint32_t arp                         : 1;
	} s;
	struct ody_gicda_fctlr2_cn {
		uint32_t cgo                         : 12;
		uint32_t reserved_12_14              : 3;
		uint32_t reserved_15                 : 1;
		uint32_t rws                         : 1;
		uint32_t dcc                         : 1;
		uint32_t qdeny                       : 1;
		uint32_t rwc                         : 1;
		uint32_t reserved_20_24              : 5;
		uint32_t slc                         : 1;
		uint32_t reserved_26_27              : 2;
		uint32_t rcd                         : 1;
		uint32_t irp                         : 1;
		uint32_t awp                         : 1;
		uint32_t arp                         : 1;
	} cn;
};
typedef union ody_gicda_fctlr2 ody_gicda_fctlr2_t;

#define ODY_GICDA_FCTLR2 ODY_GICDA_FCTLR2_FUNC()
static inline uint64_t ODY_GICDA_FCTLR2_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICDA_FCTLR2_FUNC(void)
{
	return 0x801001500030ll;
}

#define typedef_ODY_GICDA_FCTLR2 ody_gicda_fctlr2_t
#define bustype_ODY_GICDA_FCTLR2 CSR_TYPE_NCB32b
#define basename_ODY_GICDA_FCTLR2 "GICDA_FCTLR2"
#define busnum_ODY_GICDA_FCTLR2 0
#define arguments_ODY_GICDA_FCTLR2 -1, -1, -1, -1

/**
 * Register (NCB32b) gicda_fctlr3
 *
 * GICDA Fctlr3 Register
 * The GICDA_FCTLR3 characteristics are:
 *
 * * Purpose
 *
 * This register is RES0.
 *
 * * Usage constraints
 * Only accessible by Secure accesses or when GICD(A)_DS.DS == 1.
 */
union ody_gicda_fctlr3 {
	uint32_t u;
	struct ody_gicda_fctlr3_s {
		uint32_t ncp0                        : 5;
		uint32_t reserved_5_6                : 2;
		uint32_t scp1                        : 1;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_gicda_fctlr3_s cn; */
};
typedef union ody_gicda_fctlr3 ody_gicda_fctlr3_t;

#define ODY_GICDA_FCTLR3 ODY_GICDA_FCTLR3_FUNC()
static inline uint64_t ODY_GICDA_FCTLR3_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICDA_FCTLR3_FUNC(void)
{
	return 0x801001500038ll;
}

#define typedef_ODY_GICDA_FCTLR3 ody_gicda_fctlr3_t
#define bustype_ODY_GICDA_FCTLR3 CSR_TYPE_NCB32b
#define basename_ODY_GICDA_FCTLR3 "GICDA_FCTLR3"
#define busnum_ODY_GICDA_FCTLR3 0
#define arguments_ODY_GICDA_FCTLR3 -1, -1, -1, -1

/**
 * Register (NCB32b) gicda_icactiver#
 *
 * GICDA Icactiver Register
 * The GICDGICDA_ICACTIVER1 characteristics are:
 *
 * * Purpose
 * Deactivates the corresponding interrupt. These registers are used when saving and
 * restoring state for interrupts 32 to 63.
 *
 * * Usage constraints
 * For INTID m, when DIV and MOD are the integer division and modulo operations:
 *
 * * The corresponding GICD(A)_ICACTIVER number, n, is given by n = m DIV 32.
 * * The offset of the required ICACTIVER is (0x380 + (4*n)).
 * * The bit number of the required group modifier bit in this register is m MOD 32.
 *
 * If GICD(A)_CTLR.DS==0, unless the GICD(A)_NSACR registers permit Non-secure software
 * to control Group 0 and Secure Group 1 interrupts, any bits that correspond to Group
 * 0 or Secure Group 1 interrupts are accessible only by Secure accesses and are RAZ/WI
 * to Non-secure accesses.
 *
 * * Configurations
 * Accessing registers where n is greater than (GICD(A)_TYPER.ITLinesNumber+1) may
 * result in an error being logged. (See GICD_ERR0CTLR for details).
 */
union ody_gicda_icactiverx {
	uint32_t u;
	struct ody_gicda_icactiverx_s {
		uint32_t clear_active_bit0           : 1;
		uint32_t clear_active_bit1           : 1;
		uint32_t clear_active_bit2           : 1;
		uint32_t clear_active_bit3           : 1;
		uint32_t clear_active_bit4           : 1;
		uint32_t clear_active_bit5           : 1;
		uint32_t clear_active_bit6           : 1;
		uint32_t clear_active_bit7           : 1;
		uint32_t clear_active_bit8           : 1;
		uint32_t clear_active_bit9           : 1;
		uint32_t clear_active_bit10          : 1;
		uint32_t clear_active_bit11          : 1;
		uint32_t clear_active_bit12          : 1;
		uint32_t clear_active_bit13          : 1;
		uint32_t clear_active_bit14          : 1;
		uint32_t clear_active_bit15          : 1;
		uint32_t clear_active_bit16          : 1;
		uint32_t clear_active_bit17          : 1;
		uint32_t clear_active_bit18          : 1;
		uint32_t clear_active_bit19          : 1;
		uint32_t clear_active_bit20          : 1;
		uint32_t clear_active_bit21          : 1;
		uint32_t clear_active_bit22          : 1;
		uint32_t clear_active_bit23          : 1;
		uint32_t clear_active_bit24          : 1;
		uint32_t clear_active_bit25          : 1;
		uint32_t clear_active_bit26          : 1;
		uint32_t clear_active_bit27          : 1;
		uint32_t clear_active_bit28          : 1;
		uint32_t clear_active_bit29          : 1;
		uint32_t clear_active_bit30          : 1;
		uint32_t clear_active_bit31          : 1;
	} s;
	/* struct ody_gicda_icactiverx_s cn; */
};
typedef union ody_gicda_icactiverx ody_gicda_icactiverx_t;

static inline uint64_t ODY_GICDA_ICACTIVERX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICDA_ICACTIVERX(uint64_t a)
{
	if ((a >= 1) && (a <= 16))
		return 0x801001500380ll + 4ll * ((a) & 0x1f);
	__ody_csr_fatal("GICDA_ICACTIVERX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GICDA_ICACTIVERX(a) ody_gicda_icactiverx_t
#define bustype_ODY_GICDA_ICACTIVERX(a) CSR_TYPE_NCB32b
#define basename_ODY_GICDA_ICACTIVERX(a) "GICDA_ICACTIVERX"
#define busnum_ODY_GICDA_ICACTIVERX(a) (a)
#define arguments_ODY_GICDA_ICACTIVERX(a) (a), -1, -1, -1

/**
 * Register (NCB32b) gicda_icenabler#
 *
 * GICDA Icenabler Register
 * The GICDA_ICENABLER1 characteristics are:
 *
 * * Purpose
 * Disables forwarding of the corresponding interrupt to the CPU interfaces for interrupts 32 to 63.
 *
 * * Usage constraints
 * For INTID m, when DIV and MOD are the integer division and modulo operations:
 *
 * * The corresponding GICD(A)_ICENABLER number, n, is given by n = m DIV 32.
 * * The offset of the required ICENABLER is (0x180 + (4*n)).
 * * The bit number of the required group modifier bit in this register is m MOD 32.
 *
 * \> *Note*
 * \> Writing a 1 to a GICD(A)_ICENABLER bit only disables the forwarding of the
 * corresponding interrupt from the Distributor to any CPU interface. It does not
 * prevent the interrupt from changing state, for example becoming pending or active
 * and pending if it is already active.
 *
 * When GICD(A)_CTLR.DS==0, bits corresponding to Group 0 and Secure Group 1 interrupts
 * are RAZ/WI to Non-secure accesses.
 *
 * Completion of a write to this register does not guarantee that the effects of the
 * write are visible throughout the affinity hierarchy. To ensure an enable has been
 * cleared, software must write to the register with bits set to 1 to clear the
 * required enables. Software must then poll GICD(A)_CTLR.RWP until it has the value
 * zero.
 *
 * * Configurations
 * Accessing registers where n is greater than (GICD(A)_TYPER.ITLinesNumber+1) may
 * result in an error being logged. (See GICD_ERR0CTLR for details).
 */
union ody_gicda_icenablerx {
	uint32_t u;
	struct ody_gicda_icenablerx_s {
		uint32_t clear_enable_bit0           : 1;
		uint32_t clear_enable_bit1           : 1;
		uint32_t clear_enable_bit2           : 1;
		uint32_t clear_enable_bit3           : 1;
		uint32_t clear_enable_bit4           : 1;
		uint32_t clear_enable_bit5           : 1;
		uint32_t clear_enable_bit6           : 1;
		uint32_t clear_enable_bit7           : 1;
		uint32_t clear_enable_bit8           : 1;
		uint32_t clear_enable_bit9           : 1;
		uint32_t clear_enable_bit10          : 1;
		uint32_t clear_enable_bit11          : 1;
		uint32_t clear_enable_bit12          : 1;
		uint32_t clear_enable_bit13          : 1;
		uint32_t clear_enable_bit14          : 1;
		uint32_t clear_enable_bit15          : 1;
		uint32_t clear_enable_bit16          : 1;
		uint32_t clear_enable_bit17          : 1;
		uint32_t clear_enable_bit18          : 1;
		uint32_t clear_enable_bit19          : 1;
		uint32_t clear_enable_bit20          : 1;
		uint32_t clear_enable_bit21          : 1;
		uint32_t clear_enable_bit22          : 1;
		uint32_t clear_enable_bit23          : 1;
		uint32_t clear_enable_bit24          : 1;
		uint32_t clear_enable_bit25          : 1;
		uint32_t clear_enable_bit26          : 1;
		uint32_t clear_enable_bit27          : 1;
		uint32_t clear_enable_bit28          : 1;
		uint32_t clear_enable_bit29          : 1;
		uint32_t clear_enable_bit30          : 1;
		uint32_t clear_enable_bit31          : 1;
	} s;
	/* struct ody_gicda_icenablerx_s cn; */
};
typedef union ody_gicda_icenablerx ody_gicda_icenablerx_t;

static inline uint64_t ODY_GICDA_ICENABLERX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICDA_ICENABLERX(uint64_t a)
{
	if ((a >= 1) && (a <= 16))
		return 0x801001500180ll + 4ll * ((a) & 0x1f);
	__ody_csr_fatal("GICDA_ICENABLERX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GICDA_ICENABLERX(a) ody_gicda_icenablerx_t
#define bustype_ODY_GICDA_ICENABLERX(a) CSR_TYPE_NCB32b
#define basename_ODY_GICDA_ICENABLERX(a) "GICDA_ICENABLERX"
#define busnum_ODY_GICDA_ICENABLERX(a) (a)
#define arguments_ODY_GICDA_ICENABLERX(a) (a), -1, -1, -1

/**
 * Register (NCB32b) gicda_icerrr#
 *
 * GICDA Icerrr Register
 * The GICDA_ICERRR1 characteristics are:
 *
 * * Purpose
 *
 * These registers can clear the error status of an SPI or return the error status of
 * an SPI for interrupts 16 to 31.
 *
 * * Usage constraints
 * For interrupt ID m, when DIV and MOD are the integer division and modulo operations:
 *
 * * The corresponding GICD(A)_ICERRR number, n, is given by n = m DIV 16.
 * * The offset of the required ICERRR register is (0xE100 + (4*n)).
 *
 * * Configurations
 * Accessing registers where n is greater than 2*(GICD(A)_TYPER.ITLinesNumber+1) may
 * result in an error being logged. (See GICD_ERR0CTLR for details).
 */
union ody_gicda_icerrrx {
	uint32_t u;
	struct ody_gicda_icerrrx_s {
		uint32_t status0                     : 1;
		uint32_t status1                     : 1;
		uint32_t status2                     : 1;
		uint32_t status3                     : 1;
		uint32_t status4                     : 1;
		uint32_t status5                     : 1;
		uint32_t status6                     : 1;
		uint32_t status7                     : 1;
		uint32_t status8                     : 1;
		uint32_t status9                     : 1;
		uint32_t status10                    : 1;
		uint32_t status11                    : 1;
		uint32_t status12                    : 1;
		uint32_t status13                    : 1;
		uint32_t status14                    : 1;
		uint32_t status15                    : 1;
		uint32_t status16                    : 1;
		uint32_t status17                    : 1;
		uint32_t status18                    : 1;
		uint32_t status19                    : 1;
		uint32_t status20                    : 1;
		uint32_t status21                    : 1;
		uint32_t status22                    : 1;
		uint32_t status23                    : 1;
		uint32_t status24                    : 1;
		uint32_t status25                    : 1;
		uint32_t status26                    : 1;
		uint32_t status27                    : 1;
		uint32_t status28                    : 1;
		uint32_t status29                    : 1;
		uint32_t status30                    : 1;
		uint32_t status31                    : 1;
	} s;
	/* struct ody_gicda_icerrrx_s cn; */
};
typedef union ody_gicda_icerrrx ody_gicda_icerrrx_t;

static inline uint64_t ODY_GICDA_ICERRRX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICDA_ICERRRX(uint64_t a)
{
	if ((a >= 1) && (a <= 16))
		return 0x80100150e100ll + 4ll * ((a) & 0x1f);
	__ody_csr_fatal("GICDA_ICERRRX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GICDA_ICERRRX(a) ody_gicda_icerrrx_t
#define bustype_ODY_GICDA_ICERRRX(a) CSR_TYPE_NCB32b
#define basename_ODY_GICDA_ICERRRX(a) "GICDA_ICERRRX"
#define busnum_ODY_GICDA_ICERRRX(a) (a)
#define arguments_ODY_GICDA_ICERRRX(a) (a), -1, -1, -1

/**
 * Register (NCB32b) gicda_icfgr#
 *
 * GICDA Icfgr Register
 * The GICDA_ICFGR2 characteristics are:
 *
 * * Purpose
 * Determines whether the corresponding interrupt is edge-triggered or level-sensitive
 * for interrupts 32 to 47.
 *
 * * Usage constraints
 * For INTID m, when DIV and MOD are the integer division and modulo operations:
 *
 * * The corresponding GICD(A)_ICFGR number, n, is given by n = m DIV 16.
 * * The offset of the required ICFGR is (0xC00 + (4*n)).
 * * The bit number of the required group modifier bit in this register is m MOD 32.
 *
 * Possible values for each interrupt are
 *
 * * 0b00 - Corresponding interrupt is level-sensitive.
 * * 0b10 - Corresponding interrupt is edge-triggered.
 *
 * The GIC will not update the Int_config2 bit if the corresponding interrupt is
 * enabled via GICD(A)_ISENABLER2
 *
 * * Configurations
 * Accessing registers where n is greater than 2*(GICD(A)_TYPER.ITLinesNumber+1) may
 * result in an error being logged. (See GICD_ERR0CTLR for details).
 */
union ody_gicda_icfgrx {
	uint32_t u;
	struct ody_gicda_icfgrx_s {
		uint32_t int_config0                 : 2;
		uint32_t int_config1                 : 2;
		uint32_t int_config2                 : 2;
		uint32_t int_config3                 : 2;
		uint32_t int_config4                 : 2;
		uint32_t int_config5                 : 2;
		uint32_t int_config6                 : 2;
		uint32_t int_config7                 : 2;
		uint32_t int_config8                 : 2;
		uint32_t int_config9                 : 2;
		uint32_t int_config10                : 2;
		uint32_t int_config11                : 2;
		uint32_t int_config12                : 2;
		uint32_t int_config13                : 2;
		uint32_t int_config14                : 2;
		uint32_t int_config15                : 2;
	} s;
	/* struct ody_gicda_icfgrx_s cn; */
};
typedef union ody_gicda_icfgrx ody_gicda_icfgrx_t;

static inline uint64_t ODY_GICDA_ICFGRX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICDA_ICFGRX(uint64_t a)
{
	if ((a >= 2) && (a <= 33))
		return 0x801001500c00ll + 4ll * ((a) & 0x3f);
	__ody_csr_fatal("GICDA_ICFGRX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GICDA_ICFGRX(a) ody_gicda_icfgrx_t
#define bustype_ODY_GICDA_ICFGRX(a) CSR_TYPE_NCB32b
#define basename_ODY_GICDA_ICFGRX(a) "GICDA_ICFGRX"
#define busnum_ODY_GICDA_ICFGRX(a) (a)
#define arguments_ODY_GICDA_ICFGRX(a) (a), -1, -1, -1

/**
 * Register (NCB32b) gicda_icgerrr#
 *
 * GICDA Icgerrr Register
 * The GICDA_ICGERRR1 characteristics are:
 *
 * * Purpose
 *
 * These registers can clear the error status of the GICD(A)_IGROUPRn,
 * GICD(A)_IGRPMODRn, and GICD(A)_NSACRn registers of an SPI or return the error status
 * of an SPI.
 * Applies to interrupts 16 to 31.
 *
 * * Usage constraints
 * This register is Secure access only.
 *
 * For interrupt ID m, when DIV and MOD are the integer division and modulo operations:
 *
 * * The corresponding GICD(A)_ICGERRR number, n, is given by n = m DIV 16.
 * * The offset of the required ICGERRR register is (0xE180 + (4*n)).
 *
 * * Configurations
 * Accessing registers where n is greater than 2*(GICD(A)_TYPER.ITLinesNumber+1) may
 * result in an error being logged. (See GICD_ERR0CTLR for details).
 */
union ody_gicda_icgerrrx {
	uint32_t u;
	struct ody_gicda_icgerrrx_s {
		uint32_t status0                     : 1;
		uint32_t status1                     : 1;
		uint32_t status2                     : 1;
		uint32_t status3                     : 1;
		uint32_t status4                     : 1;
		uint32_t status5                     : 1;
		uint32_t status6                     : 1;
		uint32_t status7                     : 1;
		uint32_t status8                     : 1;
		uint32_t status9                     : 1;
		uint32_t status10                    : 1;
		uint32_t status11                    : 1;
		uint32_t status12                    : 1;
		uint32_t status13                    : 1;
		uint32_t status14                    : 1;
		uint32_t status15                    : 1;
		uint32_t status16                    : 1;
		uint32_t status17                    : 1;
		uint32_t status18                    : 1;
		uint32_t status19                    : 1;
		uint32_t status20                    : 1;
		uint32_t status21                    : 1;
		uint32_t status22                    : 1;
		uint32_t status23                    : 1;
		uint32_t status24                    : 1;
		uint32_t status25                    : 1;
		uint32_t status26                    : 1;
		uint32_t status27                    : 1;
		uint32_t status28                    : 1;
		uint32_t status29                    : 1;
		uint32_t status30                    : 1;
		uint32_t status31                    : 1;
	} s;
	/* struct ody_gicda_icgerrrx_s cn; */
};
typedef union ody_gicda_icgerrrx ody_gicda_icgerrrx_t;

static inline uint64_t ODY_GICDA_ICGERRRX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICDA_ICGERRRX(uint64_t a)
{
	if ((a >= 1) && (a <= 16))
		return 0x80100150e180ll + 4ll * ((a) & 0x1f);
	__ody_csr_fatal("GICDA_ICGERRRX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GICDA_ICGERRRX(a) ody_gicda_icgerrrx_t
#define bustype_ODY_GICDA_ICGERRRX(a) CSR_TYPE_NCB32b
#define basename_ODY_GICDA_ICGERRRX(a) "GICDA_ICGERRRX"
#define busnum_ODY_GICDA_ICGERRRX(a) (a)
#define arguments_ODY_GICDA_ICGERRRX(a) (a), -1, -1, -1

/**
 * Register (NCB32b) gicda_iclar#
 *
 * GICDA Iclar Register
 * The GICDA_ICLAR2 characteristics are:
 *
 * * Purpose
 * These registers control whether a 1 of N SPI can target a core that is assigned to
 * class 0 or class 1 group for interrupts 32 to 47.
 *
 * * Usage constraints
 * For interrupt ID m, when DIV and MOD are the integer division and modulo operations:
 *
 * * The corresponding GICD(A)_ICLAR number, n, is given by n = m DIV 16.
 * * The offset of the required ICLAR register is (0xE000 + (4*n)).
 *
 * These registers are only accessible when the corresponding
 * GICD(A)_IROUTERn.Interrupt_Routing_Mode == 1.
 *
 * * Configurations
 * Accessing registers where n is greater than 2*(GICD(A)_TYPER.ITLinesNumber+1) may
 * result in an error being logged. (See GICD_ERR0CTLR for details).
 */
union ody_gicda_iclarx {
	uint32_t u;
	struct ody_gicda_iclarx_s {
		uint32_t classes0                    : 2;
		uint32_t classes1                    : 2;
		uint32_t classes2                    : 2;
		uint32_t classes3                    : 2;
		uint32_t classes4                    : 2;
		uint32_t classes5                    : 2;
		uint32_t classes6                    : 2;
		uint32_t classes7                    : 2;
		uint32_t classes8                    : 2;
		uint32_t classes9                    : 2;
		uint32_t classes10                   : 2;
		uint32_t classes11                   : 2;
		uint32_t classes12                   : 2;
		uint32_t classes13                   : 2;
		uint32_t classes14                   : 2;
		uint32_t classes15                   : 2;
	} s;
	/* struct ody_gicda_iclarx_s cn; */
};
typedef union ody_gicda_iclarx ody_gicda_iclarx_t;

static inline uint64_t ODY_GICDA_ICLARX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICDA_ICLARX(uint64_t a)
{
	if ((a >= 2) && (a <= 33))
		return 0x80100150e000ll + 4ll * ((a) & 0x3f);
	__ody_csr_fatal("GICDA_ICLARX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GICDA_ICLARX(a) ody_gicda_iclarx_t
#define bustype_ODY_GICDA_ICLARX(a) CSR_TYPE_NCB32b
#define basename_ODY_GICDA_ICLARX(a) "GICDA_ICLARX"
#define busnum_ODY_GICDA_ICLARX(a) (a)
#define arguments_ODY_GICDA_ICLARX(a) (a), -1, -1, -1

/**
 * Register (NCB32b) gicda_icpendr#
 *
 * GICDA Icpendr Register
 * The GICDA_ICPENDR1 characteristics are:
 *
 * * Purpose
 * Removes the pending state from the corresponding interrupt for interrupts 32 to 63.
 *
 * * Usage constraints
 * For INTID m, when DIV and MOD are the integer division and modulo operations:
 *
 * * The corresponding GICD(A)_ICPENDR number, n, is given by n = m DIV 32.
 * * The offset of the required ICPENDR is (0x280 + (4*n)).
 * * The bit number of the required group modifier bit in this register is m MOD 32.
 *
 * If GICD(A)_CTLR.DS==0, unless the GICD(A)_NSACR registers permit Non-secure software
 * to control Group 0 and Secure Group 1 interrupts, any bits that correspond to Group
 * 0 or Secure Group 1 interrupts are accessible only by Secure accesses and are RAZ/WI
 * to Non-secure accesses.
 *
 * * Configurations
 * Accessing registers where n is greater than (GICD(A)_TYPER.ITLinesNumber+1) may
 * result in an error being logged. (See GICD_ERR0CTLR for details).
 */
union ody_gicda_icpendrx {
	uint32_t u;
	struct ody_gicda_icpendrx_s {
		uint32_t clear_pending_bit0          : 1;
		uint32_t clear_pending_bit1          : 1;
		uint32_t clear_pending_bit2          : 1;
		uint32_t clear_pending_bit3          : 1;
		uint32_t clear_pending_bit4          : 1;
		uint32_t clear_pending_bit5          : 1;
		uint32_t clear_pending_bit6          : 1;
		uint32_t clear_pending_bit7          : 1;
		uint32_t clear_pending_bit8          : 1;
		uint32_t clear_pending_bit9          : 1;
		uint32_t clear_pending_bit10         : 1;
		uint32_t clear_pending_bit11         : 1;
		uint32_t clear_pending_bit12         : 1;
		uint32_t clear_pending_bit13         : 1;
		uint32_t clear_pending_bit14         : 1;
		uint32_t clear_pending_bit15         : 1;
		uint32_t clear_pending_bit16         : 1;
		uint32_t clear_pending_bit17         : 1;
		uint32_t clear_pending_bit18         : 1;
		uint32_t clear_pending_bit19         : 1;
		uint32_t clear_pending_bit20         : 1;
		uint32_t clear_pending_bit21         : 1;
		uint32_t clear_pending_bit22         : 1;
		uint32_t clear_pending_bit23         : 1;
		uint32_t clear_pending_bit24         : 1;
		uint32_t clear_pending_bit25         : 1;
		uint32_t clear_pending_bit26         : 1;
		uint32_t clear_pending_bit27         : 1;
		uint32_t clear_pending_bit28         : 1;
		uint32_t clear_pending_bit29         : 1;
		uint32_t clear_pending_bit30         : 1;
		uint32_t clear_pending_bit31         : 1;
	} s;
	/* struct ody_gicda_icpendrx_s cn; */
};
typedef union ody_gicda_icpendrx ody_gicda_icpendrx_t;

static inline uint64_t ODY_GICDA_ICPENDRX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICDA_ICPENDRX(uint64_t a)
{
	if ((a >= 1) && (a <= 16))
		return 0x801001500280ll + 4ll * ((a) & 0x1f);
	__ody_csr_fatal("GICDA_ICPENDRX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GICDA_ICPENDRX(a) ody_gicda_icpendrx_t
#define bustype_ODY_GICDA_ICPENDRX(a) CSR_TYPE_NCB32b
#define basename_ODY_GICDA_ICPENDRX(a) "GICDA_ICPENDRX"
#define busnum_ODY_GICDA_ICPENDRX(a) (a)
#define arguments_ODY_GICDA_ICPENDRX(a) (a), -1, -1, -1

/**
 * Register (NCB32b) gicda_igroupr#
 *
 * GICDA Igroupr Register
 * The GICDA_IGROUPR1 characteristics are:
 *
 * * Purpose
 * Controls whether the corresponding interrupt is in Group 0 or Group 1 for interrupts 32 to 63.
 *
 * * Usage constraints
 * When GICD(A)_CTLR.DS==0, the register is RAZ/WI to Non-secure accesses.
 *
 * For INTID m, when DIV and MOD are the integer division and modulo operations:
 *
 * * The corresponding GICD(A)_IGROUP number, n, is given by n = m DIV 32.
 * * The offset of the required IGROUP register is (0x080 + (4*n)).
 * * The bit number of the required group modifier bit in this register is m MOD 32.
 *
 * * Configurations
 * Accessing registers where n is greater than (GICD(A)_TYPER.ITLinesNumber+1) may
 * result in an error being logged. (See GICD_ERR0CTLR for details).
 */
union ody_gicda_igrouprx {
	uint32_t u;
	struct ody_gicda_igrouprx_s {
		uint32_t group_status_bit0           : 1;
		uint32_t group_status_bit1           : 1;
		uint32_t group_status_bit2           : 1;
		uint32_t group_status_bit3           : 1;
		uint32_t group_status_bit4           : 1;
		uint32_t group_status_bit5           : 1;
		uint32_t group_status_bit6           : 1;
		uint32_t group_status_bit7           : 1;
		uint32_t group_status_bit8           : 1;
		uint32_t group_status_bit9           : 1;
		uint32_t group_status_bit10          : 1;
		uint32_t group_status_bit11          : 1;
		uint32_t group_status_bit12          : 1;
		uint32_t group_status_bit13          : 1;
		uint32_t group_status_bit14          : 1;
		uint32_t group_status_bit15          : 1;
		uint32_t group_status_bit16          : 1;
		uint32_t group_status_bit17          : 1;
		uint32_t group_status_bit18          : 1;
		uint32_t group_status_bit19          : 1;
		uint32_t group_status_bit20          : 1;
		uint32_t group_status_bit21          : 1;
		uint32_t group_status_bit22          : 1;
		uint32_t group_status_bit23          : 1;
		uint32_t group_status_bit24          : 1;
		uint32_t group_status_bit25          : 1;
		uint32_t group_status_bit26          : 1;
		uint32_t group_status_bit27          : 1;
		uint32_t group_status_bit28          : 1;
		uint32_t group_status_bit29          : 1;
		uint32_t group_status_bit30          : 1;
		uint32_t group_status_bit31          : 1;
	} s;
	/* struct ody_gicda_igrouprx_s cn; */
};
typedef union ody_gicda_igrouprx ody_gicda_igrouprx_t;

static inline uint64_t ODY_GICDA_IGROUPRX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICDA_IGROUPRX(uint64_t a)
{
	if ((a >= 1) && (a <= 16))
		return 0x801001500080ll + 4ll * ((a) & 0x1f);
	__ody_csr_fatal("GICDA_IGROUPRX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GICDA_IGROUPRX(a) ody_gicda_igrouprx_t
#define bustype_ODY_GICDA_IGROUPRX(a) CSR_TYPE_NCB32b
#define basename_ODY_GICDA_IGROUPRX(a) "GICDA_IGROUPRX"
#define busnum_ODY_GICDA_IGROUPRX(a) (a)
#define arguments_ODY_GICDA_IGROUPRX(a) (a), -1, -1, -1

/**
 * Register (NCB32b) gicda_igrpmodr#
 *
 * GICDA Igrpmodr Register
 * The GICDA_IGRPMODR1 characteristics are:
 *
 * * Purpose
 * When GICD(A)_CTLR.DS==0, this register together with the GICD(A)_IGROUPR1 register,
 * controls whether the corresponding interrupt is in:
 *
 * * Secure Group 0.
 * * Non-secure Group 1.
 * * Secure Group 1.
 *
 * Applies to interrupts 32 to 63
 *
 * * Usage constraints
 * For INTID m, when DIV and MOD are the integer division and modulo operations:
 *
 * * The corresponding GICD(A)_IGRPMODR number, n, is given by n = m DIV 32.
 * * The offset of the required IGRPMODR is (0xD00 + (4*n)).
 * * The bit number of the required group modifier bit in this register is m MOD 32.
 *
 * When GICD(A)_CTLR.DS==0, the register is RAZ/WI to Non-secure accesses.
 * When GICD(A)_CTLR.DS==1, the GICD(A)_IGRPMODR registers are RAZ/WI.
 *
 * * Configurations
 * Accessing registers where n is greater than (GICD(A)_TYPER.ITLinesNumber+1) may
 * result in an error being logged. (See GICD_ERR0CTLR for details).
 */
union ody_gicda_igrpmodrx {
	uint32_t u;
	struct ody_gicda_igrpmodrx_s {
		uint32_t group_modifier_bit0         : 1;
		uint32_t group_modifier_bit1         : 1;
		uint32_t group_modifier_bit2         : 1;
		uint32_t group_modifier_bit3         : 1;
		uint32_t group_modifier_bit4         : 1;
		uint32_t group_modifier_bit5         : 1;
		uint32_t group_modifier_bit6         : 1;
		uint32_t group_modifier_bit7         : 1;
		uint32_t group_modifier_bit8         : 1;
		uint32_t group_modifier_bit9         : 1;
		uint32_t group_modifier_bit10        : 1;
		uint32_t group_modifier_bit11        : 1;
		uint32_t group_modifier_bit12        : 1;
		uint32_t group_modifier_bit13        : 1;
		uint32_t group_modifier_bit14        : 1;
		uint32_t group_modifier_bit15        : 1;
		uint32_t group_modifier_bit16        : 1;
		uint32_t group_modifier_bit17        : 1;
		uint32_t group_modifier_bit18        : 1;
		uint32_t group_modifier_bit19        : 1;
		uint32_t group_modifier_bit20        : 1;
		uint32_t group_modifier_bit21        : 1;
		uint32_t group_modifier_bit22        : 1;
		uint32_t group_modifier_bit23        : 1;
		uint32_t group_modifier_bit24        : 1;
		uint32_t group_modifier_bit25        : 1;
		uint32_t group_modifier_bit26        : 1;
		uint32_t group_modifier_bit27        : 1;
		uint32_t group_modifier_bit28        : 1;
		uint32_t group_modifier_bit29        : 1;
		uint32_t group_modifier_bit30        : 1;
		uint32_t group_modifier_bit31        : 1;
	} s;
	/* struct ody_gicda_igrpmodrx_s cn; */
};
typedef union ody_gicda_igrpmodrx ody_gicda_igrpmodrx_t;

static inline uint64_t ODY_GICDA_IGRPMODRX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICDA_IGRPMODRX(uint64_t a)
{
	if ((a >= 1) && (a <= 16))
		return 0x801001500d00ll + 4ll * ((a) & 0x1f);
	__ody_csr_fatal("GICDA_IGRPMODRX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GICDA_IGRPMODRX(a) ody_gicda_igrpmodrx_t
#define bustype_ODY_GICDA_IGRPMODRX(a) CSR_TYPE_NCB32b
#define basename_ODY_GICDA_IGRPMODRX(a) "GICDA_IGRPMODRX"
#define busnum_ODY_GICDA_IGRPMODRX(a) (a)
#define arguments_ODY_GICDA_IGRPMODRX(a) (a), -1, -1, -1

/**
 * Register (NCB32b) gicda_iidr
 *
 * GICDA Iidr Register
 * The GICDA_IIDR characteristics are:
 *
 * * Purpose
 * Provides information about the implementer and revision of the Distributor
 *
 * * Usage constraints
 * There are no usage constraints.
 *
 * * Configurations
 * This register is available in all configurations of the GIC.
 */
union ody_gicda_iidr {
	uint32_t u;
	struct ody_gicda_iidr_s {
		uint32_t implementer                 : 12;
		uint32_t revision                    : 4;
		uint32_t variant                     : 4;
		uint32_t reserved_20_23              : 4;
		uint32_t productid                   : 8;
	} s;
	/* struct ody_gicda_iidr_s cn; */
};
typedef union ody_gicda_iidr ody_gicda_iidr_t;

#define ODY_GICDA_IIDR ODY_GICDA_IIDR_FUNC()
static inline uint64_t ODY_GICDA_IIDR_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICDA_IIDR_FUNC(void)
{
	return 0x801001500008ll;
}

#define typedef_ODY_GICDA_IIDR ody_gicda_iidr_t
#define bustype_ODY_GICDA_IIDR CSR_TYPE_NCB32b
#define basename_ODY_GICDA_IIDR "GICDA_IIDR"
#define busnum_ODY_GICDA_IIDR 0
#define arguments_ODY_GICDA_IIDR -1, -1, -1, -1

/**
 * Register (NCB32b) gicda_ipriorityr#
 *
 * GICDA Ipriorityr Register
 * The GICDA_IPRIORITYR8 characteristics are:
 *
 * * Purpose
 * Holds the priority of interrupts 32 to 35.
 *
 * * Usage constraints
 * For interrupt ID m, when DIV and MOD are the integer division and modulo operations:
 *
 * * The corresponding GICD(A)_IPRIORITYR8 number, n, is given by n = m DIV 4.
 * * The offset of the required IPRIORITYR register is (0x400 + (4*n)).
 * * The byte offset of the required Priority field in this register is m MOD 4, where:
 *     * Byte offset 0 refers to register bits [7:0].
 *     * Byte offset 1 refers to register bits [15:8].
 *     * Byte offset 2 refers to register bits [23:16].
 *     * Byte offset 3 refers to register bits [31:24].
 *
 * These registers are byte-accessible.
 *
 * The GIC implements 5 bits of priority and in each field, unimplemented bits are
 * RAZ/WI, see Interrupt prioritization on page 4-65.
 *
 * When GICD(A)_CTLR.DS==0:
 *
 * * A register bit that corresponds to a Group 0 or Secure Group 1 interrupt is RAZ/WI
 * to Non-secure accesses.
 * * A Non-secure access to a field that corresponds to a Non-secure Group 1 interrupt
 * behaves as described in Software accesses of interrupt priority on page 4-72.
 *
 * * Configurations
 * Accessing registers where n is greater than 4*(GICD(A)_TYPER.ITLinesNumber+1) may
 * result in an error being logged. (See GICD_ERR0CTLR for details).
 */
union ody_gicda_ipriorityrx {
	uint32_t u;
	struct ody_gicda_ipriorityrx_s {
		uint32_t offset0                     : 8;
		uint32_t offset1                     : 8;
		uint32_t offset2                     : 8;
		uint32_t offset3                     : 8;
	} s;
	/* struct ody_gicda_ipriorityrx_s cn; */
};
typedef union ody_gicda_ipriorityrx ody_gicda_ipriorityrx_t;

static inline uint64_t ODY_GICDA_IPRIORITYRX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICDA_IPRIORITYRX(uint64_t a)
{
	if ((a >= 8) && (a <= 135))
		return 0x801001500400ll + 4ll * ((a) & 0xff);
	__ody_csr_fatal("GICDA_IPRIORITYRX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GICDA_IPRIORITYRX(a) ody_gicda_ipriorityrx_t
#define bustype_ODY_GICDA_IPRIORITYRX(a) CSR_TYPE_NCB32b
#define basename_ODY_GICDA_IPRIORITYRX(a) "GICDA_IPRIORITYRX"
#define busnum_ODY_GICDA_IPRIORITYRX(a) (a)
#define arguments_ODY_GICDA_IPRIORITYRX(a) (a), -1, -1, -1

/**
 * Register (NCB) gicda_irouter#
 *
 * GICDA Irouter Register
 * The GICDA_IROUTER32 characteristics are:
 *
 * * Purpose
 * Provides routing information for the corresponding SPI of ID 32:
 * * Usage constraints
 * When GICD(A)_CTLR.DS==0, a register that corresponds to a Group 0 or Secure Group 1
 * interrupt is RAZ/WI to Non-secure accesses (unless enabled by GICD(A)_CTLR.NSACR)
 * * Configurations
 * These registers are available in all GIC configurations.
 *
 * Accessing registers where n is greater than 32*(GICD(A)_TYPER.ITLinesNumber+1) may
 * result in an error being logged. (See GICD_ERR0CTLR for details).
 */
union ody_gicda_irouterx {
	uint64_t u;
	struct ody_gicda_irouterx_s {
		uint64_t affinity0                   : 8;
		uint64_t affinity1                   : 8;
		uint64_t affinity2                   : 8;
		uint64_t reserved_24_30              : 7;
		uint64_t interruptroutingmode        : 1;
		uint64_t affinity3                   : 8;
		uint64_t reserved_40_63              : 24;
	} s;
	/* struct ody_gicda_irouterx_s cn; */
};
typedef union ody_gicda_irouterx ody_gicda_irouterx_t;

static inline uint64_t ODY_GICDA_IROUTERX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICDA_IROUTERX(uint64_t a)
{
	if ((a >= 32) && (a <= 543))
		return 0x801001506000ll + 8ll * ((a) & 0x3ff);
	__ody_csr_fatal("GICDA_IROUTERX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GICDA_IROUTERX(a) ody_gicda_irouterx_t
#define bustype_ODY_GICDA_IROUTERX(a) CSR_TYPE_NCB
#define basename_ODY_GICDA_IROUTERX(a) "GICDA_IROUTERX"
#define busnum_ODY_GICDA_IROUTERX(a) (a)
#define arguments_ODY_GICDA_IROUTERX(a) (a), -1, -1, -1

/**
 * Register (NCB32b) gicda_isactiver#
 *
 * GICDA Isactiver Register
 * The GICDA_ISACTIVER1 characteristics are:
 *
 * * Purpose
 * Activates the corresponding interrupt. These registers are used when saving and
 * restoring state for interrupts 32 to 63.
 *
 * * Usage constraints
 * For INTID m, when DIV and MOD are the integer division and modulo operations:
 *
 * * The corresponding GICD(A)_ISACTIVER number, n, is given by n = m DIV 32.
 * * The offset of the required ISACTIVER is (0x300 + (4*n)).
 * * The bit number of the required group modifier bit in this register is m MOD 32.
 *
 * If GICD(A)_CTLR.DS==0, unless the GICD(A)_NSACR registers permit Non-secure software
 * to control Group 0 and Secure Group 1 interrupts, any bits that correspond to Group
 * 0 or Secure Group 1 interrupts are accessible only by Secure accesses and are RAZ/WI
 * to Non-secure accesses.
 * The bit reads as one if the status of the interrupt is active or active and pending.
 * GICD(A)_ISPENDR1 and GICD(A)_ICPENDR1 provide the pending status of the interrupt.
 *
 * * Configurations
 * Accessing registers where n is greater than (GICD(A)_TYPER.ITLinesNumber+1) may
 * result in an error being logged. (See GICD_ERR0CTLR for details).
 */
union ody_gicda_isactiverx {
	uint32_t u;
	struct ody_gicda_isactiverx_s {
		uint32_t set_active_bit0             : 1;
		uint32_t set_active_bit1             : 1;
		uint32_t set_active_bit2             : 1;
		uint32_t set_active_bit3             : 1;
		uint32_t set_active_bit4             : 1;
		uint32_t set_active_bit5             : 1;
		uint32_t set_active_bit6             : 1;
		uint32_t set_active_bit7             : 1;
		uint32_t set_active_bit8             : 1;
		uint32_t set_active_bit9             : 1;
		uint32_t set_active_bit10            : 1;
		uint32_t set_active_bit11            : 1;
		uint32_t set_active_bit12            : 1;
		uint32_t set_active_bit13            : 1;
		uint32_t set_active_bit14            : 1;
		uint32_t set_active_bit15            : 1;
		uint32_t set_active_bit16            : 1;
		uint32_t set_active_bit17            : 1;
		uint32_t set_active_bit18            : 1;
		uint32_t set_active_bit19            : 1;
		uint32_t set_active_bit20            : 1;
		uint32_t set_active_bit21            : 1;
		uint32_t set_active_bit22            : 1;
		uint32_t set_active_bit23            : 1;
		uint32_t set_active_bit24            : 1;
		uint32_t set_active_bit25            : 1;
		uint32_t set_active_bit26            : 1;
		uint32_t set_active_bit27            : 1;
		uint32_t set_active_bit28            : 1;
		uint32_t set_active_bit29            : 1;
		uint32_t set_active_bit30            : 1;
		uint32_t set_active_bit31            : 1;
	} s;
	/* struct ody_gicda_isactiverx_s cn; */
};
typedef union ody_gicda_isactiverx ody_gicda_isactiverx_t;

static inline uint64_t ODY_GICDA_ISACTIVERX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICDA_ISACTIVERX(uint64_t a)
{
	if ((a >= 1) && (a <= 16))
		return 0x801001500300ll + 4ll * ((a) & 0x1f);
	__ody_csr_fatal("GICDA_ISACTIVERX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GICDA_ISACTIVERX(a) ody_gicda_isactiverx_t
#define bustype_ODY_GICDA_ISACTIVERX(a) CSR_TYPE_NCB32b
#define basename_ODY_GICDA_ISACTIVERX(a) "GICDA_ISACTIVERX"
#define busnum_ODY_GICDA_ISACTIVERX(a) (a)
#define arguments_ODY_GICDA_ISACTIVERX(a) (a), -1, -1, -1

/**
 * Register (NCB32b) gicda_isenabler#
 *
 * GICDA Isenabler Register
 * The GICDA_ISENABLER1 characteristics are:
 *
 * * Purpose
 * Enables forwarding of the corresponding interrupt to the CPU interfaces for interrupts 32 to 63.
 *
 * * Usage constraints
 * For INTID m, when DIV and MOD are the integer division and modulo operations:
 *
 * * The corresponding GICD(A)_ISENABLER number, n, is given by n = m DIV 32.
 * * The offset of the ISENABLER is (0x100 + (4*n)).
 * * The bit number of the required group modifier bit in this register is m MOD 32.
 *
 * When GICD(A)_CTLR.DS==0, bits corresponding to Group 0 and Secure Group 1 interrupts
 * are RAZ/WI to Non-secure accesses.
 *
 * At start-up, and after a reset, a PE can use this register to discover which
 * peripheral INTIDs the GIC supports. If GICD(A)_CTLR.DS==0 in a system that supports
 * EL3, the PE must do this for the Secure view of the available interrupts, and Non-
 * secure software running on the PE must do this discovery after the Secure software
 * has configured interrupts as Group 0/Secure Group 1 and Non-secure Group 1.
 *
 * * Configurations
 * Accessing registers where n is greater than (GICD(A)_TYPER.ITLinesNumber+1) may
 * result in an error being logged. (See GICD_ERR0CTLR for details).
 */
union ody_gicda_isenablerx {
	uint32_t u;
	struct ody_gicda_isenablerx_s {
		uint32_t set_enable_bit0             : 1;
		uint32_t set_enable_bit1             : 1;
		uint32_t set_enable_bit2             : 1;
		uint32_t set_enable_bit3             : 1;
		uint32_t set_enable_bit4             : 1;
		uint32_t set_enable_bit5             : 1;
		uint32_t set_enable_bit6             : 1;
		uint32_t set_enable_bit7             : 1;
		uint32_t set_enable_bit8             : 1;
		uint32_t set_enable_bit9             : 1;
		uint32_t set_enable_bit10            : 1;
		uint32_t set_enable_bit11            : 1;
		uint32_t set_enable_bit12            : 1;
		uint32_t set_enable_bit13            : 1;
		uint32_t set_enable_bit14            : 1;
		uint32_t set_enable_bit15            : 1;
		uint32_t set_enable_bit16            : 1;
		uint32_t set_enable_bit17            : 1;
		uint32_t set_enable_bit18            : 1;
		uint32_t set_enable_bit19            : 1;
		uint32_t set_enable_bit20            : 1;
		uint32_t set_enable_bit21            : 1;
		uint32_t set_enable_bit22            : 1;
		uint32_t set_enable_bit23            : 1;
		uint32_t set_enable_bit24            : 1;
		uint32_t set_enable_bit25            : 1;
		uint32_t set_enable_bit26            : 1;
		uint32_t set_enable_bit27            : 1;
		uint32_t set_enable_bit28            : 1;
		uint32_t set_enable_bit29            : 1;
		uint32_t set_enable_bit30            : 1;
		uint32_t set_enable_bit31            : 1;
	} s;
	/* struct ody_gicda_isenablerx_s cn; */
};
typedef union ody_gicda_isenablerx ody_gicda_isenablerx_t;

static inline uint64_t ODY_GICDA_ISENABLERX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICDA_ISENABLERX(uint64_t a)
{
	if ((a >= 1) && (a <= 16))
		return 0x801001500100ll + 4ll * ((a) & 0x1f);
	__ody_csr_fatal("GICDA_ISENABLERX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GICDA_ISENABLERX(a) ody_gicda_isenablerx_t
#define bustype_ODY_GICDA_ISENABLERX(a) CSR_TYPE_NCB32b
#define basename_ODY_GICDA_ISENABLERX(a) "GICDA_ISENABLERX"
#define busnum_ODY_GICDA_ISENABLERX(a) (a)
#define arguments_ODY_GICDA_ISENABLERX(a) (a), -1, -1, -1

/**
 * Register (NCB32b) gicda_iserrr#
 *
 * GICDA Iserrr Register
 * The GICDA_ISERRR1 characteristics are:
 *
 * * Purpose
 *
 * These registers can set the error status of an SPI or return the error status of an
 * SPI for interrupts 16 to 31.
 *
 * * Usage constraints
 * This register is Secure access only
 *
 * For interrupt ID m, when DIV and MOD are the integer division and modulo operations:
 *
 * * The corresponding GICD(A)_ISERRR number, n, is given by n = m DIV 16.
 * * The offset of the required ISERRR register is (0xE200 + (4*n)).
 *
 * * Configurations
 * Accessing registers where n is greater than 2*(GICD(A)_TYPER.ITLinesNumber+1) may
 * result in an error being logged. (See GICD_ERR0CTLR for details).
 */
union ody_gicda_iserrrx {
	uint32_t u;
	struct ody_gicda_iserrrx_s {
		uint32_t status0                     : 1;
		uint32_t status1                     : 1;
		uint32_t status2                     : 1;
		uint32_t status3                     : 1;
		uint32_t status4                     : 1;
		uint32_t status5                     : 1;
		uint32_t status6                     : 1;
		uint32_t status7                     : 1;
		uint32_t status8                     : 1;
		uint32_t status9                     : 1;
		uint32_t status10                    : 1;
		uint32_t status11                    : 1;
		uint32_t status12                    : 1;
		uint32_t status13                    : 1;
		uint32_t status14                    : 1;
		uint32_t status15                    : 1;
		uint32_t status16                    : 1;
		uint32_t status17                    : 1;
		uint32_t status18                    : 1;
		uint32_t status19                    : 1;
		uint32_t status20                    : 1;
		uint32_t status21                    : 1;
		uint32_t status22                    : 1;
		uint32_t status23                    : 1;
		uint32_t status24                    : 1;
		uint32_t status25                    : 1;
		uint32_t status26                    : 1;
		uint32_t status27                    : 1;
		uint32_t status28                    : 1;
		uint32_t status29                    : 1;
		uint32_t status30                    : 1;
		uint32_t status31                    : 1;
	} s;
	/* struct ody_gicda_iserrrx_s cn; */
};
typedef union ody_gicda_iserrrx ody_gicda_iserrrx_t;

static inline uint64_t ODY_GICDA_ISERRRX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICDA_ISERRRX(uint64_t a)
{
	if ((a >= 1) && (a <= 16))
		return 0x80100150e200ll + 4ll * ((a) & 0x1f);
	__ody_csr_fatal("GICDA_ISERRRX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GICDA_ISERRRX(a) ody_gicda_iserrrx_t
#define bustype_ODY_GICDA_ISERRRX(a) CSR_TYPE_NCB32b
#define basename_ODY_GICDA_ISERRRX(a) "GICDA_ISERRRX"
#define busnum_ODY_GICDA_ISERRRX(a) (a)
#define arguments_ODY_GICDA_ISERRRX(a) (a), -1, -1, -1

/**
 * Register (NCB32b) gicda_ispendr#
 *
 * GICDA Ispendr Register
 * The GICDA_ISPENDR1 characteristics are:
 *
 * * Purpose
 * Adds the pending state to the corresponding interrupt for interrupts 32 to 63.
 *
 * * Usage constraints
 * For INTID m, when DIV and MOD are the integer division and modulo operations:
 *
 * * The corresponding GICD(A)_ISPENDR number, n, is given by n = m DIV 32.
 * * The offset of the required ISPENDR is (0x200 + (4*n)).
 * * The bit number of the required group modifier bit in this register is m MOD 32.
 *
 * If GICD(A)_CTLR.DS==0, unless the GICD(A)_NSACR registers permit Non-secure software
 * to control Group 0 and Secure Group 1 interrupts, any bits that correspond to Group
 * 0 or Secure Group 1 interrupts are accessible only by Secure accesses and are RAZ/WI
 * to Non-secure accesses.
 *
 * * Configurations
 * Accessing registers where n is greater than (GICD(A)_TYPER.ITLinesNumber+1) may
 * result in an error being logged. (See GICD_ERR0CTLR for details).
 */
union ody_gicda_ispendrx {
	uint32_t u;
	struct ody_gicda_ispendrx_s {
		uint32_t set_pending_bit0            : 1;
		uint32_t set_pending_bit1            : 1;
		uint32_t set_pending_bit2            : 1;
		uint32_t set_pending_bit3            : 1;
		uint32_t set_pending_bit4            : 1;
		uint32_t set_pending_bit5            : 1;
		uint32_t set_pending_bit6            : 1;
		uint32_t set_pending_bit7            : 1;
		uint32_t set_pending_bit8            : 1;
		uint32_t set_pending_bit9            : 1;
		uint32_t set_pending_bit10           : 1;
		uint32_t set_pending_bit11           : 1;
		uint32_t set_pending_bit12           : 1;
		uint32_t set_pending_bit13           : 1;
		uint32_t set_pending_bit14           : 1;
		uint32_t set_pending_bit15           : 1;
		uint32_t set_pending_bit16           : 1;
		uint32_t set_pending_bit17           : 1;
		uint32_t set_pending_bit18           : 1;
		uint32_t set_pending_bit19           : 1;
		uint32_t set_pending_bit20           : 1;
		uint32_t set_pending_bit21           : 1;
		uint32_t set_pending_bit22           : 1;
		uint32_t set_pending_bit23           : 1;
		uint32_t set_pending_bit24           : 1;
		uint32_t set_pending_bit25           : 1;
		uint32_t set_pending_bit26           : 1;
		uint32_t set_pending_bit27           : 1;
		uint32_t set_pending_bit28           : 1;
		uint32_t set_pending_bit29           : 1;
		uint32_t set_pending_bit30           : 1;
		uint32_t set_pending_bit31           : 1;
	} s;
	/* struct ody_gicda_ispendrx_s cn; */
};
typedef union ody_gicda_ispendrx ody_gicda_ispendrx_t;

static inline uint64_t ODY_GICDA_ISPENDRX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICDA_ISPENDRX(uint64_t a)
{
	if ((a >= 1) && (a <= 16))
		return 0x801001500200ll + 4ll * ((a) & 0x1f);
	__ody_csr_fatal("GICDA_ISPENDRX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GICDA_ISPENDRX(a) ody_gicda_ispendrx_t
#define bustype_ODY_GICDA_ISPENDRX(a) CSR_TYPE_NCB32b
#define basename_ODY_GICDA_ISPENDRX(a) "GICDA_ISPENDRX"
#define busnum_ODY_GICDA_ISPENDRX(a) (a)
#define arguments_ODY_GICDA_ISPENDRX(a) (a), -1, -1, -1

/**
 * Register (NCB32b) gicda_nsacr#
 *
 * GICDA Nsacr Register
 * The GICDA_NSACR2 characteristics are:
 *
 * * Purpose
 * Enables Secure software to permit Non-secure software on a particular PE to create
 * and control Group 0 interrupts for interrupts 32 to 47.
 *
 * * Usage constraints
 * For interrupt ID m, when DIV and MOD are the integer division and modulo operations:
 *
 * * The corresponding GICD(A)_NSACR number, n, is given by n = m DIV 16.
 * * The offset of the required NSACR register is (0xE00 + (4*n)).
 *
 * When GICD(A)_CTLR.DS==1, this register is RAZ/WI.
 * These registers are Secure, and are RAZ/WI to Non-secure accesses.
 *
 * * Configurations
 * These registers are available in all GIC configurations.
 *
 * Accessing registers where n is greater than 2*(GICD(A)_TYPER.ITLinesNumber+1) may
 * result in an error being logged. (See GICD_ERR0CTLR for details).
 */
union ody_gicda_nsacrx {
	uint32_t u;
	struct ody_gicda_nsacrx_s {
		uint32_t ns_access0                  : 2;
		uint32_t ns_access1                  : 2;
		uint32_t ns_access2                  : 2;
		uint32_t ns_access3                  : 2;
		uint32_t ns_access4                  : 2;
		uint32_t ns_access5                  : 2;
		uint32_t ns_access6                  : 2;
		uint32_t ns_access7                  : 2;
		uint32_t ns_access8                  : 2;
		uint32_t ns_access9                  : 2;
		uint32_t ns_access10                 : 2;
		uint32_t ns_access11                 : 2;
		uint32_t ns_access12                 : 2;
		uint32_t ns_access13                 : 2;
		uint32_t ns_access14                 : 2;
		uint32_t ns_access15                 : 2;
	} s;
	/* struct ody_gicda_nsacrx_s cn; */
};
typedef union ody_gicda_nsacrx ody_gicda_nsacrx_t;

static inline uint64_t ODY_GICDA_NSACRX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICDA_NSACRX(uint64_t a)
{
	if ((a >= 2) && (a <= 33))
		return 0x801001500e00ll + 4ll * ((a) & 0x3f);
	__ody_csr_fatal("GICDA_NSACRX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GICDA_NSACRX(a) ody_gicda_nsacrx_t
#define bustype_ODY_GICDA_NSACRX(a) CSR_TYPE_NCB32b
#define basename_ODY_GICDA_NSACRX(a) "GICDA_NSACRX"
#define busnum_ODY_GICDA_NSACRX(a) (a)
#define arguments_ODY_GICDA_NSACRX(a) (a), -1, -1, -1

/**
 * Register (NCB32b) gicda_pidr0
 *
 * GICDA Pidr0 Register
 * The GICDA_PIDR0 characteristics are:
 *
 * * Purpose
 * This register returns byte[0] of the peripheral ID of the GIC Distributor page.
 *
 * * Usage constraints
 * There are no usage constraints.
 */
union ody_gicda_pidr0 {
	uint32_t u;
	struct ody_gicda_pidr0_s {
		uint32_t part_0                      : 8;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_gicda_pidr0_s cn; */
};
typedef union ody_gicda_pidr0 ody_gicda_pidr0_t;

#define ODY_GICDA_PIDR0 ODY_GICDA_PIDR0_FUNC()
static inline uint64_t ODY_GICDA_PIDR0_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICDA_PIDR0_FUNC(void)
{
	return 0x80100150ffe0ll;
}

#define typedef_ODY_GICDA_PIDR0 ody_gicda_pidr0_t
#define bustype_ODY_GICDA_PIDR0 CSR_TYPE_NCB32b
#define basename_ODY_GICDA_PIDR0 "GICDA_PIDR0"
#define busnum_ODY_GICDA_PIDR0 0
#define arguments_ODY_GICDA_PIDR0 -1, -1, -1, -1

/**
 * Register (NCB32b) gicda_pidr1
 *
 * GICDA Pidr1 Register
 * The GICDA_PIDR1 characteristics are:
 *
 * * Purpose
 * This register returns byte[1] of the peripheral ID of the GIC Distributor page.
 *
 * * Usage constraints
 * There are no usage constraints.
 */
union ody_gicda_pidr1 {
	uint32_t u;
	struct ody_gicda_pidr1_s {
		uint32_t part_1                      : 4;
		uint32_t des_0                       : 4;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_gicda_pidr1_s cn; */
};
typedef union ody_gicda_pidr1 ody_gicda_pidr1_t;

#define ODY_GICDA_PIDR1 ODY_GICDA_PIDR1_FUNC()
static inline uint64_t ODY_GICDA_PIDR1_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICDA_PIDR1_FUNC(void)
{
	return 0x80100150ffe4ll;
}

#define typedef_ODY_GICDA_PIDR1 ody_gicda_pidr1_t
#define bustype_ODY_GICDA_PIDR1 CSR_TYPE_NCB32b
#define basename_ODY_GICDA_PIDR1 "GICDA_PIDR1"
#define busnum_ODY_GICDA_PIDR1 0
#define arguments_ODY_GICDA_PIDR1 -1, -1, -1, -1

/**
 * Register (NCB32b) gicda_pidr2
 *
 * GICDA Pidr2 Register
 * The GICDA_PIDR2 characteristics are:
 *
 * * Purpose
 * This register returns byte[2] of the peripheral ID of the GIC Distributor page.
 *
 * * Usage constraints
 * There are no usage constraints.
 */
union ody_gicda_pidr2 {
	uint32_t u;
	struct ody_gicda_pidr2_s {
		uint32_t des_1                       : 3;
		uint32_t jedec                       : 1;
		uint32_t revision                    : 4;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_gicda_pidr2_s cn; */
};
typedef union ody_gicda_pidr2 ody_gicda_pidr2_t;

#define ODY_GICDA_PIDR2 ODY_GICDA_PIDR2_FUNC()
static inline uint64_t ODY_GICDA_PIDR2_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICDA_PIDR2_FUNC(void)
{
	return 0x80100150ffe8ll;
}

#define typedef_ODY_GICDA_PIDR2 ody_gicda_pidr2_t
#define bustype_ODY_GICDA_PIDR2 CSR_TYPE_NCB32b
#define basename_ODY_GICDA_PIDR2 "GICDA_PIDR2"
#define busnum_ODY_GICDA_PIDR2 0
#define arguments_ODY_GICDA_PIDR2 -1, -1, -1, -1

/**
 * Register (NCB32b) gicda_pidr3
 *
 * GICDA Pidr3 Register
 * The GICDA_PIDR3 characteristics are:
 *
 * * Purpose
 * This register returns byte[3] of the peripheral ID of the GIC Distributor page.
 *
 * * Usage constraints
 * There are no usage constraints.
 */
union ody_gicda_pidr3 {
	uint32_t u;
	struct ody_gicda_pidr3_s {
		uint32_t cmod                        : 3;
		uint32_t reserved_3                  : 1;
		uint32_t revand                      : 4;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_gicda_pidr3_s cn; */
};
typedef union ody_gicda_pidr3 ody_gicda_pidr3_t;

#define ODY_GICDA_PIDR3 ODY_GICDA_PIDR3_FUNC()
static inline uint64_t ODY_GICDA_PIDR3_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICDA_PIDR3_FUNC(void)
{
	return 0x80100150ffecll;
}

#define typedef_ODY_GICDA_PIDR3 ody_gicda_pidr3_t
#define bustype_ODY_GICDA_PIDR3 CSR_TYPE_NCB32b
#define basename_ODY_GICDA_PIDR3 "GICDA_PIDR3"
#define busnum_ODY_GICDA_PIDR3 0
#define arguments_ODY_GICDA_PIDR3 -1, -1, -1, -1

/**
 * Register (NCB32b) gicda_pidr4
 *
 * GICDA Pidr4 Register
 * The GICDA_PIDR4 characteristics are:
 *
 * * Purpose
 * This register returns byte[4] of the peripheral ID of the GIC Distributor page.
 *
 * * Usage constraints
 * There are no usage constraints.
 */
union ody_gicda_pidr4 {
	uint32_t u;
	struct ody_gicda_pidr4_s {
		uint32_t des_2                       : 4;
		uint32_t size                        : 4;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_gicda_pidr4_s cn; */
};
typedef union ody_gicda_pidr4 ody_gicda_pidr4_t;

#define ODY_GICDA_PIDR4 ODY_GICDA_PIDR4_FUNC()
static inline uint64_t ODY_GICDA_PIDR4_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICDA_PIDR4_FUNC(void)
{
	return 0x80100150ffd0ll;
}

#define typedef_ODY_GICDA_PIDR4 ody_gicda_pidr4_t
#define bustype_ODY_GICDA_PIDR4 CSR_TYPE_NCB32b
#define basename_ODY_GICDA_PIDR4 "GICDA_PIDR4"
#define busnum_ODY_GICDA_PIDR4 0
#define arguments_ODY_GICDA_PIDR4 -1, -1, -1, -1

/**
 * Register (NCB32b) gicda_pidr5
 *
 * GICDA Pidr5 Register
 * The GICDA_PIDR5 characteristics are:
 *
 * * Purpose
 * This register returns byte[5] of the peripheral ID of the GIC Distributor page.
 *
 * * Usage constraints
 * There are no usage constraints.
 */
union ody_gicda_pidr5 {
	uint32_t u;
	struct ody_gicda_pidr5_s {
		uint32_t reserved_0_31               : 32;
	} s;
	struct ody_gicda_pidr5_cn {
		uint32_t reserved_0_7                : 8;
		uint32_t reserved_8_31               : 24;
	} cn;
};
typedef union ody_gicda_pidr5 ody_gicda_pidr5_t;

#define ODY_GICDA_PIDR5 ODY_GICDA_PIDR5_FUNC()
static inline uint64_t ODY_GICDA_PIDR5_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICDA_PIDR5_FUNC(void)
{
	return 0x80100150ffd4ll;
}

#define typedef_ODY_GICDA_PIDR5 ody_gicda_pidr5_t
#define bustype_ODY_GICDA_PIDR5 CSR_TYPE_NCB32b
#define basename_ODY_GICDA_PIDR5 "GICDA_PIDR5"
#define busnum_ODY_GICDA_PIDR5 0
#define arguments_ODY_GICDA_PIDR5 -1, -1, -1, -1

/**
 * Register (NCB32b) gicda_pidr6
 *
 * GICDA Pidr6 Register
 * The GICDA_PIDR6 characteristics are:
 *
 * * Purpose
 * This register returns byte[6] of the peripheral ID of the GIC Distributor page.
 *
 * * Usage constraints
 * There are no usage constraints.
 */
union ody_gicda_pidr6 {
	uint32_t u;
	struct ody_gicda_pidr6_s {
		uint32_t reserved_0_31               : 32;
	} s;
	struct ody_gicda_pidr6_cn {
		uint32_t reserved_0_7                : 8;
		uint32_t reserved_8_31               : 24;
	} cn;
};
typedef union ody_gicda_pidr6 ody_gicda_pidr6_t;

#define ODY_GICDA_PIDR6 ODY_GICDA_PIDR6_FUNC()
static inline uint64_t ODY_GICDA_PIDR6_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICDA_PIDR6_FUNC(void)
{
	return 0x80100150ffd8ll;
}

#define typedef_ODY_GICDA_PIDR6 ody_gicda_pidr6_t
#define bustype_ODY_GICDA_PIDR6 CSR_TYPE_NCB32b
#define basename_ODY_GICDA_PIDR6 "GICDA_PIDR6"
#define busnum_ODY_GICDA_PIDR6 0
#define arguments_ODY_GICDA_PIDR6 -1, -1, -1, -1

/**
 * Register (NCB32b) gicda_pidr7
 *
 * GICDA Pidr7 Register
 * The GICDA_PIDR7 characteristics are:
 *
 * * Purpose
 * This register returns byte[7] of the peripheral ID of the GIC Distributor page.
 *
 * * Usage constraints
 * There are no usage constraints.
 */
union ody_gicda_pidr7 {
	uint32_t u;
	struct ody_gicda_pidr7_s {
		uint32_t reserved_0_31               : 32;
	} s;
	struct ody_gicda_pidr7_cn {
		uint32_t reserved_0_7                : 8;
		uint32_t reserved_8_31               : 24;
	} cn;
};
typedef union ody_gicda_pidr7 ody_gicda_pidr7_t;

#define ODY_GICDA_PIDR7 ODY_GICDA_PIDR7_FUNC()
static inline uint64_t ODY_GICDA_PIDR7_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICDA_PIDR7_FUNC(void)
{
	return 0x80100150ffdcll;
}

#define typedef_ODY_GICDA_PIDR7 ody_gicda_pidr7_t
#define bustype_ODY_GICDA_PIDR7 CSR_TYPE_NCB32b
#define basename_ODY_GICDA_PIDR7 "GICDA_PIDR7"
#define busnum_ODY_GICDA_PIDR7 0
#define arguments_ODY_GICDA_PIDR7 -1, -1, -1, -1

/**
 * Register (NCB32b) gicda_sac
 *
 * GICDA Sac Register
 * The GICDA_SAC characteristics are:
 *
 * * Purpose
 * This register allows Secure software to control Non-secure access to GIC-700 Secure
 * features by other software.
 *
 * * Usage constraints
 * Only accessible by Secure accesses or when GICD(A)_CTLR.DS == 1.
 */
union ody_gicda_sac {
	uint32_t u;
	struct ody_gicda_sac_s {
		uint32_t reserved_0                  : 1;
		uint32_t gictns                      : 1;
		uint32_t gicpns                      : 1;
		uint32_t reserved_3_31               : 29;
	} s;
	/* struct ody_gicda_sac_s cn; */
};
typedef union ody_gicda_sac ody_gicda_sac_t;

#define ODY_GICDA_SAC ODY_GICDA_SAC_FUNC()
static inline uint64_t ODY_GICDA_SAC_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICDA_SAC_FUNC(void)
{
	return 0x801001500024ll;
}

#define typedef_ODY_GICDA_SAC ody_gicda_sac_t
#define bustype_ODY_GICDA_SAC CSR_TYPE_NCB32b
#define basename_ODY_GICDA_SAC "GICDA_SAC"
#define busnum_ODY_GICDA_SAC 0
#define arguments_ODY_GICDA_SAC -1, -1, -1, -1

/**
 * Register (NCB32b) gicda_setspi_nsr
 *
 * GICDA Setspi Nsr Register
 * The GICDA_SETSPI_NSR characteristics are:
 *
 * * Purpose
 * Adds the pending state to a valid SPI if permitted by the Security state of the
 * access and the GICD(A)_NSACR value for that SPI.
 * A write to this register changes the state of an inactive SPI to pending, and the
 * state of an active SPI to active and pending.
 *
 * * Usage constraints
 * The function of this register depends on whether the targeted SPI is configured to
 * be an edge-triggered or level-sensitive interrupt:
 *
 * * For an edge-triggered interrupt, a write to GICx_SETSPI_NSR or GICx_SETSPI_SR adds
 * the pending state to the targeted interrupt. It will stop being pending on
 * activation, or if the pending state is removed by a write to GICD(A)_CLRSPI_NSR,
 * GICx_CLRSPI_SR, or GICD(A)_ICPENDR.
 * * For a level-sensitive interrupt, a write to GICx_SETSPI_NSR or GICx_SETSPI_SR adds
 * the pending state to the targeted interrupt. It will remain pending until it is
 * deasserted by a write to GICD(A)_CLRSPI_NSR or GICx_CLRSPI_SR. If the interrupt is
 * activated between having the pending state added and being deactivated, then the
 * interrupt will be active and pending.
 *
 * Writes to this register have no effect if:
 *
 * * The value written specifies a Secure SPI, the value is written by a Non-secure
 * access, and the value of the corresponding GICD(A)_NSACR register is 0.
 * * The value written specifies an invalid SPI.
 * * The SPI is already pending.
 *
 * * Configurations
 * When GICD(A)_CTLR.DS==1, this register provides functionality for all SPIs.
 */
union ody_gicda_setspi_nsr {
	uint32_t u;
	struct ody_gicda_setspi_nsr_s {
		uint32_t id                          : 16;
		uint32_t reserved_16_31              : 16;
	} s;
	/* struct ody_gicda_setspi_nsr_s cn; */
};
typedef union ody_gicda_setspi_nsr ody_gicda_setspi_nsr_t;

#define ODY_GICDA_SETSPI_NSR ODY_GICDA_SETSPI_NSR_FUNC()
static inline uint64_t ODY_GICDA_SETSPI_NSR_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICDA_SETSPI_NSR_FUNC(void)
{
	return 0x801001500040ll;
}

#define typedef_ODY_GICDA_SETSPI_NSR ody_gicda_setspi_nsr_t
#define bustype_ODY_GICDA_SETSPI_NSR CSR_TYPE_NCB32b
#define basename_ODY_GICDA_SETSPI_NSR "GICDA_SETSPI_NSR"
#define busnum_ODY_GICDA_SETSPI_NSR 0
#define arguments_ODY_GICDA_SETSPI_NSR -1, -1, -1, -1

/**
 * Register (NCB32b) gicda_setspi_sr
 *
 * GICDA Setspi Sr Register
 * The GICDA_SETSPI_SR characteristics are:
 *
 * * Purpose
 * Adds the pending state to a valid SPI.
 * A write to this register changes the state of an inactive SPI to pending, and the
 * state of an active SPI to active and pending.
 *
 * * Usage constraints
 * The function of this register depends on whether the targeted SPI is configured to
 * be an edge-triggered or level-sensitive interrupt:
 *
 * * For an edge-triggered interrupt, a write to GICx_SETSPI_NSR or GICx_SETSPI_SR adds
 * the pending state to the targeted interrupt. It will stop being pending on
 * activation, or if the pending state is removed by a write to GICD(A)_CLRSPI_NSR,
 * GICx_CLRSPI_SR, or GICD(A)_ICPENDR.
 * * For a level-sensitive interrupt, a write to GICx_SETSPI_NSR or GICx_SETSPI_SR adds
 * the pending state to the targeted interrupt. It will remain pending until it is
 * deasserted by a write to GICD(A)_CLRSPI_NSR or GICx_CLRSPI_SR. If the interrupt is
 * activated between having the pending state added and being deactivated, then the
 * interrupt will be active and pending.
 *
 * Writes to this register have no effect if:
 *
 * * The value is written by a Non-secure access.
 * * The value written specifies an invalid SPI.
 * * The SPI is already pending.
 *
 * * Configurations
 * When GICD(A)_CTLR.DS==1, this register is WI.
 * When GICD(A)_CTLR.DS==0, only secure-access.
 */
union ody_gicda_setspi_sr {
	uint32_t u;
	struct ody_gicda_setspi_sr_s {
		uint32_t id                          : 16;
		uint32_t reserved_16_31              : 16;
	} s;
	/* struct ody_gicda_setspi_sr_s cn; */
};
typedef union ody_gicda_setspi_sr ody_gicda_setspi_sr_t;

#define ODY_GICDA_SETSPI_SR ODY_GICDA_SETSPI_SR_FUNC()
static inline uint64_t ODY_GICDA_SETSPI_SR_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICDA_SETSPI_SR_FUNC(void)
{
	return 0x801001500050ll;
}

#define typedef_ODY_GICDA_SETSPI_SR ody_gicda_setspi_sr_t
#define bustype_ODY_GICDA_SETSPI_SR CSR_TYPE_NCB32b
#define basename_ODY_GICDA_SETSPI_SR "GICDA_SETSPI_SR"
#define busnum_ODY_GICDA_SETSPI_SR 0
#define arguments_ODY_GICDA_SETSPI_SR -1, -1, -1, -1

/**
 * Register (NCB32b) gicda_statusr
 *
 * GICDA Statusr Register
 * The GICDA_STATUS characteristics are:
 *
 * * Purpose
 * This register is not used.
 *
 * See the GICT register page for details of error reporting by the GIC
 *
 * * Usage constraints
 * There are no usage constraints.
 *
 * * Configurations
 * This register is RES0 in all GIC configurations.
 */
union ody_gicda_statusr {
	uint32_t u;
	struct ody_gicda_statusr_s {
		uint32_t reserved_0_31               : 32;
	} s;
	/* struct ody_gicda_statusr_s cn; */
};
typedef union ody_gicda_statusr ody_gicda_statusr_t;

#define ODY_GICDA_STATUSR ODY_GICDA_STATUSR_FUNC()
static inline uint64_t ODY_GICDA_STATUSR_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICDA_STATUSR_FUNC(void)
{
	return 0x801001500010ll;
}

#define typedef_ODY_GICDA_STATUSR ody_gicda_statusr_t
#define bustype_ODY_GICDA_STATUSR CSR_TYPE_NCB32b
#define basename_ODY_GICDA_STATUSR "GICDA_STATUSR"
#define busnum_ODY_GICDA_STATUSR 0
#define arguments_ODY_GICDA_STATUSR -1, -1, -1, -1

/**
 * Register (NCB32b) gicda_typer
 *
 * GICDA Typer Register
 * The GICDA_TYPER characteristics are:
 *
 * * Purpose
 * Provides information about what features the GIC implementation supports. It indicates:
 *
 * * Whether the GIC implementation supports two Security states.
 * * The maximum number of INTIDs that the GIC implementation supports.
 * * The number of PEs that can be used as interrupt targets.
 *
 * * Usage constraints
 * There are no usage constraints.
 */
union ody_gicda_typer {
	uint32_t u;
	struct ody_gicda_typer_s {
		uint32_t itlinesnumber               : 5;
		uint32_t cpunumber                   : 3;
		uint32_t espi                        : 1;
		uint32_t reserved_9                  : 1;
		uint32_t securityextn                : 1;
		uint32_t lspi                        : 5;
		uint32_t mbis                        : 1;
		uint32_t lpis                        : 1;
		uint32_t dvis                        : 1;
		uint32_t idbits                      : 5;
		uint32_t a3v                         : 1;
		uint32_t no1n                        : 1;
		uint32_t rss                         : 1;
		uint32_t espi_range                  : 5;
	} s;
	/* struct ody_gicda_typer_s cn; */
};
typedef union ody_gicda_typer ody_gicda_typer_t;

#define ODY_GICDA_TYPER ODY_GICDA_TYPER_FUNC()
static inline uint64_t ODY_GICDA_TYPER_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICDA_TYPER_FUNC(void)
{
	return 0x801001500004ll;
}

#define typedef_ODY_GICDA_TYPER ody_gicda_typer_t
#define bustype_ODY_GICDA_TYPER CSR_TYPE_NCB32b
#define basename_ODY_GICDA_TYPER "GICDA_TYPER"
#define busnum_ODY_GICDA_TYPER 0
#define arguments_ODY_GICDA_TYPER -1, -1, -1, -1

/**
 * Register (NCB32b) gicda_typer2
 *
 * GICDA Typer2 Register
 * The GICDA_TYPER2 characteristics are:
 *
 * * Purpose
 * Provides information about which features the GIC implementation supports.
 *
 * * Usage constraints
 * There are no usage constraints.
 */
union ody_gicda_typer2 {
	uint32_t u;
	struct ody_gicda_typer2_s {
		uint32_t vid                         : 5;
		uint32_t reserved_5_6                : 2;
		uint32_t vil                         : 1;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_gicda_typer2_s cn; */
};
typedef union ody_gicda_typer2 ody_gicda_typer2_t;

#define ODY_GICDA_TYPER2 ODY_GICDA_TYPER2_FUNC()
static inline uint64_t ODY_GICDA_TYPER2_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICDA_TYPER2_FUNC(void)
{
	return 0x80100150000cll;
}

#define typedef_ODY_GICDA_TYPER2 ody_gicda_typer2_t
#define bustype_ODY_GICDA_TYPER2 CSR_TYPE_NCB32b
#define basename_ODY_GICDA_TYPER2 "GICDA_TYPER2"
#define busnum_ODY_GICDA_TYPER2 0
#define arguments_ODY_GICDA_TYPER2 -1, -1, -1, -1

/**
 * Register (NCB32b) gicda_utilr
 *
 * GICDA Utilr Register
 * The GICDA_UTILR characteristics are:
 *
 * * Purpose
 *
 * This register controls the utilization engine in the LPI caches.
 *
 * * Usage constraints
 * There are no usage constraints.
 *
 * This register is RES0.
 */
union ody_gicda_utilr {
	uint32_t u;
	struct ody_gicda_utilr_s {
		uint32_t uedu                        : 4;
		uint32_t reserved_4_12               : 9;
		uint32_t ueda                        : 1;
		uint32_t uede                        : 1;
		uint32_t uedt                        : 1;
		uint32_t ueou                        : 4;
		uint32_t reserved_20_28              : 9;
		uint32_t ueoa                        : 1;
		uint32_t ueoe                        : 1;
		uint32_t ueot                        : 1;
	} s;
	/* struct ody_gicda_utilr_s cn; */
};
typedef union ody_gicda_utilr ody_gicda_utilr_t;

#define ODY_GICDA_UTILR ODY_GICDA_UTILR_FUNC()
static inline uint64_t ODY_GICDA_UTILR_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICDA_UTILR_FUNC(void)
{
	return 0x801001500034ll;
}

#define typedef_ODY_GICDA_UTILR ody_gicda_utilr_t
#define bustype_ODY_GICDA_UTILR CSR_TYPE_NCB32b
#define basename_ODY_GICDA_UTILR "GICDA_UTILR"
#define busnum_ODY_GICDA_UTILR 0
#define arguments_ODY_GICDA_UTILR -1, -1, -1, -1

/**
 * Register (NCB32b) gicp_capr
 *
 * GICP Capr Register
 * The GICP_CAPR characteristics are:
 *
 * * Purpose
 * This register controls the counter shadow value capture mechanism.
 *
 * * Usage constraints
 * If GICD(A)_SAC.GICPNS == 0, then only Secure software can access this register.
 */
union ody_gicp_capr {
	uint32_t u;
	struct ody_gicp_capr_s {
		uint32_t capture                     : 1;
		uint32_t reserved_1_31               : 31;
	} s;
	/* struct ody_gicp_capr_s cn; */
};
typedef union ody_gicp_capr ody_gicp_capr_t;

#define ODY_GICP_CAPR ODY_GICP_CAPR_FUNC()
static inline uint64_t ODY_GICP_CAPR_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICP_CAPR_FUNC(void)
{
	return 0x801000030d88ll;
}

#define typedef_ODY_GICP_CAPR ody_gicp_capr_t
#define bustype_ODY_GICP_CAPR CSR_TYPE_NCB32b
#define basename_ODY_GICP_CAPR "GICP_CAPR"
#define device_bar_ODY_GICP_CAPR 0x0 /* PF_BAR0 */
#define busnum_ODY_GICP_CAPR 0
#define arguments_ODY_GICP_CAPR -1, -1, -1, -1

/**
 * Register (NCB32b) gicp_cfgr
 *
 * GICP Cfgr Register
 * The GICP_CFGR characteristics are:
 *
 * * Purpose
 * This register returns information about the PMU implementation.
 *
 * * Usage constraints
 * If GICD(A)_SAC.GICPNS == 0, then only Secure software can access this register.
 */
union ody_gicp_cfgr {
	uint32_t u;
	struct ody_gicp_cfgr_s {
		uint32_t nctr                        : 6;
		uint32_t reserved_6_7                : 2;
		uint32_t size                        : 6;
		uint32_t reserved_14_21              : 8;
		uint32_t capture                     : 1;
		uint32_t reserved_23_31              : 9;
	} s;
	/* struct ody_gicp_cfgr_s cn; */
};
typedef union ody_gicp_cfgr ody_gicp_cfgr_t;

#define ODY_GICP_CFGR ODY_GICP_CFGR_FUNC()
static inline uint64_t ODY_GICP_CFGR_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICP_CFGR_FUNC(void)
{
	return 0x801000030e00ll;
}

#define typedef_ODY_GICP_CFGR ody_gicp_cfgr_t
#define bustype_ODY_GICP_CFGR CSR_TYPE_NCB32b
#define basename_ODY_GICP_CFGR "GICP_CFGR"
#define device_bar_ODY_GICP_CFGR 0x0 /* PF_BAR0 */
#define busnum_ODY_GICP_CFGR 0
#define arguments_ODY_GICP_CFGR -1, -1, -1, -1

/**
 * Register (NCB32b) gicp_cidr0
 *
 * GICP Cidr0 Register
 * The GICP_CIDR0 characteristics are:
 *
 * * Purpose
 * This register is one of the Component Identification Registers and returns the first
 * part of the Preamble.
 *
 * * Usage constraints
 * There are no usage constraints.
 */
union ody_gicp_cidr0 {
	uint32_t u;
	struct ody_gicp_cidr0_s {
		uint32_t prmbl_0                     : 8;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_gicp_cidr0_s cn; */
};
typedef union ody_gicp_cidr0 ody_gicp_cidr0_t;

#define ODY_GICP_CIDR0 ODY_GICP_CIDR0_FUNC()
static inline uint64_t ODY_GICP_CIDR0_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICP_CIDR0_FUNC(void)
{
	return 0x801000030ff0ll;
}

#define typedef_ODY_GICP_CIDR0 ody_gicp_cidr0_t
#define bustype_ODY_GICP_CIDR0 CSR_TYPE_NCB32b
#define basename_ODY_GICP_CIDR0 "GICP_CIDR0"
#define device_bar_ODY_GICP_CIDR0 0x0 /* PF_BAR0 */
#define busnum_ODY_GICP_CIDR0 0
#define arguments_ODY_GICP_CIDR0 -1, -1, -1, -1

/**
 * Register (NCB32b) gicp_cidr1
 *
 * GICP Cidr1 Register
 * The GICP_CIDR1 characteristics are:
 *
 * * Purpose
 * This register is one of the Component Identification Registers and returns the
 * second part of the Preamble as well as the Component Class.
 *
 * * Usage constraints
 * There are no usage constraints.
 */
union ody_gicp_cidr1 {
	uint32_t u;
	struct ody_gicp_cidr1_s {
		uint32_t prmbl_1                     : 4;
		uint32_t class_f                     : 4;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_gicp_cidr1_s cn; */
};
typedef union ody_gicp_cidr1 ody_gicp_cidr1_t;

#define ODY_GICP_CIDR1 ODY_GICP_CIDR1_FUNC()
static inline uint64_t ODY_GICP_CIDR1_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICP_CIDR1_FUNC(void)
{
	return 0x801000030ff4ll;
}

#define typedef_ODY_GICP_CIDR1 ody_gicp_cidr1_t
#define bustype_ODY_GICP_CIDR1 CSR_TYPE_NCB32b
#define basename_ODY_GICP_CIDR1 "GICP_CIDR1"
#define device_bar_ODY_GICP_CIDR1 0x0 /* PF_BAR0 */
#define busnum_ODY_GICP_CIDR1 0
#define arguments_ODY_GICP_CIDR1 -1, -1, -1, -1

/**
 * Register (NCB32b) gicp_cidr2
 *
 * GICP Cidr2 Register
 * The GICP_CIDR2 characteristics are:
 *
 * * Purpose
 * This register is one of the Component Identification Registers and returns the third
 * part of the Preamble.
 *
 * * Usage constraints
 * There are no usage constraints.
 */
union ody_gicp_cidr2 {
	uint32_t u;
	struct ody_gicp_cidr2_s {
		uint32_t prmbl_2                     : 8;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_gicp_cidr2_s cn; */
};
typedef union ody_gicp_cidr2 ody_gicp_cidr2_t;

#define ODY_GICP_CIDR2 ODY_GICP_CIDR2_FUNC()
static inline uint64_t ODY_GICP_CIDR2_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICP_CIDR2_FUNC(void)
{
	return 0x801000030ff8ll;
}

#define typedef_ODY_GICP_CIDR2 ody_gicp_cidr2_t
#define bustype_ODY_GICP_CIDR2 CSR_TYPE_NCB32b
#define basename_ODY_GICP_CIDR2 "GICP_CIDR2"
#define device_bar_ODY_GICP_CIDR2 0x0 /* PF_BAR0 */
#define busnum_ODY_GICP_CIDR2 0
#define arguments_ODY_GICP_CIDR2 -1, -1, -1, -1

/**
 * Register (NCB32b) gicp_cidr3
 *
 * GICP Cidr3 Register
 * The GICP_CIDR3 characteristics are:
 *
 * * Purpose
 * This register is one of the Component Identification Registers and returns the
 * fourth part of the Preamble.
 *
 * * Usage constraints
 * There are no usage constraints.
 */
union ody_gicp_cidr3 {
	uint32_t u;
	struct ody_gicp_cidr3_s {
		uint32_t prmbl_3                     : 8;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_gicp_cidr3_s cn; */
};
typedef union ody_gicp_cidr3 ody_gicp_cidr3_t;

#define ODY_GICP_CIDR3 ODY_GICP_CIDR3_FUNC()
static inline uint64_t ODY_GICP_CIDR3_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICP_CIDR3_FUNC(void)
{
	return 0x801000030ffcll;
}

#define typedef_ODY_GICP_CIDR3 ody_gicp_cidr3_t
#define bustype_ODY_GICP_CIDR3 CSR_TYPE_NCB32b
#define basename_ODY_GICP_CIDR3 "GICP_CIDR3"
#define device_bar_ODY_GICP_CIDR3 0x0 /* PF_BAR0 */
#define busnum_ODY_GICP_CIDR3 0
#define arguments_ODY_GICP_CIDR3 -1, -1, -1, -1

/**
 * Register (NCB) gicp_cntenclr0
 *
 * GICP Cntenclr0 Register
 * The GICP_CNTENCLR0 characteristics are:
 *
 * * Purpose
 * This register contains the counter disables for each event counter. The GIC-700
 * supports five event counters.
 *
 * * Usage constraints
 * If GICD(A)_SAC.GICPNS == 0, then only Secure software can access this register.
 */
union ody_gicp_cntenclr0 {
	uint64_t u;
	struct ody_gicp_cntenclr0_s {
		uint64_t cnten0                      : 1;
		uint64_t cnten1                      : 1;
		uint64_t cnten2                      : 1;
		uint64_t cnten3                      : 1;
		uint64_t cnten4                      : 1;
		uint64_t reserved_5_63               : 59;
	} s;
	/* struct ody_gicp_cntenclr0_s cn; */
};
typedef union ody_gicp_cntenclr0 ody_gicp_cntenclr0_t;

#define ODY_GICP_CNTENCLR0 ODY_GICP_CNTENCLR0_FUNC()
static inline uint64_t ODY_GICP_CNTENCLR0_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICP_CNTENCLR0_FUNC(void)
{
	return 0x801000030c20ll;
}

#define typedef_ODY_GICP_CNTENCLR0 ody_gicp_cntenclr0_t
#define bustype_ODY_GICP_CNTENCLR0 CSR_TYPE_NCB
#define basename_ODY_GICP_CNTENCLR0 "GICP_CNTENCLR0"
#define device_bar_ODY_GICP_CNTENCLR0 0x0 /* PF_BAR0 */
#define busnum_ODY_GICP_CNTENCLR0 0
#define arguments_ODY_GICP_CNTENCLR0 -1, -1, -1, -1

/**
 * Register (NCB) gicp_cntenset0
 *
 * GICP Cntenset0 Register
 * The GICP_CNTENSET0 characteristics are:
 *
 * * Purpose
 * These registers contain the counter enables for each event counter. The GIC-700
 * supports five event counters.
 *
 * * Usage constraints
 * If GICD(A)_SAC.GICPNS == 0, then only Secure software can access this register.
 */
union ody_gicp_cntenset0 {
	uint64_t u;
	struct ody_gicp_cntenset0_s {
		uint64_t cnten0                      : 1;
		uint64_t cnten1                      : 1;
		uint64_t cnten2                      : 1;
		uint64_t cnten3                      : 1;
		uint64_t cnten4                      : 1;
		uint64_t reserved_5_63               : 59;
	} s;
	/* struct ody_gicp_cntenset0_s cn; */
};
typedef union ody_gicp_cntenset0 ody_gicp_cntenset0_t;

#define ODY_GICP_CNTENSET0 ODY_GICP_CNTENSET0_FUNC()
static inline uint64_t ODY_GICP_CNTENSET0_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICP_CNTENSET0_FUNC(void)
{
	return 0x801000030c00ll;
}

#define typedef_ODY_GICP_CNTENSET0 ody_gicp_cntenset0_t
#define bustype_ODY_GICP_CNTENSET0 CSR_TYPE_NCB
#define basename_ODY_GICP_CNTENSET0 "GICP_CNTENSET0"
#define device_bar_ODY_GICP_CNTENSET0 0x0 /* PF_BAR0 */
#define busnum_ODY_GICP_CNTENSET0 0
#define arguments_ODY_GICP_CNTENSET0 -1, -1, -1, -1

/**
 * Register (NCB32b) gicp_cr
 *
 * GICP Cr Register
 * The GICP_CR characteristics are:
 *
 * * Purpose
 * This register controls whether all counters are enabled or disabled.
 *
 * * Usage constraints
 * If GICD(A)_SAC.GICPNS == 0, then only Secure software can access this register.
 */
union ody_gicp_cr {
	uint32_t u;
	struct ody_gicp_cr_s {
		uint32_t e_f                         : 1;
		uint32_t reserved_1_31               : 31;
	} s;
	/* struct ody_gicp_cr_s cn; */
};
typedef union ody_gicp_cr ody_gicp_cr_t;

#define ODY_GICP_CR ODY_GICP_CR_FUNC()
static inline uint64_t ODY_GICP_CR_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICP_CR_FUNC(void)
{
	return 0x801000030e04ll;
}

#define typedef_ODY_GICP_CR ody_gicp_cr_t
#define bustype_ODY_GICP_CR CSR_TYPE_NCB32b
#define basename_ODY_GICP_CR "GICP_CR"
#define device_bar_ODY_GICP_CR 0x0 /* PF_BAR0 */
#define busnum_ODY_GICP_CR 0
#define arguments_ODY_GICP_CR -1, -1, -1, -1

/**
 * Register (NCB32b) gicp_evcntr#
 *
 * GICP Evcntr Register
 * The GICP_EVCNTR0 characteristics are:
 *
 * * Purpose
 * These registers contain the values of event counter 0 (of 5)
 *
 * * Usage constraints
 * If GICD(A)_SAC.GICPNS == 0, then only Secure software can access this register.
 */
union ody_gicp_evcntrx {
	uint32_t u;
	struct ody_gicp_evcntrx_s {
		uint32_t count                       : 32;
	} s;
	/* struct ody_gicp_evcntrx_s cn; */
};
typedef union ody_gicp_evcntrx ody_gicp_evcntrx_t;

static inline uint64_t ODY_GICP_EVCNTRX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICP_EVCNTRX(uint64_t a)
{
	if (a <= 4)
		return 0x801000030000ll + 4ll * ((a) & 0x7);
	__ody_csr_fatal("GICP_EVCNTRX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GICP_EVCNTRX(a) ody_gicp_evcntrx_t
#define bustype_ODY_GICP_EVCNTRX(a) CSR_TYPE_NCB32b
#define basename_ODY_GICP_EVCNTRX(a) "GICP_EVCNTRX"
#define device_bar_ODY_GICP_EVCNTRX(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_GICP_EVCNTRX(a) (a)
#define arguments_ODY_GICP_EVCNTRX(a) (a), -1, -1, -1

/**
 * Register (NCB32b) gicp_evtyper#
 *
 * GICP Evtyper Register
 * The GICP_EVTYPERn characteristics are:
 *
 * * Purpose
 * These registers configure which events that event counter n counts. The GIC-700
 * supports five counters, n = 0-4.
 *
 * * Usage constraints
 * If GICD(A)_SAC.GICPNS == 0, then only Secure software can access this register.
 */
union ody_gicp_evtyperx {
	uint32_t u;
	struct ody_gicp_evtyperx_s {
		uint32_t event_f                     : 8;
		uint32_t reserved_8_15               : 8;
		uint32_t event_type                  : 2;
		uint32_t reserved_18_30              : 13;
		uint32_t ovcap                       : 1;
	} s;
	/* struct ody_gicp_evtyperx_s cn; */
};
typedef union ody_gicp_evtyperx ody_gicp_evtyperx_t;

static inline uint64_t ODY_GICP_EVTYPERX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICP_EVTYPERX(uint64_t a)
{
	if (a <= 4)
		return 0x801000030400ll + 4ll * ((a) & 0x7);
	__ody_csr_fatal("GICP_EVTYPERX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GICP_EVTYPERX(a) ody_gicp_evtyperx_t
#define bustype_ODY_GICP_EVTYPERX(a) CSR_TYPE_NCB32b
#define basename_ODY_GICP_EVTYPERX(a) "GICP_EVTYPERX"
#define device_bar_ODY_GICP_EVTYPERX(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_GICP_EVTYPERX(a) (a)
#define arguments_ODY_GICP_EVTYPERX(a) (a), -1, -1, -1

/**
 * Register (NCB32b) gicp_fr#
 *
 * GICP Fr Register
 * The GICP_FRn characteristics are:
 *
 * * Purpose
 * These registers configure the filtering of event counter n. The GIC-700 supports
 * five counters, n = 0-4.
 *
 * * Usage constraints
 * If GICD(A)_SAC.GICPNS == 0, then only Secure software can access this register.
 */
union ody_gicp_frx {
	uint32_t u;
	struct ody_gicp_frx_s {
		uint32_t filter                      : 16;
		uint32_t reserved_16_28              : 13;
		uint32_t filterencoding              : 1;
		uint32_t filtertype                  : 2;
	} s;
	/* struct ody_gicp_frx_s cn; */
};
typedef union ody_gicp_frx ody_gicp_frx_t;

static inline uint64_t ODY_GICP_FRX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICP_FRX(uint64_t a)
{
	if (a <= 4)
		return 0x801000030a00ll + 4ll * ((a) & 0x7);
	__ody_csr_fatal("GICP_FRX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GICP_FRX(a) ody_gicp_frx_t
#define bustype_ODY_GICP_FRX(a) CSR_TYPE_NCB32b
#define basename_ODY_GICP_FRX(a) "GICP_FRX"
#define device_bar_ODY_GICP_FRX(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_GICP_FRX(a) (a)
#define arguments_ODY_GICP_FRX(a) (a), -1, -1, -1

/**
 * Register (NCB) gicp_intenclr0
 *
 * GICP Intenclr0 Register
 * The GICP_INTENCLR0 characteristics are:
 *
 * * Purpose
 * This register contains the clear mechanism for the counter interrupt contribution
 * enables. The GIC-700 supports five counters, n = 0-4.
 *
 * * Usage constraints
 * If GICD(A)_SAC.GICPNS == 0, then only Secure software can access this register.
 */
union ody_gicp_intenclr0 {
	uint64_t u;
	struct ody_gicp_intenclr0_s {
		uint64_t inten                       : 5;
		uint64_t reserved_5_63               : 59;
	} s;
	/* struct ody_gicp_intenclr0_s cn; */
};
typedef union ody_gicp_intenclr0 ody_gicp_intenclr0_t;

#define ODY_GICP_INTENCLR0 ODY_GICP_INTENCLR0_FUNC()
static inline uint64_t ODY_GICP_INTENCLR0_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICP_INTENCLR0_FUNC(void)
{
	return 0x801000030c60ll;
}

#define typedef_ODY_GICP_INTENCLR0 ody_gicp_intenclr0_t
#define bustype_ODY_GICP_INTENCLR0 CSR_TYPE_NCB
#define basename_ODY_GICP_INTENCLR0 "GICP_INTENCLR0"
#define device_bar_ODY_GICP_INTENCLR0 0x0 /* PF_BAR0 */
#define busnum_ODY_GICP_INTENCLR0 0
#define arguments_ODY_GICP_INTENCLR0 -1, -1, -1, -1

/**
 * Register (NCB) gicp_intenset0
 *
 * GICP Intenset0 Register
 * The GICP_INTENSET0 characteristics are:
 *
 * * Purpose
 * This register contains the set mechanism for the counter interrupt contribution
 * enables. The GIC-700 supports five counters, n = 0-4.
 *
 * * Usage constraints
 * If GICD(A)_SAC.GICPNS == 0, then only Secure software can access this register.
 */
union ody_gicp_intenset0 {
	uint64_t u;
	struct ody_gicp_intenset0_s {
		uint64_t inten                       : 5;
		uint64_t reserved_5_63               : 59;
	} s;
	/* struct ody_gicp_intenset0_s cn; */
};
typedef union ody_gicp_intenset0 ody_gicp_intenset0_t;

#define ODY_GICP_INTENSET0 ODY_GICP_INTENSET0_FUNC()
static inline uint64_t ODY_GICP_INTENSET0_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICP_INTENSET0_FUNC(void)
{
	return 0x801000030c40ll;
}

#define typedef_ODY_GICP_INTENSET0 ody_gicp_intenset0_t
#define bustype_ODY_GICP_INTENSET0 CSR_TYPE_NCB
#define basename_ODY_GICP_INTENSET0 "GICP_INTENSET0"
#define device_bar_ODY_GICP_INTENSET0 0x0 /* PF_BAR0 */
#define busnum_ODY_GICP_INTENSET0 0
#define arguments_ODY_GICP_INTENSET0 -1, -1, -1, -1

/**
 * Register (NCB32b) gicp_irqcr
 *
 * GICP Irqcr Register
 * The GICP_IRQCR characteristics are:
 *
 * * Purpose
 * This register controls which SPI is generated when a PMU overflow interrupt occurs.
 *
 * * Usage constraints
 * If GICD(A)_SAC.GICPNS == 0, then only Secure software can access this register.
 */
union ody_gicp_irqcr {
	uint32_t u;
	struct ody_gicp_irqcr_s {
		uint32_t spiid                       : 13;
		uint32_t reserved_13_31              : 19;
	} s;
	/* struct ody_gicp_irqcr_s cn; */
};
typedef union ody_gicp_irqcr ody_gicp_irqcr_t;

#define ODY_GICP_IRQCR ODY_GICP_IRQCR_FUNC()
static inline uint64_t ODY_GICP_IRQCR_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICP_IRQCR_FUNC(void)
{
	return 0x801000030e50ll;
}

#define typedef_ODY_GICP_IRQCR ody_gicp_irqcr_t
#define bustype_ODY_GICP_IRQCR CSR_TYPE_NCB32b
#define basename_ODY_GICP_IRQCR "GICP_IRQCR"
#define device_bar_ODY_GICP_IRQCR 0x0 /* PF_BAR0 */
#define busnum_ODY_GICP_IRQCR 0
#define arguments_ODY_GICP_IRQCR -1, -1, -1, -1

/**
 * Register (NCB) gicp_ovsclr0
 *
 * GICP Ovsclr0 Register
 * The GICP_OVSCLR0 characteristics are:
 *
 * * Purpose
 * This register provides the clear mechanism for the counter overflow status bits and
 * provides read access to the counter overflow status bit values. The GIC-700 supports
 * five counters, n = 0-4.
 *
 * * Usage constraints
 * If GICD(A)_SAC.GICPNS == 0, then only Secure software can access this register.
 */
union ody_gicp_ovsclr0 {
	uint64_t u;
	struct ody_gicp_ovsclr0_s {
		uint64_t ovs                         : 5;
		uint64_t reserved_5_63               : 59;
	} s;
	/* struct ody_gicp_ovsclr0_s cn; */
};
typedef union ody_gicp_ovsclr0 ody_gicp_ovsclr0_t;

#define ODY_GICP_OVSCLR0 ODY_GICP_OVSCLR0_FUNC()
static inline uint64_t ODY_GICP_OVSCLR0_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICP_OVSCLR0_FUNC(void)
{
	return 0x801000030c80ll;
}

#define typedef_ODY_GICP_OVSCLR0 ody_gicp_ovsclr0_t
#define bustype_ODY_GICP_OVSCLR0 CSR_TYPE_NCB
#define basename_ODY_GICP_OVSCLR0 "GICP_OVSCLR0"
#define device_bar_ODY_GICP_OVSCLR0 0x0 /* PF_BAR0 */
#define busnum_ODY_GICP_OVSCLR0 0
#define arguments_ODY_GICP_OVSCLR0 -1, -1, -1, -1

/**
 * Register (NCB) gicp_ovsset0
 *
 * GICP Ovsset0 Register
 * The GICP_OVSCLR0 characteristics are:
 *
 * * Purpose
 * This register provides the set mechanism for the counter overflow status bits and
 * provides read access to the counter overflow status bit values. The GIC-700 supports
 * five counters, n = 0-4.
 *
 * * Usage constraints
 * If GICD(A)_SAC.GICPNS == 0, then only Secure software can access this register.
 */
union ody_gicp_ovsset0 {
	uint64_t u;
	struct ody_gicp_ovsset0_s {
		uint64_t ovs                         : 5;
		uint64_t reserved_5_63               : 59;
	} s;
	/* struct ody_gicp_ovsset0_s cn; */
};
typedef union ody_gicp_ovsset0 ody_gicp_ovsset0_t;

#define ODY_GICP_OVSSET0 ODY_GICP_OVSSET0_FUNC()
static inline uint64_t ODY_GICP_OVSSET0_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICP_OVSSET0_FUNC(void)
{
	return 0x801000030cc0ll;
}

#define typedef_ODY_GICP_OVSSET0 ody_gicp_ovsset0_t
#define bustype_ODY_GICP_OVSSET0 CSR_TYPE_NCB
#define basename_ODY_GICP_OVSSET0 "GICP_OVSSET0"
#define device_bar_ODY_GICP_OVSSET0 0x0 /* PF_BAR0 */
#define busnum_ODY_GICP_OVSSET0 0
#define arguments_ODY_GICP_OVSSET0 -1, -1, -1, -1

/**
 * Register (NCB32b) gicp_pidr0
 *
 * GICP Pidr0 Register
 * The GICP_PIDR0 characteristics are:
 *
 * * Purpose
 * This register returns byte[0] of the peripheral ID of the GIC PMU page.
 *
 * * Usage constraints
 * There are no usage constraints.
 */
union ody_gicp_pidr0 {
	uint32_t u;
	struct ody_gicp_pidr0_s {
		uint32_t part_0                      : 8;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_gicp_pidr0_s cn; */
};
typedef union ody_gicp_pidr0 ody_gicp_pidr0_t;

#define ODY_GICP_PIDR0 ODY_GICP_PIDR0_FUNC()
static inline uint64_t ODY_GICP_PIDR0_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICP_PIDR0_FUNC(void)
{
	return 0x801000030fe0ll;
}

#define typedef_ODY_GICP_PIDR0 ody_gicp_pidr0_t
#define bustype_ODY_GICP_PIDR0 CSR_TYPE_NCB32b
#define basename_ODY_GICP_PIDR0 "GICP_PIDR0"
#define device_bar_ODY_GICP_PIDR0 0x0 /* PF_BAR0 */
#define busnum_ODY_GICP_PIDR0 0
#define arguments_ODY_GICP_PIDR0 -1, -1, -1, -1

/**
 * Register (NCB32b) gicp_pidr1
 *
 * GICP Pidr1 Register
 * The GICP_PIDR1 characteristics are:
 *
 * * Purpose
 * This register returns byte[1] of the peripheral ID of the GIC PMU page.
 *
 * * Usage constraints
 * There are no usage constraints.
 */
union ody_gicp_pidr1 {
	uint32_t u;
	struct ody_gicp_pidr1_s {
		uint32_t part_1                      : 4;
		uint32_t des_0                       : 4;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_gicp_pidr1_s cn; */
};
typedef union ody_gicp_pidr1 ody_gicp_pidr1_t;

#define ODY_GICP_PIDR1 ODY_GICP_PIDR1_FUNC()
static inline uint64_t ODY_GICP_PIDR1_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICP_PIDR1_FUNC(void)
{
	return 0x801000030fe4ll;
}

#define typedef_ODY_GICP_PIDR1 ody_gicp_pidr1_t
#define bustype_ODY_GICP_PIDR1 CSR_TYPE_NCB32b
#define basename_ODY_GICP_PIDR1 "GICP_PIDR1"
#define device_bar_ODY_GICP_PIDR1 0x0 /* PF_BAR0 */
#define busnum_ODY_GICP_PIDR1 0
#define arguments_ODY_GICP_PIDR1 -1, -1, -1, -1

/**
 * Register (NCB32b) gicp_pidr2
 *
 * GICP Pidr2 Register
 * The GICP_PIDR2 characteristics are:
 *
 * * Purpose
 * This register returns byte[2] of the peripheral ID of the GIC PMU page.
 *
 * * Usage constraints
 * There are no usage constraints.
 */
union ody_gicp_pidr2 {
	uint32_t u;
	struct ody_gicp_pidr2_s {
		uint32_t des_1                       : 3;
		uint32_t jedec                       : 1;
		uint32_t revision                    : 4;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_gicp_pidr2_s cn; */
};
typedef union ody_gicp_pidr2 ody_gicp_pidr2_t;

#define ODY_GICP_PIDR2 ODY_GICP_PIDR2_FUNC()
static inline uint64_t ODY_GICP_PIDR2_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICP_PIDR2_FUNC(void)
{
	return 0x801000030fe8ll;
}

#define typedef_ODY_GICP_PIDR2 ody_gicp_pidr2_t
#define bustype_ODY_GICP_PIDR2 CSR_TYPE_NCB32b
#define basename_ODY_GICP_PIDR2 "GICP_PIDR2"
#define device_bar_ODY_GICP_PIDR2 0x0 /* PF_BAR0 */
#define busnum_ODY_GICP_PIDR2 0
#define arguments_ODY_GICP_PIDR2 -1, -1, -1, -1

/**
 * Register (NCB32b) gicp_pidr3
 *
 * GICP Pidr3 Register
 * The GICP_PIDR3 characteristics are:
 *
 * * Purpose
 * This register returns byte[3] of the peripheral ID of the GIC PMU page.
 *
 * * Usage constraints
 * There are no usage constraints.
 */
union ody_gicp_pidr3 {
	uint32_t u;
	struct ody_gicp_pidr3_s {
		uint32_t cmod                        : 3;
		uint32_t reserved_3                  : 1;
		uint32_t revand                      : 4;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_gicp_pidr3_s cn; */
};
typedef union ody_gicp_pidr3 ody_gicp_pidr3_t;

#define ODY_GICP_PIDR3 ODY_GICP_PIDR3_FUNC()
static inline uint64_t ODY_GICP_PIDR3_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICP_PIDR3_FUNC(void)
{
	return 0x801000030fecll;
}

#define typedef_ODY_GICP_PIDR3 ody_gicp_pidr3_t
#define bustype_ODY_GICP_PIDR3 CSR_TYPE_NCB32b
#define basename_ODY_GICP_PIDR3 "GICP_PIDR3"
#define device_bar_ODY_GICP_PIDR3 0x0 /* PF_BAR0 */
#define busnum_ODY_GICP_PIDR3 0
#define arguments_ODY_GICP_PIDR3 -1, -1, -1, -1

/**
 * Register (NCB32b) gicp_pidr4
 *
 * GICP Pidr4 Register
 * The GICP_PIDR4 characteristics are:
 *
 * * Purpose
 * This register returns byte[4] of the peripheral ID of the GIC PMU page.
 *
 * * Usage constraints
 * There are no usage constraints.
 */
union ody_gicp_pidr4 {
	uint32_t u;
	struct ody_gicp_pidr4_s {
		uint32_t des_2                       : 4;
		uint32_t size                        : 4;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_gicp_pidr4_s cn; */
};
typedef union ody_gicp_pidr4 ody_gicp_pidr4_t;

#define ODY_GICP_PIDR4 ODY_GICP_PIDR4_FUNC()
static inline uint64_t ODY_GICP_PIDR4_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICP_PIDR4_FUNC(void)
{
	return 0x801000030fd0ll;
}

#define typedef_ODY_GICP_PIDR4 ody_gicp_pidr4_t
#define bustype_ODY_GICP_PIDR4 CSR_TYPE_NCB32b
#define basename_ODY_GICP_PIDR4 "GICP_PIDR4"
#define device_bar_ODY_GICP_PIDR4 0x0 /* PF_BAR0 */
#define busnum_ODY_GICP_PIDR4 0
#define arguments_ODY_GICP_PIDR4 -1, -1, -1, -1

/**
 * Register (NCB32b) gicp_pidr5
 *
 * GICP Pidr5 Register
 * The GICP_PIDR5 characteristics are:
 *
 * * Purpose
 * This register returns byte[5] of the peripheral ID of the GIC PMU page.
 *
 * * Usage constraints
 * There are no usage constraints.
 */
union ody_gicp_pidr5 {
	uint32_t u;
	struct ody_gicp_pidr5_s {
		uint32_t reserved_0_31               : 32;
	} s;
	struct ody_gicp_pidr5_cn {
		uint32_t reserved_0_7                : 8;
		uint32_t reserved_8_31               : 24;
	} cn;
};
typedef union ody_gicp_pidr5 ody_gicp_pidr5_t;

#define ODY_GICP_PIDR5 ODY_GICP_PIDR5_FUNC()
static inline uint64_t ODY_GICP_PIDR5_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICP_PIDR5_FUNC(void)
{
	return 0x801000030fd4ll;
}

#define typedef_ODY_GICP_PIDR5 ody_gicp_pidr5_t
#define bustype_ODY_GICP_PIDR5 CSR_TYPE_NCB32b
#define basename_ODY_GICP_PIDR5 "GICP_PIDR5"
#define device_bar_ODY_GICP_PIDR5 0x0 /* PF_BAR0 */
#define busnum_ODY_GICP_PIDR5 0
#define arguments_ODY_GICP_PIDR5 -1, -1, -1, -1

/**
 * Register (NCB32b) gicp_pidr6
 *
 * GICP Pidr6 Register
 * The GICP_PIDR6 characteristics are:
 *
 * * Purpose
 * This register returns byte[6] of the peripheral ID of the GIC PMU page.
 *
 * * Usage constraints
 * There are no usage constraints.
 */
union ody_gicp_pidr6 {
	uint32_t u;
	struct ody_gicp_pidr6_s {
		uint32_t reserved_0_31               : 32;
	} s;
	struct ody_gicp_pidr6_cn {
		uint32_t reserved_0_7                : 8;
		uint32_t reserved_8_31               : 24;
	} cn;
};
typedef union ody_gicp_pidr6 ody_gicp_pidr6_t;

#define ODY_GICP_PIDR6 ODY_GICP_PIDR6_FUNC()
static inline uint64_t ODY_GICP_PIDR6_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICP_PIDR6_FUNC(void)
{
	return 0x801000030fd8ll;
}

#define typedef_ODY_GICP_PIDR6 ody_gicp_pidr6_t
#define bustype_ODY_GICP_PIDR6 CSR_TYPE_NCB32b
#define basename_ODY_GICP_PIDR6 "GICP_PIDR6"
#define device_bar_ODY_GICP_PIDR6 0x0 /* PF_BAR0 */
#define busnum_ODY_GICP_PIDR6 0
#define arguments_ODY_GICP_PIDR6 -1, -1, -1, -1

/**
 * Register (NCB32b) gicp_pidr7
 *
 * GICP Pidr7 Register
 * The GICP_PIDR7 characteristics are:
 *
 * * Purpose
 * This register returns byte[7] of the peripheral ID of the GIC PMU page.
 *
 * * Usage constraints
 * There are no usage constraints.
 */
union ody_gicp_pidr7 {
	uint32_t u;
	struct ody_gicp_pidr7_s {
		uint32_t reserved_0_31               : 32;
	} s;
	struct ody_gicp_pidr7_cn {
		uint32_t reserved_0_7                : 8;
		uint32_t reserved_8_31               : 24;
	} cn;
};
typedef union ody_gicp_pidr7 ody_gicp_pidr7_t;

#define ODY_GICP_PIDR7 ODY_GICP_PIDR7_FUNC()
static inline uint64_t ODY_GICP_PIDR7_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICP_PIDR7_FUNC(void)
{
	return 0x801000030fdcll;
}

#define typedef_ODY_GICP_PIDR7 ody_gicp_pidr7_t
#define bustype_ODY_GICP_PIDR7 CSR_TYPE_NCB32b
#define basename_ODY_GICP_PIDR7 "GICP_PIDR7"
#define device_bar_ODY_GICP_PIDR7 0x0 /* PF_BAR0 */
#define busnum_ODY_GICP_PIDR7 0
#define arguments_ODY_GICP_PIDR7 -1, -1, -1, -1

/**
 * Register (NCB32b) gicp_pmauthstatus
 *
 * GICP Pmauthstatus Register
 * GICP_PMAUTHSTATUS.
 */
union ody_gicp_pmauthstatus {
	uint32_t u;
	struct ody_gicp_pmauthstatus_s {
		uint32_t nse                         : 1;
		uint32_t nsi                         : 1;
		uint32_t nsne                        : 1;
		uint32_t nsni                        : 1;
		uint32_t se                          : 1;
		uint32_t si                          : 1;
		uint32_t sne                         : 1;
		uint32_t sni                         : 1;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_gicp_pmauthstatus_s cn; */
};
typedef union ody_gicp_pmauthstatus ody_gicp_pmauthstatus_t;

#define ODY_GICP_PMAUTHSTATUS ODY_GICP_PMAUTHSTATUS_FUNC()
static inline uint64_t ODY_GICP_PMAUTHSTATUS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICP_PMAUTHSTATUS_FUNC(void)
{
	return 0x801000030fb8ll;
}

#define typedef_ODY_GICP_PMAUTHSTATUS ody_gicp_pmauthstatus_t
#define bustype_ODY_GICP_PMAUTHSTATUS CSR_TYPE_NCB32b
#define basename_ODY_GICP_PMAUTHSTATUS "GICP_PMAUTHSTATUS"
#define device_bar_ODY_GICP_PMAUTHSTATUS 0x0 /* PF_BAR0 */
#define busnum_ODY_GICP_PMAUTHSTATUS 0
#define arguments_ODY_GICP_PMAUTHSTATUS -1, -1, -1, -1

/**
 * Register (NCB32b) gicp_pmdevarch
 *
 * GICP Pmdevarch Register
 * GICP_PMDEVARCH.
 */
union ody_gicp_pmdevarch {
	uint32_t u;
	struct ody_gicp_pmdevarch_s {
		uint32_t archid                      : 16;
		uint32_t revision                    : 4;
		uint32_t present                     : 1;
		uint32_t architect                   : 11;
	} s;
	/* struct ody_gicp_pmdevarch_s cn; */
};
typedef union ody_gicp_pmdevarch ody_gicp_pmdevarch_t;

#define ODY_GICP_PMDEVARCH ODY_GICP_PMDEVARCH_FUNC()
static inline uint64_t ODY_GICP_PMDEVARCH_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICP_PMDEVARCH_FUNC(void)
{
	return 0x801000030fbcll;
}

#define typedef_ODY_GICP_PMDEVARCH ody_gicp_pmdevarch_t
#define bustype_ODY_GICP_PMDEVARCH CSR_TYPE_NCB32b
#define basename_ODY_GICP_PMDEVARCH "GICP_PMDEVARCH"
#define device_bar_ODY_GICP_PMDEVARCH 0x0 /* PF_BAR0 */
#define busnum_ODY_GICP_PMDEVARCH 0
#define arguments_ODY_GICP_PMDEVARCH -1, -1, -1, -1

/**
 * Register (NCB32b) gicp_pmdevtype
 *
 * GICP Pmdevtype Register
 * GICP_PMDEVTYPE.
 */
union ody_gicp_pmdevtype {
	uint32_t u;
	struct ody_gicp_pmdevtype_s {
		uint32_t class_f                     : 4;
		uint32_t subtype                     : 4;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_gicp_pmdevtype_s cn; */
};
typedef union ody_gicp_pmdevtype ody_gicp_pmdevtype_t;

#define ODY_GICP_PMDEVTYPE ODY_GICP_PMDEVTYPE_FUNC()
static inline uint64_t ODY_GICP_PMDEVTYPE_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICP_PMDEVTYPE_FUNC(void)
{
	return 0x801000030fccll;
}

#define typedef_ODY_GICP_PMDEVTYPE ody_gicp_pmdevtype_t
#define bustype_ODY_GICP_PMDEVTYPE CSR_TYPE_NCB32b
#define basename_ODY_GICP_PMDEVTYPE "GICP_PMDEVTYPE"
#define device_bar_ODY_GICP_PMDEVTYPE 0x0 /* PF_BAR0 */
#define busnum_ODY_GICP_PMDEVTYPE 0
#define arguments_ODY_GICP_PMDEVTYPE -1, -1, -1, -1

/**
 * Register (NCB32b) gicp_svr#
 *
 * GICP Svr Register
 * The GICP_SVRn characteristics are:
 *
 * * Purpose
 * These registers contain the shadow value of event counter n. The GIC-700 supports
 * five counters, n = 0-4.
 *
 * * Usage constraints
 * If GICD(A)_SAC.GICPNS == 0, then only Secure software can access this register.
 */
union ody_gicp_svrx {
	uint32_t u;
	struct ody_gicp_svrx_s {
		uint32_t count                       : 32;
	} s;
	/* struct ody_gicp_svrx_s cn; */
};
typedef union ody_gicp_svrx ody_gicp_svrx_t;

static inline uint64_t ODY_GICP_SVRX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICP_SVRX(uint64_t a)
{
	if (a <= 4)
		return 0x801000030600ll + 4ll * ((a) & 0x7);
	__ody_csr_fatal("GICP_SVRX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GICP_SVRX(a) ody_gicp_svrx_t
#define bustype_ODY_GICP_SVRX(a) CSR_TYPE_NCB32b
#define basename_ODY_GICP_SVRX(a) "GICP_SVRX"
#define device_bar_ODY_GICP_SVRX(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_GICP_SVRX(a) (a)
#define arguments_ODY_GICP_SVRX(a) (a), -1, -1, -1

/**
 * Register (NCB32b) gicr#_cfgid0
 *
 * GICR Cfgid0 Register
 * The GICR0_CFGID0 characteristics are:
 *
 * * Purpose
 * This register returns information about the configuration of the GCI.
 *
 * * Usage constraints
 * There are no usage constraints.
 */
union ody_gicrx_cfgid0 {
	uint32_t u;
	struct ody_gicrx_cfgid0_s {
		uint32_t ppinumber                   : 9;
		uint32_t eccsupport                  : 1;
		uint32_t reserved_10_31              : 22;
	} s;
	/* struct ody_gicrx_cfgid0_s cn; */
};
typedef union ody_gicrx_cfgid0 ody_gicrx_cfgid0_t;

static inline uint64_t ODY_GICRX_CFGID0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICRX_CFGID0(uint64_t a)
{
	if (a <= 81)
		return 0x80100009f000ll + 0x40000ll * ((a) & 0x7f);
	__ody_csr_fatal("GICRX_CFGID0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GICRX_CFGID0(a) ody_gicrx_cfgid0_t
#define bustype_ODY_GICRX_CFGID0(a) CSR_TYPE_NCB32b
#define basename_ODY_GICRX_CFGID0(a) "GICRX_CFGID0"
#define device_bar_ODY_GICRX_CFGID0(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_GICRX_CFGID0(a) (a)
#define arguments_ODY_GICRX_CFGID0(a) (a), -1, -1, -1

/**
 * Register (NCB32b) gicr#_cfgid1
 *
 * GICR Cfgid1 Register
 * The GICR0_CFGID1 characteristics are:
 *
 * * Purpose
 * This register returns information about the configuration of the Redistributors.
 *
 * * Usage constraints
 * There are no usage constraints.
 */
union ody_gicrx_cfgid1 {
	uint32_t u;
	struct ody_gicrx_cfgid1_s {
		uint32_t reserved_0_3                : 4;
		uint32_t numcpus                     : 8;
		uint32_t reserved_12_15              : 4;
		uint32_t ppisperprocessor            : 8;
		uint32_t revand                      : 4;
		uint32_t version_f                   : 4;
	} s;
	/* struct ody_gicrx_cfgid1_s cn; */
};
typedef union ody_gicrx_cfgid1 ody_gicrx_cfgid1_t;

static inline uint64_t ODY_GICRX_CFGID1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICRX_CFGID1(uint64_t a)
{
	if (a <= 81)
		return 0x80100009f004ll + 0x40000ll * ((a) & 0x7f);
	__ody_csr_fatal("GICRX_CFGID1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GICRX_CFGID1(a) ody_gicrx_cfgid1_t
#define bustype_ODY_GICRX_CFGID1(a) CSR_TYPE_NCB32b
#define basename_ODY_GICRX_CFGID1(a) "GICRX_CFGID1"
#define device_bar_ODY_GICRX_CFGID1(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_GICRX_CFGID1(a) (a)
#define arguments_ODY_GICRX_CFGID1(a) (a), -1, -1, -1

/**
 * Register (NCB32b) gicr#_cidr0
 *
 * GICR Cidr0 Register
 * The GICR0_CIDR0 characteristics are:
 *
 * * Purpose
 * This register is one of the Component Identification Registers and returns the first
 * part of the Preamble.
 *
 * * Usage constraints
 * There are no usage constraints.
 */
union ody_gicrx_cidr0 {
	uint32_t u;
	struct ody_gicrx_cidr0_s {
		uint32_t prmbl_0                     : 8;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_gicrx_cidr0_s cn; */
};
typedef union ody_gicrx_cidr0 ody_gicrx_cidr0_t;

static inline uint64_t ODY_GICRX_CIDR0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICRX_CIDR0(uint64_t a)
{
	if (a <= 81)
		return 0x80100008fff0ll + 0x40000ll * ((a) & 0x7f);
	__ody_csr_fatal("GICRX_CIDR0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GICRX_CIDR0(a) ody_gicrx_cidr0_t
#define bustype_ODY_GICRX_CIDR0(a) CSR_TYPE_NCB32b
#define basename_ODY_GICRX_CIDR0(a) "GICRX_CIDR0"
#define device_bar_ODY_GICRX_CIDR0(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_GICRX_CIDR0(a) (a)
#define arguments_ODY_GICRX_CIDR0(a) (a), -1, -1, -1

/**
 * Register (NCB32b) gicr#_cidr1
 *
 * GICR Cidr1 Register
 * The GICR0_CIDR1 characteristics are:
 *
 * * Purpose
 * This register is one of the Component Identification Registers and returns the
 * second part of the Preamble as well as the Component Class.
 *
 * * Usage constraints
 * There are no usage constraints.
 */
union ody_gicrx_cidr1 {
	uint32_t u;
	struct ody_gicrx_cidr1_s {
		uint32_t prmbl_1                     : 4;
		uint32_t class_f                     : 4;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_gicrx_cidr1_s cn; */
};
typedef union ody_gicrx_cidr1 ody_gicrx_cidr1_t;

static inline uint64_t ODY_GICRX_CIDR1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICRX_CIDR1(uint64_t a)
{
	if (a <= 81)
		return 0x80100008fff4ll + 0x40000ll * ((a) & 0x7f);
	__ody_csr_fatal("GICRX_CIDR1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GICRX_CIDR1(a) ody_gicrx_cidr1_t
#define bustype_ODY_GICRX_CIDR1(a) CSR_TYPE_NCB32b
#define basename_ODY_GICRX_CIDR1(a) "GICRX_CIDR1"
#define device_bar_ODY_GICRX_CIDR1(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_GICRX_CIDR1(a) (a)
#define arguments_ODY_GICRX_CIDR1(a) (a), -1, -1, -1

/**
 * Register (NCB32b) gicr#_cidr2
 *
 * GICR Cidr2 Register
 * The GICR0_CIDR2 characteristics are:
 *
 * * Purpose
 * This register is one of the Component Identification Registers and returns the third
 * part of the Preamble.
 *
 * * Usage constraints
 * There are no usage constraints.
 */
union ody_gicrx_cidr2 {
	uint32_t u;
	struct ody_gicrx_cidr2_s {
		uint32_t prmbl_2                     : 8;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_gicrx_cidr2_s cn; */
};
typedef union ody_gicrx_cidr2 ody_gicrx_cidr2_t;

static inline uint64_t ODY_GICRX_CIDR2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICRX_CIDR2(uint64_t a)
{
	if (a <= 81)
		return 0x80100008fff8ll + 0x40000ll * ((a) & 0x7f);
	__ody_csr_fatal("GICRX_CIDR2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GICRX_CIDR2(a) ody_gicrx_cidr2_t
#define bustype_ODY_GICRX_CIDR2(a) CSR_TYPE_NCB32b
#define basename_ODY_GICRX_CIDR2(a) "GICRX_CIDR2"
#define device_bar_ODY_GICRX_CIDR2(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_GICRX_CIDR2(a) (a)
#define arguments_ODY_GICRX_CIDR2(a) (a), -1, -1, -1

/**
 * Register (NCB32b) gicr#_cidr3
 *
 * GICR Cidr3 Register
 * The GICR0_CIDR3 characteristics are:
 *
 * * Purpose
 * This register is one of the Component Identification Registers and returns the
 * fourth part of the Preamble.
 *
 * * Usage constraints
 * There are no usage constraints.
 */
union ody_gicrx_cidr3 {
	uint32_t u;
	struct ody_gicrx_cidr3_s {
		uint32_t prmbl_3                     : 8;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_gicrx_cidr3_s cn; */
};
typedef union ody_gicrx_cidr3 ody_gicrx_cidr3_t;

static inline uint64_t ODY_GICRX_CIDR3(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICRX_CIDR3(uint64_t a)
{
	if (a <= 81)
		return 0x80100008fffcll + 0x40000ll * ((a) & 0x7f);
	__ody_csr_fatal("GICRX_CIDR3", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GICRX_CIDR3(a) ody_gicrx_cidr3_t
#define bustype_ODY_GICRX_CIDR3(a) CSR_TYPE_NCB32b
#define basename_ODY_GICRX_CIDR3(a) "GICRX_CIDR3"
#define device_bar_ODY_GICRX_CIDR3(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_GICRX_CIDR3(a) (a)
#define arguments_ODY_GICRX_CIDR3(a) (a), -1, -1, -1

/**
 * Register (NCB32b) gicr#_class
 *
 * GICR Class Register
 * The GICR0_CLASSR characteristics are:
 *
 * * Purpose
 * This register specifies which class of 1 of N interrupt the PE accepts.
 *
 * * Usage constraints
 * Only accessible by Secure accesses or when GICD(A)_DS.DS == 1
 */
union ody_gicrx_class {
	uint32_t u;
	struct ody_gicrx_class_s {
		uint32_t class_f                     : 1;
		uint32_t reserved_1_31               : 31;
	} s;
	/* struct ody_gicrx_class_s cn; */
};
typedef union ody_gicrx_class ody_gicrx_class_t;

static inline uint64_t ODY_GICRX_CLASS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICRX_CLASS(uint64_t a)
{
	if (a <= 81)
		return 0x801000080028ll + 0x40000ll * ((a) & 0x7f);
	__ody_csr_fatal("GICRX_CLASS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GICRX_CLASS(a) ody_gicrx_class_t
#define bustype_ODY_GICRX_CLASS(a) CSR_TYPE_NCB32b
#define basename_ODY_GICRX_CLASS(a) "GICRX_CLASS"
#define device_bar_ODY_GICRX_CLASS(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_GICRX_CLASS(a) (a)
#define arguments_ODY_GICRX_CLASS(a) (a), -1, -1, -1

/**
 * Register (NCB32b) gicr#_ctlr
 *
 * GICR Ctlr Register
 * The GICR0_CTLR characteristics are:
 *
 * * Purpose
 * This register controls the operation of the Redistributor for a single PE, and
 * enables the signaling of LPIs by the Redistributor to the connected core.
 *
 * * Usage constraints
 * There are no usage constraints.
 */
union ody_gicrx_ctlr {
	uint32_t u;
	struct ody_gicrx_ctlr_s {
		uint32_t enablelpis                  : 1;
		uint32_t ces                         : 1;
		uint32_t ir                          : 1;
		uint32_t rwp                         : 1;
		uint32_t reserved_4_23               : 20;
		uint32_t dpg0                        : 1;
		uint32_t dpg1ns                      : 1;
		uint32_t dpg1s                       : 1;
		uint32_t reserved_27_30              : 4;
		uint32_t uwp                         : 1;
	} s;
	/* struct ody_gicrx_ctlr_s cn; */
};
typedef union ody_gicrx_ctlr ody_gicrx_ctlr_t;

static inline uint64_t ODY_GICRX_CTLR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICRX_CTLR(uint64_t a)
{
	if (a <= 81)
		return 0x801000080000ll + 0x40000ll * ((a) & 0x7f);
	__ody_csr_fatal("GICRX_CTLR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GICRX_CTLR(a) ody_gicrx_ctlr_t
#define bustype_ODY_GICRX_CTLR(a) CSR_TYPE_NCB32b
#define basename_ODY_GICRX_CTLR(a) "GICRX_CTLR"
#define device_bar_ODY_GICRX_CTLR(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_GICRX_CTLR(a) (a)
#define arguments_ODY_GICRX_CTLR(a) (a), -1, -1, -1

/**
 * Register (NCB32b) gicr#_dprir
 *
 * GICR Dprir Register
 * The GICR0_DPRIR characteristics are:
 *
 * * Purpose
 *
 * This register controls the default priority of errored interrupts.
 *
 * * Usage constraints
 * Some fields are only writable by using a Secure access.
 */
union ody_gicrx_dprir {
	uint32_t u;
	struct ody_gicrx_dprir_s {
		uint32_t reserved_0_2                : 3;
		uint32_t gpr0_pri                    : 5;
		uint32_t reserved_8_10               : 3;
		uint32_t gpr1ns_pri                  : 5;
		uint32_t reserved_16_18              : 3;
		uint32_t gpr1sec_pri                 : 5;
		uint32_t reserved_24_31              : 8;
	} s;
	/* struct ody_gicrx_dprir_s cn; */
};
typedef union ody_gicrx_dprir ody_gicrx_dprir_t;

static inline uint64_t ODY_GICRX_DPRIR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICRX_DPRIR(uint64_t a)
{
	if (a <= 81)
		return 0x80100009c018ll + 0x40000ll * ((a) & 0x7f);
	__ody_csr_fatal("GICRX_DPRIR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GICRX_DPRIR(a) ody_gicrx_dprir_t
#define bustype_ODY_GICRX_DPRIR(a) CSR_TYPE_NCB32b
#define basename_ODY_GICRX_DPRIR(a) "GICRX_DPRIR"
#define device_bar_ODY_GICRX_DPRIR(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_GICRX_DPRIR(a) (a)
#define arguments_ODY_GICRX_DPRIR(a) (a), -1, -1, -1

/**
 * Register (NCB) gicr#_errinsr
 *
 * GICR Errinsr Register
 * The GICR0_ERRINSR characteristics are:
 *
 * * Purpose
 * This register can inject errors into the PPI RAM. You can use this register to test
 * your error recovery software.
 *
 * * Usage constraints
 * If GICD_SAC.GICTNS == 0, then only Secure software can access the contents of this register.
 */
union ody_gicrx_errinsr {
	uint64_t u;
	struct ody_gicrx_errinsr_s {
		uint64_t errins1loc                  : 9;
		uint64_t reserved_9_14               : 6;
		uint64_t errins1valid                : 1;
		uint64_t errins2loc                  : 9;
		uint64_t reserved_25_30              : 6;
		uint64_t errins2valid                : 1;
		uint64_t addr                        : 16;
		uint64_t reserved_48_59              : 12;
		uint64_t disablewritecheck           : 1;
		uint64_t reserved_61_62              : 2;
		uint64_t valid                       : 1;
	} s;
	/* struct ody_gicrx_errinsr_s cn; */
};
typedef union ody_gicrx_errinsr ody_gicrx_errinsr_t;

static inline uint64_t ODY_GICRX_ERRINSR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICRX_ERRINSR(uint64_t a)
{
	if (a <= 81)
		return 0x80100009f010ll + 0x40000ll * ((a) & 0x7f);
	__ody_csr_fatal("GICRX_ERRINSR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GICRX_ERRINSR(a) ody_gicrx_errinsr_t
#define bustype_ODY_GICRX_ERRINSR(a) CSR_TYPE_NCB
#define basename_ODY_GICRX_ERRINSR(a) "GICRX_ERRINSR"
#define device_bar_ODY_GICRX_ERRINSR(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_GICRX_ERRINSR(a) (a)
#define arguments_ODY_GICRX_ERRINSR(a) (a), -1, -1, -1

/**
 * Register (NCB32b) gicr#_fctlr
 *
 * GICR Fctlr Register
 * The GICR0_FCTLR characteristics are:
 *
 * * Purpose
 * This register controls functions in the GCI such as Q-Channel, clock gating, and RAM scrubs.
 *
 * * Usage constraints
 * There are no usage constraints.
 */
union ody_gicrx_fctlr {
	uint32_t u;
	struct ody_gicrx_fctlr_s {
		uint32_t sip                         : 1;
		uint32_t qdeny                       : 1;
		uint32_t cgo                         : 3;
		uint32_t reserved_5_31               : 27;
	} s;
	struct ody_gicrx_fctlr_cn {
		uint32_t sip                         : 1;
		uint32_t qdeny                       : 1;
		uint32_t cgo                         : 3;
		uint32_t reserved_5_9                : 5;
		uint32_t reserved_10_31              : 22;
	} cn;
};
typedef union ody_gicrx_fctlr ody_gicrx_fctlr_t;

static inline uint64_t ODY_GICRX_FCTLR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICRX_FCTLR(uint64_t a)
{
	if (a <= 81)
		return 0x801000080020ll + 0x40000ll * ((a) & 0x7f);
	__ody_csr_fatal("GICRX_FCTLR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GICRX_FCTLR(a) ody_gicrx_fctlr_t
#define bustype_ODY_GICRX_FCTLR(a) CSR_TYPE_NCB32b
#define basename_ODY_GICRX_FCTLR(a) "GICRX_FCTLR"
#define device_bar_ODY_GICRX_FCTLR(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_GICRX_FCTLR(a) (a)
#define arguments_ODY_GICRX_FCTLR(a) (a), -1, -1, -1

/**
 * Register (NCB32b) gicr#_icactiver0
 *
 * GICR Icactiver0 Register
 * The GICR0_ICACTIVER0 characteristics are:
 *
 * * Purpose
 * Deactivates the corresponding SGI (IDs 0-15) or PPI (IDs 16-31). These registers are
 * used when saving and restoring GIC state.
 *
 * * Usage constraints
 * If GICD(A)_CTLR.DS==0, unless the GICR0_NSACR register permits Non-secure software
 * to control Group 0 and Secure Group 1 interrupts, any bits that correspond to Group
 * 0 or Secure Group 1 interrupts are accessible only by Secure accesses and are RAZ/WI
 * to Non-secure accesses.
 */
union ody_gicrx_icactiver0 {
	uint32_t u;
	struct ody_gicrx_icactiver0_s {
		uint32_t clear_active_bit0           : 1;
		uint32_t clear_active_bit1           : 1;
		uint32_t clear_active_bit2           : 1;
		uint32_t clear_active_bit3           : 1;
		uint32_t clear_active_bit4           : 1;
		uint32_t clear_active_bit5           : 1;
		uint32_t clear_active_bit6           : 1;
		uint32_t clear_active_bit7           : 1;
		uint32_t clear_active_bit8           : 1;
		uint32_t clear_active_bit9           : 1;
		uint32_t clear_active_bit10          : 1;
		uint32_t clear_active_bit11          : 1;
		uint32_t clear_active_bit12          : 1;
		uint32_t clear_active_bit13          : 1;
		uint32_t clear_active_bit14          : 1;
		uint32_t clear_active_bit15          : 1;
		uint32_t clear_active_bit16          : 1;
		uint32_t clear_active_bit17          : 1;
		uint32_t clear_active_bit18          : 1;
		uint32_t clear_active_bit19          : 1;
		uint32_t clear_active_bit20          : 1;
		uint32_t clear_active_bit21          : 1;
		uint32_t clear_active_bit22          : 1;
		uint32_t clear_active_bit23          : 1;
		uint32_t clear_active_bit24          : 1;
		uint32_t clear_active_bit25          : 1;
		uint32_t clear_active_bit26          : 1;
		uint32_t clear_active_bit27          : 1;
		uint32_t clear_active_bit28          : 1;
		uint32_t clear_active_bit29          : 1;
		uint32_t clear_active_bit30          : 1;
		uint32_t clear_active_bit31          : 1;
	} s;
	/* struct ody_gicrx_icactiver0_s cn; */
};
typedef union ody_gicrx_icactiver0 ody_gicrx_icactiver0_t;

static inline uint64_t ODY_GICRX_ICACTIVER0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICRX_ICACTIVER0(uint64_t a)
{
	if (a <= 81)
		return 0x801000090380ll + 0x40000ll * ((a) & 0x7f);
	__ody_csr_fatal("GICRX_ICACTIVER0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GICRX_ICACTIVER0(a) ody_gicrx_icactiver0_t
#define bustype_ODY_GICRX_ICACTIVER0(a) CSR_TYPE_NCB32b
#define basename_ODY_GICRX_ICACTIVER0(a) "GICRX_ICACTIVER0"
#define device_bar_ODY_GICRX_ICACTIVER0(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_GICRX_ICACTIVER0(a) (a)
#define arguments_ODY_GICRX_ICACTIVER0(a) (a), -1, -1, -1

/**
 * Register (NCB32b) gicr#_icactiver1e
 *
 * GICR Icactiver1e Register
 * The GICR0_ICACTIVER1E characteristics are:
 *
 * * Purpose
 * Deactivates the corresponding  extended range PPI. These registers are used when
 * saving and restoring GIC state.
 *
 * * Usage constraints
 * If GICD(A)_CTLR.DS==0, unless the GICR0_NSACR register permits Non-secure software
 * to control Group 0 and Secure Group 1 interrupts, any bits that correspond to Group
 * 0 or Secure Group 1 interrupts are accessible only by Secure accesses and are RAZ/WI
 * to Non-secure accesses.
 */
union ody_gicrx_icactiver1e {
	uint32_t u;
	struct ody_gicrx_icactiver1e_s {
		uint32_t clear_active_bit0           : 1;
		uint32_t clear_active_bit1           : 1;
		uint32_t clear_active_bit2           : 1;
		uint32_t clear_active_bit3           : 1;
		uint32_t clear_active_bit4           : 1;
		uint32_t clear_active_bit5           : 1;
		uint32_t clear_active_bit6           : 1;
		uint32_t clear_active_bit7           : 1;
		uint32_t clear_active_bit8           : 1;
		uint32_t clear_active_bit9           : 1;
		uint32_t clear_active_bit10          : 1;
		uint32_t clear_active_bit11          : 1;
		uint32_t clear_active_bit12          : 1;
		uint32_t clear_active_bit13          : 1;
		uint32_t clear_active_bit14          : 1;
		uint32_t clear_active_bit15          : 1;
		uint32_t clear_active_bit16          : 1;
		uint32_t clear_active_bit17          : 1;
		uint32_t clear_active_bit18          : 1;
		uint32_t clear_active_bit19          : 1;
		uint32_t clear_active_bit20          : 1;
		uint32_t clear_active_bit21          : 1;
		uint32_t clear_active_bit22          : 1;
		uint32_t clear_active_bit23          : 1;
		uint32_t clear_active_bit24          : 1;
		uint32_t clear_active_bit25          : 1;
		uint32_t clear_active_bit26          : 1;
		uint32_t clear_active_bit27          : 1;
		uint32_t clear_active_bit28          : 1;
		uint32_t clear_active_bit29          : 1;
		uint32_t clear_active_bit30          : 1;
		uint32_t clear_active_bit31          : 1;
	} s;
	/* struct ody_gicrx_icactiver1e_s cn; */
};
typedef union ody_gicrx_icactiver1e ody_gicrx_icactiver1e_t;

static inline uint64_t ODY_GICRX_ICACTIVER1E(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICRX_ICACTIVER1E(uint64_t a)
{
	if (a <= 81)
		return 0x801000090384ll + 0x40000ll * ((a) & 0x7f);
	__ody_csr_fatal("GICRX_ICACTIVER1E", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GICRX_ICACTIVER1E(a) ody_gicrx_icactiver1e_t
#define bustype_ODY_GICRX_ICACTIVER1E(a) CSR_TYPE_NCB32b
#define basename_ODY_GICRX_ICACTIVER1E(a) "GICRX_ICACTIVER1E"
#define device_bar_ODY_GICRX_ICACTIVER1E(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_GICRX_ICACTIVER1E(a) (a)
#define arguments_ODY_GICRX_ICACTIVER1E(a) (a), -1, -1, -1

/**
 * Register (NCB32b) gicr#_icenabler0
 *
 * GICR Icenabler0 Register
 * The GICR0_ICENABLER0 characteristics are:
 *
 * * Purpose
 * Disables forwarding of the corresponding SGI (IDs 0-15) or PPI (IDs 16-31) to the CPU interface.
 *
 * * Usage constraints
 * When GICD(A)_CTLR.DS==0, bits corresponding to Group 0 and Secure Group 1 interrupts
 * are RAZ/WI to Non-secure accesses.
 */
union ody_gicrx_icenabler0 {
	uint32_t u;
	struct ody_gicrx_icenabler0_s {
		uint32_t clear_enable_bit0           : 1;
		uint32_t clear_enable_bit1           : 1;
		uint32_t clear_enable_bit2           : 1;
		uint32_t clear_enable_bit3           : 1;
		uint32_t clear_enable_bit4           : 1;
		uint32_t clear_enable_bit5           : 1;
		uint32_t clear_enable_bit6           : 1;
		uint32_t clear_enable_bit7           : 1;
		uint32_t clear_enable_bit8           : 1;
		uint32_t clear_enable_bit9           : 1;
		uint32_t clear_enable_bit10          : 1;
		uint32_t clear_enable_bit11          : 1;
		uint32_t clear_enable_bit12          : 1;
		uint32_t clear_enable_bit13          : 1;
		uint32_t clear_enable_bit14          : 1;
		uint32_t clear_enable_bit15          : 1;
		uint32_t clear_enable_bit16          : 1;
		uint32_t clear_enable_bit17          : 1;
		uint32_t clear_enable_bit18          : 1;
		uint32_t clear_enable_bit19          : 1;
		uint32_t clear_enable_bit20          : 1;
		uint32_t clear_enable_bit21          : 1;
		uint32_t clear_enable_bit22          : 1;
		uint32_t clear_enable_bit23          : 1;
		uint32_t clear_enable_bit24          : 1;
		uint32_t clear_enable_bit25          : 1;
		uint32_t clear_enable_bit26          : 1;
		uint32_t clear_enable_bit27          : 1;
		uint32_t clear_enable_bit28          : 1;
		uint32_t clear_enable_bit29          : 1;
		uint32_t clear_enable_bit30          : 1;
		uint32_t clear_enable_bit31          : 1;
	} s;
	/* struct ody_gicrx_icenabler0_s cn; */
};
typedef union ody_gicrx_icenabler0 ody_gicrx_icenabler0_t;

static inline uint64_t ODY_GICRX_ICENABLER0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICRX_ICENABLER0(uint64_t a)
{
	if (a <= 81)
		return 0x801000090180ll + 0x40000ll * ((a) & 0x7f);
	__ody_csr_fatal("GICRX_ICENABLER0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GICRX_ICENABLER0(a) ody_gicrx_icenabler0_t
#define bustype_ODY_GICRX_ICENABLER0(a) CSR_TYPE_NCB32b
#define basename_ODY_GICRX_ICENABLER0(a) "GICRX_ICENABLER0"
#define device_bar_ODY_GICRX_ICENABLER0(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_GICRX_ICENABLER0(a) (a)
#define arguments_ODY_GICRX_ICENABLER0(a) (a), -1, -1, -1

/**
 * Register (NCB32b) gicr#_icenabler1e
 *
 * GICR Icenabler1e Register
 * The GICR0_ICENABLER1E characteristics are:
 *
 * * Purpose
 * Disables forwarding of the corresponding extended range PPI to the CPU interfaces.
 *
 * * Usage constraints
 * When GICD(A)_CTLR.DS==0, bits corresponding to Group 0 and Secure Group 1 interrupts
 * are RAZ/WI to Non-secure accesses.
 * A copy of this register is provided for each Redistributor.
 */
union ody_gicrx_icenabler1e {
	uint32_t u;
	struct ody_gicrx_icenabler1e_s {
		uint32_t clear_enable_bit0           : 1;
		uint32_t clear_enable_bit1           : 1;
		uint32_t clear_enable_bit2           : 1;
		uint32_t clear_enable_bit3           : 1;
		uint32_t clear_enable_bit4           : 1;
		uint32_t clear_enable_bit5           : 1;
		uint32_t clear_enable_bit6           : 1;
		uint32_t clear_enable_bit7           : 1;
		uint32_t clear_enable_bit8           : 1;
		uint32_t clear_enable_bit9           : 1;
		uint32_t clear_enable_bit10          : 1;
		uint32_t clear_enable_bit11          : 1;
		uint32_t clear_enable_bit12          : 1;
		uint32_t clear_enable_bit13          : 1;
		uint32_t clear_enable_bit14          : 1;
		uint32_t clear_enable_bit15          : 1;
		uint32_t clear_enable_bit16          : 1;
		uint32_t clear_enable_bit17          : 1;
		uint32_t clear_enable_bit18          : 1;
		uint32_t clear_enable_bit19          : 1;
		uint32_t clear_enable_bit20          : 1;
		uint32_t clear_enable_bit21          : 1;
		uint32_t clear_enable_bit22          : 1;
		uint32_t clear_enable_bit23          : 1;
		uint32_t clear_enable_bit24          : 1;
		uint32_t clear_enable_bit25          : 1;
		uint32_t clear_enable_bit26          : 1;
		uint32_t clear_enable_bit27          : 1;
		uint32_t clear_enable_bit28          : 1;
		uint32_t clear_enable_bit29          : 1;
		uint32_t clear_enable_bit30          : 1;
		uint32_t clear_enable_bit31          : 1;
	} s;
	/* struct ody_gicrx_icenabler1e_s cn; */
};
typedef union ody_gicrx_icenabler1e ody_gicrx_icenabler1e_t;

static inline uint64_t ODY_GICRX_ICENABLER1E(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICRX_ICENABLER1E(uint64_t a)
{
	if (a <= 81)
		return 0x801000090184ll + 0x40000ll * ((a) & 0x7f);
	__ody_csr_fatal("GICRX_ICENABLER1E", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GICRX_ICENABLER1E(a) ody_gicrx_icenabler1e_t
#define bustype_ODY_GICRX_ICENABLER1E(a) CSR_TYPE_NCB32b
#define basename_ODY_GICRX_ICENABLER1E(a) "GICRX_ICENABLER1E"
#define device_bar_ODY_GICRX_ICENABLER1E(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_GICRX_ICENABLER1E(a) (a)
#define arguments_ODY_GICRX_ICENABLER1E(a) (a), -1, -1, -1

/**
 * Register (NCB32b) gicr#_icerrr0
 *
 * GICR Icerrr0 Register
 * The GICR0_ICERRR0 characteristics are:
 *
 * * Purpose
 *
 * This register indicates if the SGI or PPI data has been corrupted in the GCI RAM.
 * Software can use this register to clear an SGI or PPI error.
 *
 * * Usage constraints
 * Only accessible by Secure accesses or when GICD(A)_DS.DS == 1.
 */
union ody_gicrx_icerrr0 {
	uint32_t u;
	struct ody_gicrx_icerrr0_s {
		uint32_t valid_bit0                  : 1;
		uint32_t valid_bit1                  : 1;
		uint32_t valid_bit2                  : 1;
		uint32_t valid_bit3                  : 1;
		uint32_t valid_bit4                  : 1;
		uint32_t valid_bit5                  : 1;
		uint32_t valid_bit6                  : 1;
		uint32_t valid_bit7                  : 1;
		uint32_t valid_bit8                  : 1;
		uint32_t valid_bit9                  : 1;
		uint32_t valid_bit10                 : 1;
		uint32_t valid_bit11                 : 1;
		uint32_t valid_bit12                 : 1;
		uint32_t valid_bit13                 : 1;
		uint32_t valid_bit14                 : 1;
		uint32_t valid_bit15                 : 1;
		uint32_t valid_bit16                 : 1;
		uint32_t valid_bit17                 : 1;
		uint32_t valid_bit18                 : 1;
		uint32_t valid_bit19                 : 1;
		uint32_t valid_bit20                 : 1;
		uint32_t valid_bit21                 : 1;
		uint32_t valid_bit22                 : 1;
		uint32_t valid_bit23                 : 1;
		uint32_t valid_bit24                 : 1;
		uint32_t valid_bit25                 : 1;
		uint32_t valid_bit26                 : 1;
		uint32_t valid_bit27                 : 1;
		uint32_t valid_bit28                 : 1;
		uint32_t valid_bit29                 : 1;
		uint32_t valid_bit30                 : 1;
		uint32_t valid_bit31                 : 1;
	} s;
	/* struct ody_gicrx_icerrr0_s cn; */
};
typedef union ody_gicrx_icerrr0 ody_gicrx_icerrr0_t;

static inline uint64_t ODY_GICRX_ICERRR0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICRX_ICERRR0(uint64_t a)
{
	if (a <= 81)
		return 0x80100009c100ll + 0x40000ll * ((a) & 0x7f);
	__ody_csr_fatal("GICRX_ICERRR0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GICRX_ICERRR0(a) ody_gicrx_icerrr0_t
#define bustype_ODY_GICRX_ICERRR0(a) CSR_TYPE_NCB32b
#define basename_ODY_GICRX_ICERRR0(a) "GICRX_ICERRR0"
#define device_bar_ODY_GICRX_ICERRR0(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_GICRX_ICERRR0(a) (a)
#define arguments_ODY_GICRX_ICERRR0(a) (a), -1, -1, -1

/**
 * Register (NCB32b) gicr#_icerrr1e
 *
 * GICR Icerrr1e Register
 * The GICR0_ICERRR1E characteristics are:
 *
 * * Purpose
 *
 * This register indicates if extended range PPI data has been corrupted in the GCI
 * RAM. Software can use this register to clear the error.
 *
 * * Usage constraints
 * Only accessible by Secure accesses or when GICD(A)_DS.DS == 1.
 */
union ody_gicrx_icerrr1e {
	uint32_t u;
	struct ody_gicrx_icerrr1e_s {
		uint32_t valid_bit0                  : 1;
		uint32_t valid_bit1                  : 1;
		uint32_t valid_bit2                  : 1;
		uint32_t valid_bit3                  : 1;
		uint32_t valid_bit4                  : 1;
		uint32_t valid_bit5                  : 1;
		uint32_t valid_bit6                  : 1;
		uint32_t valid_bit7                  : 1;
		uint32_t valid_bit8                  : 1;
		uint32_t valid_bit9                  : 1;
		uint32_t valid_bit10                 : 1;
		uint32_t valid_bit11                 : 1;
		uint32_t valid_bit12                 : 1;
		uint32_t valid_bit13                 : 1;
		uint32_t valid_bit14                 : 1;
		uint32_t valid_bit15                 : 1;
		uint32_t valid_bit16                 : 1;
		uint32_t valid_bit17                 : 1;
		uint32_t valid_bit18                 : 1;
		uint32_t valid_bit19                 : 1;
		uint32_t valid_bit20                 : 1;
		uint32_t valid_bit21                 : 1;
		uint32_t valid_bit22                 : 1;
		uint32_t valid_bit23                 : 1;
		uint32_t valid_bit24                 : 1;
		uint32_t valid_bit25                 : 1;
		uint32_t valid_bit26                 : 1;
		uint32_t valid_bit27                 : 1;
		uint32_t valid_bit28                 : 1;
		uint32_t valid_bit29                 : 1;
		uint32_t valid_bit30                 : 1;
		uint32_t valid_bit31                 : 1;
	} s;
	/* struct ody_gicrx_icerrr1e_s cn; */
};
typedef union ody_gicrx_icerrr1e ody_gicrx_icerrr1e_t;

static inline uint64_t ODY_GICRX_ICERRR1E(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICRX_ICERRR1E(uint64_t a)
{
	if (a <= 81)
		return 0x80100009c104ll + 0x40000ll * ((a) & 0x7f);
	__ody_csr_fatal("GICRX_ICERRR1E", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GICRX_ICERRR1E(a) ody_gicrx_icerrr1e_t
#define bustype_ODY_GICRX_ICERRR1E(a) CSR_TYPE_NCB32b
#define basename_ODY_GICRX_ICERRR1E(a) "GICRX_ICERRR1E"
#define device_bar_ODY_GICRX_ICERRR1E(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_GICRX_ICERRR1E(a) (a)
#define arguments_ODY_GICRX_ICERRR1E(a) (a), -1, -1, -1

/**
 * Register (NCB32b) gicr#_icfgr0
 *
 * GICR Icfgr0 Register
 * The GICR0_ICFGR0 characteristics are:
 *
 * * Purpose
 * Reports that all SGIs are edge triggered.
 *
 * * Usage constraints
 * When GICD_CTLR.DS==0, a register bit that corresponds to a Group 0 or Secure Group 1
 * interrupt is RAZ/WI to Non-secure accesses.
 */
union ody_gicrx_icfgr0 {
	uint32_t u;
	struct ody_gicrx_icfgr0_s {
		uint32_t int_config0                 : 2;
		uint32_t int_config1                 : 2;
		uint32_t int_config2                 : 2;
		uint32_t int_config3                 : 2;
		uint32_t int_config4                 : 2;
		uint32_t int_config5                 : 2;
		uint32_t int_config6                 : 2;
		uint32_t int_config7                 : 2;
		uint32_t int_config8                 : 2;
		uint32_t int_config9                 : 2;
		uint32_t int_config10                : 2;
		uint32_t int_config11                : 2;
		uint32_t int_config12                : 2;
		uint32_t int_config13                : 2;
		uint32_t int_config14                : 2;
		uint32_t int_config15                : 2;
	} s;
	/* struct ody_gicrx_icfgr0_s cn; */
};
typedef union ody_gicrx_icfgr0 ody_gicrx_icfgr0_t;

static inline uint64_t ODY_GICRX_ICFGR0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICRX_ICFGR0(uint64_t a)
{
	if (a <= 81)
		return 0x801000090c00ll + 0x40000ll * ((a) & 0x7f);
	__ody_csr_fatal("GICRX_ICFGR0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GICRX_ICFGR0(a) ody_gicrx_icfgr0_t
#define bustype_ODY_GICRX_ICFGR0(a) CSR_TYPE_NCB32b
#define basename_ODY_GICRX_ICFGR0(a) "GICRX_ICFGR0"
#define device_bar_ODY_GICRX_ICFGR0(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_GICRX_ICFGR0(a) (a)
#define arguments_ODY_GICRX_ICFGR0(a) (a), -1, -1, -1

/**
 * Register (NCB32b) gicr#_icfgr1
 *
 * GICR Icfgr1 Register
 * The GICR0_ICFGR0 characteristics are:
 *
 * * Purpose
 * Determines whether the corresponding PPI is edge-triggered or level-sensitive
 *
 * * Usage constraints
 * When GICD(A)_CTLR.DS==0, a register bit that corresponds to a Group 0 or Secure
 * Group 1 interrupt is RAZ/WI to Non-secure accesses.
 */
union ody_gicrx_icfgr1 {
	uint32_t u;
	struct ody_gicrx_icfgr1_s {
		uint32_t int_config0                 : 2;
		uint32_t int_config1                 : 2;
		uint32_t int_config2                 : 2;
		uint32_t int_config3                 : 2;
		uint32_t int_config4                 : 2;
		uint32_t int_config5                 : 2;
		uint32_t int_config6                 : 2;
		uint32_t int_config7                 : 2;
		uint32_t int_config8                 : 2;
		uint32_t int_config9                 : 2;
		uint32_t int_config10                : 2;
		uint32_t int_config11                : 2;
		uint32_t int_config12                : 2;
		uint32_t int_config13                : 2;
		uint32_t int_config14                : 2;
		uint32_t int_config15                : 2;
	} s;
	/* struct ody_gicrx_icfgr1_s cn; */
};
typedef union ody_gicrx_icfgr1 ody_gicrx_icfgr1_t;

static inline uint64_t ODY_GICRX_ICFGR1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICRX_ICFGR1(uint64_t a)
{
	if (a <= 81)
		return 0x801000090c04ll + 0x40000ll * ((a) & 0x7f);
	__ody_csr_fatal("GICRX_ICFGR1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GICRX_ICFGR1(a) ody_gicrx_icfgr1_t
#define bustype_ODY_GICRX_ICFGR1(a) CSR_TYPE_NCB32b
#define basename_ODY_GICRX_ICFGR1(a) "GICRX_ICFGR1"
#define device_bar_ODY_GICRX_ICFGR1(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_GICRX_ICFGR1(a) (a)
#define arguments_ODY_GICRX_ICFGR1(a) (a), -1, -1, -1

/**
 * Register (NCB32b) gicr#_icfgr2e
 *
 * GICR Icfgr2e Register
 * The GICR0_ICFGR2E characteristics are:
 *
 * * Purpose
 * Determines whether the corresponding extended range PPI (1056-1071) is edge-
 * triggered or level-sensitive
 *
 * * Usage constraints
 * When GICD_CTLR.DS==0, a register bit that corresponds to a Group 0 or Secure Group 1
 * interrupt is RAZ/WI to Non-secure accesses.
 */
union ody_gicrx_icfgr2e {
	uint32_t u;
	struct ody_gicrx_icfgr2e_s {
		uint32_t int_config0                 : 2;
		uint32_t int_config1                 : 2;
		uint32_t int_config2                 : 2;
		uint32_t int_config3                 : 2;
		uint32_t int_config4                 : 2;
		uint32_t int_config5                 : 2;
		uint32_t int_config6                 : 2;
		uint32_t int_config7                 : 2;
		uint32_t int_config8                 : 2;
		uint32_t int_config9                 : 2;
		uint32_t int_config10                : 2;
		uint32_t int_config11                : 2;
		uint32_t int_config12                : 2;
		uint32_t int_config13                : 2;
		uint32_t int_config14                : 2;
		uint32_t int_config15                : 2;
	} s;
	/* struct ody_gicrx_icfgr2e_s cn; */
};
typedef union ody_gicrx_icfgr2e ody_gicrx_icfgr2e_t;

static inline uint64_t ODY_GICRX_ICFGR2E(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICRX_ICFGR2E(uint64_t a)
{
	if (a <= 81)
		return 0x801000090c08ll + 0x40000ll * ((a) & 0x7f);
	__ody_csr_fatal("GICRX_ICFGR2E", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GICRX_ICFGR2E(a) ody_gicrx_icfgr2e_t
#define bustype_ODY_GICRX_ICFGR2E(a) CSR_TYPE_NCB32b
#define basename_ODY_GICRX_ICFGR2E(a) "GICRX_ICFGR2E"
#define device_bar_ODY_GICRX_ICFGR2E(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_GICRX_ICFGR2E(a) (a)
#define arguments_ODY_GICRX_ICFGR2E(a) (a), -1, -1, -1

/**
 * Register (NCB32b) gicr#_icfgr3e
 *
 * GICR Icfgr3e Register
 * The GICR0_ICFGR3E characteristics are:
 *
 * * Purpose
 * Determines whether the corresponding extended range PPI (1072-1087) is edge-
 * triggered or level-sensitive
 *
 * * Usage constraints
 * When GICD_CTLR.DS==0, a register bit that corresponds to a Group 0 or Secure Group 1
 * interrupt is RAZ/WI to Non-secure accesses.
 */
union ody_gicrx_icfgr3e {
	uint32_t u;
	struct ody_gicrx_icfgr3e_s {
		uint32_t int_config0                 : 2;
		uint32_t int_config1                 : 2;
		uint32_t int_config2                 : 2;
		uint32_t int_config3                 : 2;
		uint32_t int_config4                 : 2;
		uint32_t int_config5                 : 2;
		uint32_t int_config6                 : 2;
		uint32_t int_config7                 : 2;
		uint32_t int_config8                 : 2;
		uint32_t int_config9                 : 2;
		uint32_t int_config10                : 2;
		uint32_t int_config11                : 2;
		uint32_t int_config12                : 2;
		uint32_t int_config13                : 2;
		uint32_t int_config14                : 2;
		uint32_t int_config15                : 2;
	} s;
	/* struct ody_gicrx_icfgr3e_s cn; */
};
typedef union ody_gicrx_icfgr3e ody_gicrx_icfgr3e_t;

static inline uint64_t ODY_GICRX_ICFGR3E(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICRX_ICFGR3E(uint64_t a)
{
	if (a <= 81)
		return 0x801000090c0cll + 0x40000ll * ((a) & 0x7f);
	__ody_csr_fatal("GICRX_ICFGR3E", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GICRX_ICFGR3E(a) ody_gicrx_icfgr3e_t
#define bustype_ODY_GICRX_ICFGR3E(a) CSR_TYPE_NCB32b
#define basename_ODY_GICRX_ICFGR3E(a) "GICRX_ICFGR3E"
#define device_bar_ODY_GICRX_ICFGR3E(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_GICRX_ICFGR3E(a) (a)
#define arguments_ODY_GICRX_ICFGR3E(a) (a), -1, -1, -1

/**
 * Register (NCB32b) gicr#_icpendr0
 *
 * GICR Icpendr0 Register
 * The GICR0_ICPENDR0 characteristics are:
 *
 * * Purpose
 * Removes the pending state from the corresponding SGI (IDs 0-15) or PPI (IDs 16-31).
 *
 * * Usage constraints
 * If GICD(A)_CTLR.DS==0, unless the GICR0_NSACR register permits Non-secure software
 * to control Group 0 and Secure Group 1 interrupts, any bits that correspond to Group
 * 0 or Secure Group 1 interrupts are accessible only by Secure accesses and are RAZ/WI
 * to Non-secure accesses.
 */
union ody_gicrx_icpendr0 {
	uint32_t u;
	struct ody_gicrx_icpendr0_s {
		uint32_t clear_pending_bit0          : 1;
		uint32_t clear_pending_bit1          : 1;
		uint32_t clear_pending_bit2          : 1;
		uint32_t clear_pending_bit3          : 1;
		uint32_t clear_pending_bit4          : 1;
		uint32_t clear_pending_bit5          : 1;
		uint32_t clear_pending_bit6          : 1;
		uint32_t clear_pending_bit7          : 1;
		uint32_t clear_pending_bit8          : 1;
		uint32_t clear_pending_bit9          : 1;
		uint32_t clear_pending_bit10         : 1;
		uint32_t clear_pending_bit11         : 1;
		uint32_t clear_pending_bit12         : 1;
		uint32_t clear_pending_bit13         : 1;
		uint32_t clear_pending_bit14         : 1;
		uint32_t clear_pending_bit15         : 1;
		uint32_t clear_pending_bit16         : 1;
		uint32_t clear_pending_bit17         : 1;
		uint32_t clear_pending_bit18         : 1;
		uint32_t clear_pending_bit19         : 1;
		uint32_t clear_pending_bit20         : 1;
		uint32_t clear_pending_bit21         : 1;
		uint32_t clear_pending_bit22         : 1;
		uint32_t clear_pending_bit23         : 1;
		uint32_t clear_pending_bit24         : 1;
		uint32_t clear_pending_bit25         : 1;
		uint32_t clear_pending_bit26         : 1;
		uint32_t clear_pending_bit27         : 1;
		uint32_t clear_pending_bit28         : 1;
		uint32_t clear_pending_bit29         : 1;
		uint32_t clear_pending_bit30         : 1;
		uint32_t clear_pending_bit31         : 1;
	} s;
	/* struct ody_gicrx_icpendr0_s cn; */
};
typedef union ody_gicrx_icpendr0 ody_gicrx_icpendr0_t;

static inline uint64_t ODY_GICRX_ICPENDR0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICRX_ICPENDR0(uint64_t a)
{
	if (a <= 81)
		return 0x801000090280ll + 0x40000ll * ((a) & 0x7f);
	__ody_csr_fatal("GICRX_ICPENDR0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GICRX_ICPENDR0(a) ody_gicrx_icpendr0_t
#define bustype_ODY_GICRX_ICPENDR0(a) CSR_TYPE_NCB32b
#define basename_ODY_GICRX_ICPENDR0(a) "GICRX_ICPENDR0"
#define device_bar_ODY_GICRX_ICPENDR0(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_GICRX_ICPENDR0(a) (a)
#define arguments_ODY_GICRX_ICPENDR0(a) (a), -1, -1, -1

/**
 * Register (NCB32b) gicr#_icpendr1e
 *
 * GICR Icpendr1e Register
 * The GICR0_ICPENDR1E characteristics are:
 *
 * * Purpose
 * Removes the pending state from the corresponding  extended range PPI.
 *
 * * Usage constraints
 * If GICD(A)_CTLR.DS==0, unless the GICR0_NSACR register permits Non-secure software
 * to control Group 0 and Secure Group 1 interrupts, any bits that correspond to Group
 * 0 or Secure Group 1 interrupts are accessible only by Secure accesses and are RAZ/WI
 * to Non-secure accesses.
 */
union ody_gicrx_icpendr1e {
	uint32_t u;
	struct ody_gicrx_icpendr1e_s {
		uint32_t clear_pending_bit0          : 1;
		uint32_t clear_pending_bit1          : 1;
		uint32_t clear_pending_bit2          : 1;
		uint32_t clear_pending_bit3          : 1;
		uint32_t clear_pending_bit4          : 1;
		uint32_t clear_pending_bit5          : 1;
		uint32_t clear_pending_bit6          : 1;
		uint32_t clear_pending_bit7          : 1;
		uint32_t clear_pending_bit8          : 1;
		uint32_t clear_pending_bit9          : 1;
		uint32_t clear_pending_bit10         : 1;
		uint32_t clear_pending_bit11         : 1;
		uint32_t clear_pending_bit12         : 1;
		uint32_t clear_pending_bit13         : 1;
		uint32_t clear_pending_bit14         : 1;
		uint32_t clear_pending_bit15         : 1;
		uint32_t clear_pending_bit16         : 1;
		uint32_t clear_pending_bit17         : 1;
		uint32_t clear_pending_bit18         : 1;
		uint32_t clear_pending_bit19         : 1;
		uint32_t clear_pending_bit20         : 1;
		uint32_t clear_pending_bit21         : 1;
		uint32_t clear_pending_bit22         : 1;
		uint32_t clear_pending_bit23         : 1;
		uint32_t clear_pending_bit24         : 1;
		uint32_t clear_pending_bit25         : 1;
		uint32_t clear_pending_bit26         : 1;
		uint32_t clear_pending_bit27         : 1;
		uint32_t clear_pending_bit28         : 1;
		uint32_t clear_pending_bit29         : 1;
		uint32_t clear_pending_bit30         : 1;
		uint32_t clear_pending_bit31         : 1;
	} s;
	/* struct ody_gicrx_icpendr1e_s cn; */
};
typedef union ody_gicrx_icpendr1e ody_gicrx_icpendr1e_t;

static inline uint64_t ODY_GICRX_ICPENDR1E(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICRX_ICPENDR1E(uint64_t a)
{
	if (a <= 81)
		return 0x801000090284ll + 0x40000ll * ((a) & 0x7f);
	__ody_csr_fatal("GICRX_ICPENDR1E", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GICRX_ICPENDR1E(a) ody_gicrx_icpendr1e_t
#define bustype_ODY_GICRX_ICPENDR1E(a) CSR_TYPE_NCB32b
#define basename_ODY_GICRX_ICPENDR1E(a) "GICRX_ICPENDR1E"
#define device_bar_ODY_GICRX_ICPENDR1E(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_GICRX_ICPENDR1E(a) (a)
#define arguments_ODY_GICRX_ICPENDR1E(a) (a), -1, -1, -1

/**
 * Register (NCB32b) gicr#_ierrvr
 *
 * GICR Ierrvr Register
 * The GICR0_IERRVR characteristics are:
 *
 * This register is also referred to as GICR0_ICDERRR.
 *
 * * Purpose
 *
 * This register indicates that SGI programming has been corrupted in the SGI RAM in the distributor.
 * Software can use this register to acknowledge the error and enable reprogramming of
 * the affected SGIs
 *
 * * Usage constraints
 * Only accessible by Secure accesses or when GICD(A)_DS.DS === 1
 */
union ody_gicrx_ierrvr {
	uint32_t u;
	struct ody_gicrx_ierrvr_s {
		uint32_t valid_bit0                  : 1;
		uint32_t valid_bit1                  : 1;
		uint32_t valid_bit2                  : 1;
		uint32_t valid_bit3                  : 1;
		uint32_t valid_bit4                  : 1;
		uint32_t valid_bit5                  : 1;
		uint32_t valid_bit6                  : 1;
		uint32_t valid_bit7                  : 1;
		uint32_t valid_bit8                  : 1;
		uint32_t valid_bit9                  : 1;
		uint32_t valid_bit10                 : 1;
		uint32_t valid_bit11                 : 1;
		uint32_t valid_bit12                 : 1;
		uint32_t valid_bit13                 : 1;
		uint32_t valid_bit14                 : 1;
		uint32_t valid_bit15                 : 1;
		uint32_t valid_bit16                 : 1;
		uint32_t valid_bit17                 : 1;
		uint32_t valid_bit18                 : 1;
		uint32_t valid_bit19                 : 1;
		uint32_t valid_bit20                 : 1;
		uint32_t valid_bit21                 : 1;
		uint32_t valid_bit22                 : 1;
		uint32_t valid_bit23                 : 1;
		uint32_t valid_bit24                 : 1;
		uint32_t valid_bit25                 : 1;
		uint32_t valid_bit26                 : 1;
		uint32_t valid_bit27                 : 1;
		uint32_t valid_bit28                 : 1;
		uint32_t valid_bit29                 : 1;
		uint32_t valid_bit30                 : 1;
		uint32_t valid_bit31                 : 1;
	} s;
	/* struct ody_gicrx_ierrvr_s cn; */
};
typedef union ody_gicrx_ierrvr ody_gicrx_ierrvr_t;

static inline uint64_t ODY_GICRX_IERRVR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICRX_IERRVR(uint64_t a)
{
	if (a <= 81)
		return 0x80100009c008ll + 0x40000ll * ((a) & 0x7f);
	__ody_csr_fatal("GICRX_IERRVR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GICRX_IERRVR(a) ody_gicrx_ierrvr_t
#define bustype_ODY_GICRX_IERRVR(a) CSR_TYPE_NCB32b
#define basename_ODY_GICRX_IERRVR(a) "GICRX_IERRVR"
#define device_bar_ODY_GICRX_IERRVR(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_GICRX_IERRVR(a) (a)
#define arguments_ODY_GICRX_IERRVR(a) (a), -1, -1, -1

/**
 * Register (NCB32b) gicr#_igroupr0
 *
 * GICR Igroupr0 Register
 * The GICR0_IGROUPR0 characteristics are:
 *
 * * Purpose
 * Controls whether the corresponding SGI (IDs 0-15) or PPI (16-31) is in Group 0 or Group 1.
 *
 * * Usage constraints
 * When GICD_CTLR.DS == 0, the register is RAZ/WI to Non-secure accesses.
 */
union ody_gicrx_igroupr0 {
	uint32_t u;
	struct ody_gicrx_igroupr0_s {
		uint32_t group_status_bit0           : 1;
		uint32_t group_status_bit1           : 1;
		uint32_t group_status_bit2           : 1;
		uint32_t group_status_bit3           : 1;
		uint32_t group_status_bit4           : 1;
		uint32_t group_status_bit5           : 1;
		uint32_t group_status_bit6           : 1;
		uint32_t group_status_bit7           : 1;
		uint32_t group_status_bit8           : 1;
		uint32_t group_status_bit9           : 1;
		uint32_t group_status_bit10          : 1;
		uint32_t group_status_bit11          : 1;
		uint32_t group_status_bit12          : 1;
		uint32_t group_status_bit13          : 1;
		uint32_t group_status_bit14          : 1;
		uint32_t group_status_bit15          : 1;
		uint32_t group_status_bit16          : 1;
		uint32_t group_status_bit17          : 1;
		uint32_t group_status_bit18          : 1;
		uint32_t group_status_bit19          : 1;
		uint32_t group_status_bit20          : 1;
		uint32_t group_status_bit21          : 1;
		uint32_t group_status_bit22          : 1;
		uint32_t group_status_bit23          : 1;
		uint32_t group_status_bit24          : 1;
		uint32_t group_status_bit25          : 1;
		uint32_t group_status_bit26          : 1;
		uint32_t group_status_bit27          : 1;
		uint32_t group_status_bit28          : 1;
		uint32_t group_status_bit29          : 1;
		uint32_t group_status_bit30          : 1;
		uint32_t group_status_bit31          : 1;
	} s;
	/* struct ody_gicrx_igroupr0_s cn; */
};
typedef union ody_gicrx_igroupr0 ody_gicrx_igroupr0_t;

static inline uint64_t ODY_GICRX_IGROUPR0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICRX_IGROUPR0(uint64_t a)
{
	if (a <= 81)
		return 0x801000090080ll + 0x40000ll * ((a) & 0x7f);
	__ody_csr_fatal("GICRX_IGROUPR0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GICRX_IGROUPR0(a) ody_gicrx_igroupr0_t
#define bustype_ODY_GICRX_IGROUPR0(a) CSR_TYPE_NCB32b
#define basename_ODY_GICRX_IGROUPR0(a) "GICRX_IGROUPR0"
#define device_bar_ODY_GICRX_IGROUPR0(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_GICRX_IGROUPR0(a) (a)
#define arguments_ODY_GICRX_IGROUPR0(a) (a), -1, -1, -1

/**
 * Register (NCB32b) gicr#_igroupr1e
 *
 * GICR Igroupr1e Register
 * The GICR0_IGROUPR1E characteristics are:
 *
 * * Purpose
 * Controls whether the corresponding extended range PPI is in Group 0 or Group 1.
 *
 * * Usage constraints
 * When GICD_CTLR.DS == 0, the register is RAZ/WI to Non-secure accesses.
 */
union ody_gicrx_igroupr1e {
	uint32_t u;
	struct ody_gicrx_igroupr1e_s {
		uint32_t group_status_bit0           : 1;
		uint32_t group_status_bit1           : 1;
		uint32_t group_status_bit2           : 1;
		uint32_t group_status_bit3           : 1;
		uint32_t group_status_bit4           : 1;
		uint32_t group_status_bit5           : 1;
		uint32_t group_status_bit6           : 1;
		uint32_t group_status_bit7           : 1;
		uint32_t group_status_bit8           : 1;
		uint32_t group_status_bit9           : 1;
		uint32_t group_status_bit10          : 1;
		uint32_t group_status_bit11          : 1;
		uint32_t group_status_bit12          : 1;
		uint32_t group_status_bit13          : 1;
		uint32_t group_status_bit14          : 1;
		uint32_t group_status_bit15          : 1;
		uint32_t group_status_bit16          : 1;
		uint32_t group_status_bit17          : 1;
		uint32_t group_status_bit18          : 1;
		uint32_t group_status_bit19          : 1;
		uint32_t group_status_bit20          : 1;
		uint32_t group_status_bit21          : 1;
		uint32_t group_status_bit22          : 1;
		uint32_t group_status_bit23          : 1;
		uint32_t group_status_bit24          : 1;
		uint32_t group_status_bit25          : 1;
		uint32_t group_status_bit26          : 1;
		uint32_t group_status_bit27          : 1;
		uint32_t group_status_bit28          : 1;
		uint32_t group_status_bit29          : 1;
		uint32_t group_status_bit30          : 1;
		uint32_t group_status_bit31          : 1;
	} s;
	/* struct ody_gicrx_igroupr1e_s cn; */
};
typedef union ody_gicrx_igroupr1e ody_gicrx_igroupr1e_t;

static inline uint64_t ODY_GICRX_IGROUPR1E(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICRX_IGROUPR1E(uint64_t a)
{
	if (a <= 81)
		return 0x801000090084ll + 0x40000ll * ((a) & 0x7f);
	__ody_csr_fatal("GICRX_IGROUPR1E", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GICRX_IGROUPR1E(a) ody_gicrx_igroupr1e_t
#define bustype_ODY_GICRX_IGROUPR1E(a) CSR_TYPE_NCB32b
#define basename_ODY_GICRX_IGROUPR1E(a) "GICRX_IGROUPR1E"
#define device_bar_ODY_GICRX_IGROUPR1E(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_GICRX_IGROUPR1E(a) (a)
#define arguments_ODY_GICRX_IGROUPR1E(a) (a), -1, -1, -1

/**
 * Register (NCB32b) gicr#_igrpmodr0
 *
 * GICR Igrpmodr0 Register
 * The GICR0_IGRPMODR0 characteristics are:
 *
 * * Purpose
 * When GICD_CTLR.DS==0, this register together with the GICR0_IGROUPR0 register, controls
 * whether the corresponding interrupt is in:
 *
 * * Secure Group 0.
 * * Non-secure Group 1.
 * * Secure Group 1.
 *
 * * Usage constraints
 *
 * When GICD(A)_CTLR.DS==0, the register is RAZ/WI to Non-secure accesses.
 * When GICD(A)_CTLR.DS==1, the GICR0_IGRPMODR registers are RAZ/WI.
 */
union ody_gicrx_igrpmodr0 {
	uint32_t u;
	struct ody_gicrx_igrpmodr0_s {
		uint32_t group_modifier_bit0         : 1;
		uint32_t group_modifier_bit1         : 1;
		uint32_t group_modifier_bit2         : 1;
		uint32_t group_modifier_bit3         : 1;
		uint32_t group_modifier_bit4         : 1;
		uint32_t group_modifier_bit5         : 1;
		uint32_t group_modifier_bit6         : 1;
		uint32_t group_modifier_bit7         : 1;
		uint32_t group_modifier_bit8         : 1;
		uint32_t group_modifier_bit9         : 1;
		uint32_t group_modifier_bit10        : 1;
		uint32_t group_modifier_bit11        : 1;
		uint32_t group_modifier_bit12        : 1;
		uint32_t group_modifier_bit13        : 1;
		uint32_t group_modifier_bit14        : 1;
		uint32_t group_modifier_bit15        : 1;
		uint32_t group_modifier_bit16        : 1;
		uint32_t group_modifier_bit17        : 1;
		uint32_t group_modifier_bit18        : 1;
		uint32_t group_modifier_bit19        : 1;
		uint32_t group_modifier_bit20        : 1;
		uint32_t group_modifier_bit21        : 1;
		uint32_t group_modifier_bit22        : 1;
		uint32_t group_modifier_bit23        : 1;
		uint32_t group_modifier_bit24        : 1;
		uint32_t group_modifier_bit25        : 1;
		uint32_t group_modifier_bit26        : 1;
		uint32_t group_modifier_bit27        : 1;
		uint32_t group_modifier_bit28        : 1;
		uint32_t group_modifier_bit29        : 1;
		uint32_t group_modifier_bit30        : 1;
		uint32_t group_modifier_bit31        : 1;
	} s;
	/* struct ody_gicrx_igrpmodr0_s cn; */
};
typedef union ody_gicrx_igrpmodr0 ody_gicrx_igrpmodr0_t;

static inline uint64_t ODY_GICRX_IGRPMODR0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICRX_IGRPMODR0(uint64_t a)
{
	if (a <= 81)
		return 0x801000090d00ll + 0x40000ll * ((a) & 0x7f);
	__ody_csr_fatal("GICRX_IGRPMODR0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GICRX_IGRPMODR0(a) ody_gicrx_igrpmodr0_t
#define bustype_ODY_GICRX_IGRPMODR0(a) CSR_TYPE_NCB32b
#define basename_ODY_GICRX_IGRPMODR0(a) "GICRX_IGRPMODR0"
#define device_bar_ODY_GICRX_IGRPMODR0(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_GICRX_IGRPMODR0(a) (a)
#define arguments_ODY_GICRX_IGRPMODR0(a) (a), -1, -1, -1

/**
 * Register (NCB32b) gicr#_igrpmodr1e
 *
 * GICR Igrpmodr1e Register
 * The GICR0_IGRPMODR1E characteristics are:
 *
 * * Purpose
 * When GICD_CTLR.DS==0, this register together with the GICR0_IGROUPR1E register, controls
 * whether the corresponding interrupt is in:
 *
 * * Secure Group 0.
 * * Non-secure Group 1.
 * * When System register access is enabled, Secure Group 1.
 *
 * * Usage constraints
 *
 * When GICD(A)_CTLR.DS==0, the register is RAZ/WI to Non-secure accesses.
 * When GICD(A)_CTLR.DS==1, the GICR0_IGRPMODR registers are RAZ/WI.
 */
union ody_gicrx_igrpmodr1e {
	uint32_t u;
	struct ody_gicrx_igrpmodr1e_s {
		uint32_t group_modifier_bit0         : 1;
		uint32_t group_modifier_bit1         : 1;
		uint32_t group_modifier_bit2         : 1;
		uint32_t group_modifier_bit3         : 1;
		uint32_t group_modifier_bit4         : 1;
		uint32_t group_modifier_bit5         : 1;
		uint32_t group_modifier_bit6         : 1;
		uint32_t group_modifier_bit7         : 1;
		uint32_t group_modifier_bit8         : 1;
		uint32_t group_modifier_bit9         : 1;
		uint32_t group_modifier_bit10        : 1;
		uint32_t group_modifier_bit11        : 1;
		uint32_t group_modifier_bit12        : 1;
		uint32_t group_modifier_bit13        : 1;
		uint32_t group_modifier_bit14        : 1;
		uint32_t group_modifier_bit15        : 1;
		uint32_t group_modifier_bit16        : 1;
		uint32_t group_modifier_bit17        : 1;
		uint32_t group_modifier_bit18        : 1;
		uint32_t group_modifier_bit19        : 1;
		uint32_t group_modifier_bit20        : 1;
		uint32_t group_modifier_bit21        : 1;
		uint32_t group_modifier_bit22        : 1;
		uint32_t group_modifier_bit23        : 1;
		uint32_t group_modifier_bit24        : 1;
		uint32_t group_modifier_bit25        : 1;
		uint32_t group_modifier_bit26        : 1;
		uint32_t group_modifier_bit27        : 1;
		uint32_t group_modifier_bit28        : 1;
		uint32_t group_modifier_bit29        : 1;
		uint32_t group_modifier_bit30        : 1;
		uint32_t group_modifier_bit31        : 1;
	} s;
	/* struct ody_gicrx_igrpmodr1e_s cn; */
};
typedef union ody_gicrx_igrpmodr1e ody_gicrx_igrpmodr1e_t;

static inline uint64_t ODY_GICRX_IGRPMODR1E(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICRX_IGRPMODR1E(uint64_t a)
{
	if (a <= 81)
		return 0x801000090d04ll + 0x40000ll * ((a) & 0x7f);
	__ody_csr_fatal("GICRX_IGRPMODR1E", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GICRX_IGRPMODR1E(a) ody_gicrx_igrpmodr1e_t
#define bustype_ODY_GICRX_IGRPMODR1E(a) CSR_TYPE_NCB32b
#define basename_ODY_GICRX_IGRPMODR1E(a) "GICRX_IGRPMODR1E"
#define device_bar_ODY_GICRX_IGRPMODR1E(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_GICRX_IGRPMODR1E(a) (a)
#define arguments_ODY_GICRX_IGRPMODR1E(a) (a), -1, -1, -1

/**
 * Register (NCB32b) gicr#_iidr
 *
 * GICR Iidr Register
 * The GICR0_IIDR characteristics are:
 *
 * * Purpose
 * Provides information about the implementer and revision of the Redistributor.
 *
 * * Usage constraints
 * There are no usage constraints.
 */
union ody_gicrx_iidr {
	uint32_t u;
	struct ody_gicrx_iidr_s {
		uint32_t implementer                 : 12;
		uint32_t revision                    : 4;
		uint32_t variant                     : 4;
		uint32_t reserved_20_23              : 4;
		uint32_t productid                   : 8;
	} s;
	/* struct ody_gicrx_iidr_s cn; */
};
typedef union ody_gicrx_iidr ody_gicrx_iidr_t;

static inline uint64_t ODY_GICRX_IIDR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICRX_IIDR(uint64_t a)
{
	if (a <= 81)
		return 0x801000080004ll + 0x40000ll * ((a) & 0x7f);
	__ody_csr_fatal("GICRX_IIDR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GICRX_IIDR(a) ody_gicrx_iidr_t
#define bustype_ODY_GICRX_IIDR(a) CSR_TYPE_NCB32b
#define basename_ODY_GICRX_IIDR(a) "GICRX_IIDR"
#define device_bar_ODY_GICRX_IIDR(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_GICRX_IIDR(a) (a)
#define arguments_ODY_GICRX_IIDR(a) (a), -1, -1, -1

/**
 * Register (NCB) gicr#_invallr
 *
 * GICR Invallr Register
 * The GICRR0_INVALLR characteristics are:
 *
 * * Purpose
 * Invalidates the cached configuration data of all Physical or Virtual LPIs on a PE or vPE
 *
 * * Usage constraints
 * When written with a 32-bit write to the lower half, the data is zero-extended to 64 bits.
 * 32-bit accesses to the upper half are not supported.
 *
 * A copy of this register is provided for each Redistributor.
 */
union ody_gicrx_invallr {
	uint64_t u;
	struct ody_gicrx_invallr_s {
		uint64_t reserved_0_31               : 32;
		uint64_t vpeid                       : 16;
		uint64_t reserved_48_62              : 15;
		uint64_t v                           : 1;
	} s;
	/* struct ody_gicrx_invallr_s cn; */
};
typedef union ody_gicrx_invallr ody_gicrx_invallr_t;

static inline uint64_t ODY_GICRX_INVALLR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICRX_INVALLR(uint64_t a)
{
	if (a <= 81)
		return 0x8010000800b0ll + 0x40000ll * ((a) & 0x7f);
	__ody_csr_fatal("GICRX_INVALLR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GICRX_INVALLR(a) ody_gicrx_invallr_t
#define bustype_ODY_GICRX_INVALLR(a) CSR_TYPE_NCB
#define basename_ODY_GICRX_INVALLR(a) "GICRX_INVALLR"
#define device_bar_ODY_GICRX_INVALLR(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_GICRX_INVALLR(a) (a)
#define arguments_ODY_GICRX_INVALLR(a) (a), -1, -1, -1

/**
 * Register (NCB) gicr#_invlpir
 *
 * GICR Invlpir Register
 * The GICR0_INVLPIR characteristics are:
 *
 * * Purpose
 * Invalidates the cached configuration data of a specified LPI
 *
 * * Usage constraints
 * When written with a 32-bit write to the lower half, the data is zero-extended to 64 bits.
 * 32-bit accesses to the upper half are not supported.
 *
 * A copy of this register is provided for each Redistributor.
 */
union ody_gicrx_invlpir {
	uint64_t u;
	struct ody_gicrx_invlpir_s {
		uint64_t intid                       : 32;
		uint64_t vpeid                       : 16;
		uint64_t reserved_48_62              : 15;
		uint64_t v                           : 1;
	} s;
	/* struct ody_gicrx_invlpir_s cn; */
};
typedef union ody_gicrx_invlpir ody_gicrx_invlpir_t;

static inline uint64_t ODY_GICRX_INVLPIR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICRX_INVLPIR(uint64_t a)
{
	if (a <= 81)
		return 0x8010000800a0ll + 0x40000ll * ((a) & 0x7f);
	__ody_csr_fatal("GICRX_INVLPIR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GICRX_INVLPIR(a) ody_gicrx_invlpir_t
#define bustype_ODY_GICRX_INVLPIR(a) CSR_TYPE_NCB
#define basename_ODY_GICRX_INVLPIR(a) "GICRX_INVLPIR"
#define device_bar_ODY_GICRX_INVLPIR(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_GICRX_INVLPIR(a) (a)
#define arguments_ODY_GICRX_INVLPIR(a) (a), -1, -1, -1

/**
 * Register (NCB32b) gicr#_ipriorityr10e
 *
 * GICR Ipriorityr10e Register
 * The GICR0_IPRIORITYR10E characteristics are:
 *
 * * Purpose
 * Holds the priority of the corresponding interrupt for extended range PPI IDs 1064-1067.
 *
 * * Usage constraints
 * When GICD(A)_CTLR.DS==0 a register bit that corresponds to a Group 0 or Secure Group
 * 1 interrupt is RAZ/WI to Non-secure accesses.
 *
 * These registers are byte-accessible.
 *
 * The GIC implements 5 bits of priority and in each field, unimplemented bits are RAZ/WI.
 */
union ody_gicrx_ipriorityr10e {
	uint32_t u;
	struct ody_gicrx_ipriorityr10e_s {
		uint32_t offset0                     : 8;
		uint32_t offset1                     : 8;
		uint32_t offset2                     : 8;
		uint32_t offset3                     : 8;
	} s;
	/* struct ody_gicrx_ipriorityr10e_s cn; */
};
typedef union ody_gicrx_ipriorityr10e ody_gicrx_ipriorityr10e_t;

static inline uint64_t ODY_GICRX_IPRIORITYR10E(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICRX_IPRIORITYR10E(uint64_t a)
{
	if (a <= 81)
		return 0x801000090428ll + 0x40000ll * ((a) & 0x7f);
	__ody_csr_fatal("GICRX_IPRIORITYR10E", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GICRX_IPRIORITYR10E(a) ody_gicrx_ipriorityr10e_t
#define bustype_ODY_GICRX_IPRIORITYR10E(a) CSR_TYPE_NCB32b
#define basename_ODY_GICRX_IPRIORITYR10E(a) "GICRX_IPRIORITYR10E"
#define device_bar_ODY_GICRX_IPRIORITYR10E(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_GICRX_IPRIORITYR10E(a) (a)
#define arguments_ODY_GICRX_IPRIORITYR10E(a) (a), -1, -1, -1

/**
 * Register (NCB32b) gicr#_ipriorityr11e
 *
 * GICR Ipriorityr11e Register
 * The GICR0_IPRIORITYR11E characteristics are:
 *
 * * Purpose
 * Holds the priority of the corresponding interrupt for extended range PPI IDs 1068-1071.
 *
 * * Usage constraints
 * When GICD(A)_CTLR.DS==0 a register bit that corresponds to a Group 0 or Secure Group
 * 1 interrupt is RAZ/WI to Non-secure accesses.
 *
 * These registers are byte-accessible.
 *
 * The GIC implements 5 bits of priority and in each field, unimplemented bits are RAZ/WI.
 */
union ody_gicrx_ipriorityr11e {
	uint32_t u;
	struct ody_gicrx_ipriorityr11e_s {
		uint32_t offset0                     : 8;
		uint32_t offset1                     : 8;
		uint32_t offset2                     : 8;
		uint32_t offset3                     : 8;
	} s;
	/* struct ody_gicrx_ipriorityr11e_s cn; */
};
typedef union ody_gicrx_ipriorityr11e ody_gicrx_ipriorityr11e_t;

static inline uint64_t ODY_GICRX_IPRIORITYR11E(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICRX_IPRIORITYR11E(uint64_t a)
{
	if (a <= 81)
		return 0x80100009042cll + 0x40000ll * ((a) & 0x7f);
	__ody_csr_fatal("GICRX_IPRIORITYR11E", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GICRX_IPRIORITYR11E(a) ody_gicrx_ipriorityr11e_t
#define bustype_ODY_GICRX_IPRIORITYR11E(a) CSR_TYPE_NCB32b
#define basename_ODY_GICRX_IPRIORITYR11E(a) "GICRX_IPRIORITYR11E"
#define device_bar_ODY_GICRX_IPRIORITYR11E(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_GICRX_IPRIORITYR11E(a) (a)
#define arguments_ODY_GICRX_IPRIORITYR11E(a) (a), -1, -1, -1

/**
 * Register (NCB32b) gicr#_ipriorityr12e
 *
 * GICR Ipriorityr12e Register
 * The GICR0_IPRIORITYR12E characteristics are:
 *
 * * Purpose
 *
 * Holds the priority of the corresponding interrupt for extended range PPI IDs 1072-1075.
 *
 * * Usage constraints
 * When GICD(A)_CTLR.DS==0 a register bit that corresponds to a Group 0 or Secure Group
 * 1 interrupt is RAZ/WI to Non-secure accesses.
 *
 * These registers are byte-accessible.
 *
 * The GIC implements 5 bits of priority and in each field, unimplemented bits are RAZ/WI.
 */
union ody_gicrx_ipriorityr12e {
	uint32_t u;
	struct ody_gicrx_ipriorityr12e_s {
		uint32_t offset0                     : 8;
		uint32_t offset1                     : 8;
		uint32_t offset2                     : 8;
		uint32_t offset3                     : 8;
	} s;
	/* struct ody_gicrx_ipriorityr12e_s cn; */
};
typedef union ody_gicrx_ipriorityr12e ody_gicrx_ipriorityr12e_t;

static inline uint64_t ODY_GICRX_IPRIORITYR12E(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICRX_IPRIORITYR12E(uint64_t a)
{
	if (a <= 81)
		return 0x801000090430ll + 0x40000ll * ((a) & 0x7f);
	__ody_csr_fatal("GICRX_IPRIORITYR12E", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GICRX_IPRIORITYR12E(a) ody_gicrx_ipriorityr12e_t
#define bustype_ODY_GICRX_IPRIORITYR12E(a) CSR_TYPE_NCB32b
#define basename_ODY_GICRX_IPRIORITYR12E(a) "GICRX_IPRIORITYR12E"
#define device_bar_ODY_GICRX_IPRIORITYR12E(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_GICRX_IPRIORITYR12E(a) (a)
#define arguments_ODY_GICRX_IPRIORITYR12E(a) (a), -1, -1, -1

/**
 * Register (NCB32b) gicr#_ipriorityr13e
 *
 * GICR Ipriorityr13e Register
 * The GICR0_IPRIORITYR13E characteristics are:
 *
 * * Purpose
 *
 * Holds the priority of the corresponding interrupt for extended range PPI IDs 1076-1079.
 *
 * * Usage constraints
 * When GICD(A)_CTLR.DS==0 a register bit that corresponds to a Group 0 or Secure Group
 * 1 interrupt is RAZ/WI to Non-secure accesses.
 *
 * These registers are byte-accessible.
 *
 * The GIC implements 5 bits of priority and in each field, unimplemented bits are RAZ/WI.
 */
union ody_gicrx_ipriorityr13e {
	uint32_t u;
	struct ody_gicrx_ipriorityr13e_s {
		uint32_t offset0                     : 8;
		uint32_t offset1                     : 8;
		uint32_t offset2                     : 8;
		uint32_t offset3                     : 8;
	} s;
	/* struct ody_gicrx_ipriorityr13e_s cn; */
};
typedef union ody_gicrx_ipriorityr13e ody_gicrx_ipriorityr13e_t;

static inline uint64_t ODY_GICRX_IPRIORITYR13E(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICRX_IPRIORITYR13E(uint64_t a)
{
	if (a <= 81)
		return 0x801000090434ll + 0x40000ll * ((a) & 0x7f);
	__ody_csr_fatal("GICRX_IPRIORITYR13E", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GICRX_IPRIORITYR13E(a) ody_gicrx_ipriorityr13e_t
#define bustype_ODY_GICRX_IPRIORITYR13E(a) CSR_TYPE_NCB32b
#define basename_ODY_GICRX_IPRIORITYR13E(a) "GICRX_IPRIORITYR13E"
#define device_bar_ODY_GICRX_IPRIORITYR13E(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_GICRX_IPRIORITYR13E(a) (a)
#define arguments_ODY_GICRX_IPRIORITYR13E(a) (a), -1, -1, -1

/**
 * Register (NCB32b) gicr#_ipriorityr14e
 *
 * GICR Ipriorityr14e Register
 * The GICR0_IPRIORITYR14E characteristics are:
 *
 * * Purpose
 *
 * Holds the priority of the corresponding interrupt for extended range PPI IDs 1080-1083.
 *
 * * Usage constraints
 * When GICD(A)_CTLR.DS==0 a register bit that corresponds to a Group 0 or Secure Group
 * 1 interrupt is RAZ/WI to Non-secure accesses.
 *
 * These registers are byte-accessible.
 *
 * The GIC implements 5 bits of priority and in each field, unimplemented bits are RAZ/WI.
 */
union ody_gicrx_ipriorityr14e {
	uint32_t u;
	struct ody_gicrx_ipriorityr14e_s {
		uint32_t offset0                     : 8;
		uint32_t offset1                     : 8;
		uint32_t offset2                     : 8;
		uint32_t offset3                     : 8;
	} s;
	/* struct ody_gicrx_ipriorityr14e_s cn; */
};
typedef union ody_gicrx_ipriorityr14e ody_gicrx_ipriorityr14e_t;

static inline uint64_t ODY_GICRX_IPRIORITYR14E(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICRX_IPRIORITYR14E(uint64_t a)
{
	if (a <= 81)
		return 0x801000090438ll + 0x40000ll * ((a) & 0x7f);
	__ody_csr_fatal("GICRX_IPRIORITYR14E", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GICRX_IPRIORITYR14E(a) ody_gicrx_ipriorityr14e_t
#define bustype_ODY_GICRX_IPRIORITYR14E(a) CSR_TYPE_NCB32b
#define basename_ODY_GICRX_IPRIORITYR14E(a) "GICRX_IPRIORITYR14E"
#define device_bar_ODY_GICRX_IPRIORITYR14E(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_GICRX_IPRIORITYR14E(a) (a)
#define arguments_ODY_GICRX_IPRIORITYR14E(a) (a), -1, -1, -1

/**
 * Register (NCB32b) gicr#_ipriorityr15e
 *
 * GICR Ipriorityr15e Register
 * The GICR0_IPRIORITYR15E characteristics are:
 *
 * * Purpose
 *
 * Holds the priority of the corresponding interrupt for extended range PPI IDs 1084-1087.
 *
 * * Usage constraints
 * When GICD(A)_CTLR.DS==0 a register bit that corresponds to a Group 0 or Secure Group
 * 1 interrupt is RAZ/WI to Non-secure accesses.
 *
 * These registers are byte-accessible.
 *
 * The GIC implements 5 bits of priority and in each field, unimplemented bits are RAZ/WI.
 */
union ody_gicrx_ipriorityr15e {
	uint32_t u;
	struct ody_gicrx_ipriorityr15e_s {
		uint32_t offset0                     : 8;
		uint32_t offset1                     : 8;
		uint32_t offset2                     : 8;
		uint32_t offset3                     : 8;
	} s;
	/* struct ody_gicrx_ipriorityr15e_s cn; */
};
typedef union ody_gicrx_ipriorityr15e ody_gicrx_ipriorityr15e_t;

static inline uint64_t ODY_GICRX_IPRIORITYR15E(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICRX_IPRIORITYR15E(uint64_t a)
{
	if (a <= 81)
		return 0x80100009043cll + 0x40000ll * ((a) & 0x7f);
	__ody_csr_fatal("GICRX_IPRIORITYR15E", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GICRX_IPRIORITYR15E(a) ody_gicrx_ipriorityr15e_t
#define bustype_ODY_GICRX_IPRIORITYR15E(a) CSR_TYPE_NCB32b
#define basename_ODY_GICRX_IPRIORITYR15E(a) "GICRX_IPRIORITYR15E"
#define device_bar_ODY_GICRX_IPRIORITYR15E(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_GICRX_IPRIORITYR15E(a) (a)
#define arguments_ODY_GICRX_IPRIORITYR15E(a) (a), -1, -1, -1

/**
 * Register (NCB32b) gicr#_ipriorityr8e
 *
 * GICR Ipriorityr8e Register
 * The GICR0_IPRIORITYR8E characteristics are:
 *
 * * Purpose
 * Holds the priority of the corresponding interrupt for extended range PPI IDs 1056-1059.
 *
 * * Usage constraints
 * When GICD(A)_CTLR.DS==0 a register bit that corresponds to a Group 0 or Secure Group
 * 1 interrupt is RAZ/WI to Non-secure accesses.
 *
 * These registers are byte-accessible.
 *
 * The GIC implements 5 bits of priority and in each field, unimplemented bits are RAZ/WI.
 */
union ody_gicrx_ipriorityr8e {
	uint32_t u;
	struct ody_gicrx_ipriorityr8e_s {
		uint32_t offset0                     : 8;
		uint32_t offset1                     : 8;
		uint32_t offset2                     : 8;
		uint32_t offset3                     : 8;
	} s;
	/* struct ody_gicrx_ipriorityr8e_s cn; */
};
typedef union ody_gicrx_ipriorityr8e ody_gicrx_ipriorityr8e_t;

static inline uint64_t ODY_GICRX_IPRIORITYR8E(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICRX_IPRIORITYR8E(uint64_t a)
{
	if (a <= 81)
		return 0x801000090420ll + 0x40000ll * ((a) & 0x7f);
	__ody_csr_fatal("GICRX_IPRIORITYR8E", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GICRX_IPRIORITYR8E(a) ody_gicrx_ipriorityr8e_t
#define bustype_ODY_GICRX_IPRIORITYR8E(a) CSR_TYPE_NCB32b
#define basename_ODY_GICRX_IPRIORITYR8E(a) "GICRX_IPRIORITYR8E"
#define device_bar_ODY_GICRX_IPRIORITYR8E(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_GICRX_IPRIORITYR8E(a) (a)
#define arguments_ODY_GICRX_IPRIORITYR8E(a) (a), -1, -1, -1

/**
 * Register (NCB32b) gicr#_ipriorityr9e
 *
 * GICR Ipriorityr9e Register
 * The GICR0_IPRIORITYR9E characteristics are:
 *
 * * Purpose
 * Holds the priority of the corresponding interrupt for extended range PPI IDs 1060-1063.
 *
 * * Usage constraints
 * When GICD(A)_CTLR.DS==0 a register bit that corresponds to a Group 0 or Secure Group
 * 1 interrupt is RAZ/WI to Non-secure accesses.
 *
 * These registers are byte-accessible.
 *
 * The GIC implements 5 bits of priority and in each field, unimplemented bits are RAZ/WI.
 */
union ody_gicrx_ipriorityr9e {
	uint32_t u;
	struct ody_gicrx_ipriorityr9e_s {
		uint32_t offset0                     : 8;
		uint32_t offset1                     : 8;
		uint32_t offset2                     : 8;
		uint32_t offset3                     : 8;
	} s;
	/* struct ody_gicrx_ipriorityr9e_s cn; */
};
typedef union ody_gicrx_ipriorityr9e ody_gicrx_ipriorityr9e_t;

static inline uint64_t ODY_GICRX_IPRIORITYR9E(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICRX_IPRIORITYR9E(uint64_t a)
{
	if (a <= 81)
		return 0x801000090424ll + 0x40000ll * ((a) & 0x7f);
	__ody_csr_fatal("GICRX_IPRIORITYR9E", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GICRX_IPRIORITYR9E(a) ody_gicrx_ipriorityr9e_t
#define bustype_ODY_GICRX_IPRIORITYR9E(a) CSR_TYPE_NCB32b
#define basename_ODY_GICRX_IPRIORITYR9E(a) "GICRX_IPRIORITYR9E"
#define device_bar_ODY_GICRX_IPRIORITYR9E(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_GICRX_IPRIORITYR9E(a) (a)
#define arguments_ODY_GICRX_IPRIORITYR9E(a) (a), -1, -1, -1

/**
 * Register (NCB32b) gicr#_ipriorityr_0
 *
 * GICR Ipriorityr0 Register
 * The GICR0_IPRIORITYR0 characteristics are:
 *
 * * Purpose
 * Holds the priority of the corresponding interrupt for SGIs 0-3.
 *
 * * Usage constraints
 * When GICD(A)_CTLR.DS==0 a register bit that corresponds to a Group 0 or Secure Group
 * 1 interrupt is RAZ/WI to Non-secure accesses.
 *
 * These registers are byte-accessible.
 *
 * The GIC implements 5 bits of priority and in each field, unimplemented bits are RAZ/WI.
 */
union ody_gicrx_ipriorityr_0 {
	uint32_t u;
	struct ody_gicrx_ipriorityr_0_s {
		uint32_t offset0                     : 8;
		uint32_t offset1                     : 8;
		uint32_t offset2                     : 8;
		uint32_t offset3                     : 8;
	} s;
	/* struct ody_gicrx_ipriorityr_0_s cn; */
};
typedef union ody_gicrx_ipriorityr_0 ody_gicrx_ipriorityr_0_t;

static inline uint64_t ODY_GICRX_IPRIORITYR_0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICRX_IPRIORITYR_0(uint64_t a)
{
	if (a <= 81)
		return 0x801000090400ll + 0x40000ll * ((a) & 0x7f);
	__ody_csr_fatal("GICRX_IPRIORITYR_0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GICRX_IPRIORITYR_0(a) ody_gicrx_ipriorityr_0_t
#define bustype_ODY_GICRX_IPRIORITYR_0(a) CSR_TYPE_NCB32b
#define basename_ODY_GICRX_IPRIORITYR_0(a) "GICRX_IPRIORITYR_0"
#define device_bar_ODY_GICRX_IPRIORITYR_0(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_GICRX_IPRIORITYR_0(a) (a)
#define arguments_ODY_GICRX_IPRIORITYR_0(a) (a), -1, -1, -1

/**
 * Register (NCB32b) gicr#_ipriorityr_1
 *
 * GICR Ipriorityr1 Register
 * The GICR0_IPRIORITYR1 characteristics are:
 *
 * * Purpose
 * Holds the priority of the corresponding interrupt for SGIs 4-7.
 *
 * * Usage constraints
 * When GICD(A)_CTLR.DS==0 a register bit that corresponds to a Group 0 or Secure Group
 * 1 interrupt is RAZ/WI to Non-secure accesses.
 *
 * These registers are byte-accessible.
 *
 * The GIC implements 5 bits of priority and in each field, unimplemented bits are RAZ/WI.
 */
union ody_gicrx_ipriorityr_1 {
	uint32_t u;
	struct ody_gicrx_ipriorityr_1_s {
		uint32_t offset0                     : 8;
		uint32_t offset1                     : 8;
		uint32_t offset2                     : 8;
		uint32_t offset3                     : 8;
	} s;
	/* struct ody_gicrx_ipriorityr_1_s cn; */
};
typedef union ody_gicrx_ipriorityr_1 ody_gicrx_ipriorityr_1_t;

static inline uint64_t ODY_GICRX_IPRIORITYR_1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICRX_IPRIORITYR_1(uint64_t a)
{
	if (a <= 81)
		return 0x801000090404ll + 0x40000ll * ((a) & 0x7f);
	__ody_csr_fatal("GICRX_IPRIORITYR_1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GICRX_IPRIORITYR_1(a) ody_gicrx_ipriorityr_1_t
#define bustype_ODY_GICRX_IPRIORITYR_1(a) CSR_TYPE_NCB32b
#define basename_ODY_GICRX_IPRIORITYR_1(a) "GICRX_IPRIORITYR_1"
#define device_bar_ODY_GICRX_IPRIORITYR_1(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_GICRX_IPRIORITYR_1(a) (a)
#define arguments_ODY_GICRX_IPRIORITYR_1(a) (a), -1, -1, -1

/**
 * Register (NCB32b) gicr#_ipriorityr_2
 *
 * GICR Ipriorityr2 Register
 * The GICR0_IPRIORITYR2 characteristics are:
 *
 * * Purpose
 * Holds the priority of the corresponding interrupt for SGIs 8-11.
 *
 * * Usage constraints
 * When GICD(A)_CTLR.DS==0 a register bit that corresponds to a Group 0 or Secure Group
 * 1 interrupt is RAZ/WI to Non-secure accesses.
 *
 * These registers are byte-accessible.
 *
 * The GIC implements 5 bits of priority and in each field, unimplemented bits are RAZ/WI.
 */
union ody_gicrx_ipriorityr_2 {
	uint32_t u;
	struct ody_gicrx_ipriorityr_2_s {
		uint32_t offset0                     : 8;
		uint32_t offset1                     : 8;
		uint32_t offset2                     : 8;
		uint32_t offset3                     : 8;
	} s;
	/* struct ody_gicrx_ipriorityr_2_s cn; */
};
typedef union ody_gicrx_ipriorityr_2 ody_gicrx_ipriorityr_2_t;

static inline uint64_t ODY_GICRX_IPRIORITYR_2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICRX_IPRIORITYR_2(uint64_t a)
{
	if (a <= 81)
		return 0x801000090408ll + 0x40000ll * ((a) & 0x7f);
	__ody_csr_fatal("GICRX_IPRIORITYR_2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GICRX_IPRIORITYR_2(a) ody_gicrx_ipriorityr_2_t
#define bustype_ODY_GICRX_IPRIORITYR_2(a) CSR_TYPE_NCB32b
#define basename_ODY_GICRX_IPRIORITYR_2(a) "GICRX_IPRIORITYR_2"
#define device_bar_ODY_GICRX_IPRIORITYR_2(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_GICRX_IPRIORITYR_2(a) (a)
#define arguments_ODY_GICRX_IPRIORITYR_2(a) (a), -1, -1, -1

/**
 * Register (NCB32b) gicr#_ipriorityr_3
 *
 * GICR Ipriorityr3 Register
 * The GICR0_IPRIORITYR3 characteristics are:
 *
 * * Purpose
 * Holds the priority of the corresponding interrupt for SGIs 12-15.
 *
 * * Usage constraints
 * When GICD(A)_CTLR.DS==0 a register bit that corresponds to a Group 0 or Secure Group
 * 1 interrupt is RAZ/WI to Non-secure accesses.
 *
 * These registers are byte-accessible.
 *
 * The GIC implements 5 bits of priority and in each field, unimplemented bits are RAZ/WI.
 */
union ody_gicrx_ipriorityr_3 {
	uint32_t u;
	struct ody_gicrx_ipriorityr_3_s {
		uint32_t offset0                     : 8;
		uint32_t offset1                     : 8;
		uint32_t offset2                     : 8;
		uint32_t offset3                     : 8;
	} s;
	/* struct ody_gicrx_ipriorityr_3_s cn; */
};
typedef union ody_gicrx_ipriorityr_3 ody_gicrx_ipriorityr_3_t;

static inline uint64_t ODY_GICRX_IPRIORITYR_3(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICRX_IPRIORITYR_3(uint64_t a)
{
	if (a <= 81)
		return 0x80100009040cll + 0x40000ll * ((a) & 0x7f);
	__ody_csr_fatal("GICRX_IPRIORITYR_3", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GICRX_IPRIORITYR_3(a) ody_gicrx_ipriorityr_3_t
#define bustype_ODY_GICRX_IPRIORITYR_3(a) CSR_TYPE_NCB32b
#define basename_ODY_GICRX_IPRIORITYR_3(a) "GICRX_IPRIORITYR_3"
#define device_bar_ODY_GICRX_IPRIORITYR_3(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_GICRX_IPRIORITYR_3(a) (a)
#define arguments_ODY_GICRX_IPRIORITYR_3(a) (a), -1, -1, -1

/**
 * Register (NCB32b) gicr#_ipriorityr_4
 *
 * GICR Ipriorityr4 Register
 * The GICR0_IPRIORITYR4 characteristics are:
 *
 * * Purpose
 * Holds the priority of the corresponding interrupt for PPIs 16-19.
 *
 * * Usage constraints
 * When GICD(A)_CTLR.DS==0 a register bit that corresponds to a Group 0 or Secure Group
 * 1 interrupt is RAZ/WI to Non-secure accesses.
 *
 * These registers are byte-accessible.
 *
 * The GIC implements 5 bits of priority and in each field, unimplemented bits are RAZ/WI.
 */
union ody_gicrx_ipriorityr_4 {
	uint32_t u;
	struct ody_gicrx_ipriorityr_4_s {
		uint32_t offset0                     : 8;
		uint32_t offset1                     : 8;
		uint32_t offset2                     : 8;
		uint32_t offset3                     : 8;
	} s;
	/* struct ody_gicrx_ipriorityr_4_s cn; */
};
typedef union ody_gicrx_ipriorityr_4 ody_gicrx_ipriorityr_4_t;

static inline uint64_t ODY_GICRX_IPRIORITYR_4(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICRX_IPRIORITYR_4(uint64_t a)
{
	if (a <= 81)
		return 0x801000090410ll + 0x40000ll * ((a) & 0x7f);
	__ody_csr_fatal("GICRX_IPRIORITYR_4", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GICRX_IPRIORITYR_4(a) ody_gicrx_ipriorityr_4_t
#define bustype_ODY_GICRX_IPRIORITYR_4(a) CSR_TYPE_NCB32b
#define basename_ODY_GICRX_IPRIORITYR_4(a) "GICRX_IPRIORITYR_4"
#define device_bar_ODY_GICRX_IPRIORITYR_4(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_GICRX_IPRIORITYR_4(a) (a)
#define arguments_ODY_GICRX_IPRIORITYR_4(a) (a), -1, -1, -1

/**
 * Register (NCB32b) gicr#_ipriorityr_5
 *
 * GICR Ipriorityr5 Register
 * The GICR0_IPRIORITYR5 characteristics are:
 *
 * * Purpose
 * Holds the priority of the corresponding interrupt for PPIs 20-23.
 *
 * * Usage constraints
 * When GICD(A)_CTLR.DS==0 a register bit that corresponds to a Group 0 or Secure Group
 * 1 interrupt is RAZ/WI to Non-secure accesses.
 *
 * These registers are byte-accessible.
 *
 * The GIC implements 5 bits of priority and in each field, unimplemented bits are RAZ/WI.
 */
union ody_gicrx_ipriorityr_5 {
	uint32_t u;
	struct ody_gicrx_ipriorityr_5_s {
		uint32_t offset0                     : 8;
		uint32_t offset1                     : 8;
		uint32_t offset2                     : 8;
		uint32_t offset3                     : 8;
	} s;
	/* struct ody_gicrx_ipriorityr_5_s cn; */
};
typedef union ody_gicrx_ipriorityr_5 ody_gicrx_ipriorityr_5_t;

static inline uint64_t ODY_GICRX_IPRIORITYR_5(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICRX_IPRIORITYR_5(uint64_t a)
{
	if (a <= 81)
		return 0x801000090414ll + 0x40000ll * ((a) & 0x7f);
	__ody_csr_fatal("GICRX_IPRIORITYR_5", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GICRX_IPRIORITYR_5(a) ody_gicrx_ipriorityr_5_t
#define bustype_ODY_GICRX_IPRIORITYR_5(a) CSR_TYPE_NCB32b
#define basename_ODY_GICRX_IPRIORITYR_5(a) "GICRX_IPRIORITYR_5"
#define device_bar_ODY_GICRX_IPRIORITYR_5(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_GICRX_IPRIORITYR_5(a) (a)
#define arguments_ODY_GICRX_IPRIORITYR_5(a) (a), -1, -1, -1

/**
 * Register (NCB32b) gicr#_ipriorityr_6
 *
 * GICR Ipriorityr6 Register
 * The GICR0_IPRIORITYR6 characteristics are:
 *
 * * Purpose
 * Holds the priority of the corresponding interrupt for PPIs 24-27.
 *
 * * Usage constraints
 * When GICD(A)_CTLR.DS==0 a register bit that corresponds to a Group 0 or Secure Group
 * 1 interrupt is RAZ/WI to Non-secure accesses.
 *
 * These registers are byte-accessible.
 *
 * The GIC implements 5 bits of priority and in each field, unimplemented bits are RAZ/WI.
 */
union ody_gicrx_ipriorityr_6 {
	uint32_t u;
	struct ody_gicrx_ipriorityr_6_s {
		uint32_t offset0                     : 8;
		uint32_t offset1                     : 8;
		uint32_t offset2                     : 8;
		uint32_t offset3                     : 8;
	} s;
	/* struct ody_gicrx_ipriorityr_6_s cn; */
};
typedef union ody_gicrx_ipriorityr_6 ody_gicrx_ipriorityr_6_t;

static inline uint64_t ODY_GICRX_IPRIORITYR_6(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICRX_IPRIORITYR_6(uint64_t a)
{
	if (a <= 81)
		return 0x801000090418ll + 0x40000ll * ((a) & 0x7f);
	__ody_csr_fatal("GICRX_IPRIORITYR_6", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GICRX_IPRIORITYR_6(a) ody_gicrx_ipriorityr_6_t
#define bustype_ODY_GICRX_IPRIORITYR_6(a) CSR_TYPE_NCB32b
#define basename_ODY_GICRX_IPRIORITYR_6(a) "GICRX_IPRIORITYR_6"
#define device_bar_ODY_GICRX_IPRIORITYR_6(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_GICRX_IPRIORITYR_6(a) (a)
#define arguments_ODY_GICRX_IPRIORITYR_6(a) (a), -1, -1, -1

/**
 * Register (NCB32b) gicr#_ipriorityr_7
 *
 * GICR Ipriorityr7 Register
 * The GICR0_IPRIORITYR7 characteristics are:
 *
 * * Purpose
 * Holds the priority of the corresponding interrupt for PPIs 28-31.
 *
 * * Usage constraints
 * When GICD(A)_CTLR.DS==0 a register bit that corresponds to a Group 0 or Secure Group
 * 1 interrupt is RAZ/WI to Non-secure accesses.
 *
 * These registers are byte-accessible.
 *
 * The GIC implements 5 bits of priority and in each field, unimplemented bits are RAZ/WI.
 */
union ody_gicrx_ipriorityr_7 {
	uint32_t u;
	struct ody_gicrx_ipriorityr_7_s {
		uint32_t offset0                     : 8;
		uint32_t offset1                     : 8;
		uint32_t offset2                     : 8;
		uint32_t offset3                     : 8;
	} s;
	/* struct ody_gicrx_ipriorityr_7_s cn; */
};
typedef union ody_gicrx_ipriorityr_7 ody_gicrx_ipriorityr_7_t;

static inline uint64_t ODY_GICRX_IPRIORITYR_7(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICRX_IPRIORITYR_7(uint64_t a)
{
	if (a <= 81)
		return 0x80100009041cll + 0x40000ll * ((a) & 0x7f);
	__ody_csr_fatal("GICRX_IPRIORITYR_7", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GICRX_IPRIORITYR_7(a) ody_gicrx_ipriorityr_7_t
#define bustype_ODY_GICRX_IPRIORITYR_7(a) CSR_TYPE_NCB32b
#define basename_ODY_GICRX_IPRIORITYR_7(a) "GICRX_IPRIORITYR_7"
#define device_bar_ODY_GICRX_IPRIORITYR_7(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_GICRX_IPRIORITYR_7(a) (a)
#define arguments_ODY_GICRX_IPRIORITYR_7(a) (a), -1, -1, -1

/**
 * Register (NCB32b) gicr#_isactiver0
 *
 * GICR Isactiver0 Register
 * The GICR0_ISACTIVER0 characteristics are:
 *
 * * Purpose
 * Activates the corresponding SGI (IDs 0-15) or PPI (IDs 16-31). These registers are
 * used when saving and restoring GIC state.
 *
 * * Usage constraints
 * If GICD(A)_CTLR.DS==0, unless the GICR0_NSACR register permits Non-secure software
 * to control Group 0 and Secure Group 1 interrupts, any bits that correspond to Group
 * 0 or Secure Group 1 interrupts are accessible only by Secure accesses and are RAZ/WI
 * to Non-secure accesses.
 */
union ody_gicrx_isactiver0 {
	uint32_t u;
	struct ody_gicrx_isactiver0_s {
		uint32_t set_active_bit0             : 1;
		uint32_t set_active_bit1             : 1;
		uint32_t set_active_bit2             : 1;
		uint32_t set_active_bit3             : 1;
		uint32_t set_active_bit4             : 1;
		uint32_t set_active_bit5             : 1;
		uint32_t set_active_bit6             : 1;
		uint32_t set_active_bit7             : 1;
		uint32_t set_active_bit8             : 1;
		uint32_t set_active_bit9             : 1;
		uint32_t set_active_bit10            : 1;
		uint32_t set_active_bit11            : 1;
		uint32_t set_active_bit12            : 1;
		uint32_t set_active_bit13            : 1;
		uint32_t set_active_bit14            : 1;
		uint32_t set_active_bit15            : 1;
		uint32_t set_active_bit16            : 1;
		uint32_t set_active_bit17            : 1;
		uint32_t set_active_bit18            : 1;
		uint32_t set_active_bit19            : 1;
		uint32_t set_active_bit20            : 1;
		uint32_t set_active_bit21            : 1;
		uint32_t set_active_bit22            : 1;
		uint32_t set_active_bit23            : 1;
		uint32_t set_active_bit24            : 1;
		uint32_t set_active_bit25            : 1;
		uint32_t set_active_bit26            : 1;
		uint32_t set_active_bit27            : 1;
		uint32_t set_active_bit28            : 1;
		uint32_t set_active_bit29            : 1;
		uint32_t set_active_bit30            : 1;
		uint32_t set_active_bit31            : 1;
	} s;
	/* struct ody_gicrx_isactiver0_s cn; */
};
typedef union ody_gicrx_isactiver0 ody_gicrx_isactiver0_t;

static inline uint64_t ODY_GICRX_ISACTIVER0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICRX_ISACTIVER0(uint64_t a)
{
	if (a <= 81)
		return 0x801000090300ll + 0x40000ll * ((a) & 0x7f);
	__ody_csr_fatal("GICRX_ISACTIVER0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GICRX_ISACTIVER0(a) ody_gicrx_isactiver0_t
#define bustype_ODY_GICRX_ISACTIVER0(a) CSR_TYPE_NCB32b
#define basename_ODY_GICRX_ISACTIVER0(a) "GICRX_ISACTIVER0"
#define device_bar_ODY_GICRX_ISACTIVER0(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_GICRX_ISACTIVER0(a) (a)
#define arguments_ODY_GICRX_ISACTIVER0(a) (a), -1, -1, -1

/**
 * Register (NCB32b) gicr#_isactiver1e
 *
 * GICR Isactiver1e Register
 * The GICR0_ISACTIVER1E characteristics are:
 *
 * * Purpose
 * Activates the corresponding  extended range PPI. These registers are used when
 * saving and restoring GIC state.
 *
 * * Usage constraints
 * If GICD(A)_CTLR.DS==0, unless the GICR0_NSACR register permits Non-secure software
 * to control Group 0 and Secure Group 1 interrupts, any bits that correspond to Group
 * 0 or Secure Group 1 interrupts are accessible only by Secure accesses and are RAZ/WI
 * to Non-secure accesses.
 */
union ody_gicrx_isactiver1e {
	uint32_t u;
	struct ody_gicrx_isactiver1e_s {
		uint32_t set_active_bit0             : 1;
		uint32_t set_active_bit1             : 1;
		uint32_t set_active_bit2             : 1;
		uint32_t set_active_bit3             : 1;
		uint32_t set_active_bit4             : 1;
		uint32_t set_active_bit5             : 1;
		uint32_t set_active_bit6             : 1;
		uint32_t set_active_bit7             : 1;
		uint32_t set_active_bit8             : 1;
		uint32_t set_active_bit9             : 1;
		uint32_t set_active_bit10            : 1;
		uint32_t set_active_bit11            : 1;
		uint32_t set_active_bit12            : 1;
		uint32_t set_active_bit13            : 1;
		uint32_t set_active_bit14            : 1;
		uint32_t set_active_bit15            : 1;
		uint32_t set_active_bit16            : 1;
		uint32_t set_active_bit17            : 1;
		uint32_t set_active_bit18            : 1;
		uint32_t set_active_bit19            : 1;
		uint32_t set_active_bit20            : 1;
		uint32_t set_active_bit21            : 1;
		uint32_t set_active_bit22            : 1;
		uint32_t set_active_bit23            : 1;
		uint32_t set_active_bit24            : 1;
		uint32_t set_active_bit25            : 1;
		uint32_t set_active_bit26            : 1;
		uint32_t set_active_bit27            : 1;
		uint32_t set_active_bit28            : 1;
		uint32_t set_active_bit29            : 1;
		uint32_t set_active_bit30            : 1;
		uint32_t set_active_bit31            : 1;
	} s;
	/* struct ody_gicrx_isactiver1e_s cn; */
};
typedef union ody_gicrx_isactiver1e ody_gicrx_isactiver1e_t;

static inline uint64_t ODY_GICRX_ISACTIVER1E(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICRX_ISACTIVER1E(uint64_t a)
{
	if (a <= 81)
		return 0x801000090304ll + 0x40000ll * ((a) & 0x7f);
	__ody_csr_fatal("GICRX_ISACTIVER1E", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GICRX_ISACTIVER1E(a) ody_gicrx_isactiver1e_t
#define bustype_ODY_GICRX_ISACTIVER1E(a) CSR_TYPE_NCB32b
#define basename_ODY_GICRX_ISACTIVER1E(a) "GICRX_ISACTIVER1E"
#define device_bar_ODY_GICRX_ISACTIVER1E(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_GICRX_ISACTIVER1E(a) (a)
#define arguments_ODY_GICRX_ISACTIVER1E(a) (a), -1, -1, -1

/**
 * Register (NCB32b) gicr#_isenabler0
 *
 * GICR Isenabler0 Register
 * The GICR0_ISENABLER0 characteristics are:
 *
 * * Purpose
 * Enables forwarding of the corresponding SGI (IDs 0-15) or PPI (IDs 16-31) to the CPU interface.
 *
 * * Usage constraints
 * When GICD(A)_CTLR.DS==0, bits corresponding to Group 0 and Secure Group 1 interrupts
 * are RAZ/WI to Non-secure accesses.
 */
union ody_gicrx_isenabler0 {
	uint32_t u;
	struct ody_gicrx_isenabler0_s {
		uint32_t set_enable_bit0             : 1;
		uint32_t set_enable_bit1             : 1;
		uint32_t set_enable_bit2             : 1;
		uint32_t set_enable_bit3             : 1;
		uint32_t set_enable_bit4             : 1;
		uint32_t set_enable_bit5             : 1;
		uint32_t set_enable_bit6             : 1;
		uint32_t set_enable_bit7             : 1;
		uint32_t set_enable_bit8             : 1;
		uint32_t set_enable_bit9             : 1;
		uint32_t set_enable_bit10            : 1;
		uint32_t set_enable_bit11            : 1;
		uint32_t set_enable_bit12            : 1;
		uint32_t set_enable_bit13            : 1;
		uint32_t set_enable_bit14            : 1;
		uint32_t set_enable_bit15            : 1;
		uint32_t set_enable_bit16            : 1;
		uint32_t set_enable_bit17            : 1;
		uint32_t set_enable_bit18            : 1;
		uint32_t set_enable_bit19            : 1;
		uint32_t set_enable_bit20            : 1;
		uint32_t set_enable_bit21            : 1;
		uint32_t set_enable_bit22            : 1;
		uint32_t set_enable_bit23            : 1;
		uint32_t set_enable_bit24            : 1;
		uint32_t set_enable_bit25            : 1;
		uint32_t set_enable_bit26            : 1;
		uint32_t set_enable_bit27            : 1;
		uint32_t set_enable_bit28            : 1;
		uint32_t set_enable_bit29            : 1;
		uint32_t set_enable_bit30            : 1;
		uint32_t set_enable_bit31            : 1;
	} s;
	/* struct ody_gicrx_isenabler0_s cn; */
};
typedef union ody_gicrx_isenabler0 ody_gicrx_isenabler0_t;

static inline uint64_t ODY_GICRX_ISENABLER0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICRX_ISENABLER0(uint64_t a)
{
	if (a <= 81)
		return 0x801000090100ll + 0x40000ll * ((a) & 0x7f);
	__ody_csr_fatal("GICRX_ISENABLER0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GICRX_ISENABLER0(a) ody_gicrx_isenabler0_t
#define bustype_ODY_GICRX_ISENABLER0(a) CSR_TYPE_NCB32b
#define basename_ODY_GICRX_ISENABLER0(a) "GICRX_ISENABLER0"
#define device_bar_ODY_GICRX_ISENABLER0(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_GICRX_ISENABLER0(a) (a)
#define arguments_ODY_GICRX_ISENABLER0(a) (a), -1, -1, -1

/**
 * Register (NCB32b) gicr#_isenabler1e
 *
 * GICR Isenabler1e Register
 * The GICR0_ISENABLER1E characteristics are:
 *
 * * Purpose
 * Enables forwarding of the corresponding extended range PPI to the CPU interface.
 *
 * * Usage constraints
 * When GICD(A)_CTLR.DS==0, bits corresponding to Group 0 and Secure Group 1 interrupts
 * are RAZ/WI to Non-secure accesses.
 */
union ody_gicrx_isenabler1e {
	uint32_t u;
	struct ody_gicrx_isenabler1e_s {
		uint32_t set_enable_bit0             : 1;
		uint32_t set_enable_bit1             : 1;
		uint32_t set_enable_bit2             : 1;
		uint32_t set_enable_bit3             : 1;
		uint32_t set_enable_bit4             : 1;
		uint32_t set_enable_bit5             : 1;
		uint32_t set_enable_bit6             : 1;
		uint32_t set_enable_bit7             : 1;
		uint32_t set_enable_bit8             : 1;
		uint32_t set_enable_bit9             : 1;
		uint32_t set_enable_bit10            : 1;
		uint32_t set_enable_bit11            : 1;
		uint32_t set_enable_bit12            : 1;
		uint32_t set_enable_bit13            : 1;
		uint32_t set_enable_bit14            : 1;
		uint32_t set_enable_bit15            : 1;
		uint32_t set_enable_bit16            : 1;
		uint32_t set_enable_bit17            : 1;
		uint32_t set_enable_bit18            : 1;
		uint32_t set_enable_bit19            : 1;
		uint32_t set_enable_bit20            : 1;
		uint32_t set_enable_bit21            : 1;
		uint32_t set_enable_bit22            : 1;
		uint32_t set_enable_bit23            : 1;
		uint32_t set_enable_bit24            : 1;
		uint32_t set_enable_bit25            : 1;
		uint32_t set_enable_bit26            : 1;
		uint32_t set_enable_bit27            : 1;
		uint32_t set_enable_bit28            : 1;
		uint32_t set_enable_bit29            : 1;
		uint32_t set_enable_bit30            : 1;
		uint32_t set_enable_bit31            : 1;
	} s;
	/* struct ody_gicrx_isenabler1e_s cn; */
};
typedef union ody_gicrx_isenabler1e ody_gicrx_isenabler1e_t;

static inline uint64_t ODY_GICRX_ISENABLER1E(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICRX_ISENABLER1E(uint64_t a)
{
	if (a <= 81)
		return 0x801000090104ll + 0x40000ll * ((a) & 0x7f);
	__ody_csr_fatal("GICRX_ISENABLER1E", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GICRX_ISENABLER1E(a) ody_gicrx_isenabler1e_t
#define bustype_ODY_GICRX_ISENABLER1E(a) CSR_TYPE_NCB32b
#define basename_ODY_GICRX_ISENABLER1E(a) "GICRX_ISENABLER1E"
#define device_bar_ODY_GICRX_ISENABLER1E(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_GICRX_ISENABLER1E(a) (a)
#define arguments_ODY_GICRX_ISENABLER1E(a) (a), -1, -1, -1

/**
 * Register (NCB32b) gicr#_iserrr0
 *
 * GICR Iserrr0 Register
 * The GICR0_ISERRR0 characteristics are:
 *
 * * Purpose
 *
 * This register indicates if the SGI or PPI data has been corrupted in the GCI RAM.
 * For testing purposes, software can use this register to set the error.
 *
 * * Usage constraints
 * Only accessible by Secure accesses or when GICD(A)_DS.DS == 1.
 */
union ody_gicrx_iserrr0 {
	uint32_t u;
	struct ody_gicrx_iserrr0_s {
		uint32_t valid_bit0                  : 1;
		uint32_t valid_bit1                  : 1;
		uint32_t valid_bit2                  : 1;
		uint32_t valid_bit3                  : 1;
		uint32_t valid_bit4                  : 1;
		uint32_t valid_bit5                  : 1;
		uint32_t valid_bit6                  : 1;
		uint32_t valid_bit7                  : 1;
		uint32_t valid_bit8                  : 1;
		uint32_t valid_bit9                  : 1;
		uint32_t valid_bit10                 : 1;
		uint32_t valid_bit11                 : 1;
		uint32_t valid_bit12                 : 1;
		uint32_t valid_bit13                 : 1;
		uint32_t valid_bit14                 : 1;
		uint32_t valid_bit15                 : 1;
		uint32_t valid_bit16                 : 1;
		uint32_t valid_bit17                 : 1;
		uint32_t valid_bit18                 : 1;
		uint32_t valid_bit19                 : 1;
		uint32_t valid_bit20                 : 1;
		uint32_t valid_bit21                 : 1;
		uint32_t valid_bit22                 : 1;
		uint32_t valid_bit23                 : 1;
		uint32_t valid_bit24                 : 1;
		uint32_t valid_bit25                 : 1;
		uint32_t valid_bit26                 : 1;
		uint32_t valid_bit27                 : 1;
		uint32_t valid_bit28                 : 1;
		uint32_t valid_bit29                 : 1;
		uint32_t valid_bit30                 : 1;
		uint32_t valid_bit31                 : 1;
	} s;
	/* struct ody_gicrx_iserrr0_s cn; */
};
typedef union ody_gicrx_iserrr0 ody_gicrx_iserrr0_t;

static inline uint64_t ODY_GICRX_ISERRR0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICRX_ISERRR0(uint64_t a)
{
	if (a <= 81)
		return 0x80100009c180ll + 0x40000ll * ((a) & 0x7f);
	__ody_csr_fatal("GICRX_ISERRR0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GICRX_ISERRR0(a) ody_gicrx_iserrr0_t
#define bustype_ODY_GICRX_ISERRR0(a) CSR_TYPE_NCB32b
#define basename_ODY_GICRX_ISERRR0(a) "GICRX_ISERRR0"
#define device_bar_ODY_GICRX_ISERRR0(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_GICRX_ISERRR0(a) (a)
#define arguments_ODY_GICRX_ISERRR0(a) (a), -1, -1, -1

/**
 * Register (NCB32b) gicr#_iserrr1e
 *
 * GICR Iserrr1e Register
 * The GICR0_ISERRR1E characteristics are:
 *
 * * Purpose
 *
 * This register indicates if extended range PPI data has been corrupted in the GCI
 * RAM. For testing purposes, software can use this register to set the error.
 *
 * * Usage constraints
 * Only accessible by Secure accesses or when GICD(A)_DS.DS == 1.
 */
union ody_gicrx_iserrr1e {
	uint32_t u;
	struct ody_gicrx_iserrr1e_s {
		uint32_t valid_bit0                  : 1;
		uint32_t valid_bit1                  : 1;
		uint32_t valid_bit2                  : 1;
		uint32_t valid_bit3                  : 1;
		uint32_t valid_bit4                  : 1;
		uint32_t valid_bit5                  : 1;
		uint32_t valid_bit6                  : 1;
		uint32_t valid_bit7                  : 1;
		uint32_t valid_bit8                  : 1;
		uint32_t valid_bit9                  : 1;
		uint32_t valid_bit10                 : 1;
		uint32_t valid_bit11                 : 1;
		uint32_t valid_bit12                 : 1;
		uint32_t valid_bit13                 : 1;
		uint32_t valid_bit14                 : 1;
		uint32_t valid_bit15                 : 1;
		uint32_t valid_bit16                 : 1;
		uint32_t valid_bit17                 : 1;
		uint32_t valid_bit18                 : 1;
		uint32_t valid_bit19                 : 1;
		uint32_t valid_bit20                 : 1;
		uint32_t valid_bit21                 : 1;
		uint32_t valid_bit22                 : 1;
		uint32_t valid_bit23                 : 1;
		uint32_t valid_bit24                 : 1;
		uint32_t valid_bit25                 : 1;
		uint32_t valid_bit26                 : 1;
		uint32_t valid_bit27                 : 1;
		uint32_t valid_bit28                 : 1;
		uint32_t valid_bit29                 : 1;
		uint32_t valid_bit30                 : 1;
		uint32_t valid_bit31                 : 1;
	} s;
	/* struct ody_gicrx_iserrr1e_s cn; */
};
typedef union ody_gicrx_iserrr1e ody_gicrx_iserrr1e_t;

static inline uint64_t ODY_GICRX_ISERRR1E(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICRX_ISERRR1E(uint64_t a)
{
	if (a <= 81)
		return 0x80100009c184ll + 0x40000ll * ((a) & 0x7f);
	__ody_csr_fatal("GICRX_ISERRR1E", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GICRX_ISERRR1E(a) ody_gicrx_iserrr1e_t
#define bustype_ODY_GICRX_ISERRR1E(a) CSR_TYPE_NCB32b
#define basename_ODY_GICRX_ISERRR1E(a) "GICRX_ISERRR1E"
#define device_bar_ODY_GICRX_ISERRR1E(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_GICRX_ISERRR1E(a) (a)
#define arguments_ODY_GICRX_ISERRR1E(a) (a), -1, -1, -1

/**
 * Register (NCB32b) gicr#_ispendr0
 *
 * GICR Ispendr0 Register
 * The GICR0_ISPENDR0 characteristics are:
 *
 * * Purpose
 * Adds the pending state to the corresponding SGI (IDs 0-15) or PPI (IDs 16-31).
 *
 * * Usage constraints
 * If GICD(A)_CTLR.DS==0, unless the GICR0_NSACR register permits Non-secure software
 * to control Group 0 and Secure Group 1 interrupts, any bits that correspond to Group
 * 0 or Secure Group 1 interrupts are accessible only by Secure accesses and are RAZ/WI
 * to Non-secure accesses.
 */
union ody_gicrx_ispendr0 {
	uint32_t u;
	struct ody_gicrx_ispendr0_s {
		uint32_t set_pending_bit0            : 1;
		uint32_t set_pending_bit1            : 1;
		uint32_t set_pending_bit2            : 1;
		uint32_t set_pending_bit3            : 1;
		uint32_t set_pending_bit4            : 1;
		uint32_t set_pending_bit5            : 1;
		uint32_t set_pending_bit6            : 1;
		uint32_t set_pending_bit7            : 1;
		uint32_t set_pending_bit8            : 1;
		uint32_t set_pending_bit9            : 1;
		uint32_t set_pending_bit10           : 1;
		uint32_t set_pending_bit11           : 1;
		uint32_t set_pending_bit12           : 1;
		uint32_t set_pending_bit13           : 1;
		uint32_t set_pending_bit14           : 1;
		uint32_t set_pending_bit15           : 1;
		uint32_t set_pending_bit16           : 1;
		uint32_t set_pending_bit17           : 1;
		uint32_t set_pending_bit18           : 1;
		uint32_t set_pending_bit19           : 1;
		uint32_t set_pending_bit20           : 1;
		uint32_t set_pending_bit21           : 1;
		uint32_t set_pending_bit22           : 1;
		uint32_t set_pending_bit23           : 1;
		uint32_t set_pending_bit24           : 1;
		uint32_t set_pending_bit25           : 1;
		uint32_t set_pending_bit26           : 1;
		uint32_t set_pending_bit27           : 1;
		uint32_t set_pending_bit28           : 1;
		uint32_t set_pending_bit29           : 1;
		uint32_t set_pending_bit30           : 1;
		uint32_t set_pending_bit31           : 1;
	} s;
	/* struct ody_gicrx_ispendr0_s cn; */
};
typedef union ody_gicrx_ispendr0 ody_gicrx_ispendr0_t;

static inline uint64_t ODY_GICRX_ISPENDR0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICRX_ISPENDR0(uint64_t a)
{
	if (a <= 81)
		return 0x801000090200ll + 0x40000ll * ((a) & 0x7f);
	__ody_csr_fatal("GICRX_ISPENDR0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GICRX_ISPENDR0(a) ody_gicrx_ispendr0_t
#define bustype_ODY_GICRX_ISPENDR0(a) CSR_TYPE_NCB32b
#define basename_ODY_GICRX_ISPENDR0(a) "GICRX_ISPENDR0"
#define device_bar_ODY_GICRX_ISPENDR0(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_GICRX_ISPENDR0(a) (a)
#define arguments_ODY_GICRX_ISPENDR0(a) (a), -1, -1, -1

/**
 * Register (NCB32b) gicr#_ispendr1e
 *
 * GICR Ispendr1e Register
 * The GICR0_ISPENDR1E characteristics are:
 *
 * * Purpose
 * Adds the pending state to the corresponding  extended range PPI.
 *
 * * Usage constraints
 * If GICD(A)_CTLR.DS==0, unless the GICR0_NSACR register permits Non-secure software
 * to control Group 0 and Secure Group 1 interrupts, any bits that correspond to Group
 * 0 or Secure Group 1 interrupts are accessible only by Secure accesses and are RAZ/WI
 * to Non-secure accesses.
 */
union ody_gicrx_ispendr1e {
	uint32_t u;
	struct ody_gicrx_ispendr1e_s {
		uint32_t set_pending_bit0            : 1;
		uint32_t set_pending_bit1            : 1;
		uint32_t set_pending_bit2            : 1;
		uint32_t set_pending_bit3            : 1;
		uint32_t set_pending_bit4            : 1;
		uint32_t set_pending_bit5            : 1;
		uint32_t set_pending_bit6            : 1;
		uint32_t set_pending_bit7            : 1;
		uint32_t set_pending_bit8            : 1;
		uint32_t set_pending_bit9            : 1;
		uint32_t set_pending_bit10           : 1;
		uint32_t set_pending_bit11           : 1;
		uint32_t set_pending_bit12           : 1;
		uint32_t set_pending_bit13           : 1;
		uint32_t set_pending_bit14           : 1;
		uint32_t set_pending_bit15           : 1;
		uint32_t set_pending_bit16           : 1;
		uint32_t set_pending_bit17           : 1;
		uint32_t set_pending_bit18           : 1;
		uint32_t set_pending_bit19           : 1;
		uint32_t set_pending_bit20           : 1;
		uint32_t set_pending_bit21           : 1;
		uint32_t set_pending_bit22           : 1;
		uint32_t set_pending_bit23           : 1;
		uint32_t set_pending_bit24           : 1;
		uint32_t set_pending_bit25           : 1;
		uint32_t set_pending_bit26           : 1;
		uint32_t set_pending_bit27           : 1;
		uint32_t set_pending_bit28           : 1;
		uint32_t set_pending_bit29           : 1;
		uint32_t set_pending_bit30           : 1;
		uint32_t set_pending_bit31           : 1;
	} s;
	/* struct ody_gicrx_ispendr1e_s cn; */
};
typedef union ody_gicrx_ispendr1e ody_gicrx_ispendr1e_t;

static inline uint64_t ODY_GICRX_ISPENDR1E(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICRX_ISPENDR1E(uint64_t a)
{
	if (a <= 81)
		return 0x801000090204ll + 0x40000ll * ((a) & 0x7f);
	__ody_csr_fatal("GICRX_ISPENDR1E", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GICRX_ISPENDR1E(a) ody_gicrx_ispendr1e_t
#define bustype_ODY_GICRX_ISPENDR1E(a) CSR_TYPE_NCB32b
#define basename_ODY_GICRX_ISPENDR1E(a) "GICRX_ISPENDR1E"
#define device_bar_ODY_GICRX_ISPENDR1E(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_GICRX_ISPENDR1E(a) (a)
#define arguments_ODY_GICRX_ISPENDR1E(a) (a), -1, -1, -1

/**
 * Register (NCB32b) gicr#_miscstatusr
 *
 * GICR Miscstatusr Register
 * The GICR0_MISCSTATUSR characteristics are:
 *
 * * Purpose
 * Use this register to test the integration of the cpu_active and wake_request input
 * signals. You can also use the register to debug the CPU interface enables as seen by
 * the GIC
 *
 * * Usage constraints
 * There are no usage constraints.
 */
union ody_gicrx_miscstatusr {
	uint32_t u;
	struct ody_gicrx_miscstatusr_s {
		uint32_t enablegrp0                  : 1;
		uint32_t enablegrp1_ns               : 1;
		uint32_t enablegrp1_s                : 1;
		uint32_t reserved_3                  : 1;
		uint32_t access_type                 : 1;
		uint32_t reserved_5_29               : 25;
		uint32_t wake_request                : 1;
		uint32_t cpu_active                  : 1;
	} s;
	/* struct ody_gicrx_miscstatusr_s cn; */
};
typedef union ody_gicrx_miscstatusr ody_gicrx_miscstatusr_t;

static inline uint64_t ODY_GICRX_MISCSTATUSR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICRX_MISCSTATUSR(uint64_t a)
{
	if (a <= 81)
		return 0x80100009c000ll + 0x40000ll * ((a) & 0x7f);
	__ody_csr_fatal("GICRX_MISCSTATUSR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GICRX_MISCSTATUSR(a) ody_gicrx_miscstatusr_t
#define bustype_ODY_GICRX_MISCSTATUSR(a) CSR_TYPE_NCB32b
#define basename_ODY_GICRX_MISCSTATUSR(a) "GICRX_MISCSTATUSR"
#define device_bar_ODY_GICRX_MISCSTATUSR(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_GICRX_MISCSTATUSR(a) (a)
#define arguments_ODY_GICRX_MISCSTATUSR(a) (a), -1, -1, -1

/**
 * Register (NCB32b) gicr#_mpamidr
 *
 * GICR Mpamidr Register
 * GICR() MPAMIDR
 * The GICR0_MPAMIDR characteristics are:
 *
 * * Purpose
 *
 * Reports the maximum supported PARTID and PMG values.
 *
 * * Usage constraints
 * There are no usage constraints.
 */
union ody_gicrx_mpamidr {
	uint32_t u;
	struct ody_gicrx_mpamidr_s {
		uint32_t partid_max                  : 9;
		uint32_t reserved_9_15               : 7;
		uint32_t pmg_max                     : 1;
		uint32_t reserved_17_31              : 15;
	} s;
	/* struct ody_gicrx_mpamidr_s cn; */
};
typedef union ody_gicrx_mpamidr ody_gicrx_mpamidr_t;

static inline uint64_t ODY_GICRX_MPAMIDR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICRX_MPAMIDR(uint64_t a)
{
	if (a <= 81)
		return 0x801000080018ll + 0x40000ll * ((a) & 0x7f);
	__ody_csr_fatal("GICRX_MPAMIDR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GICRX_MPAMIDR(a) ody_gicrx_mpamidr_t
#define bustype_ODY_GICRX_MPAMIDR(a) CSR_TYPE_NCB32b
#define basename_ODY_GICRX_MPAMIDR(a) "GICRX_MPAMIDR"
#define device_bar_ODY_GICRX_MPAMIDR(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_GICRX_MPAMIDR(a) (a)
#define arguments_ODY_GICRX_MPAMIDR(a) (a), -1, -1, -1

/**
 * Register (NCB32b) gicr#_nsacr
 *
 * GICR Nsacr Register
 * The GICR0_NSACR characteristics are:
 *
 * * Purpose
 * Enables Secure software to permit Non-secure software to create SGIs targeting the
 * PE connected to this Redistributor by writing to ICC_SGI1R_EL1, ICC_ASGI1R_EL1 or
 * ICC_SGI0R_EL1.
 *
 * * Usage constraints
 * When GICD_CTLR.DS == 1, this register is RAZ/WI.
 * When GICD_CTLR.DS == 0, this register is Secure, and is RAZ/WI to Non-secure accesses.
 *
 * * Configurations
 * A copy of this register is provided for each Redistributor.`
 */
union ody_gicrx_nsacr {
	uint32_t u;
	struct ody_gicrx_nsacr_s {
		uint32_t ns_access0                  : 2;
		uint32_t ns_access1                  : 2;
		uint32_t ns_access2                  : 2;
		uint32_t ns_access3                  : 2;
		uint32_t ns_access4                  : 2;
		uint32_t ns_access5                  : 2;
		uint32_t ns_access6                  : 2;
		uint32_t ns_access7                  : 2;
		uint32_t ns_access8                  : 2;
		uint32_t ns_access9                  : 2;
		uint32_t ns_access10                 : 2;
		uint32_t ns_access11                 : 2;
		uint32_t ns_access12                 : 2;
		uint32_t ns_access13                 : 2;
		uint32_t ns_access14                 : 2;
		uint32_t ns_access15                 : 2;
	} s;
	/* struct ody_gicrx_nsacr_s cn; */
};
typedef union ody_gicrx_nsacr ody_gicrx_nsacr_t;

static inline uint64_t ODY_GICRX_NSACR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICRX_NSACR(uint64_t a)
{
	if (a <= 81)
		return 0x801000090e00ll + 0x40000ll * ((a) & 0x7f);
	__ody_csr_fatal("GICRX_NSACR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GICRX_NSACR(a) ody_gicrx_nsacr_t
#define bustype_ODY_GICRX_NSACR(a) CSR_TYPE_NCB32b
#define basename_ODY_GICRX_NSACR(a) "GICRX_NSACR"
#define device_bar_ODY_GICRX_NSACR(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_GICRX_NSACR(a) (a)
#define arguments_ODY_GICRX_NSACR(a) (a), -1, -1, -1

/**
 * Register (NCB32b) gicr#_partidr
 *
 * GICR Partidr Register
 * GICR() PARTIDR
 * The GICR0_PARTIDR characteristics are:
 *
 * * Purpose
 *
 * Sets the PARTID and PMG values used for memory accesses by the Redistributor
 *
 * * Usage constraints
 * There are no usage constraints
 *
 * \> *Note*
 * \> This register is shared across all PEs on the GIC.
 */
union ody_gicrx_partidr {
	uint32_t u;
	struct ody_gicrx_partidr_s {
		uint32_t partid                      : 9;
		uint32_t reserved_9_15               : 7;
		uint32_t pmg                         : 1;
		uint32_t reserved_17_31              : 15;
	} s;
	/* struct ody_gicrx_partidr_s cn; */
};
typedef union ody_gicrx_partidr ody_gicrx_partidr_t;

static inline uint64_t ODY_GICRX_PARTIDR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICRX_PARTIDR(uint64_t a)
{
	if (a <= 81)
		return 0x80100008001cll + 0x40000ll * ((a) & 0x7f);
	__ody_csr_fatal("GICRX_PARTIDR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GICRX_PARTIDR(a) ody_gicrx_partidr_t
#define bustype_ODY_GICRX_PARTIDR(a) CSR_TYPE_NCB32b
#define basename_ODY_GICRX_PARTIDR(a) "GICRX_PARTIDR"
#define device_bar_ODY_GICRX_PARTIDR(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_GICRX_PARTIDR(a) (a)
#define arguments_ODY_GICRX_PARTIDR(a) (a), -1, -1, -1

/**
 * Register (NCB) gicr#_pendbaser
 *
 * GICR Pendbaser Register
 * The GICR0_PENDBASER characteristics are:
 *
 * * Purpose
 * Specifies the base address, Shareability and Cacheability of accesses to the LPI Pending table.
 *
 * * Usage constraints
 * A copy of this register is provided for each Redistributor, however, some fields are
 * shared according to GICR0_TYPER.CommonLPIAff and should be programmed to matching
 * values.
 */
union ody_gicrx_pendbaser {
	uint64_t u;
	struct ody_gicrx_pendbaser_s {
		uint64_t reserved_0_6                : 7;
		uint64_t cacheability                : 3;
		uint64_t shareability                : 2;
		uint64_t reserved_12_15              : 4;
		uint64_t physicaladdress             : 36;
		uint64_t reserved_52_55              : 4;
		uint64_t outercacheability           : 3;
		uint64_t reserved_59_61              : 3;
		uint64_t pendingtablezero            : 1;
		uint64_t reserved_63                 : 1;
	} s;
	/* struct ody_gicrx_pendbaser_s cn; */
};
typedef union ody_gicrx_pendbaser ody_gicrx_pendbaser_t;

static inline uint64_t ODY_GICRX_PENDBASER(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICRX_PENDBASER(uint64_t a)
{
	if (a <= 81)
		return 0x801000080078ll + 0x40000ll * ((a) & 0x7f);
	__ody_csr_fatal("GICRX_PENDBASER", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GICRX_PENDBASER(a) ody_gicrx_pendbaser_t
#define bustype_ODY_GICRX_PENDBASER(a) CSR_TYPE_NCB
#define basename_ODY_GICRX_PENDBASER(a) "GICRX_PENDBASER"
#define device_bar_ODY_GICRX_PENDBASER(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_GICRX_PENDBASER(a) (a)
#define arguments_ODY_GICRX_PENDBASER(a) (a), -1, -1, -1

/**
 * Register (NCB32b) gicr#_pidr0
 *
 * GICR Pidr0 Register
 * The GICR0_PIDR0 characteristics are:
 *
 * * Purpose
 * This register returns byte[0] of the peripheral ID of the GIC Redistributor page.
 *
 * * Usage constraints
 * There are no usage constraints.
 */
union ody_gicrx_pidr0 {
	uint32_t u;
	struct ody_gicrx_pidr0_s {
		uint32_t part_0                      : 8;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_gicrx_pidr0_s cn; */
};
typedef union ody_gicrx_pidr0 ody_gicrx_pidr0_t;

static inline uint64_t ODY_GICRX_PIDR0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICRX_PIDR0(uint64_t a)
{
	if (a <= 81)
		return 0x80100008ffe0ll + 0x40000ll * ((a) & 0x7f);
	__ody_csr_fatal("GICRX_PIDR0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GICRX_PIDR0(a) ody_gicrx_pidr0_t
#define bustype_ODY_GICRX_PIDR0(a) CSR_TYPE_NCB32b
#define basename_ODY_GICRX_PIDR0(a) "GICRX_PIDR0"
#define device_bar_ODY_GICRX_PIDR0(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_GICRX_PIDR0(a) (a)
#define arguments_ODY_GICRX_PIDR0(a) (a), -1, -1, -1

/**
 * Register (NCB32b) gicr#_pidr1
 *
 * GICR Pidr1 Register
 * The GICR0_PIDR1 characteristics are:
 *
 * * Purpose
 * This register returns byte[1] of the peripheral ID of the GIC Redistributor page.
 *
 * * Usage constraints
 * There are no usage constraints.
 */
union ody_gicrx_pidr1 {
	uint32_t u;
	struct ody_gicrx_pidr1_s {
		uint32_t part_1                      : 4;
		uint32_t des_0                       : 4;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_gicrx_pidr1_s cn; */
};
typedef union ody_gicrx_pidr1 ody_gicrx_pidr1_t;

static inline uint64_t ODY_GICRX_PIDR1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICRX_PIDR1(uint64_t a)
{
	if (a <= 81)
		return 0x80100008ffe4ll + 0x40000ll * ((a) & 0x7f);
	__ody_csr_fatal("GICRX_PIDR1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GICRX_PIDR1(a) ody_gicrx_pidr1_t
#define bustype_ODY_GICRX_PIDR1(a) CSR_TYPE_NCB32b
#define basename_ODY_GICRX_PIDR1(a) "GICRX_PIDR1"
#define device_bar_ODY_GICRX_PIDR1(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_GICRX_PIDR1(a) (a)
#define arguments_ODY_GICRX_PIDR1(a) (a), -1, -1, -1

/**
 * Register (NCB32b) gicr#_pidr2
 *
 * GICR Pidr2 Register
 * The GICR0_PIDR2 characteristics are:
 *
 * * Purpose
 * This register returns byte[2] of the peripheral ID of the GIC Redistributor page.
 *
 * * Usage constraints
 * There are no usage constraints.
 */
union ody_gicrx_pidr2 {
	uint32_t u;
	struct ody_gicrx_pidr2_s {
		uint32_t des_1                       : 3;
		uint32_t jedec                       : 1;
		uint32_t revision                    : 4;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_gicrx_pidr2_s cn; */
};
typedef union ody_gicrx_pidr2 ody_gicrx_pidr2_t;

static inline uint64_t ODY_GICRX_PIDR2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICRX_PIDR2(uint64_t a)
{
	if (a <= 81)
		return 0x80100008ffe8ll + 0x40000ll * ((a) & 0x7f);
	__ody_csr_fatal("GICRX_PIDR2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GICRX_PIDR2(a) ody_gicrx_pidr2_t
#define bustype_ODY_GICRX_PIDR2(a) CSR_TYPE_NCB32b
#define basename_ODY_GICRX_PIDR2(a) "GICRX_PIDR2"
#define device_bar_ODY_GICRX_PIDR2(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_GICRX_PIDR2(a) (a)
#define arguments_ODY_GICRX_PIDR2(a) (a), -1, -1, -1

/**
 * Register (NCB32b) gicr#_pidr3
 *
 * GICR Pidr3 Register
 * The GICR0_PIDR3 characteristics are:
 *
 * * Purpose
 * This register returns byte[3] of the peripheral ID of the GIC Redistributor page.
 *
 * * Usage constraints
 * There are no usage constraints.
 */
union ody_gicrx_pidr3 {
	uint32_t u;
	struct ody_gicrx_pidr3_s {
		uint32_t cmod                        : 3;
		uint32_t reserved_3                  : 1;
		uint32_t revand                      : 4;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_gicrx_pidr3_s cn; */
};
typedef union ody_gicrx_pidr3 ody_gicrx_pidr3_t;

static inline uint64_t ODY_GICRX_PIDR3(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICRX_PIDR3(uint64_t a)
{
	if (a <= 81)
		return 0x80100008ffecll + 0x40000ll * ((a) & 0x7f);
	__ody_csr_fatal("GICRX_PIDR3", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GICRX_PIDR3(a) ody_gicrx_pidr3_t
#define bustype_ODY_GICRX_PIDR3(a) CSR_TYPE_NCB32b
#define basename_ODY_GICRX_PIDR3(a) "GICRX_PIDR3"
#define device_bar_ODY_GICRX_PIDR3(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_GICRX_PIDR3(a) (a)
#define arguments_ODY_GICRX_PIDR3(a) (a), -1, -1, -1

/**
 * Register (NCB32b) gicr#_pidr4
 *
 * GICR Pidr4 Register
 * The GICR0_PIDR4 characteristics are:
 *
 * * Purpose
 * This register returns byte[4] of the peripheral ID of the GIC Redistributor page.
 *
 * * Usage constraints
 * There are no usage constraints.
 */
union ody_gicrx_pidr4 {
	uint32_t u;
	struct ody_gicrx_pidr4_s {
		uint32_t des_2                       : 4;
		uint32_t size                        : 4;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_gicrx_pidr4_s cn; */
};
typedef union ody_gicrx_pidr4 ody_gicrx_pidr4_t;

static inline uint64_t ODY_GICRX_PIDR4(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICRX_PIDR4(uint64_t a)
{
	if (a <= 81)
		return 0x80100008ffd0ll + 0x40000ll * ((a) & 0x7f);
	__ody_csr_fatal("GICRX_PIDR4", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GICRX_PIDR4(a) ody_gicrx_pidr4_t
#define bustype_ODY_GICRX_PIDR4(a) CSR_TYPE_NCB32b
#define basename_ODY_GICRX_PIDR4(a) "GICRX_PIDR4"
#define device_bar_ODY_GICRX_PIDR4(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_GICRX_PIDR4(a) (a)
#define arguments_ODY_GICRX_PIDR4(a) (a), -1, -1, -1

/**
 * Register (NCB32b) gicr#_pidr5
 *
 * GICR Pidr5 Register
 * The GICR0_PIDR5 characteristics are:
 *
 * * Purpose
 * This register returns byte[5] of the peripheral ID of the GIC Redistributor page.
 *
 * * Usage constraints
 * There are no usage constraints.
 */
union ody_gicrx_pidr5 {
	uint32_t u;
	struct ody_gicrx_pidr5_s {
		uint32_t reserved_0_31               : 32;
	} s;
	struct ody_gicrx_pidr5_cn {
		uint32_t reserved_0_7                : 8;
		uint32_t reserved_8_31               : 24;
	} cn;
};
typedef union ody_gicrx_pidr5 ody_gicrx_pidr5_t;

static inline uint64_t ODY_GICRX_PIDR5(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICRX_PIDR5(uint64_t a)
{
	if (a <= 81)
		return 0x80100008ffd4ll + 0x40000ll * ((a) & 0x7f);
	__ody_csr_fatal("GICRX_PIDR5", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GICRX_PIDR5(a) ody_gicrx_pidr5_t
#define bustype_ODY_GICRX_PIDR5(a) CSR_TYPE_NCB32b
#define basename_ODY_GICRX_PIDR5(a) "GICRX_PIDR5"
#define device_bar_ODY_GICRX_PIDR5(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_GICRX_PIDR5(a) (a)
#define arguments_ODY_GICRX_PIDR5(a) (a), -1, -1, -1

/**
 * Register (NCB32b) gicr#_pidr6
 *
 * GICR Pidr6 Register
 * The GICR0_PIDR6 characteristics are:
 *
 * * Purpose
 * This register returns byte[6] of the peripheral ID of the GIC Redistributor page.
 *
 * * Usage constraints
 * There are no usage constraints.
 */
union ody_gicrx_pidr6 {
	uint32_t u;
	struct ody_gicrx_pidr6_s {
		uint32_t reserved_0_31               : 32;
	} s;
	struct ody_gicrx_pidr6_cn {
		uint32_t reserved_0_7                : 8;
		uint32_t reserved_8_31               : 24;
	} cn;
};
typedef union ody_gicrx_pidr6 ody_gicrx_pidr6_t;

static inline uint64_t ODY_GICRX_PIDR6(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICRX_PIDR6(uint64_t a)
{
	if (a <= 81)
		return 0x80100008ffd8ll + 0x40000ll * ((a) & 0x7f);
	__ody_csr_fatal("GICRX_PIDR6", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GICRX_PIDR6(a) ody_gicrx_pidr6_t
#define bustype_ODY_GICRX_PIDR6(a) CSR_TYPE_NCB32b
#define basename_ODY_GICRX_PIDR6(a) "GICRX_PIDR6"
#define device_bar_ODY_GICRX_PIDR6(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_GICRX_PIDR6(a) (a)
#define arguments_ODY_GICRX_PIDR6(a) (a), -1, -1, -1

/**
 * Register (NCB32b) gicr#_pidr7
 *
 * GICR Pidr7 Register
 * The GICR0_PIDR7 characteristics are:
 *
 * * Purpose
 * This register returns byte[7] of the peripheral ID of the GIC Redistributor page.
 *
 * * Usage constraints
 * There are no usage constraints.
 */
union ody_gicrx_pidr7 {
	uint32_t u;
	struct ody_gicrx_pidr7_s {
		uint32_t reserved_0_31               : 32;
	} s;
	struct ody_gicrx_pidr7_cn {
		uint32_t reserved_0_7                : 8;
		uint32_t reserved_8_31               : 24;
	} cn;
};
typedef union ody_gicrx_pidr7 ody_gicrx_pidr7_t;

static inline uint64_t ODY_GICRX_PIDR7(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICRX_PIDR7(uint64_t a)
{
	if (a <= 81)
		return 0x80100008ffdcll + 0x40000ll * ((a) & 0x7f);
	__ody_csr_fatal("GICRX_PIDR7", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GICRX_PIDR7(a) ody_gicrx_pidr7_t
#define bustype_ODY_GICRX_PIDR7(a) CSR_TYPE_NCB32b
#define basename_ODY_GICRX_PIDR7(a) "GICRX_PIDR7"
#define device_bar_ODY_GICRX_PIDR7(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_GICRX_PIDR7(a) (a)
#define arguments_ODY_GICRX_PIDR7(a) (a), -1, -1, -1

/**
 * Register (NCB) gicr#_propbaser
 *
 * GICR Propbaser Register
 * The GICR0_PROPBASER characteristics are:
 *
 * * Purpose
 * Specifies the base address,  Shareability and Cacheability of accesses to the LPI
 * Configuration table.
 *
 * * Usage constraints
 * A copy of this register is provided for each Redistributor, however, the state is
 * shared according to GICR0_TYPER.CommonLPIAff and should be programmed to matching
 * values.
 */
union ody_gicrx_propbaser {
	uint64_t u;
	struct ody_gicrx_propbaser_s {
		uint64_t idbits                      : 5;
		uint64_t reserved_5_6                : 2;
		uint64_t cacheability                : 3;
		uint64_t shareability                : 2;
		uint64_t physicaladdress             : 40;
		uint64_t reserved_52_55              : 4;
		uint64_t outercacheability           : 3;
		uint64_t reserved_59_63              : 5;
	} s;
	/* struct ody_gicrx_propbaser_s cn; */
};
typedef union ody_gicrx_propbaser ody_gicrx_propbaser_t;

static inline uint64_t ODY_GICRX_PROPBASER(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICRX_PROPBASER(uint64_t a)
{
	if (a <= 81)
		return 0x801000080070ll + 0x40000ll * ((a) & 0x7f);
	__ody_csr_fatal("GICRX_PROPBASER", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GICRX_PROPBASER(a) ody_gicrx_propbaser_t
#define bustype_ODY_GICRX_PROPBASER(a) CSR_TYPE_NCB
#define basename_ODY_GICRX_PROPBASER(a) "GICRX_PROPBASER"
#define device_bar_ODY_GICRX_PROPBASER(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_GICRX_PROPBASER(a) (a)
#define arguments_ODY_GICRX_PROPBASER(a) (a), -1, -1, -1

/**
 * Register (NCB32b) gicr#_pwrr
 *
 * GICR Pwrr Register
 * The GICR0_PWRR characteristics are:
 *
 * * Purpose
 * This register controls the powerup sequence of the Redistributors. Software must
 * write to this register during the powerup sequence.
 *
 * * Usage constraints
 * Only accessible by Secure accesses or when GICD(A)_DS.DS == 1.
 */
union ody_gicrx_pwrr {
	uint32_t u;
	struct ody_gicrx_pwrr_s {
		uint32_t rdpd                        : 1;
		uint32_t rdag                        : 1;
		uint32_t rdgpd                       : 1;
		uint32_t rdgpo                       : 1;
		uint32_t reserved_4_7                : 4;
		uint32_t rdgo                        : 7;
		uint32_t rdg                         : 9;
		uint32_t reserved_24_31              : 8;
	} s;
	/* struct ody_gicrx_pwrr_s cn; */
};
typedef union ody_gicrx_pwrr ody_gicrx_pwrr_t;

static inline uint64_t ODY_GICRX_PWRR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICRX_PWRR(uint64_t a)
{
	if (a <= 81)
		return 0x801000080024ll + 0x40000ll * ((a) & 0x7f);
	__ody_csr_fatal("GICRX_PWRR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GICRX_PWRR(a) ody_gicrx_pwrr_t
#define bustype_ODY_GICRX_PWRR(a) CSR_TYPE_NCB32b
#define basename_ODY_GICRX_PWRR(a) "GICRX_PWRR"
#define device_bar_ODY_GICRX_PWRR(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_GICRX_PWRR(a) (a)
#define arguments_ODY_GICRX_PWRR(a) (a), -1, -1, -1

/**
 * Register (NCB) gicr#_sgidr
 *
 * GICR Sgidr Register
 * The GICR0_SGIDR characteristics are:
 *
 * * Purpose
 * This register controls the default value of SGI settings, for use in the case of a
 * Double-bit Error Detect Error (DEDERR).
 *
 * * Usage constraints
 * Only accessible by Secure accesses or when GICD(A)_DS.DS == 1.
 *
 * \> *Note*
 * \> This register is shared across all PEs on the GIC
 */
union ody_gicrx_sgidr {
	uint64_t u;
	struct ody_gicrx_sgidr_s {
		uint64_t nsacr0                      : 1;
		uint64_t grp0                        : 1;
		uint64_t grpmod0                     : 1;
		uint64_t reserved_3                  : 1;
		uint64_t nsacr1                      : 1;
		uint64_t grp1                        : 1;
		uint64_t grpmod1                     : 1;
		uint64_t reserved_7                  : 1;
		uint64_t nsacr2                      : 1;
		uint64_t grp2                        : 1;
		uint64_t grpmod2                     : 1;
		uint64_t reserved_11                 : 1;
		uint64_t nsacr3                      : 1;
		uint64_t grp3                        : 1;
		uint64_t grpmod3                     : 1;
		uint64_t reserved_15                 : 1;
		uint64_t nsacr4                      : 1;
		uint64_t grp4                        : 1;
		uint64_t grpmod4                     : 1;
		uint64_t reserved_19                 : 1;
		uint64_t nsacr5                      : 1;
		uint64_t grp5                        : 1;
		uint64_t grpmod5                     : 1;
		uint64_t reserved_23                 : 1;
		uint64_t nsacr6                      : 1;
		uint64_t grp6                        : 1;
		uint64_t grpmod6                     : 1;
		uint64_t reserved_27                 : 1;
		uint64_t nsacr7                      : 1;
		uint64_t grp7                        : 1;
		uint64_t grpmod7                     : 1;
		uint64_t reserved_31                 : 1;
		uint64_t nsacr8                      : 1;
		uint64_t grp8                        : 1;
		uint64_t grpmod8                     : 1;
		uint64_t reserved_35                 : 1;
		uint64_t nsacr9                      : 1;
		uint64_t grp9                        : 1;
		uint64_t grpmod9                     : 1;
		uint64_t reserved_39                 : 1;
		uint64_t nsacr10                     : 1;
		uint64_t grp10                       : 1;
		uint64_t grpmod10                    : 1;
		uint64_t reserved_43                 : 1;
		uint64_t nsacr11                     : 1;
		uint64_t grp11                       : 1;
		uint64_t grpmod11                    : 1;
		uint64_t reserved_47                 : 1;
		uint64_t nsacr12                     : 1;
		uint64_t grp12                       : 1;
		uint64_t grpmod12                    : 1;
		uint64_t reserved_51                 : 1;
		uint64_t nsacr13                     : 1;
		uint64_t grp13                       : 1;
		uint64_t grpmod13                    : 1;
		uint64_t reserved_55                 : 1;
		uint64_t nsacr14                     : 1;
		uint64_t grp14                       : 1;
		uint64_t grpmod14                    : 1;
		uint64_t reserved_59                 : 1;
		uint64_t nsacr15                     : 1;
		uint64_t grp15                       : 1;
		uint64_t grpmod15                    : 1;
		uint64_t reserved_63                 : 1;
	} s;
	/* struct ody_gicrx_sgidr_s cn; */
};
typedef union ody_gicrx_sgidr ody_gicrx_sgidr_t;

static inline uint64_t ODY_GICRX_SGIDR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICRX_SGIDR(uint64_t a)
{
	if (a <= 81)
		return 0x80100009c010ll + 0x40000ll * ((a) & 0x7f);
	__ody_csr_fatal("GICRX_SGIDR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GICRX_SGIDR(a) ody_gicrx_sgidr_t
#define bustype_ODY_GICRX_SGIDR(a) CSR_TYPE_NCB
#define basename_ODY_GICRX_SGIDR(a) "GICRX_SGIDR"
#define device_bar_ODY_GICRX_SGIDR(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_GICRX_SGIDR(a) (a)
#define arguments_ODY_GICRX_SGIDR(a) (a), -1, -1, -1

/**
 * Register (NCB32b) gicr#_statusr
 *
 * GICR Statusr Register
 * The GICR0_STATUS characteristics are:
 *
 * * Purpose
 * This register is not used.
 *
 * See the GICT register page for details of error reporting by the GIC
 *
 * * Usage constraints
 * There are no usage constraints.
 */
union ody_gicrx_statusr {
	uint32_t u;
	struct ody_gicrx_statusr_s {
		uint32_t reserved_0_31               : 32;
	} s;
	/* struct ody_gicrx_statusr_s cn; */
};
typedef union ody_gicrx_statusr ody_gicrx_statusr_t;

static inline uint64_t ODY_GICRX_STATUSR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICRX_STATUSR(uint64_t a)
{
	if (a <= 81)
		return 0x801000080010ll + 0x40000ll * ((a) & 0x7f);
	__ody_csr_fatal("GICRX_STATUSR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GICRX_STATUSR(a) ody_gicrx_statusr_t
#define bustype_ODY_GICRX_STATUSR(a) CSR_TYPE_NCB32b
#define basename_ODY_GICRX_STATUSR(a) "GICRX_STATUSR"
#define device_bar_ODY_GICRX_STATUSR(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_GICRX_STATUSR(a) (a)
#define arguments_ODY_GICRX_STATUSR(a) (a), -1, -1, -1

/**
 * Register (NCB32b) gicr#_syncr
 *
 * GICR Syncr Register
 * The GICR0_SYNCR characteristics are:
 *
 * * Purpose
 * Indicates completion of register based invalidation operations.
 *
 * * Usage constraints
 * None
 *
 * A copy of this register is provided for each Redistributor.
 */
union ody_gicrx_syncr {
	uint32_t u;
	struct ody_gicrx_syncr_s {
		uint32_t busy                        : 1;
		uint32_t reserved_1_31               : 31;
	} s;
	/* struct ody_gicrx_syncr_s cn; */
};
typedef union ody_gicrx_syncr ody_gicrx_syncr_t;

static inline uint64_t ODY_GICRX_SYNCR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICRX_SYNCR(uint64_t a)
{
	if (a <= 81)
		return 0x8010000800c0ll + 0x40000ll * ((a) & 0x7f);
	__ody_csr_fatal("GICRX_SYNCR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GICRX_SYNCR(a) ody_gicrx_syncr_t
#define bustype_ODY_GICRX_SYNCR(a) CSR_TYPE_NCB32b
#define basename_ODY_GICRX_SYNCR(a) "GICRX_SYNCR"
#define device_bar_ODY_GICRX_SYNCR(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_GICRX_SYNCR(a) (a)
#define arguments_ODY_GICRX_SYNCR(a) (a), -1, -1, -1

/**
 * Register (NCB) gicr#_typer
 *
 * GICR Typer Register
 * The GICR0_TYPER characteristics are:
 *
 * * Purpose
 * Provides information about the configuration of this Redistributor.
 *
 * * Usage constraints
 * There are no usage constraints
 */
union ody_gicrx_typer {
	uint64_t u;
	struct ody_gicrx_typer_s {
		uint64_t plpis                       : 1;
		uint64_t vlpis                       : 1;
		uint64_t dirty                       : 1;
		uint64_t directlpi                   : 1;
		uint64_t last                        : 1;
		uint64_t dpgs                        : 1;
		uint64_t mpam                        : 1;
		uint64_t rvpeid                      : 1;
		uint64_t processornumber             : 16;
		uint64_t commonlpiaff                : 2;
		uint64_t vsgi                        : 1;
		uint64_t ppinum                      : 5;
		uint64_t affinityvalue               : 32;
	} s;
	/* struct ody_gicrx_typer_s cn; */
};
typedef union ody_gicrx_typer ody_gicrx_typer_t;

static inline uint64_t ODY_GICRX_TYPER(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICRX_TYPER(uint64_t a)
{
	if (a <= 81)
		return 0x801000080008ll + 0x40000ll * ((a) & 0x7f);
	__ody_csr_fatal("GICRX_TYPER", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GICRX_TYPER(a) ody_gicrx_typer_t
#define bustype_ODY_GICRX_TYPER(a) CSR_TYPE_NCB
#define basename_ODY_GICRX_TYPER(a) "GICRX_TYPER"
#define device_bar_ODY_GICRX_TYPER(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_GICRX_TYPER(a) (a)
#define arguments_ODY_GICRX_TYPER(a) (a), -1, -1, -1

/**
 * Register (NCB) gicr#_vcfgbaser
 *
 * GICR Vcfgbaser Register
 * The GICR0_VCFGBASER characteristics are:
 *
 * * Purpose
 * This register returns the access attributes of the vPE CFG table.
 *
 * * Usage constraints
 * There are no usage constraints.
 */
union ody_gicrx_vcfgbaser {
	uint64_t u;
	struct ody_gicrx_vcfgbaser_s {
		uint64_t size                        : 7;
		uint64_t innercache                  : 3;
		uint64_t shareability                : 2;
		uint64_t addr                        : 40;
		uint64_t reserved_52                 : 1;
		uint64_t page_size                   : 2;
		uint64_t indirect                    : 1;
		uint64_t outercache                  : 3;
		uint64_t entry_size                  : 3;
		uint64_t sleep                       : 1;
		uint64_t valid                       : 1;
	} s;
	/* struct ody_gicrx_vcfgbaser_s cn; */
};
typedef union ody_gicrx_vcfgbaser ody_gicrx_vcfgbaser_t;

static inline uint64_t ODY_GICRX_VCFGBASER(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICRX_VCFGBASER(uint64_t a)
{
	if (a <= 81)
		return 0x8010000ac100ll + 0x40000ll * ((a) & 0x7f);
	__ody_csr_fatal("GICRX_VCFGBASER", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GICRX_VCFGBASER(a) ody_gicrx_vcfgbaser_t
#define bustype_ODY_GICRX_VCFGBASER(a) CSR_TYPE_NCB
#define basename_ODY_GICRX_VCFGBASER(a) "GICRX_VCFGBASER"
#define device_bar_ODY_GICRX_VCFGBASER(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_GICRX_VCFGBASER(a) (a)
#define arguments_ODY_GICRX_VCFGBASER(a) (a), -1, -1, -1

/**
 * Register (NCB) gicr#_verrr
 *
 * GICR Verrr Register
 * The GICR_VERRR characteristics are:
 *
 * * Purpose
 * This register can set and clear the error bit for a vPE in the vICM RAM.
 * You can use the register to find vPEs with an error and obtain vPE information from
 * the vTGT and VICM RAMs.
 *
 * * Usage constraints
 * Only accessible using a 64-bit access.
 */
union ody_gicrx_verrr {
	uint64_t u;
	struct ody_gicrx_verrr_s {
		uint64_t vpeid                       : 11;
		uint64_t reserved_11_13              : 3;
		uint64_t readblock                   : 3;
		uint64_t reserved_17_59              : 43;
		uint64_t opcode                      : 2;
		uint64_t response                    : 1;
		uint64_t busy                        : 1;
	} s;
	/* struct ody_gicrx_verrr_s cn; */
};
typedef union ody_gicrx_verrr ody_gicrx_verrr_t;

static inline uint64_t ODY_GICRX_VERRR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICRX_VERRR(uint64_t a)
{
	if (a <= 81)
		return 0x8010000ae100ll + 0x40000ll * ((a) & 0x7f);
	__ody_csr_fatal("GICRX_VERRR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GICRX_VERRR(a) ody_gicrx_verrr_t
#define bustype_ODY_GICRX_VERRR(a) CSR_TYPE_NCB
#define basename_ODY_GICRX_VERRR(a) "GICRX_VERRR"
#define device_bar_ODY_GICRX_VERRR(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_GICRX_VERRR(a) (a)
#define arguments_ODY_GICRX_VERRR(a) (a), -1, -1, -1

/**
 * Register (NCB32b) gicr#_vfctlr
 *
 * GICR Vfctlr Register
 * The GICR0_VFCTLR characteristics are:
 *
 * * Purpose
 * This register controls the non-Architectural features associated with virtual
 * interrupts in the GIC.
 *
 * * Usage constraints
 * Only accessible by Secure accesses or when GICD(A)_DS.DS == 1.
 */
union ody_gicrx_vfctlr {
	uint32_t u;
	struct ody_gicrx_vfctlr_s {
		uint32_t credlim                     : 1;
		uint32_t sgilim                      : 1;
		uint32_t lpilim                      : 1;
		uint32_t credlimcount                : 2;
		uint32_t reserved_5_31               : 27;
	} s;
	struct ody_gicrx_vfctlr_cn {
		uint32_t credlim                     : 1;
		uint32_t sgilim                      : 1;
		uint32_t lpilim                      : 1;
		uint32_t credlimcount                : 2;
		uint32_t reserved_5_8                : 4;
		uint32_t reserved_9                  : 1;
		uint32_t reserved_10_31              : 22;
	} cn;
};
typedef union ody_gicrx_vfctlr ody_gicrx_vfctlr_t;

static inline uint64_t ODY_GICRX_VFCTLR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICRX_VFCTLR(uint64_t a)
{
	if (a <= 81)
		return 0x8010000ac000ll + 0x40000ll * ((a) & 0x7f);
	__ody_csr_fatal("GICRX_VFCTLR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GICRX_VFCTLR(a) ody_gicrx_vfctlr_t
#define bustype_ODY_GICRX_VFCTLR(a) CSR_TYPE_NCB32b
#define basename_ODY_GICRX_VFCTLR(a) "GICRX_VFCTLR"
#define device_bar_ODY_GICRX_VFCTLR(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_GICRX_VFCTLR(a) (a)
#define arguments_ODY_GICRX_VFCTLR(a) (a), -1, -1, -1

/**
 * Register (NCB32b) gicr#_vinvchipr
 *
 * GICR Vinvchipr Register
 * The GICR_VINVCHIPR characteristics are:
 *
 * * Purpose
 *
 * This register is RES0.
 */
union ody_gicrx_vinvchipr {
	uint32_t u;
	struct ody_gicrx_vinvchipr_s {
		uint32_t chiplist                    : 1;
		uint32_t reserved_1_29               : 29;
		uint32_t vid                         : 1;
		uint32_t valid                       : 1;
	} s;
	/* struct ody_gicrx_vinvchipr_s cn; */
};
typedef union ody_gicrx_vinvchipr ody_gicrx_vinvchipr_t;

static inline uint64_t ODY_GICRX_VINVCHIPR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICRX_VINVCHIPR(uint64_t a)
{
	if (a <= 81)
		return 0x8010000a0120ll + 0x40000ll * ((a) & 0x7f);
	__ody_csr_fatal("GICRX_VINVCHIPR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GICRX_VINVCHIPR(a) ody_gicrx_vinvchipr_t
#define bustype_ODY_GICRX_VINVCHIPR(a) CSR_TYPE_NCB32b
#define basename_ODY_GICRX_VINVCHIPR(a) "GICRX_VINVCHIPR"
#define device_bar_ODY_GICRX_VINVCHIPR(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_GICRX_VINVCHIPR(a) (a)
#define arguments_ODY_GICRX_VINVCHIPR(a) (a), -1, -1, -1

/**
 * Register (NCB) gicr#_vpendbaser
 *
 * GICR Vpendbaser Register
 * The GICR0_VPENDBASER characteristics are:
 *
 * * Purpose
 * Specifies the base address of the memory that holds the virtual LPI Pending table
 * for the currently scheduled virtual machine.
 *
 * * Usage constraints
 * There are no usage constraints.
 */
union ody_gicrx_vpendbaser {
	uint64_t u;
	struct ody_gicrx_vpendbaser_s {
		uint64_t vpeid                       : 11;
		uint64_t reserved_11_57              : 47;
		uint64_t vgrp1en                     : 1;
		uint64_t vgrp0en                     : 1;
		uint64_t dirty                       : 1;
		uint64_t pendinglast                 : 1;
		uint64_t doorbell                    : 1;
		uint64_t valid                       : 1;
	} s;
	/* struct ody_gicrx_vpendbaser_s cn; */
};
typedef union ody_gicrx_vpendbaser ody_gicrx_vpendbaser_t;

static inline uint64_t ODY_GICRX_VPENDBASER(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICRX_VPENDBASER(uint64_t a)
{
	if (a <= 81)
		return 0x8010000a0078ll + 0x40000ll * ((a) & 0x7f);
	__ody_csr_fatal("GICRX_VPENDBASER", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GICRX_VPENDBASER(a) ody_gicrx_vpendbaser_t
#define bustype_ODY_GICRX_VPENDBASER(a) CSR_TYPE_NCB
#define basename_ODY_GICRX_VPENDBASER(a) "GICRX_VPENDBASER"
#define device_bar_ODY_GICRX_VPENDBASER(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_GICRX_VPENDBASER(a) (a)
#define arguments_ODY_GICRX_VPENDBASER(a) (a), -1, -1, -1

/**
 * Register (NCB) gicr#_vpropbaser
 *
 * GICR Vpropbaser Register
 * The GICR0_VPROPBASER characteristics are:
 *
 * * Purpose
 * Specifies the base address of the memory that holds the vPE Configuration table.
 *
 * * Usage constraints
 * There are no usage constraints.
 */
union ody_gicrx_vpropbaser {
	uint64_t u;
	struct ody_gicrx_vpropbaser_s {
		uint64_t size                        : 7;
		uint64_t innercache                  : 3;
		uint64_t shareability                : 2;
		uint64_t addr                        : 40;
		uint64_t z                           : 1;
		uint64_t page_size                   : 2;
		uint64_t indirect                    : 1;
		uint64_t outercache                  : 3;
		uint64_t entry_size                  : 3;
		uint64_t reserved_62                 : 1;
		uint64_t valid                       : 1;
	} s;
	/* struct ody_gicrx_vpropbaser_s cn; */
};
typedef union ody_gicrx_vpropbaser ody_gicrx_vpropbaser_t;

static inline uint64_t ODY_GICRX_VPROPBASER(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICRX_VPROPBASER(uint64_t a)
{
	if (a <= 81)
		return 0x8010000a0070ll + 0x40000ll * ((a) & 0x7f);
	__ody_csr_fatal("GICRX_VPROPBASER", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GICRX_VPROPBASER(a) ody_gicrx_vpropbaser_t
#define bustype_ODY_GICRX_VPROPBASER(a) CSR_TYPE_NCB
#define basename_ODY_GICRX_VPROPBASER(a) "GICRX_VPROPBASER"
#define device_bar_ODY_GICRX_VPROPBASER(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_GICRX_VPROPBASER(a) (a)
#define arguments_ODY_GICRX_VPROPBASER(a) (a), -1, -1, -1

/**
 * Register (NCB32b) gicr#_vsgipendr
 *
 * GICR Vsgipendr Register
 * The GICR_VSGIPENDR characteristics are:
 *
 * * Purpose
 * Requests the pending state of virtual SGIs for a specified vPE.
 *
 * * Usage constraints
 * There are no usage constraints.
 */
union ody_gicrx_vsgipendr {
	uint32_t u;
	struct ody_gicrx_vsgipendr_s {
		uint32_t pending                     : 16;
		uint32_t reserved_16_30              : 15;
		uint32_t busy                        : 1;
	} s;
	/* struct ody_gicrx_vsgipendr_s cn; */
};
typedef union ody_gicrx_vsgipendr ody_gicrx_vsgipendr_t;

static inline uint64_t ODY_GICRX_VSGIPENDR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICRX_VSGIPENDR(uint64_t a)
{
	if (a <= 81)
		return 0x8010000a0088ll + 0x40000ll * ((a) & 0x7f);
	__ody_csr_fatal("GICRX_VSGIPENDR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GICRX_VSGIPENDR(a) ody_gicrx_vsgipendr_t
#define bustype_ODY_GICRX_VSGIPENDR(a) CSR_TYPE_NCB32b
#define basename_ODY_GICRX_VSGIPENDR(a) "GICRX_VSGIPENDR"
#define device_bar_ODY_GICRX_VSGIPENDR(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_GICRX_VSGIPENDR(a) (a)
#define arguments_ODY_GICRX_VSGIPENDR(a) (a), -1, -1, -1

/**
 * Register (NCB) gicr#_vsgir
 *
 * GICR Vsgir Register
 * The GICR_VSGIR characteristics are:
 * *Purpose
 * Requests the pending state of virtual SGIs for a specified vPE.
 *
 * *Usage constraints
 * 64-bit access only.
 */
union ody_gicrx_vsgir {
	uint64_t u;
	struct ody_gicrx_vsgir_s {
		uint64_t vpeid                       : 11;
		uint64_t reserved_11_63              : 53;
	} s;
	/* struct ody_gicrx_vsgir_s cn; */
};
typedef union ody_gicrx_vsgir ody_gicrx_vsgir_t;

static inline uint64_t ODY_GICRX_VSGIR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICRX_VSGIR(uint64_t a)
{
	if (a <= 81)
		return 0x8010000a0080ll + 0x40000ll * ((a) & 0x7f);
	__ody_csr_fatal("GICRX_VSGIR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GICRX_VSGIR(a) ody_gicrx_vsgir_t
#define bustype_ODY_GICRX_VSGIR(a) CSR_TYPE_NCB
#define basename_ODY_GICRX_VSGIR(a) "GICRX_VSGIR"
#define device_bar_ODY_GICRX_VSGIR(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_GICRX_VSGIR(a) (a)
#define arguments_ODY_GICRX_VSGIR(a) (a), -1, -1, -1

/**
 * Register (NCB32b) gicr#_waker
 *
 * GICR Waker Register
 * The GICR0_WAKER characteristics are:
 *
 * * Purpose
 * Permits software to control the behavior of the WakeRequest power management signal
 * corresponding to the Redistributor. Power management operations follow the rules in
 * Power management section in TRM.
 *
 * * Usage constraints
 * Secure only when GICD_CTLR.DS==0, this is a Secure register.
 */
union ody_gicrx_waker {
	uint32_t u;
	struct ody_gicrx_waker_s {
		uint32_t sleep                       : 1;
		uint32_t processorsleep              : 1;
		uint32_t childrenasleep              : 1;
		uint32_t reserved_3_30               : 28;
		uint32_t quiescent                   : 1;
	} s;
	/* struct ody_gicrx_waker_s cn; */
};
typedef union ody_gicrx_waker ody_gicrx_waker_t;

static inline uint64_t ODY_GICRX_WAKER(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICRX_WAKER(uint64_t a)
{
	if (a <= 81)
		return 0x801000080014ll + 0x40000ll * ((a) & 0x7f);
	__ody_csr_fatal("GICRX_WAKER", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GICRX_WAKER(a) ody_gicrx_waker_t
#define bustype_ODY_GICRX_WAKER(a) CSR_TYPE_NCB32b
#define basename_ODY_GICRX_WAKER(a) "GICRX_WAKER"
#define device_bar_ODY_GICRX_WAKER(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_GICRX_WAKER(a) (a)
#define arguments_ODY_GICRX_WAKER(a) (a), -1, -1, -1

/**
 * Register (NCB32b) gict_cidr0
 *
 * GICT Cidr0 Register
 * The GICT_CIDR0 characteristics are:
 *
 * * Purpose
 * This register is one of the Component Identification Registers and returns the first
 * part of the Preamble.
 *
 * * Usage constraints
 * There are no usage constraints.
 */
union ody_gict_cidr0 {
	uint32_t u;
	struct ody_gict_cidr0_s {
		uint32_t prmbl_0                     : 8;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_gict_cidr0_s cn; */
};
typedef union ody_gict_cidr0 ody_gict_cidr0_t;

#define ODY_GICT_CIDR0 ODY_GICT_CIDR0_FUNC()
static inline uint64_t ODY_GICT_CIDR0_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICT_CIDR0_FUNC(void)
{
	return 0x80100002fff0ll;
}

#define typedef_ODY_GICT_CIDR0 ody_gict_cidr0_t
#define bustype_ODY_GICT_CIDR0 CSR_TYPE_NCB32b
#define basename_ODY_GICT_CIDR0 "GICT_CIDR0"
#define device_bar_ODY_GICT_CIDR0 0x0 /* PF_BAR0 */
#define busnum_ODY_GICT_CIDR0 0
#define arguments_ODY_GICT_CIDR0 -1, -1, -1, -1

/**
 * Register (NCB32b) gict_cidr1
 *
 * GICT Cidr1 Register
 * The GICT_CIDR1 characteristics are:
 *
 * * Purpose
 * This register is one of the Component Identification Registers and returns the
 * second part of the Preamble as well as the Component Class.
 *
 * * Usage constraints
 * There are no usage constraints.
 */
union ody_gict_cidr1 {
	uint32_t u;
	struct ody_gict_cidr1_s {
		uint32_t prmbl_1                     : 4;
		uint32_t class_f                     : 4;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_gict_cidr1_s cn; */
};
typedef union ody_gict_cidr1 ody_gict_cidr1_t;

#define ODY_GICT_CIDR1 ODY_GICT_CIDR1_FUNC()
static inline uint64_t ODY_GICT_CIDR1_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICT_CIDR1_FUNC(void)
{
	return 0x80100002fff4ll;
}

#define typedef_ODY_GICT_CIDR1 ody_gict_cidr1_t
#define bustype_ODY_GICT_CIDR1 CSR_TYPE_NCB32b
#define basename_ODY_GICT_CIDR1 "GICT_CIDR1"
#define device_bar_ODY_GICT_CIDR1 0x0 /* PF_BAR0 */
#define busnum_ODY_GICT_CIDR1 0
#define arguments_ODY_GICT_CIDR1 -1, -1, -1, -1

/**
 * Register (NCB32b) gict_cidr2
 *
 * GICT Cidr2 Register
 * The GICT_CIDR2 characteristics are:
 *
 * * Purpose
 * This register is one of the Component Identification Registers and returns the third
 * part of the Preamble.
 *
 * * Usage constraints
 * There are no usage constraints.
 */
union ody_gict_cidr2 {
	uint32_t u;
	struct ody_gict_cidr2_s {
		uint32_t prmbl_2                     : 8;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_gict_cidr2_s cn; */
};
typedef union ody_gict_cidr2 ody_gict_cidr2_t;

#define ODY_GICT_CIDR2 ODY_GICT_CIDR2_FUNC()
static inline uint64_t ODY_GICT_CIDR2_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICT_CIDR2_FUNC(void)
{
	return 0x80100002fff8ll;
}

#define typedef_ODY_GICT_CIDR2 ody_gict_cidr2_t
#define bustype_ODY_GICT_CIDR2 CSR_TYPE_NCB32b
#define basename_ODY_GICT_CIDR2 "GICT_CIDR2"
#define device_bar_ODY_GICT_CIDR2 0x0 /* PF_BAR0 */
#define busnum_ODY_GICT_CIDR2 0
#define arguments_ODY_GICT_CIDR2 -1, -1, -1, -1

/**
 * Register (NCB32b) gict_cidr3
 *
 * GICT Cidr3 Register
 * The GICT_CIDR3 characteristics are:
 *
 * * Purpose
 * This register is one of the Component Identification Registers and returns the
 * fourth part of the Preamble.
 *
 * * Usage constraints
 * There are no usage constraints.
 */
union ody_gict_cidr3 {
	uint32_t u;
	struct ody_gict_cidr3_s {
		uint32_t prmbl_3                     : 8;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_gict_cidr3_s cn; */
};
typedef union ody_gict_cidr3 ody_gict_cidr3_t;

#define ODY_GICT_CIDR3 ODY_GICT_CIDR3_FUNC()
static inline uint64_t ODY_GICT_CIDR3_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICT_CIDR3_FUNC(void)
{
	return 0x80100002fffcll;
}

#define typedef_ODY_GICT_CIDR3 ody_gict_cidr3_t
#define bustype_ODY_GICT_CIDR3 CSR_TYPE_NCB32b
#define basename_ODY_GICT_CIDR3 "GICT_CIDR3"
#define device_bar_ODY_GICT_CIDR3 0x0 /* PF_BAR0 */
#define busnum_ODY_GICT_CIDR3 0
#define arguments_ODY_GICT_CIDR3 -1, -1, -1, -1

/**
 * Register (NCB32b) gict_devarch
 *
 * GICT Devarch Register
 * The GICT_DEVARCH characteristics are:
 *
 * * Purpose
 * Stores the Device Architecture ID
 *
 * * Usage constraints
 * If GICD(A)_SAC.GICTNS == 0, then only Secure software can access the functions of this register.
 */
union ody_gict_devarch {
	uint32_t u;
	struct ody_gict_devarch_s {
		uint32_t archid                      : 12;
		uint32_t reserved_12_15              : 4;
		uint32_t revision                    : 4;
		uint32_t present                     : 1;
		uint32_t architect                   : 11;
	} s;
	/* struct ody_gict_devarch_s cn; */
};
typedef union ody_gict_devarch ody_gict_devarch_t;

#define ODY_GICT_DEVARCH ODY_GICT_DEVARCH_FUNC()
static inline uint64_t ODY_GICT_DEVARCH_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICT_DEVARCH_FUNC(void)
{
	return 0x80100002ffbcll;
}

#define typedef_ODY_GICT_DEVARCH ody_gict_devarch_t
#define bustype_ODY_GICT_DEVARCH CSR_TYPE_NCB32b
#define basename_ODY_GICT_DEVARCH "GICT_DEVARCH"
#define device_bar_ODY_GICT_DEVARCH 0x0 /* PF_BAR0 */
#define busnum_ODY_GICT_DEVARCH 0
#define arguments_ODY_GICT_DEVARCH -1, -1, -1, -1

/**
 * Register (NCB32b) gict_devid
 *
 * GICT Devid Register
 * The GICT_DEVID characteristics are:
 *
 * * Purpose
 * This register returns information about the configuration of the GIC-700 GICT such
 * as whether an LPI or ITS is available.
 *
 * * Usage constraints
 * If GICD(A)_SAC.GICTNS == 0, then only Secure software can read this register.
 *
 * \> *Note*
 * \> GICT_DEVID was previously known as GICT_ERRIDR.
 */
union ody_gict_devid {
	uint32_t u;
	struct ody_gict_devid_s {
		uint32_t numrecords                  : 16;
		uint32_t reserved_16_31              : 16;
	} s;
	/* struct ody_gict_devid_s cn; */
};
typedef union ody_gict_devid ody_gict_devid_t;

#define ODY_GICT_DEVID ODY_GICT_DEVID_FUNC()
static inline uint64_t ODY_GICT_DEVID_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICT_DEVID_FUNC(void)
{
	return 0x80100002ffc8ll;
}

#define typedef_ODY_GICT_DEVID ody_gict_devid_t
#define bustype_ODY_GICT_DEVID CSR_TYPE_NCB32b
#define basename_ODY_GICT_DEVID "GICT_DEVID"
#define device_bar_ODY_GICT_DEVID 0x0 /* PF_BAR0 */
#define busnum_ODY_GICT_DEVID 0
#define arguments_ODY_GICT_DEVID -1, -1, -1, -1

/**
 * Register (NCB) gict_err#_addr
 *
 * GICT Err Addr Register
 * The GICT_ERR0ADDR characteristics are:
 *
 * * Purpose
 * This register contains the address and security status of the write. This register
 * is only present for GICT software record 0.
 *
 * * Usage constraints
 * If GICD(A)_SAC.GICTNS == 0, then only Secure software can access the contents of this register.
 * Ignores writes if GICT_ERR0STATUS.AV == 1.
 * All bits are RAZ/WI if GICT_ERR0STATUS.IERR = 0, 12, or 13.
 */
union ody_gict_errx_addr {
	uint64_t u;
	struct ody_gict_errx_addr_s {
		uint64_t paddr                       : 48;
		uint64_t reserved_48_62              : 15;
		uint64_t ns_f                        : 1;
	} s;
	/* struct ody_gict_errx_addr_s cn; */
};
typedef union ody_gict_errx_addr ody_gict_errx_addr_t;

static inline uint64_t ODY_GICT_ERRX_ADDR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICT_ERRX_ADDR(uint64_t a)
{
	if (a <= 27)
		return 0x801000020018ll + 0x40ll * ((a) & 0x1f);
	__ody_csr_fatal("GICT_ERRX_ADDR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GICT_ERRX_ADDR(a) ody_gict_errx_addr_t
#define bustype_ODY_GICT_ERRX_ADDR(a) CSR_TYPE_NCB
#define basename_ODY_GICT_ERRX_ADDR(a) "GICT_ERRX_ADDR"
#define device_bar_ODY_GICT_ERRX_ADDR(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_GICT_ERRX_ADDR(a) (a)
#define arguments_ODY_GICT_ERRX_ADDR(a) (a), -1, -1, -1

/**
 * Register (NCB) gict_err#_ctlr
 *
 * GICT Err Ctlr Register
 * The GICT_ERR0CTLR characteristics are:
 *
 * * Purpose
 * This register controls how interrupts are handled.
 *
 * * Usage constraints
 * If GICD(A)_SAC.GICTNS == 0, then only Secure software can access the contents of this register.
 */
union ody_gict_errx_ctlr {
	uint64_t u;
	struct ody_gict_errx_ctlr_s {
		uint64_t reserved_0_1                : 2;
		uint64_t ui                          : 1;
		uint64_t fi                          : 1;
		uint64_t ue                          : 1;
		uint64_t reserved_5_7                : 3;
		uint64_t cfi                         : 1;
		uint64_t reserved_9_14               : 6;
		uint64_t rp                          : 1;
		uint64_t reserved_16_31              : 16;
		uint64_t dis_col_oor                 : 1;
		uint64_t dis_deact                   : 1;
		uint64_t dis_spi_oor                 : 2;
		uint64_t dis_spi_dst                 : 1;
		uint64_t dis_sgi                     : 1;
		uint64_t dis_ace                     : 1;
		uint64_t reserved_39_63              : 25;
	} s;
	/* struct ody_gict_errx_ctlr_s cn; */
};
typedef union ody_gict_errx_ctlr ody_gict_errx_ctlr_t;

static inline uint64_t ODY_GICT_ERRX_CTLR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICT_ERRX_CTLR(uint64_t a)
{
	if (a <= 27)
		return 0x801000020008ll + 0x40ll * ((a) & 0x1f);
	__ody_csr_fatal("GICT_ERRX_CTLR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GICT_ERRX_CTLR(a) ody_gict_errx_ctlr_t
#define bustype_ODY_GICT_ERRX_CTLR(a) CSR_TYPE_NCB
#define basename_ODY_GICT_ERRX_CTLR(a) "GICT_ERRX_CTLR"
#define device_bar_ODY_GICT_ERRX_CTLR(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_GICT_ERRX_CTLR(a) (a)
#define arguments_ODY_GICT_ERRX_CTLR(a) (a), -1, -1, -1

/**
 * Register (NCB) gict_err#_fr
 *
 * GICT Err Fr Register
 * The GICT_ERR0FR characteristics are:
 *
 * * Purpose
 * This register returns information about the Armv8.2 RAS features that the GIC-700 implements.
 *
 * * Usage constraints
 * If GICD(A)_SAC.GICTNS == 0, then only Secure software can access the contents of this register.
 */
union ody_gict_errx_fr {
	uint64_t u;
	struct ody_gict_errx_fr_s {
		uint64_t ed                          : 2;
		uint64_t de                          : 2;
		uint64_t ui                          : 2;
		uint64_t fi                          : 2;
		uint64_t ue                          : 2;
		uint64_t cfi                         : 2;
		uint64_t cec                         : 3;
		uint64_t rp                          : 1;
		uint64_t reserved_16_63              : 48;
	} s;
	/* struct ody_gict_errx_fr_s cn; */
};
typedef union ody_gict_errx_fr ody_gict_errx_fr_t;

static inline uint64_t ODY_GICT_ERRX_FR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICT_ERRX_FR(uint64_t a)
{
	if (a <= 27)
		return 0x801000020000ll + 0x40ll * ((a) & 0x1f);
	__ody_csr_fatal("GICT_ERRX_FR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GICT_ERRX_FR(a) ody_gict_errx_fr_t
#define bustype_ODY_GICT_ERRX_FR(a) CSR_TYPE_NCB
#define basename_ODY_GICT_ERRX_FR(a) "GICT_ERRX_FR"
#define device_bar_ODY_GICT_ERRX_FR(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_GICT_ERRX_FR(a) (a)
#define arguments_ODY_GICT_ERRX_FR(a) (a), -1, -1, -1

/**
 * Register (NCB) gict_err#_misc0_a
 *
 * GICT Err Misc0 A Register
 * The GICT_ERR0MISC0 characteristics are:
 *
 * * Purpose
 * This register contains the Corrected error counter and information that assists with
 * identifying the RAM in which the error was detected.
 * For error record 0, it will contain information that assists with identifying where
 * the SW error was detected.
 *
 * * Usage constraints
 * If GICD(A)_SAC.GICTNS == 0, then only Secure software can access the contents of this register.
 * If GICT_ERRSTATUS.MV == 1, then GICT_ERRMISC0 ignores writes to the Data field.
 */
union ody_gict_errx_misc0_a {
	uint64_t u;
	struct ody_gict_errx_misc0_a_s {
		uint64_t data                        : 32;
		uint64_t cnt                         : 8;
		uint64_t of                          : 1;
		uint64_t re                          : 1;
		uint64_t reserved_42_63              : 22;
	} s;
	/* struct ody_gict_errx_misc0_a_s cn; */
};
typedef union ody_gict_errx_misc0_a ody_gict_errx_misc0_a_t;

static inline uint64_t ODY_GICT_ERRX_MISC0_A(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICT_ERRX_MISC0_A(uint64_t a)
{
	if (a <= 27)
		return 0x801000020020ll + 0x40ll * ((a) & 0x1f);
	__ody_csr_fatal("GICT_ERRX_MISC0_A", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GICT_ERRX_MISC0_A(a) ody_gict_errx_misc0_a_t
#define bustype_ODY_GICT_ERRX_MISC0_A(a) CSR_TYPE_NCB
#define basename_ODY_GICT_ERRX_MISC0_A(a) "GICT_ERRX_MISC0_A"
#define device_bar_ODY_GICT_ERRX_MISC0_A(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_GICT_ERRX_MISC0_A(a) (a)
#define arguments_ODY_GICT_ERRX_MISC0_A(a) (a), -1, -1, -1

/**
 * Register (NCB) gict_err#_misc1_b
 *
 * GICT Err Misc1 B Register
 * The GICT_ERR0MISC1 characteristics are:
 *
 * * Purpose
 * This register contains the data value of an uncorrectable error in the LPI RAM, TGT-
 * LPI RAM, or ITS software information. The register is not present for other error
 * records.
 *
 * * Usage constraints
 * If GICD(A)_SAC.GICTNS == 0, then only Secure software can access the contents of this register.
 * If GICT_ERRSTATUS.MV == 1, then GICT_ERRMISC1 ignores writes.
 */
union ody_gict_errx_misc1_b {
	uint64_t u;
	struct ody_gict_errx_misc1_b_s {
		uint64_t data                        : 64;
	} s;
	/* struct ody_gict_errx_misc1_b_s cn; */
};
typedef union ody_gict_errx_misc1_b ody_gict_errx_misc1_b_t;

static inline uint64_t ODY_GICT_ERRX_MISC1_B(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICT_ERRX_MISC1_B(uint64_t a)
{
	if (a <= 27)
		return 0x801000020028ll + 0x40ll * ((a) & 0x1f);
	__ody_csr_fatal("GICT_ERRX_MISC1_B", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GICT_ERRX_MISC1_B(a) ody_gict_errx_misc1_b_t
#define bustype_ODY_GICT_ERRX_MISC1_B(a) CSR_TYPE_NCB
#define basename_ODY_GICT_ERRX_MISC1_B(a) "GICT_ERRX_MISC1_B"
#define device_bar_ODY_GICT_ERRX_MISC1_B(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_GICT_ERRX_MISC1_B(a) (a)
#define arguments_ODY_GICT_ERRX_MISC1_B(a) (a), -1, -1, -1

/**
 * Register (NCB) gict_err#_status
 *
 * GICT Err Status Register
 * The GICT_ERR0STATUS characteristics are:
 *
 * * Purpose
 * This register indicates information relating to the recorded errors. Error record 0
 * is for SW errors
 *
 * * Usage constraints
 * If GICD(A)_SAC.GICTNS == 0, then only Secure software can access the contents of this register.
 */
union ody_gict_errx_status {
	uint64_t u;
	struct ody_gict_errx_status_s {
		uint64_t serr                        : 8;
		uint64_t ierr                        : 8;
		uint64_t reserved_16_19              : 4;
		uint64_t uet                         : 2;
		uint64_t reserved_22_23              : 2;
		uint64_t ce                          : 2;
		uint64_t mv                          : 1;
		uint64_t of                          : 1;
		uint64_t er                          : 1;
		uint64_t ue                          : 1;
		uint64_t v                           : 1;
		uint64_t av                          : 1;
		uint64_t reserved_32_63              : 32;
	} s;
	/* struct ody_gict_errx_status_s cn; */
};
typedef union ody_gict_errx_status ody_gict_errx_status_t;

static inline uint64_t ODY_GICT_ERRX_STATUS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICT_ERRX_STATUS(uint64_t a)
{
	if (a <= 27)
		return 0x801000020010ll + 0x40ll * ((a) & 0x1f);
	__ody_csr_fatal("GICT_ERRX_STATUS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GICT_ERRX_STATUS(a) ody_gict_errx_status_t
#define bustype_ODY_GICT_ERRX_STATUS(a) CSR_TYPE_NCB
#define basename_ODY_GICT_ERRX_STATUS(a) "GICT_ERRX_STATUS"
#define device_bar_ODY_GICT_ERRX_STATUS(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_GICT_ERRX_STATUS(a) (a)
#define arguments_ODY_GICT_ERRX_STATUS(a) (a), -1, -1, -1

/**
 * Register (NCB) gict_errgsr0
 *
 * GICT Errgsr0 Register
 * The GICT_ERRGSR0 characteristics are:
 *
 * * Purpose
 * This register shows the status of the GIC-700 Armv8.2 RAS architecture-compliant error records for
 * correctable and uncorrectable RAM ECC errors, ITS command and translation errors, and uncorrectable
 * software errors.
 *
 * * Usage constraints
 * There are no usage constraints.
 */
union ody_gict_errgsr0 {
	uint64_t u;
	struct ody_gict_errgsr0_s {
		uint64_t status                      : 64;
	} s;
	/* struct ody_gict_errgsr0_s cn; */
};
typedef union ody_gict_errgsr0 ody_gict_errgsr0_t;

#define ODY_GICT_ERRGSR0 ODY_GICT_ERRGSR0_FUNC()
static inline uint64_t ODY_GICT_ERRGSR0_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICT_ERRGSR0_FUNC(void)
{
	return 0x80100002e000ll;
}

#define typedef_ODY_GICT_ERRGSR0 ody_gict_errgsr0_t
#define bustype_ODY_GICT_ERRGSR0 CSR_TYPE_NCB
#define basename_ODY_GICT_ERRGSR0 "GICT_ERRGSR0"
#define device_bar_ODY_GICT_ERRGSR0 0x0 /* PF_BAR0 */
#define busnum_ODY_GICT_ERRGSR0 0
#define arguments_ODY_GICT_ERRGSR0 -1, -1, -1, -1

/**
 * Register (NCB) gict_errirqcr#
 *
 * GICT Errirqcr Register
 * The GICT_ERRIRQCR0 characteristics are:
 *
 * * Purpose
 * GICT_ERRIRQCR0 controls which SPI is generated when a fault handling interrupt occurs.
 *
 * * Usage constraints
 * If GICD(A)_SAC.GICTNS == 0, then only Secure software can access the functions of this register.
 */
union ody_gict_errirqcrx {
	uint64_t u;
	struct ody_gict_errirqcrx_s {
		uint64_t spiid                       : 13;
		uint64_t reserved_13_63              : 51;
	} s;
	/* struct ody_gict_errirqcrx_s cn; */
};
typedef union ody_gict_errirqcrx ody_gict_errirqcrx_t;

static inline uint64_t ODY_GICT_ERRIRQCRX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICT_ERRIRQCRX(uint64_t a)
{
	if (a <= 1)
		return 0x80100002e800ll + 8ll * ((a) & 0x1);
	__ody_csr_fatal("GICT_ERRIRQCRX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GICT_ERRIRQCRX(a) ody_gict_errirqcrx_t
#define bustype_ODY_GICT_ERRIRQCRX(a) CSR_TYPE_NCB
#define basename_ODY_GICT_ERRIRQCRX(a) "GICT_ERRIRQCRX"
#define device_bar_ODY_GICT_ERRIRQCRX(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_GICT_ERRIRQCRX(a) (a)
#define arguments_ODY_GICT_ERRIRQCRX(a) (a), -1, -1, -1

/**
 * Register (NCB32b) gict_pidr0
 *
 * GICT Pidr0 Register
 * The GICT_PIDR0 characteristics are:
 *
 * * Purpose
 * This register returns byte[0] of the peripheral ID of the GIC Trace and Debug page.
 *
 * * Usage constraints
 * There are no usage constraints.
 */
union ody_gict_pidr0 {
	uint32_t u;
	struct ody_gict_pidr0_s {
		uint32_t part_0                      : 8;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_gict_pidr0_s cn; */
};
typedef union ody_gict_pidr0 ody_gict_pidr0_t;

#define ODY_GICT_PIDR0 ODY_GICT_PIDR0_FUNC()
static inline uint64_t ODY_GICT_PIDR0_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICT_PIDR0_FUNC(void)
{
	return 0x80100002ffe0ll;
}

#define typedef_ODY_GICT_PIDR0 ody_gict_pidr0_t
#define bustype_ODY_GICT_PIDR0 CSR_TYPE_NCB32b
#define basename_ODY_GICT_PIDR0 "GICT_PIDR0"
#define device_bar_ODY_GICT_PIDR0 0x0 /* PF_BAR0 */
#define busnum_ODY_GICT_PIDR0 0
#define arguments_ODY_GICT_PIDR0 -1, -1, -1, -1

/**
 * Register (NCB32b) gict_pidr1
 *
 * GICT Pidr1 Register
 * The GICT_PIDR1 characteristics are:
 *
 * * Purpose
 * This register returns byte[1] of the peripheral ID of the GIC Trace and Debug page.
 *
 * * Usage constraints
 * There are no usage constraints.
 */
union ody_gict_pidr1 {
	uint32_t u;
	struct ody_gict_pidr1_s {
		uint32_t part_1                      : 4;
		uint32_t des_0                       : 4;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_gict_pidr1_s cn; */
};
typedef union ody_gict_pidr1 ody_gict_pidr1_t;

#define ODY_GICT_PIDR1 ODY_GICT_PIDR1_FUNC()
static inline uint64_t ODY_GICT_PIDR1_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICT_PIDR1_FUNC(void)
{
	return 0x80100002ffe4ll;
}

#define typedef_ODY_GICT_PIDR1 ody_gict_pidr1_t
#define bustype_ODY_GICT_PIDR1 CSR_TYPE_NCB32b
#define basename_ODY_GICT_PIDR1 "GICT_PIDR1"
#define device_bar_ODY_GICT_PIDR1 0x0 /* PF_BAR0 */
#define busnum_ODY_GICT_PIDR1 0
#define arguments_ODY_GICT_PIDR1 -1, -1, -1, -1

/**
 * Register (NCB32b) gict_pidr2
 *
 * GICT Pidr2 Register
 * The GICT_PIDR2 characteristics are:
 *
 * * Purpose
 * This register returns byte[2] of the peripheral ID of the GIC Trace and Debug page.
 *
 * * Usage constraints
 * There are no usage constraints.
 */
union ody_gict_pidr2 {
	uint32_t u;
	struct ody_gict_pidr2_s {
		uint32_t des_1                       : 3;
		uint32_t jedec                       : 1;
		uint32_t revision                    : 4;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_gict_pidr2_s cn; */
};
typedef union ody_gict_pidr2 ody_gict_pidr2_t;

#define ODY_GICT_PIDR2 ODY_GICT_PIDR2_FUNC()
static inline uint64_t ODY_GICT_PIDR2_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICT_PIDR2_FUNC(void)
{
	return 0x80100002ffe8ll;
}

#define typedef_ODY_GICT_PIDR2 ody_gict_pidr2_t
#define bustype_ODY_GICT_PIDR2 CSR_TYPE_NCB32b
#define basename_ODY_GICT_PIDR2 "GICT_PIDR2"
#define device_bar_ODY_GICT_PIDR2 0x0 /* PF_BAR0 */
#define busnum_ODY_GICT_PIDR2 0
#define arguments_ODY_GICT_PIDR2 -1, -1, -1, -1

/**
 * Register (NCB32b) gict_pidr3
 *
 * GICT Pidr3 Register
 * The GICT_PIDR3 characteristics are:
 *
 * * Purpose
 * This register returns byte[3] of the peripheral ID of the GIC Trace and Debug page.
 *
 * * Usage constraints
 * There are no usage constraints.
 */
union ody_gict_pidr3 {
	uint32_t u;
	struct ody_gict_pidr3_s {
		uint32_t cmod                        : 3;
		uint32_t reserved_3                  : 1;
		uint32_t revand                      : 4;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_gict_pidr3_s cn; */
};
typedef union ody_gict_pidr3 ody_gict_pidr3_t;

#define ODY_GICT_PIDR3 ODY_GICT_PIDR3_FUNC()
static inline uint64_t ODY_GICT_PIDR3_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICT_PIDR3_FUNC(void)
{
	return 0x80100002ffecll;
}

#define typedef_ODY_GICT_PIDR3 ody_gict_pidr3_t
#define bustype_ODY_GICT_PIDR3 CSR_TYPE_NCB32b
#define basename_ODY_GICT_PIDR3 "GICT_PIDR3"
#define device_bar_ODY_GICT_PIDR3 0x0 /* PF_BAR0 */
#define busnum_ODY_GICT_PIDR3 0
#define arguments_ODY_GICT_PIDR3 -1, -1, -1, -1

/**
 * Register (NCB32b) gict_pidr4
 *
 * GICT Pidr4 Register
 * The GICT_PIDR4 characteristics are:
 *
 * * Purpose
 * This register returns byte[4] of the peripheral ID of the GIC Trace and Debug page.
 *
 * * Usage constraints
 * There are no usage constraints.
 */
union ody_gict_pidr4 {
	uint32_t u;
	struct ody_gict_pidr4_s {
		uint32_t des_2                       : 4;
		uint32_t size                        : 4;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_gict_pidr4_s cn; */
};
typedef union ody_gict_pidr4 ody_gict_pidr4_t;

#define ODY_GICT_PIDR4 ODY_GICT_PIDR4_FUNC()
static inline uint64_t ODY_GICT_PIDR4_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICT_PIDR4_FUNC(void)
{
	return 0x80100002ffd0ll;
}

#define typedef_ODY_GICT_PIDR4 ody_gict_pidr4_t
#define bustype_ODY_GICT_PIDR4 CSR_TYPE_NCB32b
#define basename_ODY_GICT_PIDR4 "GICT_PIDR4"
#define device_bar_ODY_GICT_PIDR4 0x0 /* PF_BAR0 */
#define busnum_ODY_GICT_PIDR4 0
#define arguments_ODY_GICT_PIDR4 -1, -1, -1, -1

/**
 * Register (NCB32b) gict_pidr5
 *
 * GICT Pidr5 Register
 * The GICT_PIDR5 characteristics are:
 *
 * * Purpose
 * This register returns byte[5] of the peripheral ID of the GIC Trace and Debug page.
 *
 * * Usage constraints
 * There are no usage constraints.
 */
union ody_gict_pidr5 {
	uint32_t u;
	struct ody_gict_pidr5_s {
		uint32_t reserved_0_31               : 32;
	} s;
	struct ody_gict_pidr5_cn {
		uint32_t reserved_0_7                : 8;
		uint32_t reserved_8_31               : 24;
	} cn;
};
typedef union ody_gict_pidr5 ody_gict_pidr5_t;

#define ODY_GICT_PIDR5 ODY_GICT_PIDR5_FUNC()
static inline uint64_t ODY_GICT_PIDR5_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICT_PIDR5_FUNC(void)
{
	return 0x80100002ffd4ll;
}

#define typedef_ODY_GICT_PIDR5 ody_gict_pidr5_t
#define bustype_ODY_GICT_PIDR5 CSR_TYPE_NCB32b
#define basename_ODY_GICT_PIDR5 "GICT_PIDR5"
#define device_bar_ODY_GICT_PIDR5 0x0 /* PF_BAR0 */
#define busnum_ODY_GICT_PIDR5 0
#define arguments_ODY_GICT_PIDR5 -1, -1, -1, -1

/**
 * Register (NCB32b) gict_pidr6
 *
 * GICT Pidr6 Register
 * The GICT_PIDR6 characteristics are:
 *
 * * Purpose
 * This register returns byte[6] of the peripheral ID of the GIC Trace and Debug page.
 *
 * * Usage constraints
 * There are no usage constraints.
 */
union ody_gict_pidr6 {
	uint32_t u;
	struct ody_gict_pidr6_s {
		uint32_t reserved_0_31               : 32;
	} s;
	struct ody_gict_pidr6_cn {
		uint32_t reserved_0_7                : 8;
		uint32_t reserved_8_31               : 24;
	} cn;
};
typedef union ody_gict_pidr6 ody_gict_pidr6_t;

#define ODY_GICT_PIDR6 ODY_GICT_PIDR6_FUNC()
static inline uint64_t ODY_GICT_PIDR6_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICT_PIDR6_FUNC(void)
{
	return 0x80100002ffd8ll;
}

#define typedef_ODY_GICT_PIDR6 ody_gict_pidr6_t
#define bustype_ODY_GICT_PIDR6 CSR_TYPE_NCB32b
#define basename_ODY_GICT_PIDR6 "GICT_PIDR6"
#define device_bar_ODY_GICT_PIDR6 0x0 /* PF_BAR0 */
#define busnum_ODY_GICT_PIDR6 0
#define arguments_ODY_GICT_PIDR6 -1, -1, -1, -1

/**
 * Register (NCB32b) gict_pidr7
 *
 * GICT Pidr7 Register
 * The GICT_PIDR7 characteristics are:
 *
 * * Purpose
 * This register returns byte[7] of the peripheral ID of the GIC Trace and Debug page.
 *
 * * Usage constraints
 * There are no usage constraints.
 */
union ody_gict_pidr7 {
	uint32_t u;
	struct ody_gict_pidr7_s {
		uint32_t reserved_0_31               : 32;
	} s;
	struct ody_gict_pidr7_cn {
		uint32_t reserved_0_7                : 8;
		uint32_t reserved_8_31               : 24;
	} cn;
};
typedef union ody_gict_pidr7 ody_gict_pidr7_t;

#define ODY_GICT_PIDR7 ODY_GICT_PIDR7_FUNC()
static inline uint64_t ODY_GICT_PIDR7_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GICT_PIDR7_FUNC(void)
{
	return 0x80100002ffdcll;
}

#define typedef_ODY_GICT_PIDR7 ody_gict_pidr7_t
#define bustype_ODY_GICT_PIDR7 CSR_TYPE_NCB32b
#define basename_ODY_GICT_PIDR7 "GICT_PIDR7"
#define device_bar_ODY_GICT_PIDR7 0x0 /* PF_BAR0 */
#define busnum_ODY_GICT_PIDR7 0
#define arguments_ODY_GICT_PIDR7 -1, -1, -1, -1

/**
 * Register (NCB) gits0_baser0
 *
 * GITS0 Baser0 Register
 * The GITS0_BASER0 characteristics are:
 *
 * * Purpose
 * Specifies the base address and size of the ITS Device translation tables.
 *
 * * Usage constraints
 * Bits [63:32] and bits [31:0] are accessible independently.
 *
 * When GITS0_CTLR.Enabled == 1 or GITS0_CTLR.Quiescent == 0, writing this register is UNPREDICTABLE.
 */
union ody_gits0_baser0 {
	uint64_t u;
	struct ody_gits0_baser0_s {
		uint64_t size                        : 8;
		uint64_t pagesize                    : 2;
		uint64_t shareability                : 2;
		uint64_t physicaladdress             : 36;
		uint64_t entrysize                   : 5;
		uint64_t outercacheability           : 3;
		uint64_t type_f                      : 3;
		uint64_t cacheability                : 3;
		uint64_t indirect                    : 1;
		uint64_t valid                       : 1;
	} s;
	/* struct ody_gits0_baser0_s cn; */
};
typedef union ody_gits0_baser0 ody_gits0_baser0_t;

#define ODY_GITS0_BASER0 ODY_GITS0_BASER0_FUNC()
static inline uint64_t ODY_GITS0_BASER0_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GITS0_BASER0_FUNC(void)
{
	return 0x801000040100ll;
}

#define typedef_ODY_GITS0_BASER0 ody_gits0_baser0_t
#define bustype_ODY_GITS0_BASER0 CSR_TYPE_NCB
#define basename_ODY_GITS0_BASER0 "GITS0_BASER0"
#define device_bar_ODY_GITS0_BASER0 0x0 /* PF_BAR0 */
#define busnum_ODY_GITS0_BASER0 0
#define arguments_ODY_GITS0_BASER0 -1, -1, -1, -1

/**
 * Register (NCB) gits0_baser1
 *
 * GITS0 Baser1 Register
 * The GITS0_BASER1 characteristics are:
 *
 * * Purpose
 * Specifies the base address and size of the ITS Collection translation tables.
 *
 * * Usage constraints
 * Bits [63:32] and bits [31:0] are accessible independently.
 *
 * When GITS0_CTLR.Enabled == 1 or GITS0_CTLR.Quiescent == 0, writing this register is UNPREDICTABLE.
 */
union ody_gits0_baser1 {
	uint64_t u;
	struct ody_gits0_baser1_s {
		uint64_t size                        : 8;
		uint64_t pagesize                    : 2;
		uint64_t shareability                : 2;
		uint64_t physicaladdress             : 36;
		uint64_t entrysize                   : 5;
		uint64_t outercacheability           : 3;
		uint64_t type_f                      : 3;
		uint64_t cacheability                : 3;
		uint64_t indirect                    : 1;
		uint64_t valid                       : 1;
	} s;
	/* struct ody_gits0_baser1_s cn; */
};
typedef union ody_gits0_baser1 ody_gits0_baser1_t;

#define ODY_GITS0_BASER1 ODY_GITS0_BASER1_FUNC()
static inline uint64_t ODY_GITS0_BASER1_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GITS0_BASER1_FUNC(void)
{
	return 0x801000040108ll;
}

#define typedef_ODY_GITS0_BASER1 ody_gits0_baser1_t
#define bustype_ODY_GITS0_BASER1 CSR_TYPE_NCB
#define basename_ODY_GITS0_BASER1 "GITS0_BASER1"
#define device_bar_ODY_GITS0_BASER1 0x0 /* PF_BAR0 */
#define busnum_ODY_GITS0_BASER1 0
#define arguments_ODY_GITS0_BASER1 -1, -1, -1, -1

/**
 * Register (NCB) gits0_baser2
 *
 * GITS0 Baser2 Register
 * The GITS0_BASER2 characteristics are:
 *
 * * Purpose
 * Specifies the base address and size of the ITS vPE translation tables.
 *
 * * Usage constraints
 * Bits [63:32] and bits [31:0] are accessible independently.
 *
 * When GITS0_CTLR.Enabled == 1 or GITS0_CTLR.Quiescent == 0, writing this register is UNPREDICTABLE.
 */
union ody_gits0_baser2 {
	uint64_t u;
	struct ody_gits0_baser2_s {
		uint64_t size                        : 8;
		uint64_t pagesize                    : 2;
		uint64_t shareability                : 2;
		uint64_t physicaladdress             : 36;
		uint64_t entrysize                   : 5;
		uint64_t outercacheability           : 3;
		uint64_t type_f                      : 3;
		uint64_t cacheability                : 3;
		uint64_t indirect                    : 1;
		uint64_t valid                       : 1;
	} s;
	/* struct ody_gits0_baser2_s cn; */
};
typedef union ody_gits0_baser2 ody_gits0_baser2_t;

#define ODY_GITS0_BASER2 ODY_GITS0_BASER2_FUNC()
static inline uint64_t ODY_GITS0_BASER2_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GITS0_BASER2_FUNC(void)
{
	return 0x801000040110ll;
}

#define typedef_ODY_GITS0_BASER2 ody_gits0_baser2_t
#define bustype_ODY_GITS0_BASER2 CSR_TYPE_NCB
#define basename_ODY_GITS0_BASER2 "GITS0_BASER2"
#define device_bar_ODY_GITS0_BASER2 0x0 /* PF_BAR0 */
#define busnum_ODY_GITS0_BASER2 0
#define arguments_ODY_GITS0_BASER2 -1, -1, -1, -1

/**
 * Register (NCB) gits0_baser3
 *
 * GITS0 Baser3 Register
 * This register is RES0.
 */
union ody_gits0_baser3 {
	uint64_t u;
	struct ody_gits0_baser3_s {
		uint64_t reserved_0_63               : 64;
	} s;
	/* struct ody_gits0_baser3_s cn; */
};
typedef union ody_gits0_baser3 ody_gits0_baser3_t;

#define ODY_GITS0_BASER3 ODY_GITS0_BASER3_FUNC()
static inline uint64_t ODY_GITS0_BASER3_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GITS0_BASER3_FUNC(void)
{
	return 0x801000040118ll;
}

#define typedef_ODY_GITS0_BASER3 ody_gits0_baser3_t
#define bustype_ODY_GITS0_BASER3 CSR_TYPE_NCB
#define basename_ODY_GITS0_BASER3 "GITS0_BASER3"
#define device_bar_ODY_GITS0_BASER3 0x0 /* PF_BAR0 */
#define busnum_ODY_GITS0_BASER3 0
#define arguments_ODY_GITS0_BASER3 -1, -1, -1, -1

/**
 * Register (NCB) gits0_baser4
 *
 * GITS0 Baser4 Register
 * This register is RES0.
 */
union ody_gits0_baser4 {
	uint64_t u;
	struct ody_gits0_baser4_s {
		uint64_t reserved_0_63               : 64;
	} s;
	/* struct ody_gits0_baser4_s cn; */
};
typedef union ody_gits0_baser4 ody_gits0_baser4_t;

#define ODY_GITS0_BASER4 ODY_GITS0_BASER4_FUNC()
static inline uint64_t ODY_GITS0_BASER4_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GITS0_BASER4_FUNC(void)
{
	return 0x801000040120ll;
}

#define typedef_ODY_GITS0_BASER4 ody_gits0_baser4_t
#define bustype_ODY_GITS0_BASER4 CSR_TYPE_NCB
#define basename_ODY_GITS0_BASER4 "GITS0_BASER4"
#define device_bar_ODY_GITS0_BASER4 0x0 /* PF_BAR0 */
#define busnum_ODY_GITS0_BASER4 0
#define arguments_ODY_GITS0_BASER4 -1, -1, -1, -1

/**
 * Register (NCB) gits0_baser5
 *
 * GITS0 Baser5 Register
 * This register is RES0.
 */
union ody_gits0_baser5 {
	uint64_t u;
	struct ody_gits0_baser5_s {
		uint64_t reserved_0_63               : 64;
	} s;
	/* struct ody_gits0_baser5_s cn; */
};
typedef union ody_gits0_baser5 ody_gits0_baser5_t;

#define ODY_GITS0_BASER5 ODY_GITS0_BASER5_FUNC()
static inline uint64_t ODY_GITS0_BASER5_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GITS0_BASER5_FUNC(void)
{
	return 0x801000040128ll;
}

#define typedef_ODY_GITS0_BASER5 ody_gits0_baser5_t
#define bustype_ODY_GITS0_BASER5 CSR_TYPE_NCB
#define basename_ODY_GITS0_BASER5 "GITS0_BASER5"
#define device_bar_ODY_GITS0_BASER5 0x0 /* PF_BAR0 */
#define busnum_ODY_GITS0_BASER5 0
#define arguments_ODY_GITS0_BASER5 -1, -1, -1, -1

/**
 * Register (NCB) gits0_baser6
 *
 * GITS0 Baser6 Register
 * This register is RES0.
 */
union ody_gits0_baser6 {
	uint64_t u;
	struct ody_gits0_baser6_s {
		uint64_t reserved_0_63               : 64;
	} s;
	/* struct ody_gits0_baser6_s cn; */
};
typedef union ody_gits0_baser6 ody_gits0_baser6_t;

#define ODY_GITS0_BASER6 ODY_GITS0_BASER6_FUNC()
static inline uint64_t ODY_GITS0_BASER6_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GITS0_BASER6_FUNC(void)
{
	return 0x801000040130ll;
}

#define typedef_ODY_GITS0_BASER6 ody_gits0_baser6_t
#define bustype_ODY_GITS0_BASER6 CSR_TYPE_NCB
#define basename_ODY_GITS0_BASER6 "GITS0_BASER6"
#define device_bar_ODY_GITS0_BASER6 0x0 /* PF_BAR0 */
#define busnum_ODY_GITS0_BASER6 0
#define arguments_ODY_GITS0_BASER6 -1, -1, -1, -1

/**
 * Register (NCB) gits0_baser7
 *
 * GITS0 Baser7 Register
 * This register is RES0.
 */
union ody_gits0_baser7 {
	uint64_t u;
	struct ody_gits0_baser7_s {
		uint64_t reserved_0_63               : 64;
	} s;
	/* struct ody_gits0_baser7_s cn; */
};
typedef union ody_gits0_baser7 ody_gits0_baser7_t;

#define ODY_GITS0_BASER7 ODY_GITS0_BASER7_FUNC()
static inline uint64_t ODY_GITS0_BASER7_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GITS0_BASER7_FUNC(void)
{
	return 0x801000040138ll;
}

#define typedef_ODY_GITS0_BASER7 ody_gits0_baser7_t
#define bustype_ODY_GITS0_BASER7 CSR_TYPE_NCB
#define basename_ODY_GITS0_BASER7 "GITS0_BASER7"
#define device_bar_ODY_GITS0_BASER7 0x0 /* PF_BAR0 */
#define busnum_ODY_GITS0_BASER7 0
#define arguments_ODY_GITS0_BASER7 -1, -1, -1, -1

/**
 * Register (NCB) gits0_c_errinsr
 *
 * GITS0 C Errinsr Register
 * The GITS0_C_ERRINSR characteristics are:
 *
 * * Purpose
 * This register can inject errors into the ITS Device cache RAM if ECC is enabaled.
 * You can use this register to test your error recovery software.
 *
 * * Usage constraints
 * If GICD(A)_SAC.GICTNS == 0, then only Secure software can access the contents of this register.
 *
 * \> *Note*
 * \> The bit assignments within this register depend on whether a write access or read access occurs.
 */
union ody_gits0_c_errinsr {
	uint64_t u;
	struct ody_gits0_c_errinsr_s {
		uint64_t errins1loc                  : 9;
		uint64_t reserved_9_14               : 6;
		uint64_t errins1valid                : 1;
		uint64_t errins2loc                  : 9;
		uint64_t reserved_25_30              : 6;
		uint64_t errins2valid                : 1;
		uint64_t addr                        : 16;
		uint64_t reserved_48_59              : 12;
		uint64_t disablewritecheck           : 1;
		uint64_t reserved_61_62              : 2;
		uint64_t valid                       : 1;
	} s;
	/* struct ody_gits0_c_errinsr_s cn; */
};
typedef union ody_gits0_c_errinsr ody_gits0_c_errinsr_t;

#define ODY_GITS0_C_ERRINSR ODY_GITS0_C_ERRINSR_FUNC()
static inline uint64_t ODY_GITS0_C_ERRINSR_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GITS0_C_ERRINSR_FUNC(void)
{
	return 0x80100004c010ll;
}

#define typedef_ODY_GITS0_C_ERRINSR ody_gits0_c_errinsr_t
#define bustype_ODY_GITS0_C_ERRINSR CSR_TYPE_NCB
#define basename_ODY_GITS0_C_ERRINSR "GITS0_C_ERRINSR"
#define device_bar_ODY_GITS0_C_ERRINSR 0x0 /* PF_BAR0 */
#define busnum_ODY_GITS0_C_ERRINSR 0
#define arguments_ODY_GITS0_C_ERRINSR -1, -1, -1, -1

/**
 * Register (NCB) gits0_cbaser
 *
 * GITS0 Cbaser Register
 * The GITS0_CBASER characteristics are:
 *
 * * Purpose
 * Specifies the base address and size of the ITS command queue
 *
 * * Usage constraints
 * When GITS0_CTLR.Enabled == 1 or GITS0_CTLR.Quiescent == 0, writing this register is UNPREDICTABLE.
 *
 * Bits [63:32] and bits [31:0] are accessible separately
 *
 * \> *Note*
 *
 * \> * The command queue is a circular buffer and wraps at Physical Address [47:0] +
 * (4096 * (Size + 1)).
 * \> * When this register is successfully written, the value of GITS0_CREADR is set to zero.
 */
union ody_gits0_cbaser {
	uint64_t u;
	struct ody_gits0_cbaser_s {
		uint64_t size                        : 8;
		uint64_t reserved_8_9                : 2;
		uint64_t shareability                : 2;
		uint64_t physicaladdress             : 40;
		uint64_t reserved_52                 : 1;
		uint64_t outercacheability           : 3;
		uint64_t reserved_56_58              : 3;
		uint64_t cacheability                : 3;
		uint64_t reserved_62                 : 1;
		uint64_t valid                       : 1;
	} s;
	/* struct ody_gits0_cbaser_s cn; */
};
typedef union ody_gits0_cbaser ody_gits0_cbaser_t;

#define ODY_GITS0_CBASER ODY_GITS0_CBASER_FUNC()
static inline uint64_t ODY_GITS0_CBASER_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GITS0_CBASER_FUNC(void)
{
	return 0x801000040080ll;
}

#define typedef_ODY_GITS0_CBASER ody_gits0_cbaser_t
#define bustype_ODY_GITS0_CBASER CSR_TYPE_NCB
#define basename_ODY_GITS0_CBASER "GITS0_CBASER"
#define device_bar_ODY_GITS0_CBASER 0x0 /* PF_BAR0 */
#define busnum_ODY_GITS0_CBASER 0
#define arguments_ODY_GITS0_CBASER -1, -1, -1, -1

/**
 * Register (NCB) gits0_cfgid
 *
 * GITS0 Cfgid Register
 * The GITS0S_CFGID characteristics are:
 *
 * * Purpose
 * This register returns information about the configuration of the ITS block such as its ID number.
 *
 * * Usage constraints
 * There are no usage constraints.
 */
union ody_gits0_cfgid {
	uint64_t u;
	struct ody_gits0_cfgid_s {
		uint64_t its_number                  : 8;
		uint64_t lpi_credit_count            : 4;
		uint64_t target_bits                 : 4;
		uint64_t msi_64                      : 1;
		uint64_t low_latency_support         : 1;
		uint64_t cache_ecc                   : 1;
		uint64_t reserved_19                 : 1;
		uint64_t collection_cache_index_bits : 4;
		uint64_t device_cache_index_bits     : 4;
		uint64_t event_cache_index_bits      : 4;
		uint64_t vpe_bits                    : 4;
		uint64_t low_latency_lpi_credit_count : 4;
		uint64_t reserved_40_63              : 24;
	} s;
	/* struct ody_gits0_cfgid_s cn; */
};
typedef union ody_gits0_cfgid ody_gits0_cfgid_t;

#define ODY_GITS0_CFGID ODY_GITS0_CFGID_FUNC()
static inline uint64_t ODY_GITS0_CFGID_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GITS0_CFGID_FUNC(void)
{
	return 0x80100004f000ll;
}

#define typedef_ODY_GITS0_CFGID ody_gits0_cfgid_t
#define bustype_ODY_GITS0_CFGID CSR_TYPE_NCB
#define basename_ODY_GITS0_CFGID "GITS0_CFGID"
#define device_bar_ODY_GITS0_CFGID 0x0 /* PF_BAR0 */
#define busnum_ODY_GITS0_CFGID 0
#define arguments_ODY_GITS0_CFGID -1, -1, -1, -1

/**
 * Register (NCB32b) gits0_cidr0
 *
 * GITS0 Cidr0 Register
 * The GITS0_CIDR0 characteristics are:
 *
 * * Purpose
 * This register is one of the Component Identification Registers and returns the first
 * part of the Preamble.
 *
 * * Usage constraints
 * There are no usage constraints.
 */
union ody_gits0_cidr0 {
	uint32_t u;
	struct ody_gits0_cidr0_s {
		uint32_t prmbl_0                     : 8;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_gits0_cidr0_s cn; */
};
typedef union ody_gits0_cidr0 ody_gits0_cidr0_t;

#define ODY_GITS0_CIDR0 ODY_GITS0_CIDR0_FUNC()
static inline uint64_t ODY_GITS0_CIDR0_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GITS0_CIDR0_FUNC(void)
{
	return 0x80100004fff0ll;
}

#define typedef_ODY_GITS0_CIDR0 ody_gits0_cidr0_t
#define bustype_ODY_GITS0_CIDR0 CSR_TYPE_NCB32b
#define basename_ODY_GITS0_CIDR0 "GITS0_CIDR0"
#define device_bar_ODY_GITS0_CIDR0 0x0 /* PF_BAR0 */
#define busnum_ODY_GITS0_CIDR0 0
#define arguments_ODY_GITS0_CIDR0 -1, -1, -1, -1

/**
 * Register (NCB32b) gits0_cidr1
 *
 * GITS0 Cidr1 Register
 * The GITS0_CIDR1 characteristics are:
 *
 * * Purpose
 * This register is one of the Component Identification Registers and returns the
 * second part of the Preamble as well as the Component Class.
 *
 * * Usage constraints
 * There are no usage constraints.
 */
union ody_gits0_cidr1 {
	uint32_t u;
	struct ody_gits0_cidr1_s {
		uint32_t prmbl_1                     : 4;
		uint32_t class_f                     : 4;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_gits0_cidr1_s cn; */
};
typedef union ody_gits0_cidr1 ody_gits0_cidr1_t;

#define ODY_GITS0_CIDR1 ODY_GITS0_CIDR1_FUNC()
static inline uint64_t ODY_GITS0_CIDR1_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GITS0_CIDR1_FUNC(void)
{
	return 0x80100004fff4ll;
}

#define typedef_ODY_GITS0_CIDR1 ody_gits0_cidr1_t
#define bustype_ODY_GITS0_CIDR1 CSR_TYPE_NCB32b
#define basename_ODY_GITS0_CIDR1 "GITS0_CIDR1"
#define device_bar_ODY_GITS0_CIDR1 0x0 /* PF_BAR0 */
#define busnum_ODY_GITS0_CIDR1 0
#define arguments_ODY_GITS0_CIDR1 -1, -1, -1, -1

/**
 * Register (NCB32b) gits0_cidr2
 *
 * GITS0 Cidr2 Register
 * The GITS0_CIDR2 characteristics are:
 *
 * * Purpose
 * This register is one of the Component Identification Registers and returns the third
 * part of the Preamble.
 *
 * * Usage constraints
 * There are no usage constraints.
 */
union ody_gits0_cidr2 {
	uint32_t u;
	struct ody_gits0_cidr2_s {
		uint32_t prmbl_2                     : 8;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_gits0_cidr2_s cn; */
};
typedef union ody_gits0_cidr2 ody_gits0_cidr2_t;

#define ODY_GITS0_CIDR2 ODY_GITS0_CIDR2_FUNC()
static inline uint64_t ODY_GITS0_CIDR2_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GITS0_CIDR2_FUNC(void)
{
	return 0x80100004fff8ll;
}

#define typedef_ODY_GITS0_CIDR2 ody_gits0_cidr2_t
#define bustype_ODY_GITS0_CIDR2 CSR_TYPE_NCB32b
#define basename_ODY_GITS0_CIDR2 "GITS0_CIDR2"
#define device_bar_ODY_GITS0_CIDR2 0x0 /* PF_BAR0 */
#define busnum_ODY_GITS0_CIDR2 0
#define arguments_ODY_GITS0_CIDR2 -1, -1, -1, -1

/**
 * Register (NCB32b) gits0_cidr3
 *
 * GITS0 Cidr3 Register
 * The GITS0_CIDR3 characteristics are:
 *
 * * Purpose
 * This register is one of the Component Identification Registers and returns the
 * fourth part of the Preamble.
 *
 * * Usage constraints
 * There are no usage constraints.
 */
union ody_gits0_cidr3 {
	uint32_t u;
	struct ody_gits0_cidr3_s {
		uint32_t prmbl_3                     : 8;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_gits0_cidr3_s cn; */
};
typedef union ody_gits0_cidr3 ody_gits0_cidr3_t;

#define ODY_GITS0_CIDR3 ODY_GITS0_CIDR3_FUNC()
static inline uint64_t ODY_GITS0_CIDR3_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GITS0_CIDR3_FUNC(void)
{
	return 0x80100004fffcll;
}

#define typedef_ODY_GITS0_CIDR3 ody_gits0_cidr3_t
#define bustype_ODY_GITS0_CIDR3 CSR_TYPE_NCB32b
#define basename_ODY_GITS0_CIDR3 "GITS0_CIDR3"
#define device_bar_ODY_GITS0_CIDR3 0x0 /* PF_BAR0 */
#define busnum_ODY_GITS0_CIDR3 0
#define arguments_ODY_GITS0_CIDR3 -1, -1, -1, -1

/**
 * Register (NCB) gits0_creadr
 *
 * GITS0 Creadr Register
 * The GITS0_CREADR characteristics are:
 *
 * * Purpose
 * Specifies the offset from GITS0_CBASER where the ITS reads the next ITS command.
 *
 * * Usage constraints
 * This register is cleared to 0 when a value is written to GITS0_CBASER.
 *
 * Bits [63:32] and bits [31:0] are accessible separately.
 */
union ody_gits0_creadr {
	uint64_t u;
	struct ody_gits0_creadr_s {
		uint64_t stalled                     : 1;
		uint64_t reserved_1_4                : 4;
		uint64_t offset                      : 15;
		uint64_t reserved_20_63              : 44;
	} s;
	/* struct ody_gits0_creadr_s cn; */
};
typedef union ody_gits0_creadr ody_gits0_creadr_t;

#define ODY_GITS0_CREADR ODY_GITS0_CREADR_FUNC()
static inline uint64_t ODY_GITS0_CREADR_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GITS0_CREADR_FUNC(void)
{
	return 0x801000040090ll;
}

#define typedef_ODY_GITS0_CREADR ody_gits0_creadr_t
#define bustype_ODY_GITS0_CREADR CSR_TYPE_NCB
#define basename_ODY_GITS0_CREADR "GITS0_CREADR"
#define device_bar_ODY_GITS0_CREADR 0x0 /* PF_BAR0 */
#define busnum_ODY_GITS0_CREADR 0
#define arguments_ODY_GITS0_CREADR -1, -1, -1, -1

/**
 * Register (NCB32b) gits0_ctlr
 *
 * GITS0 Ctlr Register
 * The GITS0_CTLR characteristics are:
 *
 * * Purpose
 * Controls the operation of an ITS.
 *
 * * Usage constraints
 * There are no usage constraints.
 */
union ody_gits0_ctlr {
	uint32_t u;
	struct ody_gits0_ctlr_s {
		uint32_t enabled                     : 1;
		uint32_t reserved_1_30               : 30;
		uint32_t quiescent                   : 1;
	} s;
	/* struct ody_gits0_ctlr_s cn; */
};
typedef union ody_gits0_ctlr ody_gits0_ctlr_t;

#define ODY_GITS0_CTLR ODY_GITS0_CTLR_FUNC()
static inline uint64_t ODY_GITS0_CTLR_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GITS0_CTLR_FUNC(void)
{
	return 0x801000040000ll;
}

#define typedef_ODY_GITS0_CTLR ody_gits0_ctlr_t
#define bustype_ODY_GITS0_CTLR CSR_TYPE_NCB32b
#define basename_ODY_GITS0_CTLR "GITS0_CTLR"
#define device_bar_ODY_GITS0_CTLR 0x0 /* PF_BAR0 */
#define busnum_ODY_GITS0_CTLR 0
#define arguments_ODY_GITS0_CTLR -1, -1, -1, -1

/**
 * Register (NCB) gits0_cwriter
 *
 * GITS0 Cwriter Register
 * The GITS0_CWRITER characteristics are:
 *
 * * Purpose
 * Specifies the offset from GITS0_CBASER where software writes the next ITS command.
 *
 * * Usage constraints
 * If GITS0_CWRITER is written with a value outside of the valid range specified by
 * GITS0_CBASER.Physical_Address and GITS0_CBASER.Size then the command queue is
 * considered invalid, and no further commands are processed until GITS0_CWRITER is
 * written with a value that is in the valid range.
 *
 * Bits [63:32] and bits [31:0] are accessible separately
 */
union ody_gits0_cwriter {
	uint64_t u;
	struct ody_gits0_cwriter_s {
		uint64_t retry                       : 1;
		uint64_t reserved_1_4                : 4;
		uint64_t offset                      : 15;
		uint64_t reserved_20_63              : 44;
	} s;
	/* struct ody_gits0_cwriter_s cn; */
};
typedef union ody_gits0_cwriter ody_gits0_cwriter_t;

#define ODY_GITS0_CWRITER ODY_GITS0_CWRITER_FUNC()
static inline uint64_t ODY_GITS0_CWRITER_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GITS0_CWRITER_FUNC(void)
{
	return 0x801000040088ll;
}

#define typedef_ODY_GITS0_CWRITER ody_gits0_cwriter_t
#define bustype_ODY_GITS0_CWRITER CSR_TYPE_NCB
#define basename_ODY_GITS0_CWRITER "GITS0_CWRITER"
#define device_bar_ODY_GITS0_CWRITER 0x0 /* PF_BAR0 */
#define busnum_ODY_GITS0_CWRITER 0
#define arguments_ODY_GITS0_CWRITER -1, -1, -1, -1

/**
 * Register (NCB) gits0_d_errinsr
 *
 * GITS0 D Errinsr Register
 * The GITS0_D_ERRINSR characteristics are:
 *
 * * Purpose
 * This register can inject errors into the ITS Device cache RAM if ECC is enabaled.
 * You can use this register to test your error recovery software.
 *
 * * Usage constraints
 * If GICD(A)_SAC.GICTNS == 0, then only Secure software can access the contents of this register.
 *
 * \> *Note*
 * \> The bit assignments within this register depend on whether a write access or read access occurs.
 */
union ody_gits0_d_errinsr {
	uint64_t u;
	struct ody_gits0_d_errinsr_s {
		uint64_t errins1loc                  : 9;
		uint64_t reserved_9_14               : 6;
		uint64_t errins1valid                : 1;
		uint64_t errins2loc                  : 9;
		uint64_t reserved_25_30              : 6;
		uint64_t errins2valid                : 1;
		uint64_t addr                        : 16;
		uint64_t reserved_48_59              : 12;
		uint64_t disablewritecheck           : 1;
		uint64_t reserved_61_62              : 2;
		uint64_t valid                       : 1;
	} s;
	/* struct ody_gits0_d_errinsr_s cn; */
};
typedef union ody_gits0_d_errinsr ody_gits0_d_errinsr_t;

#define ODY_GITS0_D_ERRINSR ODY_GITS0_D_ERRINSR_FUNC()
static inline uint64_t ODY_GITS0_D_ERRINSR_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GITS0_D_ERRINSR_FUNC(void)
{
	return 0x80100004c000ll;
}

#define typedef_ODY_GITS0_D_ERRINSR ody_gits0_d_errinsr_t
#define bustype_ODY_GITS0_D_ERRINSR CSR_TYPE_NCB
#define basename_ODY_GITS0_D_ERRINSR "GITS0_D_ERRINSR"
#define device_bar_ODY_GITS0_D_ERRINSR 0x0 /* PF_BAR0 */
#define busnum_ODY_GITS0_D_ERRINSR 0
#define arguments_ODY_GITS0_D_ERRINSR -1, -1, -1, -1

/**
 * Register (NCB32b) gits0_fctlr
 *
 * GITS0 Fctlr Register
 * The GITS0_FCTLR characteristics are:
 *
 * * Purpose
 * This register controls functions in the ITS such as cache invalidation, clock
 * gating, and the scrubbing of all RAMs.
 *
 * * Usage constraints
 * There are no usage constraints.
 */
union ody_gits0_fctlr {
	uint32_t u;
	struct ody_gits0_fctlr_s {
		uint32_t sip                         : 1;
		uint32_t lte                         : 1;
		uint32_t uee                         : 1;
		uint32_t cee                         : 1;
		uint32_t cgo                         : 3;
		uint32_t leo                         : 1;
		uint32_t aee                         : 1;
		uint32_t qd                          : 1;
		uint32_t qak                         : 1;
		uint32_t poison_check                : 1;
		uint32_t ll_lpi_cr_init              : 2;
		uint32_t reserved_14_15              : 2;
		uint32_t icc                         : 1;
		uint32_t idc                         : 1;
		uint32_t iec                         : 1;
		uint32_t reserved_19                 : 1;
		uint32_t lpi_cr_init                 : 4;
		uint32_t reserved_24_27              : 4;
		uint32_t cmd_flush                   : 2;
		uint32_t pwe                         : 1;
		uint32_t dcc                         : 1;
	} s;
	/* struct ody_gits0_fctlr_s cn; */
};
typedef union ody_gits0_fctlr ody_gits0_fctlr_t;

#define ODY_GITS0_FCTLR ODY_GITS0_FCTLR_FUNC()
static inline uint64_t ODY_GITS0_FCTLR_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GITS0_FCTLR_FUNC(void)
{
	return 0x801000040020ll;
}

#define typedef_ODY_GITS0_FCTLR ody_gits0_fctlr_t
#define bustype_ODY_GITS0_FCTLR CSR_TYPE_NCB32b
#define basename_ODY_GITS0_FCTLR "GITS0_FCTLR"
#define device_bar_ODY_GITS0_FCTLR 0x0 /* PF_BAR0 */
#define busnum_ODY_GITS0_FCTLR 0
#define arguments_ODY_GITS0_FCTLR -1, -1, -1, -1

/**
 * Register (NCB32b) gits0_iidr
 *
 * GITS0 Iidr Register
 * The GITS0_IIDR characteristics are:
 *
 * * Purpose
 * Provides information about the implementer and revision of the ITS.
 *
 * * Usage constraints
 * There are no usage constraints.
 */
union ody_gits0_iidr {
	uint32_t u;
	struct ody_gits0_iidr_s {
		uint32_t implementer                 : 12;
		uint32_t revision                    : 4;
		uint32_t variant                     : 4;
		uint32_t reserved_20_23              : 4;
		uint32_t productid                   : 8;
	} s;
	/* struct ody_gits0_iidr_s cn; */
};
typedef union ody_gits0_iidr ody_gits0_iidr_t;

#define ODY_GITS0_IIDR ODY_GITS0_IIDR_FUNC()
static inline uint64_t ODY_GITS0_IIDR_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GITS0_IIDR_FUNC(void)
{
	return 0x801000040004ll;
}

#define typedef_ODY_GITS0_IIDR ody_gits0_iidr_t
#define bustype_ODY_GITS0_IIDR CSR_TYPE_NCB32b
#define basename_ODY_GITS0_IIDR "GITS0_IIDR"
#define device_bar_ODY_GITS0_IIDR 0x0 /* PF_BAR0 */
#define busnum_ODY_GITS0_IIDR 0
#define arguments_ODY_GITS0_IIDR -1, -1, -1, -1

/**
 * Register (NCB32b) gits0_mpamidr
 *
 * GITS0 Mpamidr Register
 * The GITS0_MPAMIDR characteristics are:
 *
 * * Purpose
 * Reports the maximum support PARTID and PMG values
 *
 * * Usage constraints
 * There are no usage constraints.
 */
union ody_gits0_mpamidr {
	uint32_t u;
	struct ody_gits0_mpamidr_s {
		uint32_t partid_max                  : 16;
		uint32_t pmg_max                     : 8;
		uint32_t reserved_24_31              : 8;
	} s;
	/* struct ody_gits0_mpamidr_s cn; */
};
typedef union ody_gits0_mpamidr ody_gits0_mpamidr_t;

#define ODY_GITS0_MPAMIDR ODY_GITS0_MPAMIDR_FUNC()
static inline uint64_t ODY_GITS0_MPAMIDR_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GITS0_MPAMIDR_FUNC(void)
{
	return 0x801000040010ll;
}

#define typedef_ODY_GITS0_MPAMIDR ody_gits0_mpamidr_t
#define bustype_ODY_GITS0_MPAMIDR CSR_TYPE_NCB32b
#define basename_ODY_GITS0_MPAMIDR "GITS0_MPAMIDR"
#define device_bar_ODY_GITS0_MPAMIDR 0x0 /* PF_BAR0 */
#define busnum_ODY_GITS0_MPAMIDR 0
#define arguments_ODY_GITS0_MPAMIDR -1, -1, -1, -1

/**
 * Register (NCB32b) gits0_mpidr
 *
 * GITS0 Mpidr Register
 * The GITS0_MPIDR characteristics are:
 *
 * * Purpose
 * Reports ITS's affinity when the vPE Table is shared with Redistributors.
 *
 * * Usage constraints
 * There are no usage constraints.
 */
union ody_gits0_mpidr {
	uint32_t u;
	struct ody_gits0_mpidr_s {
		uint32_t reserved_0_7                : 8;
		uint32_t aff1                        : 8;
		uint32_t aff2                        : 8;
		uint32_t aff3                        : 8;
	} s;
	/* struct ody_gits0_mpidr_s cn; */
};
typedef union ody_gits0_mpidr ody_gits0_mpidr_t;

#define ODY_GITS0_MPIDR ODY_GITS0_MPIDR_FUNC()
static inline uint64_t ODY_GITS0_MPIDR_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GITS0_MPIDR_FUNC(void)
{
	return 0x801000040018ll;
}

#define typedef_ODY_GITS0_MPIDR ody_gits0_mpidr_t
#define bustype_ODY_GITS0_MPIDR CSR_TYPE_NCB32b
#define basename_ODY_GITS0_MPIDR "GITS0_MPIDR"
#define device_bar_ODY_GITS0_MPIDR 0x0 /* PF_BAR0 */
#define busnum_ODY_GITS0_MPIDR 0
#define arguments_ODY_GITS0_MPIDR -1, -1, -1, -1

/**
 * Register (NCB) gits0_opr
 *
 * GITS0 Opr Register
 * The GITS0_OPR characteristics are:
 *
 * * Purpose
 * This register controls a range of implementation defined ITS test features.
 */
union ody_gits0_opr {
	uint64_t u;
	struct ody_gits0_opr_s {
		uint64_t event_id                    : 20;
		uint64_t reserved_20_31              : 12;
		uint64_t device_id                   : 24;
		uint64_t reserved_56_59              : 4;
		uint64_t lock_type                   : 4;
	} s;
	/* struct ody_gits0_opr_s cn; */
};
typedef union ody_gits0_opr ody_gits0_opr_t;

#define ODY_GITS0_OPR ODY_GITS0_OPR_FUNC()
static inline uint64_t ODY_GITS0_OPR_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GITS0_OPR_FUNC(void)
{
	return 0x801000040028ll;
}

#define typedef_ODY_GITS0_OPR ody_gits0_opr_t
#define bustype_ODY_GITS0_OPR CSR_TYPE_NCB
#define basename_ODY_GITS0_OPR "GITS0_OPR"
#define device_bar_ODY_GITS0_OPR 0x0 /* PF_BAR0 */
#define busnum_ODY_GITS0_OPR 0
#define arguments_ODY_GITS0_OPR -1, -1, -1, -1

/**
 * Register (NCB) gits0_opsr
 *
 * GITS0 Opsr Register
 * The GITS0_OPSR characteristics are:
 *
 * * Purpose
 * This register indicates the results of GITS0_OPR operations
 */
union ody_gits0_opsr {
	uint64_t u;
	struct ody_gits0_opsr_s {
		uint64_t pid                         : 16;
		uint64_t reserved_16_31              : 16;
		uint64_t target                      : 14;
		uint64_t reserved_46_47              : 2;
		uint64_t entry_locked                : 1;
		uint64_t virt                        : 1;
		uint64_t reserved_50_60              : 11;
		uint64_t request_in_progress         : 1;
		uint64_t request_pass                : 1;
		uint64_t request_complete            : 1;
	} s;
	/* struct ody_gits0_opsr_s cn; */
};
typedef union ody_gits0_opsr ody_gits0_opsr_t;

#define ODY_GITS0_OPSR ODY_GITS0_OPSR_FUNC()
static inline uint64_t ODY_GITS0_OPSR_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GITS0_OPSR_FUNC(void)
{
	return 0x801000040030ll;
}

#define typedef_ODY_GITS0_OPSR ody_gits0_opsr_t
#define bustype_ODY_GITS0_OPSR CSR_TYPE_NCB
#define basename_ODY_GITS0_OPSR "GITS0_OPSR"
#define device_bar_ODY_GITS0_OPSR 0x0 /* PF_BAR0 */
#define busnum_ODY_GITS0_OPSR 0
#define arguments_ODY_GITS0_OPSR -1, -1, -1, -1

/**
 * Register (NCB32b) gits0_partidr
 *
 * GITS0 Partidr Register
 * The GITS0_PARTIDR characteristics are:
 *
 * * Purpose
 * Reports the maximum support PARTID and PMG values
 *
 * * Usage constraints
 * There are no usage constraints.
 */
union ody_gits0_partidr {
	uint32_t u;
	struct ody_gits0_partidr_s {
		uint32_t partid                      : 9;
		uint32_t reserved_9_15               : 7;
		uint32_t pmg                         : 1;
		uint32_t reserved_17_31              : 15;
	} s;
	/* struct ody_gits0_partidr_s cn; */
};
typedef union ody_gits0_partidr ody_gits0_partidr_t;

#define ODY_GITS0_PARTIDR ODY_GITS0_PARTIDR_FUNC()
static inline uint64_t ODY_GITS0_PARTIDR_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GITS0_PARTIDR_FUNC(void)
{
	return 0x801000040014ll;
}

#define typedef_ODY_GITS0_PARTIDR ody_gits0_partidr_t
#define bustype_ODY_GITS0_PARTIDR CSR_TYPE_NCB32b
#define basename_ODY_GITS0_PARTIDR "GITS0_PARTIDR"
#define device_bar_ODY_GITS0_PARTIDR 0x0 /* PF_BAR0 */
#define busnum_ODY_GITS0_PARTIDR 0
#define arguments_ODY_GITS0_PARTIDR -1, -1, -1, -1

/**
 * Register (NCB32b) gits0_pidr0
 *
 * GITS0 Pidr0 Register
 * The GITS0_PIDR0 characteristics are:
 *
 * * Purpose
 * This register returns byte[0] of the peripheral ID of the Interrupt Translation Service page.
 *
 * * Usage constraints
 * There are no usage constraints.
 */
union ody_gits0_pidr0 {
	uint32_t u;
	struct ody_gits0_pidr0_s {
		uint32_t part_0                      : 8;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_gits0_pidr0_s cn; */
};
typedef union ody_gits0_pidr0 ody_gits0_pidr0_t;

#define ODY_GITS0_PIDR0 ODY_GITS0_PIDR0_FUNC()
static inline uint64_t ODY_GITS0_PIDR0_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GITS0_PIDR0_FUNC(void)
{
	return 0x80100004ffe0ll;
}

#define typedef_ODY_GITS0_PIDR0 ody_gits0_pidr0_t
#define bustype_ODY_GITS0_PIDR0 CSR_TYPE_NCB32b
#define basename_ODY_GITS0_PIDR0 "GITS0_PIDR0"
#define device_bar_ODY_GITS0_PIDR0 0x0 /* PF_BAR0 */
#define busnum_ODY_GITS0_PIDR0 0
#define arguments_ODY_GITS0_PIDR0 -1, -1, -1, -1

/**
 * Register (NCB32b) gits0_pidr1
 *
 * GITS0 Pidr1 Register
 * The GITS0_PIDR1 characteristics are:
 *
 * * Purpose
 * This register returns byte[1] of the peripheral ID of the Interrupt Translation Service page.
 *
 * * Usage constraints
 * There are no usage constraints.
 */
union ody_gits0_pidr1 {
	uint32_t u;
	struct ody_gits0_pidr1_s {
		uint32_t part_1                      : 4;
		uint32_t des_0                       : 4;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_gits0_pidr1_s cn; */
};
typedef union ody_gits0_pidr1 ody_gits0_pidr1_t;

#define ODY_GITS0_PIDR1 ODY_GITS0_PIDR1_FUNC()
static inline uint64_t ODY_GITS0_PIDR1_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GITS0_PIDR1_FUNC(void)
{
	return 0x80100004ffe4ll;
}

#define typedef_ODY_GITS0_PIDR1 ody_gits0_pidr1_t
#define bustype_ODY_GITS0_PIDR1 CSR_TYPE_NCB32b
#define basename_ODY_GITS0_PIDR1 "GITS0_PIDR1"
#define device_bar_ODY_GITS0_PIDR1 0x0 /* PF_BAR0 */
#define busnum_ODY_GITS0_PIDR1 0
#define arguments_ODY_GITS0_PIDR1 -1, -1, -1, -1

/**
 * Register (NCB32b) gits0_pidr2
 *
 * GITS0 Pidr2 Register
 * The GITS0_PIDR2 characteristics are:
 *
 * * Purpose
 * This register returns byte[2] of the peripheral ID of the Interrupt Translation Service page.
 *
 * * Usage constraints
 * There are no usage constraints.
 */
union ody_gits0_pidr2 {
	uint32_t u;
	struct ody_gits0_pidr2_s {
		uint32_t des_1                       : 3;
		uint32_t jedec                       : 1;
		uint32_t revision                    : 4;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_gits0_pidr2_s cn; */
};
typedef union ody_gits0_pidr2 ody_gits0_pidr2_t;

#define ODY_GITS0_PIDR2 ODY_GITS0_PIDR2_FUNC()
static inline uint64_t ODY_GITS0_PIDR2_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GITS0_PIDR2_FUNC(void)
{
	return 0x80100004ffe8ll;
}

#define typedef_ODY_GITS0_PIDR2 ody_gits0_pidr2_t
#define bustype_ODY_GITS0_PIDR2 CSR_TYPE_NCB32b
#define basename_ODY_GITS0_PIDR2 "GITS0_PIDR2"
#define device_bar_ODY_GITS0_PIDR2 0x0 /* PF_BAR0 */
#define busnum_ODY_GITS0_PIDR2 0
#define arguments_ODY_GITS0_PIDR2 -1, -1, -1, -1

/**
 * Register (NCB32b) gits0_pidr3
 *
 * GITS0 Pidr3 Register
 * The GITS0_PIDR3 characteristics are:
 *
 * * Purpose
 * This register returns byte[3] of the peripheral ID of the Interrupt Translation Service page.
 *
 * * Usage constraints
 * There are no usage constraints.
 */
union ody_gits0_pidr3 {
	uint32_t u;
	struct ody_gits0_pidr3_s {
		uint32_t cmod                        : 3;
		uint32_t reserved_3                  : 1;
		uint32_t revand                      : 4;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_gits0_pidr3_s cn; */
};
typedef union ody_gits0_pidr3 ody_gits0_pidr3_t;

#define ODY_GITS0_PIDR3 ODY_GITS0_PIDR3_FUNC()
static inline uint64_t ODY_GITS0_PIDR3_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GITS0_PIDR3_FUNC(void)
{
	return 0x80100004ffecll;
}

#define typedef_ODY_GITS0_PIDR3 ody_gits0_pidr3_t
#define bustype_ODY_GITS0_PIDR3 CSR_TYPE_NCB32b
#define basename_ODY_GITS0_PIDR3 "GITS0_PIDR3"
#define device_bar_ODY_GITS0_PIDR3 0x0 /* PF_BAR0 */
#define busnum_ODY_GITS0_PIDR3 0
#define arguments_ODY_GITS0_PIDR3 -1, -1, -1, -1

/**
 * Register (NCB32b) gits0_pidr4
 *
 * GITS0 Pidr4 Register
 * The GITS0_PIDR4 characteristics are:
 *
 * * Purpose
 * This register returns byte[4] of the peripheral ID of the Interrupt Translation Service page.
 *
 * * Usage constraints
 * There are no usage constraints.
 */
union ody_gits0_pidr4 {
	uint32_t u;
	struct ody_gits0_pidr4_s {
		uint32_t des_2                       : 4;
		uint32_t size                        : 4;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_gits0_pidr4_s cn; */
};
typedef union ody_gits0_pidr4 ody_gits0_pidr4_t;

#define ODY_GITS0_PIDR4 ODY_GITS0_PIDR4_FUNC()
static inline uint64_t ODY_GITS0_PIDR4_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GITS0_PIDR4_FUNC(void)
{
	return 0x80100004ffd0ll;
}

#define typedef_ODY_GITS0_PIDR4 ody_gits0_pidr4_t
#define bustype_ODY_GITS0_PIDR4 CSR_TYPE_NCB32b
#define basename_ODY_GITS0_PIDR4 "GITS0_PIDR4"
#define device_bar_ODY_GITS0_PIDR4 0x0 /* PF_BAR0 */
#define busnum_ODY_GITS0_PIDR4 0
#define arguments_ODY_GITS0_PIDR4 -1, -1, -1, -1

/**
 * Register (NCB32b) gits0_pidr5
 *
 * GITS0 Pidr5 Register
 * The GITS0_PIDR5 characteristics are:
 *
 * * Purpose
 * This register returns byte[5] of the peripheral ID of the Interrupt Translation Service page.
 *
 * * Usage constraints
 * There are no usage constraints.
 */
union ody_gits0_pidr5 {
	uint32_t u;
	struct ody_gits0_pidr5_s {
		uint32_t reserved_0_31               : 32;
	} s;
	struct ody_gits0_pidr5_cn {
		uint32_t reserved_0_7                : 8;
		uint32_t reserved_8_31               : 24;
	} cn;
};
typedef union ody_gits0_pidr5 ody_gits0_pidr5_t;

#define ODY_GITS0_PIDR5 ODY_GITS0_PIDR5_FUNC()
static inline uint64_t ODY_GITS0_PIDR5_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GITS0_PIDR5_FUNC(void)
{
	return 0x80100004ffd4ll;
}

#define typedef_ODY_GITS0_PIDR5 ody_gits0_pidr5_t
#define bustype_ODY_GITS0_PIDR5 CSR_TYPE_NCB32b
#define basename_ODY_GITS0_PIDR5 "GITS0_PIDR5"
#define device_bar_ODY_GITS0_PIDR5 0x0 /* PF_BAR0 */
#define busnum_ODY_GITS0_PIDR5 0
#define arguments_ODY_GITS0_PIDR5 -1, -1, -1, -1

/**
 * Register (NCB32b) gits0_pidr6
 *
 * GITS0 Pidr6 Register
 * The GITS0_PIDR6 characteristics are:
 *
 * * Purpose
 * This register returns byte[6] of the peripheral ID of the Interrupt Translation Service page.
 *
 * * Usage constraints
 * There are no usage constraints.
 */
union ody_gits0_pidr6 {
	uint32_t u;
	struct ody_gits0_pidr6_s {
		uint32_t reserved_0_31               : 32;
	} s;
	struct ody_gits0_pidr6_cn {
		uint32_t reserved_0_7                : 8;
		uint32_t reserved_8_31               : 24;
	} cn;
};
typedef union ody_gits0_pidr6 ody_gits0_pidr6_t;

#define ODY_GITS0_PIDR6 ODY_GITS0_PIDR6_FUNC()
static inline uint64_t ODY_GITS0_PIDR6_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GITS0_PIDR6_FUNC(void)
{
	return 0x80100004ffd8ll;
}

#define typedef_ODY_GITS0_PIDR6 ody_gits0_pidr6_t
#define bustype_ODY_GITS0_PIDR6 CSR_TYPE_NCB32b
#define basename_ODY_GITS0_PIDR6 "GITS0_PIDR6"
#define device_bar_ODY_GITS0_PIDR6 0x0 /* PF_BAR0 */
#define busnum_ODY_GITS0_PIDR6 0
#define arguments_ODY_GITS0_PIDR6 -1, -1, -1, -1

/**
 * Register (NCB32b) gits0_pidr7
 *
 * GITS0 Pidr7 Register
 * The GITS0_PIDR7 characteristics are:
 *
 * * Purpose
 * This register returns byte[7] of the peripheral ID of the Interrupt Translation Service page.
 *
 * * Usage constraints
 * There are no usage constraints.
 */
union ody_gits0_pidr7 {
	uint32_t u;
	struct ody_gits0_pidr7_s {
		uint32_t reserved_0_31               : 32;
	} s;
	struct ody_gits0_pidr7_cn {
		uint32_t reserved_0_7                : 8;
		uint32_t reserved_8_31               : 24;
	} cn;
};
typedef union ody_gits0_pidr7 ody_gits0_pidr7_t;

#define ODY_GITS0_PIDR7 ODY_GITS0_PIDR7_FUNC()
static inline uint64_t ODY_GITS0_PIDR7_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GITS0_PIDR7_FUNC(void)
{
	return 0x80100004ffdcll;
}

#define typedef_ODY_GITS0_PIDR7 ody_gits0_pidr7_t
#define bustype_ODY_GITS0_PIDR7 CSR_TYPE_NCB32b
#define basename_ODY_GITS0_PIDR7 "GITS0_PIDR7"
#define device_bar_ODY_GITS0_PIDR7 0x0 /* PF_BAR0 */
#define busnum_ODY_GITS0_PIDR7 0
#define arguments_ODY_GITS0_PIDR7 -1, -1, -1, -1

/**
 * Register (NCB) gits0_sgir
 *
 * GITS0 Sgir Register
 * The GITS0_SGIR characteristics are:
 *
 * * Purpose
 * Written by software to signal a virtual SGI for routing by the ITS.
 *
 * * Usage constraints
 * There are no usage constraints.
 */
union ody_gits0_sgir {
	uint64_t u;
	struct ody_gits0_sgir_s {
		uint64_t vintid                      : 4;
		uint64_t reserved_4_31               : 28;
		uint64_t vpeid                       : 11;
		uint64_t reserved_43_63              : 21;
	} s;
	/* struct ody_gits0_sgir_s cn; */
};
typedef union ody_gits0_sgir ody_gits0_sgir_t;

#define ODY_GITS0_SGIR ODY_GITS0_SGIR_FUNC()
static inline uint64_t ODY_GITS0_SGIR_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GITS0_SGIR_FUNC(void)
{
	return 0x801000060020ll;
}

#define typedef_ODY_GITS0_SGIR ody_gits0_sgir_t
#define bustype_ODY_GITS0_SGIR CSR_TYPE_NCB
#define basename_ODY_GITS0_SGIR "GITS0_SGIR"
#define device_bar_ODY_GITS0_SGIR 0x0 /* PF_BAR0 */
#define busnum_ODY_GITS0_SGIR 0
#define arguments_ODY_GITS0_SGIR -1, -1, -1, -1

/**
 * Register (NCB32b) gits0_translater
 *
 * GITS0 Translater Register
 * The GITS0_TRANSLATER characteristics are:
 *
 * * Purpose
 * Written by a requesting Device to signal an interrupt for translation by the ITS
 *
 * * Usage constraints
 * This register should not be accessed directly by Software.
 */
union ody_gits0_translater {
	uint32_t u;
	struct ody_gits0_translater_s {
		uint32_t interruptid                 : 32;
	} s;
	/* struct ody_gits0_translater_s cn; */
};
typedef union ody_gits0_translater ody_gits0_translater_t;

#define ODY_GITS0_TRANSLATER ODY_GITS0_TRANSLATER_FUNC()
static inline uint64_t ODY_GITS0_TRANSLATER_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GITS0_TRANSLATER_FUNC(void)
{
	return 0x801000050040ll;
}

#define typedef_ODY_GITS0_TRANSLATER ody_gits0_translater_t
#define bustype_ODY_GITS0_TRANSLATER CSR_TYPE_NCB32b
#define basename_ODY_GITS0_TRANSLATER "GITS0_TRANSLATER"
#define device_bar_ODY_GITS0_TRANSLATER 0x0 /* PF_BAR0 */
#define busnum_ODY_GITS0_TRANSLATER 0
#define arguments_ODY_GITS0_TRANSLATER -1, -1, -1, -1

/**
 * Register (NCB) gits0_typer
 *
 * GITS0 Typer Register
 * The GITS0_TYPER characteristics are:
 *
 * * Purpose
 * Specifies the features that an ITS supports.
 *
 * * Usage constraints
 * There are no usage constraints.
 */
union ody_gits0_typer {
	uint64_t u;
	struct ody_gits0_typer_s {
		uint64_t physical                    : 1;
		uint64_t virtual_f                   : 1;
		uint64_t cct                         : 1;
		uint64_t reserved_3                  : 1;
		uint64_t ittentrysize                : 4;
		uint64_t idbits                      : 5;
		uint64_t devbits                     : 5;
		uint64_t seis                        : 1;
		uint64_t pta                         : 1;
		uint64_t reserved_20_23              : 4;
		uint64_t hcc                         : 8;
		uint64_t cidbits                     : 4;
		uint64_t cil                         : 1;
		uint64_t vmovp                       : 1;
		uint64_t mpam                        : 1;
		uint64_t vsgi                        : 1;
		uint64_t vmapp                       : 1;
		uint64_t svpet                       : 2;
		uint64_t nid                         : 1;
		uint64_t reserved_44_45              : 2;
		uint64_t inv                         : 1;
		uint64_t reserved_47_63              : 17;
	} s;
	/* struct ody_gits0_typer_s cn; */
};
typedef union ody_gits0_typer ody_gits0_typer_t;

#define ODY_GITS0_TYPER ODY_GITS0_TYPER_FUNC()
static inline uint64_t ODY_GITS0_TYPER_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GITS0_TYPER_FUNC(void)
{
	return 0x801000040008ll;
}

#define typedef_ODY_GITS0_TYPER ody_gits0_typer_t
#define bustype_ODY_GITS0_TYPER CSR_TYPE_NCB
#define basename_ODY_GITS0_TYPER "GITS0_TYPER"
#define device_bar_ODY_GITS0_TYPER 0x0 /* PF_BAR0 */
#define busnum_ODY_GITS0_TYPER 0
#define arguments_ODY_GITS0_TYPER -1, -1, -1, -1

/**
 * Register (NCB) gits0_v_errinsr
 *
 * GITS0 V Errinsr Register
 * The GITS0_V_ERRINSR characteristics are:
 *
 * * Purpose
 * This register can inject errors into the ITS Event cache RAM if ECC is enabaled.
 * You can use this register to test your error recovery software.
 * * Usage constraints
 * If GICD(A)_SAC.GICTNS == 0, then only Secure software can access the contents of this register.
 *
 * \> *Note*
 * \> The bit assignments within this register depend on whether a write access or read access occurs.
 */
union ody_gits0_v_errinsr {
	uint64_t u;
	struct ody_gits0_v_errinsr_s {
		uint64_t errins1loc                  : 9;
		uint64_t reserved_9_14               : 6;
		uint64_t errins1valid                : 1;
		uint64_t errins2loc                  : 9;
		uint64_t reserved_25_30              : 6;
		uint64_t errins2valid                : 1;
		uint64_t addr                        : 16;
		uint64_t reserved_48_59              : 12;
		uint64_t disablewritecheck           : 1;
		uint64_t reserved_61_62              : 2;
		uint64_t valid                       : 1;
	} s;
	/* struct ody_gits0_v_errinsr_s cn; */
};
typedef union ody_gits0_v_errinsr ody_gits0_v_errinsr_t;

#define ODY_GITS0_V_ERRINSR ODY_GITS0_V_ERRINSR_FUNC()
static inline uint64_t ODY_GITS0_V_ERRINSR_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GITS0_V_ERRINSR_FUNC(void)
{
	return 0x80100004c008ll;
}

#define typedef_ODY_GITS0_V_ERRINSR ody_gits0_v_errinsr_t
#define bustype_ODY_GITS0_V_ERRINSR CSR_TYPE_NCB
#define basename_ODY_GITS0_V_ERRINSR "GITS0_V_ERRINSR"
#define device_bar_ODY_GITS0_V_ERRINSR 0x0 /* PF_BAR0 */
#define busnum_ODY_GITS0_V_ERRINSR 0
#define arguments_ODY_GITS0_V_ERRINSR -1, -1, -1, -1

#endif /* __ODY_CSRS_GIC_H__ */
