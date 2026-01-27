#ifndef __ODY_CSRS_CPC_H__
#define __ODY_CSRS_CPC_H__
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
 * CPC.
 *
 * This file is auto generated. Do not edit.
 *
 */

/**
 * Enumeration cpc_bar_e
 *
 * CPC Base Address Register Enumeration
 * Enumerates the base address registers.
 */
#define ODY_CPC_BAR_E_CPC_PF_BAR0 (0x86d000000000ll)
#define ODY_CPC_BAR_E_CPC_PF_BAR0_SIZE 0x800000ull

/**
 * Enumeration cpc_permit_e
 *
 * CPC Permit Enumeration
 * Enumerates the permissions for CPC access.
 */
#define ODY_CPC_PERMIT_E_CCP_DIS (4)
#define ODY_CPC_PERMIT_E_EHSM_DIS (5)
#define ODY_CPC_PERMIT_E_MCP_DIS (1)
#define ODY_CPC_PERMIT_E_NSEC_DIS (3)
#define ODY_CPC_PERMIT_E_SCP_DIS (0)
#define ODY_CPC_PERMIT_E_SEC_DIS (2)

/**
 * Enumeration cpc_xcp_map_e
 *
 * CPC XCP Number Mapping Enumeration
 * Enumerates the XCP mapping.
 */
#define ODY_CPC_XCP_MAP_E_CCP (2)
#define ODY_CPC_XCP_MAP_E_MCP (1)
#define ODY_CPC_XCP_MAP_E_SCP (0)

/**
 * Register (NCB32b) cpc_boot_owner#
 *
 * CPC Boot Owner Registers
 * These registers control an external arbiter for the boot device (SPI/eMMC)
 * across multiple external devices. There is a register for each requester:
 * _ \<0\> - SCP          - reset on SCP reset.
 * _ \<1\> - MCP          - reset on MCP reset.
 * _ \<2\> - AP Secure    - reset on core reset.
 * _ \<3\> - AP Nonsecure - reset on core reset.
 * _ \<4\> - CCP          - reset on CCP reset.
 *
 * These register is only writable to the corresponding requestor(s) permitted with CPC_PERMIT.
 */
union ody_cpc_boot_ownerx {
	uint32_t u;
	struct ody_cpc_boot_ownerx_s {
		uint32_t boot_req                    : 1;
		uint32_t reserved_1_7                : 7;
		uint32_t boot_wait                   : 1;
		uint32_t reserved_9_31               : 23;
	} s;
	/* struct ody_cpc_boot_ownerx_s cn; */
};
typedef union ody_cpc_boot_ownerx ody_cpc_boot_ownerx_t;

static inline uint64_t ODY_CPC_BOOT_OWNERX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_CPC_BOOT_OWNERX(uint64_t a)
{
	if (a <= 4)
		return 0x86d0000001c0ll + 8ll * ((a) & 0x7);
	__ody_csr_fatal("CPC_BOOT_OWNERX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_CPC_BOOT_OWNERX(a) ody_cpc_boot_ownerx_t
#define bustype_ODY_CPC_BOOT_OWNERX(a) CSR_TYPE_NCB32b
#define basename_ODY_CPC_BOOT_OWNERX(a) "CPC_BOOT_OWNERX"
#define device_bar_ODY_CPC_BOOT_OWNERX(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_CPC_BOOT_OWNERX(a) (a)
#define arguments_ODY_CPC_BOOT_OWNERX(a) (a), -1, -1, -1

/**
 * Register (NCB32b) cpc_boot_rom_limit
 *
 * CPC Boot ROM Limit Register
 * This register contains the address limit in the internal boot ROM that non-XCP processors can
 * access.
 *
 * This register is only writable to the requestor(s) permitted with CPC_PERMIT.
 *
 * This register is reset on chip reset.
 */
union ody_cpc_boot_rom_limit {
	uint32_t u;
	struct ody_cpc_boot_rom_limit_s {
		uint32_t reserved_0_2                : 3;
		uint32_t addr                        : 14;
		uint32_t reserved_17_31              : 15;
	} s;
	/* struct ody_cpc_boot_rom_limit_s cn; */
};
typedef union ody_cpc_boot_rom_limit ody_cpc_boot_rom_limit_t;

#define ODY_CPC_BOOT_ROM_LIMIT ODY_CPC_BOOT_ROM_LIMIT_FUNC()
static inline uint64_t ODY_CPC_BOOT_ROM_LIMIT_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_CPC_BOOT_ROM_LIMIT_FUNC(void)
{
	return 0x86d000000158ll;
}

#define typedef_ODY_CPC_BOOT_ROM_LIMIT ody_cpc_boot_rom_limit_t
#define bustype_ODY_CPC_BOOT_ROM_LIMIT CSR_TYPE_NCB32b
#define basename_ODY_CPC_BOOT_ROM_LIMIT "CPC_BOOT_ROM_LIMIT"
#define device_bar_ODY_CPC_BOOT_ROM_LIMIT 0x0 /* PF_BAR0 */
#define busnum_ODY_CPC_BOOT_ROM_LIMIT 0
#define arguments_ODY_CPC_BOOT_ROM_LIMIT -1, -1, -1, -1

/**
 * Register (NCB32b) cpc_ccp_boot_rom_limit
 *
 * CPC CCP Boot ROM Limit Register
 * This register contains the address limit in the internal boot ROM that CCP can access.
 *
 * This register is only accessible to the requestor(s) permitted with CPC_PERMIT.
 *
 * This register is reset on chip reset and ccp_reset.
 */
union ody_cpc_ccp_boot_rom_limit {
	uint32_t u;
	struct ody_cpc_ccp_boot_rom_limit_s {
		uint32_t reserved_0_2                : 3;
		uint32_t addr                        : 14;
		uint32_t reserved_17_31              : 15;
	} s;
	/* struct ody_cpc_ccp_boot_rom_limit_s cn; */
};
typedef union ody_cpc_ccp_boot_rom_limit ody_cpc_ccp_boot_rom_limit_t;

#define ODY_CPC_CCP_BOOT_ROM_LIMIT ODY_CPC_CCP_BOOT_ROM_LIMIT_FUNC()
static inline uint64_t ODY_CPC_CCP_BOOT_ROM_LIMIT_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_CPC_CCP_BOOT_ROM_LIMIT_FUNC(void)
{
	return 0x86d000000168ll;
}

#define typedef_ODY_CPC_CCP_BOOT_ROM_LIMIT ody_cpc_ccp_boot_rom_limit_t
#define bustype_ODY_CPC_CCP_BOOT_ROM_LIMIT CSR_TYPE_NCB32b
#define basename_ODY_CPC_CCP_BOOT_ROM_LIMIT "CPC_CCP_BOOT_ROM_LIMIT"
#define device_bar_ODY_CPC_CCP_BOOT_ROM_LIMIT 0x0 /* PF_BAR0 */
#define busnum_ODY_CPC_CCP_BOOT_ROM_LIMIT 0
#define arguments_ODY_CPC_CCP_BOOT_ROM_LIMIT -1, -1, -1, -1

/**
 * Register (NCB32b) cpc_clken
 *
 * CPC Clock Enable Register
 * This register is only accessible to the requestor(s) permitted with CPC_PERMIT.
 *
 * This register is reset on chip reset.
 */
union ody_cpc_clken {
	uint32_t u;
	struct ody_cpc_clken_s {
		uint32_t clken                       : 1;
		uint32_t force_ncbi_clken            : 1;
		uint32_t reserved_2_31               : 30;
	} s;
	/* struct ody_cpc_clken_s cn; */
};
typedef union ody_cpc_clken ody_cpc_clken_t;

#define ODY_CPC_CLKEN ODY_CPC_CLKEN_FUNC()
static inline uint64_t ODY_CPC_CLKEN_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_CPC_CLKEN_FUNC(void)
{
	return 0x86d000000118ll;
}

#define typedef_ODY_CPC_CLKEN ody_cpc_clken_t
#define bustype_ODY_CPC_CLKEN CSR_TYPE_NCB32b
#define basename_ODY_CPC_CLKEN "CPC_CLKEN"
#define device_bar_ODY_CPC_CLKEN 0x0 /* PF_BAR0 */
#define busnum_ODY_CPC_CLKEN 0
#define arguments_ODY_CPC_CLKEN -1, -1, -1, -1

/**
 * Register (NCB32b) cpc_const
 *
 * CPC Constants Register
 * This register is reset on chip reset.
 */
union ody_cpc_const {
	uint32_t u;
	struct ody_cpc_const_s {
		uint32_t cores                       : 8;
		uint32_t mem_regions                 : 8;
		uint32_t reserved_16_31              : 16;
	} s;
	/* struct ody_cpc_const_s cn; */
};
typedef union ody_cpc_const ody_cpc_const_t;

#define ODY_CPC_CONST ODY_CPC_CONST_FUNC()
static inline uint64_t ODY_CPC_CONST_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_CPC_CONST_FUNC(void)
{
	return 0x86d000000000ll;
}

#define typedef_ODY_CPC_CONST ody_cpc_const_t
#define bustype_ODY_CPC_CONST CSR_TYPE_NCB32b
#define basename_ODY_CPC_CONST "CPC_CONST"
#define device_bar_ODY_CPC_CONST 0x0 /* PF_BAR0 */
#define busnum_ODY_CPC_CONST 0
#define arguments_ODY_CPC_CONST -1, -1, -1, -1

/**
 * Register (NCB) cpc_csclk_active_pc
 *
 * CPC Conditional Coprocessor Clock Counter Register
 * This register counts conditional clocks for power management.
 *
 * This register is writable for diagnostic use only.
 *
 * This register is reset on chip reset.
 */
union ody_cpc_csclk_active_pc {
	uint64_t u;
	struct ody_cpc_csclk_active_pc_s {
		uint64_t count                       : 64;
	} s;
	/* struct ody_cpc_csclk_active_pc_s cn; */
};
typedef union ody_cpc_csclk_active_pc ody_cpc_csclk_active_pc_t;

#define ODY_CPC_CSCLK_ACTIVE_PC ODY_CPC_CSCLK_ACTIVE_PC_FUNC()
static inline uint64_t ODY_CPC_CSCLK_ACTIVE_PC_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_CPC_CSCLK_ACTIVE_PC_FUNC(void)
{
	return 0x86d000000010ll;
}

#define typedef_ODY_CPC_CSCLK_ACTIVE_PC ody_cpc_csclk_active_pc_t
#define bustype_ODY_CPC_CSCLK_ACTIVE_PC CSR_TYPE_NCB
#define basename_ODY_CPC_CSCLK_ACTIVE_PC "CPC_CSCLK_ACTIVE_PC"
#define device_bar_ODY_CPC_CSCLK_ACTIVE_PC 0x0 /* PF_BAR0 */
#define busnum_ODY_CPC_CSCLK_ACTIVE_PC 0
#define arguments_ODY_CPC_CSCLK_ACTIVE_PC -1, -1, -1, -1

/**
 * Register (NCB32b) cpc_mcp_boot_rom_limit
 *
 * CPC MCP Boot ROM Limit Register
 * This register contains the address limit in the internal boot ROM that MCP can access.
 *
 * This register is only accessible to the requestor(s) permitted with CPC_PERMIT.
 *
 * This register is reset on chip reset and mcp_reset.
 */
union ody_cpc_mcp_boot_rom_limit {
	uint32_t u;
	struct ody_cpc_mcp_boot_rom_limit_s {
		uint32_t reserved_0_2                : 3;
		uint32_t addr                        : 14;
		uint32_t reserved_17_31              : 15;
	} s;
	/* struct ody_cpc_mcp_boot_rom_limit_s cn; */
};
typedef union ody_cpc_mcp_boot_rom_limit ody_cpc_mcp_boot_rom_limit_t;

#define ODY_CPC_MCP_BOOT_ROM_LIMIT ODY_CPC_MCP_BOOT_ROM_LIMIT_FUNC()
static inline uint64_t ODY_CPC_MCP_BOOT_ROM_LIMIT_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_CPC_MCP_BOOT_ROM_LIMIT_FUNC(void)
{
	return 0x86d000000160ll;
}

#define typedef_ODY_CPC_MCP_BOOT_ROM_LIMIT ody_cpc_mcp_boot_rom_limit_t
#define bustype_ODY_CPC_MCP_BOOT_ROM_LIMIT CSR_TYPE_NCB32b
#define basename_ODY_CPC_MCP_BOOT_ROM_LIMIT "CPC_MCP_BOOT_ROM_LIMIT"
#define device_bar_ODY_CPC_MCP_BOOT_ROM_LIMIT 0x0 /* PF_BAR0 */
#define busnum_ODY_CPC_MCP_BOOT_ROM_LIMIT 0
#define arguments_ODY_CPC_MCP_BOOT_ROM_LIMIT -1, -1, -1, -1

/**
 * Register (NCB32b) cpc_permit
 *
 * CPC Register Permit Registers
 * This register is used to control CPC register permissions.
 *
 * This register is only accessible to the requestor(s) permitted with CPC_PERMIT.
 *
 * This register is reset on chip reset.
 */
union ody_cpc_permit {
	uint32_t u;
	struct ody_cpc_permit_s {
		uint32_t permitdis                   : 5;
		uint32_t reserved_5_30               : 26;
		uint32_t lock                        : 1;
	} s;
	/* struct ody_cpc_permit_s cn; */
};
typedef union ody_cpc_permit ody_cpc_permit_t;

#define ODY_CPC_PERMIT ODY_CPC_PERMIT_FUNC()
static inline uint64_t ODY_CPC_PERMIT_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_CPC_PERMIT_FUNC(void)
{
	return 0x86d000000120ll;
}

#define typedef_ODY_CPC_PERMIT ody_cpc_permit_t
#define bustype_ODY_CPC_PERMIT CSR_TYPE_NCB32b
#define basename_ODY_CPC_PERMIT "CPC_PERMIT"
#define device_bar_ODY_CPC_PERMIT 0x0 /* PF_BAR0 */
#define busnum_ODY_CPC_PERMIT 0
#define arguments_ODY_CPC_PERMIT -1, -1, -1, -1

/**
 * Register (NCB) cpc_ram_mem#
 *
 * CPC RAM Memory Registers
 * These registers access the CPC RAM memory space. The size of the RAM is discoverable
 * with CPC_CONST[MEM_REGIONS].
 *
 * This register is only accessible to the requestor(s) permitted with CPC_RAM_PERMIT().
 *
 * This register is reset on chip reset.
 */
union ody_cpc_ram_memx {
	uint64_t u;
	struct ody_cpc_ram_memx_s {
		uint64_t dat                         : 64;
	} s;
	/* struct ody_cpc_ram_memx_s cn; */
};
typedef union ody_cpc_ram_memx ody_cpc_ram_memx_t;

static inline uint64_t ODY_CPC_RAM_MEMX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_CPC_RAM_MEMX(uint64_t a)
{
	if (a <= 524287)
		return 0x86d000400000ll + 8ll * ((a) & 0x7ffff);
	__ody_csr_fatal("CPC_RAM_MEMX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_CPC_RAM_MEMX(a) ody_cpc_ram_memx_t
#define bustype_ODY_CPC_RAM_MEMX(a) CSR_TYPE_NCB
#define basename_ODY_CPC_RAM_MEMX(a) "CPC_RAM_MEMX"
#define device_bar_ODY_CPC_RAM_MEMX(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_CPC_RAM_MEMX(a) (a)
#define arguments_ODY_CPC_RAM_MEMX(a) (a), -1, -1, -1

/**
 * Register (NCB32b) cpc_ram_permit#
 *
 * CPC RAM Permit Registers
 * These registers are used to control the RAM space access permissions of
 * the SCP, MCP, CCP, EHSM and AP processors
 * The RAM is split into 64 secure regions.
 *
 * This register is only accessible to the requestor(s) permitted with CPC_PERMIT.
 *
 * This register is reset on chip reset.
 */
union ody_cpc_ram_permitx {
	uint32_t u;
	struct ody_cpc_ram_permitx_s {
		uint32_t rddis                       : 6;
		uint32_t reserved_6_9                : 4;
		uint32_t lock                        : 1;
		uint32_t reserved_11_15              : 5;
		uint32_t wrdis                       : 6;
		uint32_t reserved_22_23              : 2;
		uint32_t pci_dis                     : 4;
		uint32_t exedis                      : 4;
	} s;
	/* struct ody_cpc_ram_permitx_s cn; */
};
typedef union ody_cpc_ram_permitx ody_cpc_ram_permitx_t;

static inline uint64_t ODY_CPC_RAM_PERMITX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_CPC_RAM_PERMITX(uint64_t a)
{
	if (a <= 63)
		return 0x86d000008000ll + 8ll * ((a) & 0x3f);
	__ody_csr_fatal("CPC_RAM_PERMITX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_CPC_RAM_PERMITX(a) ody_cpc_ram_permitx_t
#define bustype_ODY_CPC_RAM_PERMITX(a) CSR_TYPE_NCB32b
#define basename_ODY_CPC_RAM_PERMITX(a) "CPC_RAM_PERMITX"
#define device_bar_ODY_CPC_RAM_PERMITX(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_CPC_RAM_PERMITX(a) (a)
#define arguments_ODY_CPC_RAM_PERMITX(a) (a), -1, -1, -1

/**
 * Register (NCB) cpc_rom_mem#
 *
 * CPC ROM Memory Registers
 * These registers access the CPC ROM memory space.
 *
 * This register is only accessible to the requestor(s) permitted with CPC_BOOT_ROM_LIMIT.
 *
 * This register is reset on chip reset.
 */
union ody_cpc_rom_memx {
	uint64_t u;
	struct ody_cpc_rom_memx_s {
		uint64_t dat                         : 64;
	} s;
	/* struct ody_cpc_rom_memx_s cn; */
};
typedef union ody_cpc_rom_memx ody_cpc_rom_memx_t;

static inline uint64_t ODY_CPC_ROM_MEMX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_CPC_ROM_MEMX(uint64_t a)
{
	if (a <= 8191)
		return 0x86d000010000ll + 8ll * ((a) & 0x1fff);
	__ody_csr_fatal("CPC_ROM_MEMX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_CPC_ROM_MEMX(a) ody_cpc_rom_memx_t
#define bustype_ODY_CPC_ROM_MEMX(a) CSR_TYPE_NCB
#define basename_ODY_CPC_ROM_MEMX(a) "CPC_ROM_MEMX"
#define device_bar_ODY_CPC_ROM_MEMX(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_CPC_ROM_MEMX(a) (a)
#define arguments_ODY_CPC_ROM_MEMX(a) (a), -1, -1, -1

/**
 * Register (NCB32b) cpc_scp_boot_rom_limit
 *
 * CPC SCP Boot ROM Limit Register
 * This register contains the address limit in the internal boot ROM that SCP can access.
 *
 * This register is only accessible to the requestor(s) permitted with CPC_PERMIT.
 *
 * This register is reset on chip reset and scp_reset.
 */
union ody_cpc_scp_boot_rom_limit {
	uint32_t u;
	struct ody_cpc_scp_boot_rom_limit_s {
		uint32_t reserved_0_2                : 3;
		uint32_t addr                        : 14;
		uint32_t reserved_17_31              : 15;
	} s;
	/* struct ody_cpc_scp_boot_rom_limit_s cn; */
};
typedef union ody_cpc_scp_boot_rom_limit ody_cpc_scp_boot_rom_limit_t;

#define ODY_CPC_SCP_BOOT_ROM_LIMIT ODY_CPC_SCP_BOOT_ROM_LIMIT_FUNC()
static inline uint64_t ODY_CPC_SCP_BOOT_ROM_LIMIT_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_CPC_SCP_BOOT_ROM_LIMIT_FUNC(void)
{
	return 0x86d000000150ll;
}

#define typedef_ODY_CPC_SCP_BOOT_ROM_LIMIT ody_cpc_scp_boot_rom_limit_t
#define bustype_ODY_CPC_SCP_BOOT_ROM_LIMIT CSR_TYPE_NCB32b
#define basename_ODY_CPC_SCP_BOOT_ROM_LIMIT "CPC_SCP_BOOT_ROM_LIMIT"
#define device_bar_ODY_CPC_SCP_BOOT_ROM_LIMIT 0x0 /* PF_BAR0 */
#define busnum_ODY_CPC_SCP_BOOT_ROM_LIMIT 0
#define arguments_ODY_CPC_SCP_BOOT_ROM_LIMIT -1, -1, -1, -1

/**
 * Register (NCB) cpc_timer100
 *
 * CPC Timer 100 MHz Register
 * This register contains the common 100 MHz timer register for the XCP cores.
 *
 * This register is only accessible to the requestor(s) permitted with CPC_PERMIT.
 * This register is writable for diagnostic use only.
 *
 * This register is reset on chip reset.
 */
union ody_cpc_timer100 {
	uint64_t u;
	struct ody_cpc_timer100_s {
		uint64_t tmr                         : 64;
	} s;
	/* struct ody_cpc_timer100_s cn; */
};
typedef union ody_cpc_timer100 ody_cpc_timer100_t;

#define ODY_CPC_TIMER100 ODY_CPC_TIMER100_FUNC()
static inline uint64_t ODY_CPC_TIMER100_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_CPC_TIMER100_FUNC(void)
{
	return 0x86d000000110ll;
}

#define typedef_ODY_CPC_TIMER100 ody_cpc_timer100_t
#define bustype_ODY_CPC_TIMER100 CSR_TYPE_NCB
#define basename_ODY_CPC_TIMER100 "CPC_TIMER100"
#define device_bar_ODY_CPC_TIMER100 0x0 /* PF_BAR0 */
#define busnum_ODY_CPC_TIMER100 0
#define arguments_ODY_CPC_TIMER100 -1, -1, -1, -1

/**
 * Register (NCB32b) cpc_xcp#_gib#_lint_permit
 *
 * CPC Register GIB Lint Permit Registers
 * These registers are used to control the XCP GIB LINT W1S/W1C register permissions.
 *
 * This register is only accessible to the requestor(s) permitted with CPC_PERMIT.
 *
 * This register is reset on chip reset.
 */
union ody_cpc_xcpx_gibx_lint_permit {
	uint32_t u;
	struct ody_cpc_xcpx_gibx_lint_permit_s {
		uint32_t permitdis                   : 5;
		uint32_t reserved_5_23               : 19;
		uint32_t pci_dis                     : 4;
		uint32_t reserved_28_30              : 3;
		uint32_t lock                        : 1;
	} s;
	/* struct ody_cpc_xcpx_gibx_lint_permit_s cn; */
};
typedef union ody_cpc_xcpx_gibx_lint_permit ody_cpc_xcpx_gibx_lint_permit_t;

static inline uint64_t ODY_CPC_XCPX_GIBX_LINT_PERMIT(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_CPC_XCPX_GIBX_LINT_PERMIT(uint64_t a, uint64_t b)
{
	if ((a <= 2) && (b <= 2))
		return 0x86d000000200ll + 0x20ll * ((a) & 0x3) + 8ll * ((b) & 0x3);
	__ody_csr_fatal("CPC_XCPX_GIBX_LINT_PERMIT", 2, a, b, 0, 0, 0, 0);
}

#define typedef_ODY_CPC_XCPX_GIBX_LINT_PERMIT(a, b) ody_cpc_xcpx_gibx_lint_permit_t
#define bustype_ODY_CPC_XCPX_GIBX_LINT_PERMIT(a, b) CSR_TYPE_NCB32b
#define basename_ODY_CPC_XCPX_GIBX_LINT_PERMIT(a, b) "CPC_XCPX_GIBX_LINT_PERMIT"
#define device_bar_ODY_CPC_XCPX_GIBX_LINT_PERMIT(a, b) 0x0 /* PF_BAR0 */
#define busnum_ODY_CPC_XCPX_GIBX_LINT_PERMIT(a, b) (a)
#define arguments_ODY_CPC_XCPX_GIBX_LINT_PERMIT(a, b) (a), (b), -1, -1

/**
 * Register (NCB32b) cpc_xcp#_permit
 *
 * CPC Register Permit Registers
 * These registers are used to control the XCP register permissions.
 *
 * This register is only accessible to the requestor(s) permitted with CPC_PERMIT.
 *
 * This register is reset on chip reset.
 */
union ody_cpc_xcpx_permit {
	uint32_t u;
	struct ody_cpc_xcpx_permit_s {
		uint32_t permitdis                   : 5;
		uint32_t reserved_5_30               : 26;
		uint32_t lock                        : 1;
	} s;
	/* struct ody_cpc_xcpx_permit_s cn; */
};
typedef union ody_cpc_xcpx_permit ody_cpc_xcpx_permit_t;

static inline uint64_t ODY_CPC_XCPX_PERMIT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_CPC_XCPX_PERMIT(uint64_t a)
{
	if (a <= 2)
		return 0x86d0000001a0ll + 8ll * ((a) & 0x3);
	__ody_csr_fatal("CPC_XCPX_PERMIT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_CPC_XCPX_PERMIT(a) ody_cpc_xcpx_permit_t
#define bustype_ODY_CPC_XCPX_PERMIT(a) CSR_TYPE_NCB32b
#define basename_ODY_CPC_XCPX_PERMIT(a) "CPC_XCPX_PERMIT"
#define device_bar_ODY_CPC_XCPX_PERMIT(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_CPC_XCPX_PERMIT(a) (a)
#define arguments_ODY_CPC_XCPX_PERMIT(a) (a), -1, -1, -1

#endif /* __ODY_CSRS_CPC_H__ */
