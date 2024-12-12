#ifndef __ODY_CSRS_PCCBR_H__
#define __ODY_CSRS_PCCBR_H__
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
 * PCCBR.
 *
 * This file is auto generated. Do not edit.
 *
 */

/**
 * Register (PCCBR) pccbr_xxx_acs_cap_ctl
 *
 * PCC PF ACS Capability and Control Register
 * This register is the header of the eight-byte PCI access control services
 * capability structure.
 *
 * This register is reset on a chip domain reset.
 */
union ody_pccbr_xxx_acs_cap_ctl {
	uint32_t u;
	struct ody_pccbr_xxx_acs_cap_ctl_s {
		uint32_t sv                          : 1;
		uint32_t tb                          : 1;
		uint32_t rr                          : 1;
		uint32_t cr                          : 1;
		uint32_t uf                          : 1;
		uint32_t ec                          : 1;
		uint32_t dt                          : 1;
		uint32_t reserved_7                  : 1;
		uint32_t ecvs                        : 8;
		uint32_t sve                         : 1;
		uint32_t tbe                         : 1;
		uint32_t rre                         : 1;
		uint32_t cre                         : 1;
		uint32_t ufe                         : 1;
		uint32_t ece                         : 1;
		uint32_t dte                         : 1;
		uint32_t reserved_23_31              : 9;
	} s;
	/* struct ody_pccbr_xxx_acs_cap_ctl_s cn; */
};
typedef union ody_pccbr_xxx_acs_cap_ctl ody_pccbr_xxx_acs_cap_ctl_t;

#define ODY_PCCBR_XXX_ACS_CAP_CTL ODY_PCCBR_XXX_ACS_CAP_CTL_FUNC()
static inline uint64_t ODY_PCCBR_XXX_ACS_CAP_CTL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCCBR_XXX_ACS_CAP_CTL_FUNC(void)
{
	return 0x144;
}

#define typedef_ODY_PCCBR_XXX_ACS_CAP_CTL ody_pccbr_xxx_acs_cap_ctl_t
#define bustype_ODY_PCCBR_XXX_ACS_CAP_CTL CSR_TYPE_PCCBR
#define basename_ODY_PCCBR_XXX_ACS_CAP_CTL "PCCBR_XXX_ACS_CAP_CTL"
#define busnum_ODY_PCCBR_XXX_ACS_CAP_CTL 0
#define arguments_ODY_PCCBR_XXX_ACS_CAP_CTL -1, -1, -1, -1

/**
 * Register (PCCBR) pccbr_xxx_acs_cap_hdr
 *
 * PCC PF ACS Capability Header Register
 * This register is the header of the eight-byte PCI ACS capability structure.
 */
union ody_pccbr_xxx_acs_cap_hdr {
	uint32_t u;
	struct ody_pccbr_xxx_acs_cap_hdr_s {
		uint32_t acsid                       : 16;
		uint32_t cv                          : 4;
		uint32_t nco                         : 12;
	} s;
	/* struct ody_pccbr_xxx_acs_cap_hdr_s cn; */
};
typedef union ody_pccbr_xxx_acs_cap_hdr ody_pccbr_xxx_acs_cap_hdr_t;

#define ODY_PCCBR_XXX_ACS_CAP_HDR ODY_PCCBR_XXX_ACS_CAP_HDR_FUNC()
static inline uint64_t ODY_PCCBR_XXX_ACS_CAP_HDR_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCCBR_XXX_ACS_CAP_HDR_FUNC(void)
{
	return 0x140;
}

#define typedef_ODY_PCCBR_XXX_ACS_CAP_HDR ody_pccbr_xxx_acs_cap_hdr_t
#define bustype_ODY_PCCBR_XXX_ACS_CAP_HDR CSR_TYPE_PCCBR
#define basename_ODY_PCCBR_XXX_ACS_CAP_HDR "PCCBR_XXX_ACS_CAP_HDR"
#define busnum_ODY_PCCBR_XXX_ACS_CAP_HDR 0
#define arguments_ODY_PCCBR_XXX_ACS_CAP_HDR -1, -1, -1, -1

/**
 * Register (PCCBR) pccbr_xxx_bus
 *
 * PCC Bridge Bus Register
 * This register is reset on a chip domain reset.
 */
union ody_pccbr_xxx_bus {
	uint32_t u;
	struct ody_pccbr_xxx_bus_s {
		uint32_t pbnum                       : 8;
		uint32_t sbnum                       : 8;
		uint32_t subbnum                     : 8;
		uint32_t slt                         : 8;
	} s;
	/* struct ody_pccbr_xxx_bus_s cn; */
};
typedef union ody_pccbr_xxx_bus ody_pccbr_xxx_bus_t;

#define ODY_PCCBR_XXX_BUS ODY_PCCBR_XXX_BUS_FUNC()
static inline uint64_t ODY_PCCBR_XXX_BUS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCCBR_XXX_BUS_FUNC(void)
{
	return 0x18;
}

#define typedef_ODY_PCCBR_XXX_BUS ody_pccbr_xxx_bus_t
#define bustype_ODY_PCCBR_XXX_BUS CSR_TYPE_PCCBR
#define basename_ODY_PCCBR_XXX_BUS "PCCBR_XXX_BUS"
#define busnum_ODY_PCCBR_XXX_BUS 0
#define arguments_ODY_PCCBR_XXX_BUS -1, -1, -1, -1

/**
 * Register (PCCBR) pccbr_xxx_cap_ptr
 *
 * PCC Bridge Capability Pointer Register
 */
union ody_pccbr_xxx_cap_ptr {
	uint32_t u;
	struct ody_pccbr_xxx_cap_ptr_s {
		uint32_t cp                          : 8;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_pccbr_xxx_cap_ptr_s cn; */
};
typedef union ody_pccbr_xxx_cap_ptr ody_pccbr_xxx_cap_ptr_t;

#define ODY_PCCBR_XXX_CAP_PTR ODY_PCCBR_XXX_CAP_PTR_FUNC()
static inline uint64_t ODY_PCCBR_XXX_CAP_PTR_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCCBR_XXX_CAP_PTR_FUNC(void)
{
	return 0x34;
}

#define typedef_ODY_PCCBR_XXX_CAP_PTR ody_pccbr_xxx_cap_ptr_t
#define bustype_ODY_PCCBR_XXX_CAP_PTR CSR_TYPE_PCCBR
#define basename_ODY_PCCBR_XXX_CAP_PTR "PCCBR_XXX_CAP_PTR"
#define busnum_ODY_PCCBR_XXX_CAP_PTR 0
#define arguments_ODY_PCCBR_XXX_CAP_PTR -1, -1, -1, -1

/**
 * Register (PCCBR) pccbr_xxx_clsize
 *
 * PCC Bridge Cache Line Size Register
 */
union ody_pccbr_xxx_clsize {
	uint32_t u;
	struct ody_pccbr_xxx_clsize_s {
		uint32_t cls                         : 8;
		uint32_t lt                          : 8;
		uint32_t chf                         : 7;
		uint32_t mfd                         : 1;
		uint32_t bist                        : 8;
	} s;
	/* struct ody_pccbr_xxx_clsize_s cn; */
};
typedef union ody_pccbr_xxx_clsize ody_pccbr_xxx_clsize_t;

#define ODY_PCCBR_XXX_CLSIZE ODY_PCCBR_XXX_CLSIZE_FUNC()
static inline uint64_t ODY_PCCBR_XXX_CLSIZE_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCCBR_XXX_CLSIZE_FUNC(void)
{
	return 0xc;
}

#define typedef_ODY_PCCBR_XXX_CLSIZE ody_pccbr_xxx_clsize_t
#define bustype_ODY_PCCBR_XXX_CLSIZE CSR_TYPE_PCCBR
#define basename_ODY_PCCBR_XXX_CLSIZE "PCCBR_XXX_CLSIZE"
#define busnum_ODY_PCCBR_XXX_CLSIZE 0
#define arguments_ODY_PCCBR_XXX_CLSIZE -1, -1, -1, -1

/**
 * Register (PCCBR) pccbr_xxx_cmd
 *
 * PCC Bridge Command/Status Register
 */
union ody_pccbr_xxx_cmd {
	uint32_t u;
	struct ody_pccbr_xxx_cmd_s {
		uint32_t reserved_0                  : 1;
		uint32_t msae                        : 1;
		uint32_t me                          : 1;
		uint32_t reserved_3_19               : 17;
		uint32_t cl                          : 1;
		uint32_t reserved_21_31              : 11;
	} s;
	/* struct ody_pccbr_xxx_cmd_s cn; */
};
typedef union ody_pccbr_xxx_cmd ody_pccbr_xxx_cmd_t;

#define ODY_PCCBR_XXX_CMD ODY_PCCBR_XXX_CMD_FUNC()
static inline uint64_t ODY_PCCBR_XXX_CMD_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCCBR_XXX_CMD_FUNC(void)
{
	return 4;
}

#define typedef_ODY_PCCBR_XXX_CMD ody_pccbr_xxx_cmd_t
#define bustype_ODY_PCCBR_XXX_CMD CSR_TYPE_PCCBR
#define basename_ODY_PCCBR_XXX_CMD "PCCBR_XXX_CMD"
#define busnum_ODY_PCCBR_XXX_CMD 0
#define arguments_ODY_PCCBR_XXX_CMD -1, -1, -1, -1

/**
 * Register (PCCBR) pccbr_xxx_e_cap2
 *
 * PCC Bridge PCI Express Capabilities 2 Register
 */
union ody_pccbr_xxx_e_cap2 {
	uint32_t u;
	struct ody_pccbr_xxx_e_cap2_s {
		uint32_t reserved_0_4                : 5;
		uint32_t arifwd                      : 1;
		uint32_t atomfwd                     : 1;
		uint32_t reserved_7_31               : 25;
	} s;
	/* struct ody_pccbr_xxx_e_cap2_s cn; */
};
typedef union ody_pccbr_xxx_e_cap2 ody_pccbr_xxx_e_cap2_t;

#define ODY_PCCBR_XXX_E_CAP2 ODY_PCCBR_XXX_E_CAP2_FUNC()
static inline uint64_t ODY_PCCBR_XXX_E_CAP2_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCCBR_XXX_E_CAP2_FUNC(void)
{
	return 0x94;
}

#define typedef_ODY_PCCBR_XXX_E_CAP2 ody_pccbr_xxx_e_cap2_t
#define bustype_ODY_PCCBR_XXX_E_CAP2 CSR_TYPE_PCCBR
#define basename_ODY_PCCBR_XXX_E_CAP2 "PCCBR_XXX_E_CAP2"
#define busnum_ODY_PCCBR_XXX_E_CAP2 0
#define arguments_ODY_PCCBR_XXX_E_CAP2 -1, -1, -1, -1

/**
 * Register (PCCBR) pccbr_xxx_e_cap_hdr
 *
 * PCC Bridge PCI Express Capabilities Register
 * This register is the header of the 64-byte PCIe capability header.
 */
union ody_pccbr_xxx_e_cap_hdr {
	uint32_t u;
	struct ody_pccbr_xxx_e_cap_hdr_s {
		uint32_t pcieid                      : 8;
		uint32_t ncp                         : 8;
		uint32_t pciecv                      : 4;
		uint32_t porttype                    : 4;
		uint32_t reserved_24_31              : 8;
	} s;
	/* struct ody_pccbr_xxx_e_cap_hdr_s cn; */
};
typedef union ody_pccbr_xxx_e_cap_hdr ody_pccbr_xxx_e_cap_hdr_t;

#define ODY_PCCBR_XXX_E_CAP_HDR ODY_PCCBR_XXX_E_CAP_HDR_FUNC()
static inline uint64_t ODY_PCCBR_XXX_E_CAP_HDR_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCCBR_XXX_E_CAP_HDR_FUNC(void)
{
	return 0x70;
}

#define typedef_ODY_PCCBR_XXX_E_CAP_HDR ody_pccbr_xxx_e_cap_hdr_t
#define bustype_ODY_PCCBR_XXX_E_CAP_HDR CSR_TYPE_PCCBR
#define basename_ODY_PCCBR_XXX_E_CAP_HDR "PCCBR_XXX_E_CAP_HDR"
#define busnum_ODY_PCCBR_XXX_E_CAP_HDR 0
#define arguments_ODY_PCCBR_XXX_E_CAP_HDR -1, -1, -1, -1

/**
 * Register (PCCBR) pccbr_xxx_e_dev_cap
 *
 * PCC Bridge PCI Express Device Capabilities Register
 */
union ody_pccbr_xxx_e_dev_cap {
	uint32_t u;
	struct ody_pccbr_xxx_e_dev_cap_s {
		uint32_t reserved_0_14               : 15;
		uint32_t rber                        : 1;
		uint32_t reserved_16_31              : 16;
	} s;
	/* struct ody_pccbr_xxx_e_dev_cap_s cn; */
};
typedef union ody_pccbr_xxx_e_dev_cap ody_pccbr_xxx_e_dev_cap_t;

#define ODY_PCCBR_XXX_E_DEV_CAP ODY_PCCBR_XXX_E_DEV_CAP_FUNC()
static inline uint64_t ODY_PCCBR_XXX_E_DEV_CAP_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCCBR_XXX_E_DEV_CAP_FUNC(void)
{
	return 0x74;
}

#define typedef_ODY_PCCBR_XXX_E_DEV_CAP ody_pccbr_xxx_e_dev_cap_t
#define bustype_ODY_PCCBR_XXX_E_DEV_CAP CSR_TYPE_PCCBR
#define basename_ODY_PCCBR_XXX_E_DEV_CAP "PCCBR_XXX_E_DEV_CAP"
#define busnum_ODY_PCCBR_XXX_E_DEV_CAP 0
#define arguments_ODY_PCCBR_XXX_E_DEV_CAP -1, -1, -1, -1

/**
 * Register (PCCBR) pccbr_xxx_ea_br
 *
 * PCC Bridge PCI Enhanced Allocation Bridge Register
 */
union ody_pccbr_xxx_ea_br {
	uint32_t u;
	struct ody_pccbr_xxx_ea_br_s {
		uint32_t fixed_sbnum                 : 8;
		uint32_t fixed_subbnum               : 8;
		uint32_t reserved_16_31              : 16;
	} s;
	/* struct ody_pccbr_xxx_ea_br_s cn; */
};
typedef union ody_pccbr_xxx_ea_br ody_pccbr_xxx_ea_br_t;

#define ODY_PCCBR_XXX_EA_BR ODY_PCCBR_XXX_EA_BR_FUNC()
static inline uint64_t ODY_PCCBR_XXX_EA_BR_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCCBR_XXX_EA_BR_FUNC(void)
{
	return 0xb4;
}

#define typedef_ODY_PCCBR_XXX_EA_BR ody_pccbr_xxx_ea_br_t
#define bustype_ODY_PCCBR_XXX_EA_BR CSR_TYPE_PCCBR
#define basename_ODY_PCCBR_XXX_EA_BR "PCCBR_XXX_EA_BR"
#define busnum_ODY_PCCBR_XXX_EA_BR 0
#define arguments_ODY_PCCBR_XXX_EA_BR -1, -1, -1, -1

/**
 * Register (PCCBR) pccbr_xxx_ea_cap_hdr
 *
 * PCC Bridge PCI Enhanced Allocation Capabilities Register
 * This register is the header of the 8-byte PCI enhanced allocation capability
 * structure for type 1 bridges.
 */
union ody_pccbr_xxx_ea_cap_hdr {
	uint32_t u;
	struct ody_pccbr_xxx_ea_cap_hdr_s {
		uint32_t pcieid                      : 8;
		uint32_t ncp                         : 8;
		uint32_t num_entries                 : 6;
		uint32_t reserved_22_31              : 10;
	} s;
	/* struct ody_pccbr_xxx_ea_cap_hdr_s cn; */
};
typedef union ody_pccbr_xxx_ea_cap_hdr ody_pccbr_xxx_ea_cap_hdr_t;

#define ODY_PCCBR_XXX_EA_CAP_HDR ODY_PCCBR_XXX_EA_CAP_HDR_FUNC()
static inline uint64_t ODY_PCCBR_XXX_EA_CAP_HDR_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCCBR_XXX_EA_CAP_HDR_FUNC(void)
{
	return 0xb0;
}

#define typedef_ODY_PCCBR_XXX_EA_CAP_HDR ody_pccbr_xxx_ea_cap_hdr_t
#define bustype_ODY_PCCBR_XXX_EA_CAP_HDR CSR_TYPE_PCCBR
#define basename_ODY_PCCBR_XXX_EA_CAP_HDR "PCCBR_XXX_EA_CAP_HDR"
#define busnum_ODY_PCCBR_XXX_EA_CAP_HDR 0
#define arguments_ODY_PCCBR_XXX_EA_CAP_HDR -1, -1, -1, -1

/**
 * Register (PCCBR) pccbr_xxx_id
 *
 * PCC Bridge Vendor and Device ID Register
 * This register is the header of the 64-byte PCI type 1 configuration structure.
 */
union ody_pccbr_xxx_id {
	uint32_t u;
	struct ody_pccbr_xxx_id_s {
		uint32_t vendid                      : 16;
		uint32_t devid                       : 16;
	} s;
	/* struct ody_pccbr_xxx_id_s cn; */
};
typedef union ody_pccbr_xxx_id ody_pccbr_xxx_id_t;

#define ODY_PCCBR_XXX_ID ODY_PCCBR_XXX_ID_FUNC()
static inline uint64_t ODY_PCCBR_XXX_ID_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCCBR_XXX_ID_FUNC(void)
{
	return 0;
}

#define typedef_ODY_PCCBR_XXX_ID ody_pccbr_xxx_id_t
#define bustype_ODY_PCCBR_XXX_ID CSR_TYPE_PCCBR
#define basename_ODY_PCCBR_XXX_ID "PCCBR_XXX_ID"
#define busnum_ODY_PCCBR_XXX_ID 0
#define arguments_ODY_PCCBR_XXX_ID -1, -1, -1, -1

/**
 * Register (PCCBR) pccbr_xxx_rev
 *
 * PCC Bridge Class Code/Revision ID Register
 */
union ody_pccbr_xxx_rev {
	uint32_t u;
	struct ody_pccbr_xxx_rev_s {
		uint32_t rid                         : 8;
		uint32_t pi                          : 8;
		uint32_t sc                          : 8;
		uint32_t bcc                         : 8;
	} s;
	/* struct ody_pccbr_xxx_rev_s cn; */
};
typedef union ody_pccbr_xxx_rev ody_pccbr_xxx_rev_t;

#define ODY_PCCBR_XXX_REV ODY_PCCBR_XXX_REV_FUNC()
static inline uint64_t ODY_PCCBR_XXX_REV_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCCBR_XXX_REV_FUNC(void)
{
	return 8;
}

#define typedef_ODY_PCCBR_XXX_REV ody_pccbr_xxx_rev_t
#define bustype_ODY_PCCBR_XXX_REV CSR_TYPE_PCCBR
#define basename_ODY_PCCBR_XXX_REV "PCCBR_XXX_REV"
#define busnum_ODY_PCCBR_XXX_REV 0
#define arguments_ODY_PCCBR_XXX_REV -1, -1, -1, -1

/**
 * Register (PCCBR) pccbr_xxx_vsec_cap_hdr
 *
 * PCC Bridge Vendor-Specific Capability Header Register
 * This register is the header of the 16-byte {ProductLine} family bridge capability
 * structure.
 */
union ody_pccbr_xxx_vsec_cap_hdr {
	uint32_t u;
	struct ody_pccbr_xxx_vsec_cap_hdr_s {
		uint32_t rbareid                     : 16;
		uint32_t cv                          : 4;
		uint32_t nco                         : 12;
	} s;
	/* struct ody_pccbr_xxx_vsec_cap_hdr_s cn; */
};
typedef union ody_pccbr_xxx_vsec_cap_hdr ody_pccbr_xxx_vsec_cap_hdr_t;

#define ODY_PCCBR_XXX_VSEC_CAP_HDR ODY_PCCBR_XXX_VSEC_CAP_HDR_FUNC()
static inline uint64_t ODY_PCCBR_XXX_VSEC_CAP_HDR_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCCBR_XXX_VSEC_CAP_HDR_FUNC(void)
{
	return 0x100;
}

#define typedef_ODY_PCCBR_XXX_VSEC_CAP_HDR ody_pccbr_xxx_vsec_cap_hdr_t
#define bustype_ODY_PCCBR_XXX_VSEC_CAP_HDR CSR_TYPE_PCCBR
#define basename_ODY_PCCBR_XXX_VSEC_CAP_HDR "PCCBR_XXX_VSEC_CAP_HDR"
#define busnum_ODY_PCCBR_XXX_VSEC_CAP_HDR 0
#define arguments_ODY_PCCBR_XXX_VSEC_CAP_HDR -1, -1, -1, -1

/**
 * Register (PCCBR) pccbr_xxx_vsec_ctl
 *
 * PCC Bridge Vendor-Specific Control Register
 */
union ody_pccbr_xxx_vsec_ctl {
	uint32_t u;
	struct ody_pccbr_xxx_vsec_ctl_s {
		uint32_t inst_num                    : 8;
		uint32_t static_subbnum              : 8;
		uint32_t reserved_16_31              : 16;
	} s;
	/* struct ody_pccbr_xxx_vsec_ctl_s cn; */
};
typedef union ody_pccbr_xxx_vsec_ctl ody_pccbr_xxx_vsec_ctl_t;

#define ODY_PCCBR_XXX_VSEC_CTL ODY_PCCBR_XXX_VSEC_CTL_FUNC()
static inline uint64_t ODY_PCCBR_XXX_VSEC_CTL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCCBR_XXX_VSEC_CTL_FUNC(void)
{
	return 0x108;
}

#define typedef_ODY_PCCBR_XXX_VSEC_CTL ody_pccbr_xxx_vsec_ctl_t
#define bustype_ODY_PCCBR_XXX_VSEC_CTL CSR_TYPE_PCCBR
#define basename_ODY_PCCBR_XXX_VSEC_CTL "PCCBR_XXX_VSEC_CTL"
#define busnum_ODY_PCCBR_XXX_VSEC_CTL 0
#define arguments_ODY_PCCBR_XXX_VSEC_CTL -1, -1, -1, -1

/**
 * Register (PCCBR) pccbr_xxx_vsec_id
 *
 * PCC Bridge Vendor-Specific Identification Register
 */
union ody_pccbr_xxx_vsec_id {
	uint32_t u;
	struct ody_pccbr_xxx_vsec_id_s {
		uint32_t id                          : 16;
		uint32_t rev                         : 4;
		uint32_t len                         : 12;
	} s;
	/* struct ody_pccbr_xxx_vsec_id_s cn; */
};
typedef union ody_pccbr_xxx_vsec_id ody_pccbr_xxx_vsec_id_t;

#define ODY_PCCBR_XXX_VSEC_ID ODY_PCCBR_XXX_VSEC_ID_FUNC()
static inline uint64_t ODY_PCCBR_XXX_VSEC_ID_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCCBR_XXX_VSEC_ID_FUNC(void)
{
	return 0x104;
}

#define typedef_ODY_PCCBR_XXX_VSEC_ID ody_pccbr_xxx_vsec_id_t
#define bustype_ODY_PCCBR_XXX_VSEC_ID CSR_TYPE_PCCBR
#define basename_ODY_PCCBR_XXX_VSEC_ID "PCCBR_XXX_VSEC_ID"
#define busnum_ODY_PCCBR_XXX_VSEC_ID 0
#define arguments_ODY_PCCBR_XXX_VSEC_ID -1, -1, -1, -1

/**
 * Register (PCCBR) pccbr_xxx_vsec_sctl
 *
 * PCC Bridge Vendor-Specific Secure Control Register
 * This register is reset on a chip domain reset.
 */
union ody_pccbr_xxx_vsec_sctl {
	uint32_t u;
	struct ody_pccbr_xxx_vsec_sctl_s {
		uint32_t reserved_0_15               : 16;
		uint32_t rid                         : 8;
		uint32_t pi                          : 8;
	} s;
	/* struct ody_pccbr_xxx_vsec_sctl_s cn; */
};
typedef union ody_pccbr_xxx_vsec_sctl ody_pccbr_xxx_vsec_sctl_t;

#define ODY_PCCBR_XXX_VSEC_SCTL ODY_PCCBR_XXX_VSEC_SCTL_FUNC()
static inline uint64_t ODY_PCCBR_XXX_VSEC_SCTL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCCBR_XXX_VSEC_SCTL_FUNC(void)
{
	return 0x10c;
}

#define typedef_ODY_PCCBR_XXX_VSEC_SCTL ody_pccbr_xxx_vsec_sctl_t
#define bustype_ODY_PCCBR_XXX_VSEC_SCTL CSR_TYPE_PCCBR
#define basename_ODY_PCCBR_XXX_VSEC_SCTL "PCCBR_XXX_VSEC_SCTL"
#define busnum_ODY_PCCBR_XXX_VSEC_SCTL 0
#define arguments_ODY_PCCBR_XXX_VSEC_SCTL -1, -1, -1, -1

#endif /* __ODY_CSRS_PCCBR_H__ */
