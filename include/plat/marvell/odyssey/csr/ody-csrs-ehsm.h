#ifndef __ODY_CSRS_EHSM_H__
#define __ODY_CSRS_EHSM_H__
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
 * EHSM.
 *
 * This file is auto generated. Do not edit.
 *
 */

/**
 * Enumeration ehsm_bar_e
 *
 * EHSM Base Address Register Enumeration
 * Enumerates the base address registers.
 */
#define ODY_EHSM_BAR_E_EHSM_PF_BAR0 (0x80b000000000ll)
#define ODY_EHSM_BAR_E_EHSM_PF_BAR0_SIZE 0x100000ull

/**
 * Register (NCB32b) ehsm_biu_boot_strap_pin_status
 *
 * EHSM Biu Boot Strap Pin Status Register
 * This is for EHSM-78
 */
union ody_ehsm_biu_boot_strap_pin_status {
	uint32_t u;
	struct ody_ehsm_biu_boot_strap_pin_status_s {
		uint32_t disable_boot_strap0         : 1;
		uint32_t disable_boot_strap1         : 1;
		uint32_t disable_boot_strap2         : 1;
		uint32_t disable_boot_strap3         : 1;
		uint32_t disable_boot_strap4         : 1;
		uint32_t disable_boot_strap5         : 1;
		uint32_t disable_boot_strap6         : 1;
		uint32_t disable_boot_strap7         : 1;
		uint32_t disable_boot_strap8         : 1;
		uint32_t disable_boot_strap9         : 1;
		uint32_t disable_boot_strap10        : 1;
		uint32_t disable_boot_strap11        : 1;
		uint32_t disable_boot_strap12        : 1;
		uint32_t disable_boot_strap13        : 1;
		uint32_t disable_boot_strap14        : 1;
		uint32_t disable_boot_strap15        : 1;
		uint32_t disable_boot_strap16        : 1;
		uint32_t disable_boot_strap17        : 1;
		uint32_t disable_boot_strap18        : 1;
		uint32_t disable_boot_strap19        : 1;
		uint32_t disable_boot_strap20        : 1;
		uint32_t disable_boot_strap21        : 1;
		uint32_t disable_boot_strap22        : 1;
		uint32_t disable_boot_strap23        : 1;
		uint32_t disable_boot_strap24        : 1;
		uint32_t disable_boot_strap25        : 1;
		uint32_t disable_boot_strap26        : 1;
		uint32_t disable_boot_strap27        : 1;
		uint32_t disable_boot_strap28        : 1;
		uint32_t disable_boot_strap29        : 1;
		uint32_t disable_boot_strap30        : 1;
		uint32_t disable_boot_strap31        : 1;
	} s;
	/* struct ody_ehsm_biu_boot_strap_pin_status_s cn; */
};
typedef union ody_ehsm_biu_boot_strap_pin_status ody_ehsm_biu_boot_strap_pin_status_t;

#define ODY_EHSM_BIU_BOOT_STRAP_PIN_STATUS ODY_EHSM_BIU_BOOT_STRAP_PIN_STATUS_FUNC()
static inline uint64_t ODY_EHSM_BIU_BOOT_STRAP_PIN_STATUS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_EHSM_BIU_BOOT_STRAP_PIN_STATUS_FUNC(void)
{
	return 0x80b000000128ll;
}

#define typedef_ODY_EHSM_BIU_BOOT_STRAP_PIN_STATUS ody_ehsm_biu_boot_strap_pin_status_t
#define bustype_ODY_EHSM_BIU_BOOT_STRAP_PIN_STATUS CSR_TYPE_NCB32b
#define basename_ODY_EHSM_BIU_BOOT_STRAP_PIN_STATUS "EHSM_BIU_BOOT_STRAP_PIN_STATUS"
#define device_bar_ODY_EHSM_BIU_BOOT_STRAP_PIN_STATUS 0x0 /* PF_BAR0 */
#define busnum_ODY_EHSM_BIU_BOOT_STRAP_PIN_STATUS 0
#define arguments_ODY_EHSM_BIU_BOOT_STRAP_PIN_STATUS -1, -1, -1, -1

/**
 * Register (NCB32b) ehsm_biu_bootrom_config_status
 *
 * EHSM Biu Bootrom Config Status Register
 * This is for EHSM-78
 */
union ody_ehsm_biu_bootrom_config_status {
	uint32_t u;
	struct ody_ehsm_biu_bootrom_config_status_s {
		uint32_t secure_boot                 : 1;
		uint32_t encrypted_boot              : 1;
		uint32_t measured_boot               : 1;
		uint32_t secure_boot_lock            : 1;
		uint32_t encrypted_boot_lock         : 1;
		uint32_t measured_boot_lock          : 1;
		uint32_t dsa_scheme_id               : 5;
		uint32_t aes_scheme_id               : 5;
		uint32_t dice_scheme_id              : 3;
		uint32_t bootrom_rsvd_param          : 12;
		uint32_t reserved_31                 : 1;
	} s;
	/* struct ody_ehsm_biu_bootrom_config_status_s cn; */
};
typedef union ody_ehsm_biu_bootrom_config_status ody_ehsm_biu_bootrom_config_status_t;

#define ODY_EHSM_BIU_BOOTROM_CONFIG_STATUS ODY_EHSM_BIU_BOOTROM_CONFIG_STATUS_FUNC()
static inline uint64_t ODY_EHSM_BIU_BOOTROM_CONFIG_STATUS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_EHSM_BIU_BOOTROM_CONFIG_STATUS_FUNC(void)
{
	return 0x80b000000118ll;
}

#define typedef_ODY_EHSM_BIU_BOOTROM_CONFIG_STATUS ody_ehsm_biu_bootrom_config_status_t
#define bustype_ODY_EHSM_BIU_BOOTROM_CONFIG_STATUS CSR_TYPE_NCB32b
#define basename_ODY_EHSM_BIU_BOOTROM_CONFIG_STATUS "EHSM_BIU_BOOTROM_CONFIG_STATUS"
#define device_bar_ODY_EHSM_BIU_BOOTROM_CONFIG_STATUS 0x0 /* PF_BAR0 */
#define busnum_ODY_EHSM_BIU_BOOTROM_CONFIG_STATUS 0
#define arguments_ODY_EHSM_BIU_BOOTROM_CONFIG_STATUS -1, -1, -1, -1

/**
 * Register (NCB32b) ehsm_biu_chain_of_trust_status
 *
 * EHSM Biu Chain Of Trust Status Register
 * This reigster is for IROM to program runtime trust status bits.
 */
union ody_ehsm_biu_chain_of_trust_status {
	uint32_t u;
	struct ody_ehsm_biu_chain_of_trust_status_s {
		uint32_t pie_load_status             : 1;
		uint32_t reserved_1                  : 1;
		uint32_t key_manifest_load_status    : 1;
		uint32_t key_manifest_lock_status    : 1;
		uint32_t uds_lock_status             : 1;
		uint32_t soc_noise_injection         : 1;
		uint32_t pie_lock_status             : 1;
		uint32_t irom_panic_state            : 1;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_ehsm_biu_chain_of_trust_status_s cn; */
};
typedef union ody_ehsm_biu_chain_of_trust_status ody_ehsm_biu_chain_of_trust_status_t;

#define ODY_EHSM_BIU_CHAIN_OF_TRUST_STATUS ODY_EHSM_BIU_CHAIN_OF_TRUST_STATUS_FUNC()
static inline uint64_t ODY_EHSM_BIU_CHAIN_OF_TRUST_STATUS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_EHSM_BIU_CHAIN_OF_TRUST_STATUS_FUNC(void)
{
	return 0x80b000000130ll;
}

#define typedef_ODY_EHSM_BIU_CHAIN_OF_TRUST_STATUS ody_ehsm_biu_chain_of_trust_status_t
#define bustype_ODY_EHSM_BIU_CHAIN_OF_TRUST_STATUS CSR_TYPE_NCB32b
#define basename_ODY_EHSM_BIU_CHAIN_OF_TRUST_STATUS "EHSM_BIU_CHAIN_OF_TRUST_STATUS"
#define device_bar_ODY_EHSM_BIU_CHAIN_OF_TRUST_STATUS 0x0 /* PF_BAR0 */
#define busnum_ODY_EHSM_BIU_CHAIN_OF_TRUST_STATUS 0
#define arguments_ODY_EHSM_BIU_CHAIN_OF_TRUST_STATUS -1, -1, -1, -1

/**
 * Register (NCB32b) ehsm_biu_cmd_fifo_status
 *
 * EHSM Biu Cmd Fifo Status Register
 */
union ody_ehsm_biu_cmd_fifo_status {
	uint32_t u;
	struct ody_ehsm_biu_cmd_fifo_status_s {
		uint32_t cmd_cntr                    : 4;
		uint32_t core1_cmd_buffer_full       : 1;
		uint32_t core2_cmd_buffer_full       : 1;
		uint32_t core1_cmd_status_read_done  : 1;
		uint32_t core2_cmd_status_read_done  : 1;
		uint32_t cmd_status                  : 8;
		uint32_t cmd_exe_core_id             : 1;
		uint32_t reserved_17_31              : 15;
	} s;
	/* struct ody_ehsm_biu_cmd_fifo_status_s cn; */
};
typedef union ody_ehsm_biu_cmd_fifo_status ody_ehsm_biu_cmd_fifo_status_t;

#define ODY_EHSM_BIU_CMD_FIFO_STATUS ODY_EHSM_BIU_CMD_FIFO_STATUS_FUNC()
static inline uint64_t ODY_EHSM_BIU_CMD_FIFO_STATUS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_EHSM_BIU_CMD_FIFO_STATUS_FUNC(void)
{
	return 0x80b0000000c4ll;
}

#define typedef_ODY_EHSM_BIU_CMD_FIFO_STATUS ody_ehsm_biu_cmd_fifo_status_t
#define bustype_ODY_EHSM_BIU_CMD_FIFO_STATUS CSR_TYPE_NCB32b
#define basename_ODY_EHSM_BIU_CMD_FIFO_STATUS "EHSM_BIU_CMD_FIFO_STATUS"
#define device_bar_ODY_EHSM_BIU_CMD_FIFO_STATUS 0x0 /* PF_BAR0 */
#define busnum_ODY_EHSM_BIU_CMD_FIFO_STATUS 0
#define arguments_ODY_EHSM_BIU_CMD_FIFO_STATUS -1, -1, -1, -1

/**
 * Register (NCB32b) ehsm_biu_context_status
 *
 * EHSM Biu Context Status Register
 */
union ody_ehsm_biu_context_status {
	uint32_t u;
	struct ody_ehsm_biu_context_status_s {
		uint32_t context_status              : 32;
	} s;
	/* struct ody_ehsm_biu_context_status_s cn; */
};
typedef union ody_ehsm_biu_context_status ody_ehsm_biu_context_status_t;

#define ODY_EHSM_BIU_CONTEXT_STATUS ODY_EHSM_BIU_CONTEXT_STATUS_FUNC()
static inline uint64_t ODY_EHSM_BIU_CONTEXT_STATUS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_EHSM_BIU_CONTEXT_STATUS_FUNC(void)
{
	return 0x80b0000000e0ll;
}

#define typedef_ODY_EHSM_BIU_CONTEXT_STATUS ody_ehsm_biu_context_status_t
#define bustype_ODY_EHSM_BIU_CONTEXT_STATUS CSR_TYPE_NCB32b
#define basename_ODY_EHSM_BIU_CONTEXT_STATUS "EHSM_BIU_CONTEXT_STATUS"
#define device_bar_ODY_EHSM_BIU_CONTEXT_STATUS 0x0 /* PF_BAR0 */
#define busnum_ODY_EHSM_BIU_CONTEXT_STATUS 0
#define arguments_ODY_EHSM_BIU_CONTEXT_STATUS -1, -1, -1, -1

/**
 * Register (NCB32b) ehsm_biu_core1_cmd
 *
 * EHSM Biu Core1 Cmd Register
 */
union ody_ehsm_biu_core1_cmd {
	uint32_t u;
	struct ody_ehsm_biu_core1_cmd_s {
		uint32_t cmd                         : 16;
		uint32_t reserved_16_19              : 4;
		uint32_t host_core_id                : 12;
	} s;
	/* struct ody_ehsm_biu_core1_cmd_s cn; */
};
typedef union ody_ehsm_biu_core1_cmd ody_ehsm_biu_core1_cmd_t;

#define ODY_EHSM_BIU_CORE1_CMD ODY_EHSM_BIU_CORE1_CMD_FUNC()
static inline uint64_t ODY_EHSM_BIU_CORE1_CMD_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_EHSM_BIU_CORE1_CMD_FUNC(void)
{
	return 0x80b000000040ll;
}

#define typedef_ODY_EHSM_BIU_CORE1_CMD ody_ehsm_biu_core1_cmd_t
#define bustype_ODY_EHSM_BIU_CORE1_CMD CSR_TYPE_NCB32b
#define basename_ODY_EHSM_BIU_CORE1_CMD "EHSM_BIU_CORE1_CMD"
#define device_bar_ODY_EHSM_BIU_CORE1_CMD 0x0 /* PF_BAR0 */
#define busnum_ODY_EHSM_BIU_CORE1_CMD 0
#define arguments_ODY_EHSM_BIU_CORE1_CMD -1, -1, -1, -1

/**
 * Register (NCB32b) ehsm_biu_core1_cmd_param0
 *
 * EHSM Biu Core1 Cmd Param0 Register
 * This register contains parameter 0 associated with a EHSM primitive command from
 * host processor core 1. There are a total of 16 spaces for primitive command
 * parameters. When the host processor core 1 wants to send a primitive command to
 * EHSM, it must first write all the associated parameters (if any). Once all the
 * parameters associated with a primitive command have been written, the host processor
 * core 1 can write the associated primitive command to the CORE1_CMD register. Host
 * does not need to write the unused parameters. The CM3 processor has read access to
 * all 16 Command Parameter registers, but no write access.
 */
union ody_ehsm_biu_core1_cmd_param0 {
	uint32_t u;
	struct ody_ehsm_biu_core1_cmd_param0_s {
		uint32_t core1_cmd_param0            : 32;
	} s;
	/* struct ody_ehsm_biu_core1_cmd_param0_s cn; */
};
typedef union ody_ehsm_biu_core1_cmd_param0 ody_ehsm_biu_core1_cmd_param0_t;

#define ODY_EHSM_BIU_CORE1_CMD_PARAM0 ODY_EHSM_BIU_CORE1_CMD_PARAM0_FUNC()
static inline uint64_t ODY_EHSM_BIU_CORE1_CMD_PARAM0_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_EHSM_BIU_CORE1_CMD_PARAM0_FUNC(void)
{
	return 0x80b000000000ll;
}

#define typedef_ODY_EHSM_BIU_CORE1_CMD_PARAM0 ody_ehsm_biu_core1_cmd_param0_t
#define bustype_ODY_EHSM_BIU_CORE1_CMD_PARAM0 CSR_TYPE_NCB32b
#define basename_ODY_EHSM_BIU_CORE1_CMD_PARAM0 "EHSM_BIU_CORE1_CMD_PARAM0"
#define device_bar_ODY_EHSM_BIU_CORE1_CMD_PARAM0 0x0 /* PF_BAR0 */
#define busnum_ODY_EHSM_BIU_CORE1_CMD_PARAM0 0
#define arguments_ODY_EHSM_BIU_CORE1_CMD_PARAM0 -1, -1, -1, -1

/**
 * Register (NCB32b) ehsm_biu_core1_cmd_param1
 *
 * EHSM Biu Core1 Cmd Param1 Register
 * This register contains parameter 1 associated with a EHSM primitive command from
 * host processor core 1.
 */
union ody_ehsm_biu_core1_cmd_param1 {
	uint32_t u;
	struct ody_ehsm_biu_core1_cmd_param1_s {
		uint32_t core1_cmd_param1            : 32;
	} s;
	/* struct ody_ehsm_biu_core1_cmd_param1_s cn; */
};
typedef union ody_ehsm_biu_core1_cmd_param1 ody_ehsm_biu_core1_cmd_param1_t;

#define ODY_EHSM_BIU_CORE1_CMD_PARAM1 ODY_EHSM_BIU_CORE1_CMD_PARAM1_FUNC()
static inline uint64_t ODY_EHSM_BIU_CORE1_CMD_PARAM1_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_EHSM_BIU_CORE1_CMD_PARAM1_FUNC(void)
{
	return 0x80b000000004ll;
}

#define typedef_ODY_EHSM_BIU_CORE1_CMD_PARAM1 ody_ehsm_biu_core1_cmd_param1_t
#define bustype_ODY_EHSM_BIU_CORE1_CMD_PARAM1 CSR_TYPE_NCB32b
#define basename_ODY_EHSM_BIU_CORE1_CMD_PARAM1 "EHSM_BIU_CORE1_CMD_PARAM1"
#define device_bar_ODY_EHSM_BIU_CORE1_CMD_PARAM1 0x0 /* PF_BAR0 */
#define busnum_ODY_EHSM_BIU_CORE1_CMD_PARAM1 0
#define arguments_ODY_EHSM_BIU_CORE1_CMD_PARAM1 -1, -1, -1, -1

/**
 * Register (NCB32b) ehsm_biu_core1_cmd_param10
 *
 * EHSM Biu Core1 Cmd Param10 Register
 * This register contains parameter 10 associated with a EHSM primitive command from
 * host processor core 1.
 */
union ody_ehsm_biu_core1_cmd_param10 {
	uint32_t u;
	struct ody_ehsm_biu_core1_cmd_param10_s {
		uint32_t core1_cmd_param10           : 32;
	} s;
	/* struct ody_ehsm_biu_core1_cmd_param10_s cn; */
};
typedef union ody_ehsm_biu_core1_cmd_param10 ody_ehsm_biu_core1_cmd_param10_t;

#define ODY_EHSM_BIU_CORE1_CMD_PARAM10 ODY_EHSM_BIU_CORE1_CMD_PARAM10_FUNC()
static inline uint64_t ODY_EHSM_BIU_CORE1_CMD_PARAM10_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_EHSM_BIU_CORE1_CMD_PARAM10_FUNC(void)
{
	return 0x80b000000028ll;
}

#define typedef_ODY_EHSM_BIU_CORE1_CMD_PARAM10 ody_ehsm_biu_core1_cmd_param10_t
#define bustype_ODY_EHSM_BIU_CORE1_CMD_PARAM10 CSR_TYPE_NCB32b
#define basename_ODY_EHSM_BIU_CORE1_CMD_PARAM10 "EHSM_BIU_CORE1_CMD_PARAM10"
#define device_bar_ODY_EHSM_BIU_CORE1_CMD_PARAM10 0x0 /* PF_BAR0 */
#define busnum_ODY_EHSM_BIU_CORE1_CMD_PARAM10 0
#define arguments_ODY_EHSM_BIU_CORE1_CMD_PARAM10 -1, -1, -1, -1

/**
 * Register (NCB32b) ehsm_biu_core1_cmd_param11
 *
 * EHSM Biu Core1 Cmd Param11 Register
 * This register contains parameter 11 associated with a EHSM primitive command from
 * host processor core 1.
 */
union ody_ehsm_biu_core1_cmd_param11 {
	uint32_t u;
	struct ody_ehsm_biu_core1_cmd_param11_s {
		uint32_t core1_cmd_param11           : 32;
	} s;
	/* struct ody_ehsm_biu_core1_cmd_param11_s cn; */
};
typedef union ody_ehsm_biu_core1_cmd_param11 ody_ehsm_biu_core1_cmd_param11_t;

#define ODY_EHSM_BIU_CORE1_CMD_PARAM11 ODY_EHSM_BIU_CORE1_CMD_PARAM11_FUNC()
static inline uint64_t ODY_EHSM_BIU_CORE1_CMD_PARAM11_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_EHSM_BIU_CORE1_CMD_PARAM11_FUNC(void)
{
	return 0x80b00000002cll;
}

#define typedef_ODY_EHSM_BIU_CORE1_CMD_PARAM11 ody_ehsm_biu_core1_cmd_param11_t
#define bustype_ODY_EHSM_BIU_CORE1_CMD_PARAM11 CSR_TYPE_NCB32b
#define basename_ODY_EHSM_BIU_CORE1_CMD_PARAM11 "EHSM_BIU_CORE1_CMD_PARAM11"
#define device_bar_ODY_EHSM_BIU_CORE1_CMD_PARAM11 0x0 /* PF_BAR0 */
#define busnum_ODY_EHSM_BIU_CORE1_CMD_PARAM11 0
#define arguments_ODY_EHSM_BIU_CORE1_CMD_PARAM11 -1, -1, -1, -1

/**
 * Register (NCB32b) ehsm_biu_core1_cmd_param12
 *
 * EHSM Biu Core1 Cmd Param12 Register
 * This register contains parameter 12 associated with a EHSM primitive command from
 * host processor core 1.
 */
union ody_ehsm_biu_core1_cmd_param12 {
	uint32_t u;
	struct ody_ehsm_biu_core1_cmd_param12_s {
		uint32_t core1_cmd_param12           : 32;
	} s;
	/* struct ody_ehsm_biu_core1_cmd_param12_s cn; */
};
typedef union ody_ehsm_biu_core1_cmd_param12 ody_ehsm_biu_core1_cmd_param12_t;

#define ODY_EHSM_BIU_CORE1_CMD_PARAM12 ODY_EHSM_BIU_CORE1_CMD_PARAM12_FUNC()
static inline uint64_t ODY_EHSM_BIU_CORE1_CMD_PARAM12_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_EHSM_BIU_CORE1_CMD_PARAM12_FUNC(void)
{
	return 0x80b000000030ll;
}

#define typedef_ODY_EHSM_BIU_CORE1_CMD_PARAM12 ody_ehsm_biu_core1_cmd_param12_t
#define bustype_ODY_EHSM_BIU_CORE1_CMD_PARAM12 CSR_TYPE_NCB32b
#define basename_ODY_EHSM_BIU_CORE1_CMD_PARAM12 "EHSM_BIU_CORE1_CMD_PARAM12"
#define device_bar_ODY_EHSM_BIU_CORE1_CMD_PARAM12 0x0 /* PF_BAR0 */
#define busnum_ODY_EHSM_BIU_CORE1_CMD_PARAM12 0
#define arguments_ODY_EHSM_BIU_CORE1_CMD_PARAM12 -1, -1, -1, -1

/**
 * Register (NCB32b) ehsm_biu_core1_cmd_param13
 *
 * EHSM Biu Core1 Cmd Param13 Register
 * This register contains parameter 13 associated with a EHSM primitive command from
 * host processor core 1.
 */
union ody_ehsm_biu_core1_cmd_param13 {
	uint32_t u;
	struct ody_ehsm_biu_core1_cmd_param13_s {
		uint32_t core1_cmd_param13           : 32;
	} s;
	/* struct ody_ehsm_biu_core1_cmd_param13_s cn; */
};
typedef union ody_ehsm_biu_core1_cmd_param13 ody_ehsm_biu_core1_cmd_param13_t;

#define ODY_EHSM_BIU_CORE1_CMD_PARAM13 ODY_EHSM_BIU_CORE1_CMD_PARAM13_FUNC()
static inline uint64_t ODY_EHSM_BIU_CORE1_CMD_PARAM13_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_EHSM_BIU_CORE1_CMD_PARAM13_FUNC(void)
{
	return 0x80b000000034ll;
}

#define typedef_ODY_EHSM_BIU_CORE1_CMD_PARAM13 ody_ehsm_biu_core1_cmd_param13_t
#define bustype_ODY_EHSM_BIU_CORE1_CMD_PARAM13 CSR_TYPE_NCB32b
#define basename_ODY_EHSM_BIU_CORE1_CMD_PARAM13 "EHSM_BIU_CORE1_CMD_PARAM13"
#define device_bar_ODY_EHSM_BIU_CORE1_CMD_PARAM13 0x0 /* PF_BAR0 */
#define busnum_ODY_EHSM_BIU_CORE1_CMD_PARAM13 0
#define arguments_ODY_EHSM_BIU_CORE1_CMD_PARAM13 -1, -1, -1, -1

/**
 * Register (NCB32b) ehsm_biu_core1_cmd_param14
 *
 * EHSM Biu Core1 Cmd Param14 Register
 * This register contains parameter 14 associated with a EHSM primitive command from
 * host processor core 1.
 */
union ody_ehsm_biu_core1_cmd_param14 {
	uint32_t u;
	struct ody_ehsm_biu_core1_cmd_param14_s {
		uint32_t core1_cmd_param14           : 32;
	} s;
	/* struct ody_ehsm_biu_core1_cmd_param14_s cn; */
};
typedef union ody_ehsm_biu_core1_cmd_param14 ody_ehsm_biu_core1_cmd_param14_t;

#define ODY_EHSM_BIU_CORE1_CMD_PARAM14 ODY_EHSM_BIU_CORE1_CMD_PARAM14_FUNC()
static inline uint64_t ODY_EHSM_BIU_CORE1_CMD_PARAM14_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_EHSM_BIU_CORE1_CMD_PARAM14_FUNC(void)
{
	return 0x80b000000038ll;
}

#define typedef_ODY_EHSM_BIU_CORE1_CMD_PARAM14 ody_ehsm_biu_core1_cmd_param14_t
#define bustype_ODY_EHSM_BIU_CORE1_CMD_PARAM14 CSR_TYPE_NCB32b
#define basename_ODY_EHSM_BIU_CORE1_CMD_PARAM14 "EHSM_BIU_CORE1_CMD_PARAM14"
#define device_bar_ODY_EHSM_BIU_CORE1_CMD_PARAM14 0x0 /* PF_BAR0 */
#define busnum_ODY_EHSM_BIU_CORE1_CMD_PARAM14 0
#define arguments_ODY_EHSM_BIU_CORE1_CMD_PARAM14 -1, -1, -1, -1

/**
 * Register (NCB32b) ehsm_biu_core1_cmd_param15
 *
 * EHSM Biu Core1 Cmd Param15 Register
 * This register contains parameter 15 associated with a EHSM primitive command from
 * host processor core 1.
 */
union ody_ehsm_biu_core1_cmd_param15 {
	uint32_t u;
	struct ody_ehsm_biu_core1_cmd_param15_s {
		uint32_t core1_cmd_param15           : 32;
	} s;
	/* struct ody_ehsm_biu_core1_cmd_param15_s cn; */
};
typedef union ody_ehsm_biu_core1_cmd_param15 ody_ehsm_biu_core1_cmd_param15_t;

#define ODY_EHSM_BIU_CORE1_CMD_PARAM15 ODY_EHSM_BIU_CORE1_CMD_PARAM15_FUNC()
static inline uint64_t ODY_EHSM_BIU_CORE1_CMD_PARAM15_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_EHSM_BIU_CORE1_CMD_PARAM15_FUNC(void)
{
	return 0x80b00000003cll;
}

#define typedef_ODY_EHSM_BIU_CORE1_CMD_PARAM15 ody_ehsm_biu_core1_cmd_param15_t
#define bustype_ODY_EHSM_BIU_CORE1_CMD_PARAM15 CSR_TYPE_NCB32b
#define basename_ODY_EHSM_BIU_CORE1_CMD_PARAM15 "EHSM_BIU_CORE1_CMD_PARAM15"
#define device_bar_ODY_EHSM_BIU_CORE1_CMD_PARAM15 0x0 /* PF_BAR0 */
#define busnum_ODY_EHSM_BIU_CORE1_CMD_PARAM15 0
#define arguments_ODY_EHSM_BIU_CORE1_CMD_PARAM15 -1, -1, -1, -1

/**
 * Register (NCB32b) ehsm_biu_core1_cmd_param2
 *
 * EHSM Biu Core1 Cmd Param2 Register
 * This register contains parameter 2 associated with a EHSM primitive command from
 * host processor core 1.
 */
union ody_ehsm_biu_core1_cmd_param2 {
	uint32_t u;
	struct ody_ehsm_biu_core1_cmd_param2_s {
		uint32_t core1_cmd_param2            : 32;
	} s;
	/* struct ody_ehsm_biu_core1_cmd_param2_s cn; */
};
typedef union ody_ehsm_biu_core1_cmd_param2 ody_ehsm_biu_core1_cmd_param2_t;

#define ODY_EHSM_BIU_CORE1_CMD_PARAM2 ODY_EHSM_BIU_CORE1_CMD_PARAM2_FUNC()
static inline uint64_t ODY_EHSM_BIU_CORE1_CMD_PARAM2_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_EHSM_BIU_CORE1_CMD_PARAM2_FUNC(void)
{
	return 0x80b000000008ll;
}

#define typedef_ODY_EHSM_BIU_CORE1_CMD_PARAM2 ody_ehsm_biu_core1_cmd_param2_t
#define bustype_ODY_EHSM_BIU_CORE1_CMD_PARAM2 CSR_TYPE_NCB32b
#define basename_ODY_EHSM_BIU_CORE1_CMD_PARAM2 "EHSM_BIU_CORE1_CMD_PARAM2"
#define device_bar_ODY_EHSM_BIU_CORE1_CMD_PARAM2 0x0 /* PF_BAR0 */
#define busnum_ODY_EHSM_BIU_CORE1_CMD_PARAM2 0
#define arguments_ODY_EHSM_BIU_CORE1_CMD_PARAM2 -1, -1, -1, -1

/**
 * Register (NCB32b) ehsm_biu_core1_cmd_param3
 *
 * EHSM Biu Core1 Cmd Param3 Register
 * This register contains parameter 3 associated with a EHSM primitive command from
 * host processor core 1.
 */
union ody_ehsm_biu_core1_cmd_param3 {
	uint32_t u;
	struct ody_ehsm_biu_core1_cmd_param3_s {
		uint32_t core1_cmd_param3            : 32;
	} s;
	/* struct ody_ehsm_biu_core1_cmd_param3_s cn; */
};
typedef union ody_ehsm_biu_core1_cmd_param3 ody_ehsm_biu_core1_cmd_param3_t;

#define ODY_EHSM_BIU_CORE1_CMD_PARAM3 ODY_EHSM_BIU_CORE1_CMD_PARAM3_FUNC()
static inline uint64_t ODY_EHSM_BIU_CORE1_CMD_PARAM3_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_EHSM_BIU_CORE1_CMD_PARAM3_FUNC(void)
{
	return 0x80b00000000cll;
}

#define typedef_ODY_EHSM_BIU_CORE1_CMD_PARAM3 ody_ehsm_biu_core1_cmd_param3_t
#define bustype_ODY_EHSM_BIU_CORE1_CMD_PARAM3 CSR_TYPE_NCB32b
#define basename_ODY_EHSM_BIU_CORE1_CMD_PARAM3 "EHSM_BIU_CORE1_CMD_PARAM3"
#define device_bar_ODY_EHSM_BIU_CORE1_CMD_PARAM3 0x0 /* PF_BAR0 */
#define busnum_ODY_EHSM_BIU_CORE1_CMD_PARAM3 0
#define arguments_ODY_EHSM_BIU_CORE1_CMD_PARAM3 -1, -1, -1, -1

/**
 * Register (NCB32b) ehsm_biu_core1_cmd_param4
 *
 * EHSM Biu Core1 Cmd Param4 Register
 * This register contains parameter 4 associated with a EHSM primitive command from
 * host processor core 1.
 */
union ody_ehsm_biu_core1_cmd_param4 {
	uint32_t u;
	struct ody_ehsm_biu_core1_cmd_param4_s {
		uint32_t core1_cmd_param4            : 32;
	} s;
	/* struct ody_ehsm_biu_core1_cmd_param4_s cn; */
};
typedef union ody_ehsm_biu_core1_cmd_param4 ody_ehsm_biu_core1_cmd_param4_t;

#define ODY_EHSM_BIU_CORE1_CMD_PARAM4 ODY_EHSM_BIU_CORE1_CMD_PARAM4_FUNC()
static inline uint64_t ODY_EHSM_BIU_CORE1_CMD_PARAM4_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_EHSM_BIU_CORE1_CMD_PARAM4_FUNC(void)
{
	return 0x80b000000010ll;
}

#define typedef_ODY_EHSM_BIU_CORE1_CMD_PARAM4 ody_ehsm_biu_core1_cmd_param4_t
#define bustype_ODY_EHSM_BIU_CORE1_CMD_PARAM4 CSR_TYPE_NCB32b
#define basename_ODY_EHSM_BIU_CORE1_CMD_PARAM4 "EHSM_BIU_CORE1_CMD_PARAM4"
#define device_bar_ODY_EHSM_BIU_CORE1_CMD_PARAM4 0x0 /* PF_BAR0 */
#define busnum_ODY_EHSM_BIU_CORE1_CMD_PARAM4 0
#define arguments_ODY_EHSM_BIU_CORE1_CMD_PARAM4 -1, -1, -1, -1

/**
 * Register (NCB32b) ehsm_biu_core1_cmd_param5
 *
 * EHSM Biu Core1 Cmd Param5 Register
 * This register contains parameter 5 associated with a EHSM primitive command from
 * host processor core 1.
 */
union ody_ehsm_biu_core1_cmd_param5 {
	uint32_t u;
	struct ody_ehsm_biu_core1_cmd_param5_s {
		uint32_t core1_cmd_param5            : 32;
	} s;
	/* struct ody_ehsm_biu_core1_cmd_param5_s cn; */
};
typedef union ody_ehsm_biu_core1_cmd_param5 ody_ehsm_biu_core1_cmd_param5_t;

#define ODY_EHSM_BIU_CORE1_CMD_PARAM5 ODY_EHSM_BIU_CORE1_CMD_PARAM5_FUNC()
static inline uint64_t ODY_EHSM_BIU_CORE1_CMD_PARAM5_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_EHSM_BIU_CORE1_CMD_PARAM5_FUNC(void)
{
	return 0x80b000000014ll;
}

#define typedef_ODY_EHSM_BIU_CORE1_CMD_PARAM5 ody_ehsm_biu_core1_cmd_param5_t
#define bustype_ODY_EHSM_BIU_CORE1_CMD_PARAM5 CSR_TYPE_NCB32b
#define basename_ODY_EHSM_BIU_CORE1_CMD_PARAM5 "EHSM_BIU_CORE1_CMD_PARAM5"
#define device_bar_ODY_EHSM_BIU_CORE1_CMD_PARAM5 0x0 /* PF_BAR0 */
#define busnum_ODY_EHSM_BIU_CORE1_CMD_PARAM5 0
#define arguments_ODY_EHSM_BIU_CORE1_CMD_PARAM5 -1, -1, -1, -1

/**
 * Register (NCB32b) ehsm_biu_core1_cmd_param6
 *
 * EHSM Biu Core1 Cmd Param6 Register
 * This register contains parameter 6 associated with a EHSM primitive command from
 * host processor core 1.
 */
union ody_ehsm_biu_core1_cmd_param6 {
	uint32_t u;
	struct ody_ehsm_biu_core1_cmd_param6_s {
		uint32_t core1_cmd_param6            : 32;
	} s;
	/* struct ody_ehsm_biu_core1_cmd_param6_s cn; */
};
typedef union ody_ehsm_biu_core1_cmd_param6 ody_ehsm_biu_core1_cmd_param6_t;

#define ODY_EHSM_BIU_CORE1_CMD_PARAM6 ODY_EHSM_BIU_CORE1_CMD_PARAM6_FUNC()
static inline uint64_t ODY_EHSM_BIU_CORE1_CMD_PARAM6_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_EHSM_BIU_CORE1_CMD_PARAM6_FUNC(void)
{
	return 0x80b000000018ll;
}

#define typedef_ODY_EHSM_BIU_CORE1_CMD_PARAM6 ody_ehsm_biu_core1_cmd_param6_t
#define bustype_ODY_EHSM_BIU_CORE1_CMD_PARAM6 CSR_TYPE_NCB32b
#define basename_ODY_EHSM_BIU_CORE1_CMD_PARAM6 "EHSM_BIU_CORE1_CMD_PARAM6"
#define device_bar_ODY_EHSM_BIU_CORE1_CMD_PARAM6 0x0 /* PF_BAR0 */
#define busnum_ODY_EHSM_BIU_CORE1_CMD_PARAM6 0
#define arguments_ODY_EHSM_BIU_CORE1_CMD_PARAM6 -1, -1, -1, -1

/**
 * Register (NCB32b) ehsm_biu_core1_cmd_param7
 *
 * EHSM Biu Core1 Cmd Param7 Register
 * This register contains parameter 7 associated with a EHSM primitive command from
 * host processor core 1.
 */
union ody_ehsm_biu_core1_cmd_param7 {
	uint32_t u;
	struct ody_ehsm_biu_core1_cmd_param7_s {
		uint32_t core1_cmd_param7            : 32;
	} s;
	/* struct ody_ehsm_biu_core1_cmd_param7_s cn; */
};
typedef union ody_ehsm_biu_core1_cmd_param7 ody_ehsm_biu_core1_cmd_param7_t;

#define ODY_EHSM_BIU_CORE1_CMD_PARAM7 ODY_EHSM_BIU_CORE1_CMD_PARAM7_FUNC()
static inline uint64_t ODY_EHSM_BIU_CORE1_CMD_PARAM7_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_EHSM_BIU_CORE1_CMD_PARAM7_FUNC(void)
{
	return 0x80b00000001cll;
}

#define typedef_ODY_EHSM_BIU_CORE1_CMD_PARAM7 ody_ehsm_biu_core1_cmd_param7_t
#define bustype_ODY_EHSM_BIU_CORE1_CMD_PARAM7 CSR_TYPE_NCB32b
#define basename_ODY_EHSM_BIU_CORE1_CMD_PARAM7 "EHSM_BIU_CORE1_CMD_PARAM7"
#define device_bar_ODY_EHSM_BIU_CORE1_CMD_PARAM7 0x0 /* PF_BAR0 */
#define busnum_ODY_EHSM_BIU_CORE1_CMD_PARAM7 0
#define arguments_ODY_EHSM_BIU_CORE1_CMD_PARAM7 -1, -1, -1, -1

/**
 * Register (NCB32b) ehsm_biu_core1_cmd_param8
 *
 * EHSM Biu Core1 Cmd Param8 Register
 * This register contains parameter 8 associated with a EHSM primitive command from
 * host processor core 1.
 */
union ody_ehsm_biu_core1_cmd_param8 {
	uint32_t u;
	struct ody_ehsm_biu_core1_cmd_param8_s {
		uint32_t core1_cmd_param8            : 32;
	} s;
	/* struct ody_ehsm_biu_core1_cmd_param8_s cn; */
};
typedef union ody_ehsm_biu_core1_cmd_param8 ody_ehsm_biu_core1_cmd_param8_t;

#define ODY_EHSM_BIU_CORE1_CMD_PARAM8 ODY_EHSM_BIU_CORE1_CMD_PARAM8_FUNC()
static inline uint64_t ODY_EHSM_BIU_CORE1_CMD_PARAM8_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_EHSM_BIU_CORE1_CMD_PARAM8_FUNC(void)
{
	return 0x80b000000020ll;
}

#define typedef_ODY_EHSM_BIU_CORE1_CMD_PARAM8 ody_ehsm_biu_core1_cmd_param8_t
#define bustype_ODY_EHSM_BIU_CORE1_CMD_PARAM8 CSR_TYPE_NCB32b
#define basename_ODY_EHSM_BIU_CORE1_CMD_PARAM8 "EHSM_BIU_CORE1_CMD_PARAM8"
#define device_bar_ODY_EHSM_BIU_CORE1_CMD_PARAM8 0x0 /* PF_BAR0 */
#define busnum_ODY_EHSM_BIU_CORE1_CMD_PARAM8 0
#define arguments_ODY_EHSM_BIU_CORE1_CMD_PARAM8 -1, -1, -1, -1

/**
 * Register (NCB32b) ehsm_biu_core1_cmd_param9
 *
 * EHSM Biu Core1 Cmd Param9 Register
 * This register contains parameter 9 associated with a EHSM primitive command from
 * host processor core 1.
 */
union ody_ehsm_biu_core1_cmd_param9 {
	uint32_t u;
	struct ody_ehsm_biu_core1_cmd_param9_s {
		uint32_t core1_cmd_param9            : 32;
	} s;
	/* struct ody_ehsm_biu_core1_cmd_param9_s cn; */
};
typedef union ody_ehsm_biu_core1_cmd_param9 ody_ehsm_biu_core1_cmd_param9_t;

#define ODY_EHSM_BIU_CORE1_CMD_PARAM9 ODY_EHSM_BIU_CORE1_CMD_PARAM9_FUNC()
static inline uint64_t ODY_EHSM_BIU_CORE1_CMD_PARAM9_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_EHSM_BIU_CORE1_CMD_PARAM9_FUNC(void)
{
	return 0x80b000000024ll;
}

#define typedef_ODY_EHSM_BIU_CORE1_CMD_PARAM9 ody_ehsm_biu_core1_cmd_param9_t
#define bustype_ODY_EHSM_BIU_CORE1_CMD_PARAM9 CSR_TYPE_NCB32b
#define basename_ODY_EHSM_BIU_CORE1_CMD_PARAM9 "EHSM_BIU_CORE1_CMD_PARAM9"
#define device_bar_ODY_EHSM_BIU_CORE1_CMD_PARAM9 0x0 /* PF_BAR0 */
#define busnum_ODY_EHSM_BIU_CORE1_CMD_PARAM9 0
#define arguments_ODY_EHSM_BIU_CORE1_CMD_PARAM9 -1, -1, -1, -1

/**
 * Register (NCB32b) ehsm_biu_core1_cmd_ret_status
 *
 * EHSM Biu Core1 Cmd Ret Status Register
 * This register contains return status associated with a EHSM primitive command from
 * host processor core 1.
 * If it is 0, it indicates command execution success. If it is non 0, it indicates
 * command execution failure and the value is the error code.
 */
union ody_ehsm_biu_core1_cmd_ret_status {
	uint32_t u;
	struct ody_ehsm_biu_core1_cmd_ret_status_s {
		uint32_t core1_cmd_ret_status        : 32;
	} s;
	/* struct ody_ehsm_biu_core1_cmd_ret_status_s cn; */
};
typedef union ody_ehsm_biu_core1_cmd_ret_status ody_ehsm_biu_core1_cmd_ret_status_t;

#define ODY_EHSM_BIU_CORE1_CMD_RET_STATUS ODY_EHSM_BIU_CORE1_CMD_RET_STATUS_FUNC()
static inline uint64_t ODY_EHSM_BIU_CORE1_CMD_RET_STATUS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_EHSM_BIU_CORE1_CMD_RET_STATUS_FUNC(void)
{
	return 0x80b000000080ll;
}

#define typedef_ODY_EHSM_BIU_CORE1_CMD_RET_STATUS ody_ehsm_biu_core1_cmd_ret_status_t
#define bustype_ODY_EHSM_BIU_CORE1_CMD_RET_STATUS CSR_TYPE_NCB32b
#define basename_ODY_EHSM_BIU_CORE1_CMD_RET_STATUS "EHSM_BIU_CORE1_CMD_RET_STATUS"
#define device_bar_ODY_EHSM_BIU_CORE1_CMD_RET_STATUS 0x0 /* PF_BAR0 */
#define busnum_ODY_EHSM_BIU_CORE1_CMD_RET_STATUS 0
#define arguments_ODY_EHSM_BIU_CORE1_CMD_RET_STATUS -1, -1, -1, -1

/**
 * Register (NCB32b) ehsm_biu_core1_cmd_status0
 *
 * EHSM Biu Core1 Cmd Status0 Register
 * This register contains status 0 associated with a EHSM primitive command from host
 * processor core 1.
 */
union ody_ehsm_biu_core1_cmd_status0 {
	uint32_t u;
	struct ody_ehsm_biu_core1_cmd_status0_s {
		uint32_t core1_cmd_status0           : 32;
	} s;
	/* struct ody_ehsm_biu_core1_cmd_status0_s cn; */
};
typedef union ody_ehsm_biu_core1_cmd_status0 ody_ehsm_biu_core1_cmd_status0_t;

#define ODY_EHSM_BIU_CORE1_CMD_STATUS0 ODY_EHSM_BIU_CORE1_CMD_STATUS0_FUNC()
static inline uint64_t ODY_EHSM_BIU_CORE1_CMD_STATUS0_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_EHSM_BIU_CORE1_CMD_STATUS0_FUNC(void)
{
	return 0x80b000000084ll;
}

#define typedef_ODY_EHSM_BIU_CORE1_CMD_STATUS0 ody_ehsm_biu_core1_cmd_status0_t
#define bustype_ODY_EHSM_BIU_CORE1_CMD_STATUS0 CSR_TYPE_NCB32b
#define basename_ODY_EHSM_BIU_CORE1_CMD_STATUS0 "EHSM_BIU_CORE1_CMD_STATUS0"
#define device_bar_ODY_EHSM_BIU_CORE1_CMD_STATUS0 0x0 /* PF_BAR0 */
#define busnum_ODY_EHSM_BIU_CORE1_CMD_STATUS0 0
#define arguments_ODY_EHSM_BIU_CORE1_CMD_STATUS0 -1, -1, -1, -1

/**
 * Register (NCB32b) ehsm_biu_core1_cmd_status1
 *
 * EHSM Biu Core1 Cmd Status1 Register
 * This register contains status 1 associated with a EHSM primitive command from host
 * processor core 1.
 */
union ody_ehsm_biu_core1_cmd_status1 {
	uint32_t u;
	struct ody_ehsm_biu_core1_cmd_status1_s {
		uint32_t core1_cmd_status1           : 32;
	} s;
	/* struct ody_ehsm_biu_core1_cmd_status1_s cn; */
};
typedef union ody_ehsm_biu_core1_cmd_status1 ody_ehsm_biu_core1_cmd_status1_t;

#define ODY_EHSM_BIU_CORE1_CMD_STATUS1 ODY_EHSM_BIU_CORE1_CMD_STATUS1_FUNC()
static inline uint64_t ODY_EHSM_BIU_CORE1_CMD_STATUS1_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_EHSM_BIU_CORE1_CMD_STATUS1_FUNC(void)
{
	return 0x80b000000088ll;
}

#define typedef_ODY_EHSM_BIU_CORE1_CMD_STATUS1 ody_ehsm_biu_core1_cmd_status1_t
#define bustype_ODY_EHSM_BIU_CORE1_CMD_STATUS1 CSR_TYPE_NCB32b
#define basename_ODY_EHSM_BIU_CORE1_CMD_STATUS1 "EHSM_BIU_CORE1_CMD_STATUS1"
#define device_bar_ODY_EHSM_BIU_CORE1_CMD_STATUS1 0x0 /* PF_BAR0 */
#define busnum_ODY_EHSM_BIU_CORE1_CMD_STATUS1 0
#define arguments_ODY_EHSM_BIU_CORE1_CMD_STATUS1 -1, -1, -1, -1

/**
 * Register (NCB32b) ehsm_biu_core1_cmd_status10
 *
 * EHSM Biu Core1 Cmd Status10 Register
 * This register contains status 10 associated with a EHSM primitive command from host
 * processor core 1.
 */
union ody_ehsm_biu_core1_cmd_status10 {
	uint32_t u;
	struct ody_ehsm_biu_core1_cmd_status10_s {
		uint32_t core1_cmd_status10          : 32;
	} s;
	/* struct ody_ehsm_biu_core1_cmd_status10_s cn; */
};
typedef union ody_ehsm_biu_core1_cmd_status10 ody_ehsm_biu_core1_cmd_status10_t;

#define ODY_EHSM_BIU_CORE1_CMD_STATUS10 ODY_EHSM_BIU_CORE1_CMD_STATUS10_FUNC()
static inline uint64_t ODY_EHSM_BIU_CORE1_CMD_STATUS10_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_EHSM_BIU_CORE1_CMD_STATUS10_FUNC(void)
{
	return 0x80b0000000acll;
}

#define typedef_ODY_EHSM_BIU_CORE1_CMD_STATUS10 ody_ehsm_biu_core1_cmd_status10_t
#define bustype_ODY_EHSM_BIU_CORE1_CMD_STATUS10 CSR_TYPE_NCB32b
#define basename_ODY_EHSM_BIU_CORE1_CMD_STATUS10 "EHSM_BIU_CORE1_CMD_STATUS10"
#define device_bar_ODY_EHSM_BIU_CORE1_CMD_STATUS10 0x0 /* PF_BAR0 */
#define busnum_ODY_EHSM_BIU_CORE1_CMD_STATUS10 0
#define arguments_ODY_EHSM_BIU_CORE1_CMD_STATUS10 -1, -1, -1, -1

/**
 * Register (NCB32b) ehsm_biu_core1_cmd_status11
 *
 * EHSM Biu Core1 Cmd Status11 Register
 * This register contains status 11 associated with a EHSM primitive command from host
 * processor core 1.
 */
union ody_ehsm_biu_core1_cmd_status11 {
	uint32_t u;
	struct ody_ehsm_biu_core1_cmd_status11_s {
		uint32_t core1_cmd_status11          : 32;
	} s;
	/* struct ody_ehsm_biu_core1_cmd_status11_s cn; */
};
typedef union ody_ehsm_biu_core1_cmd_status11 ody_ehsm_biu_core1_cmd_status11_t;

#define ODY_EHSM_BIU_CORE1_CMD_STATUS11 ODY_EHSM_BIU_CORE1_CMD_STATUS11_FUNC()
static inline uint64_t ODY_EHSM_BIU_CORE1_CMD_STATUS11_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_EHSM_BIU_CORE1_CMD_STATUS11_FUNC(void)
{
	return 0x80b0000000b0ll;
}

#define typedef_ODY_EHSM_BIU_CORE1_CMD_STATUS11 ody_ehsm_biu_core1_cmd_status11_t
#define bustype_ODY_EHSM_BIU_CORE1_CMD_STATUS11 CSR_TYPE_NCB32b
#define basename_ODY_EHSM_BIU_CORE1_CMD_STATUS11 "EHSM_BIU_CORE1_CMD_STATUS11"
#define device_bar_ODY_EHSM_BIU_CORE1_CMD_STATUS11 0x0 /* PF_BAR0 */
#define busnum_ODY_EHSM_BIU_CORE1_CMD_STATUS11 0
#define arguments_ODY_EHSM_BIU_CORE1_CMD_STATUS11 -1, -1, -1, -1

/**
 * Register (NCB32b) ehsm_biu_core1_cmd_status12
 *
 * EHSM Biu Core1 Cmd Status12 Register
 * This register contains status 12 associated with a EHSM primitive command from host
 * processor core 1.
 */
union ody_ehsm_biu_core1_cmd_status12 {
	uint32_t u;
	struct ody_ehsm_biu_core1_cmd_status12_s {
		uint32_t core1_cmd_status12          : 32;
	} s;
	/* struct ody_ehsm_biu_core1_cmd_status12_s cn; */
};
typedef union ody_ehsm_biu_core1_cmd_status12 ody_ehsm_biu_core1_cmd_status12_t;

#define ODY_EHSM_BIU_CORE1_CMD_STATUS12 ODY_EHSM_BIU_CORE1_CMD_STATUS12_FUNC()
static inline uint64_t ODY_EHSM_BIU_CORE1_CMD_STATUS12_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_EHSM_BIU_CORE1_CMD_STATUS12_FUNC(void)
{
	return 0x80b0000000b4ll;
}

#define typedef_ODY_EHSM_BIU_CORE1_CMD_STATUS12 ody_ehsm_biu_core1_cmd_status12_t
#define bustype_ODY_EHSM_BIU_CORE1_CMD_STATUS12 CSR_TYPE_NCB32b
#define basename_ODY_EHSM_BIU_CORE1_CMD_STATUS12 "EHSM_BIU_CORE1_CMD_STATUS12"
#define device_bar_ODY_EHSM_BIU_CORE1_CMD_STATUS12 0x0 /* PF_BAR0 */
#define busnum_ODY_EHSM_BIU_CORE1_CMD_STATUS12 0
#define arguments_ODY_EHSM_BIU_CORE1_CMD_STATUS12 -1, -1, -1, -1

/**
 * Register (NCB32b) ehsm_biu_core1_cmd_status13
 *
 * EHSM Biu Core1 Cmd Status13 Register
 * This register contains status 13 associated with a EHSM primitive command from host
 * processor core 1.
 */
union ody_ehsm_biu_core1_cmd_status13 {
	uint32_t u;
	struct ody_ehsm_biu_core1_cmd_status13_s {
		uint32_t core1_cmd_status13          : 32;
	} s;
	/* struct ody_ehsm_biu_core1_cmd_status13_s cn; */
};
typedef union ody_ehsm_biu_core1_cmd_status13 ody_ehsm_biu_core1_cmd_status13_t;

#define ODY_EHSM_BIU_CORE1_CMD_STATUS13 ODY_EHSM_BIU_CORE1_CMD_STATUS13_FUNC()
static inline uint64_t ODY_EHSM_BIU_CORE1_CMD_STATUS13_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_EHSM_BIU_CORE1_CMD_STATUS13_FUNC(void)
{
	return 0x80b0000000b8ll;
}

#define typedef_ODY_EHSM_BIU_CORE1_CMD_STATUS13 ody_ehsm_biu_core1_cmd_status13_t
#define bustype_ODY_EHSM_BIU_CORE1_CMD_STATUS13 CSR_TYPE_NCB32b
#define basename_ODY_EHSM_BIU_CORE1_CMD_STATUS13 "EHSM_BIU_CORE1_CMD_STATUS13"
#define device_bar_ODY_EHSM_BIU_CORE1_CMD_STATUS13 0x0 /* PF_BAR0 */
#define busnum_ODY_EHSM_BIU_CORE1_CMD_STATUS13 0
#define arguments_ODY_EHSM_BIU_CORE1_CMD_STATUS13 -1, -1, -1, -1

/**
 * Register (NCB32b) ehsm_biu_core1_cmd_status14
 *
 * EHSM Biu Core1 Cmd Status14 Register
 * This register contains status 14 associated with a EHSM primitive command from host
 * processor core 1.
 */
union ody_ehsm_biu_core1_cmd_status14 {
	uint32_t u;
	struct ody_ehsm_biu_core1_cmd_status14_s {
		uint32_t core1_cmd_status14          : 32;
	} s;
	/* struct ody_ehsm_biu_core1_cmd_status14_s cn; */
};
typedef union ody_ehsm_biu_core1_cmd_status14 ody_ehsm_biu_core1_cmd_status14_t;

#define ODY_EHSM_BIU_CORE1_CMD_STATUS14 ODY_EHSM_BIU_CORE1_CMD_STATUS14_FUNC()
static inline uint64_t ODY_EHSM_BIU_CORE1_CMD_STATUS14_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_EHSM_BIU_CORE1_CMD_STATUS14_FUNC(void)
{
	return 0x80b0000000bcll;
}

#define typedef_ODY_EHSM_BIU_CORE1_CMD_STATUS14 ody_ehsm_biu_core1_cmd_status14_t
#define bustype_ODY_EHSM_BIU_CORE1_CMD_STATUS14 CSR_TYPE_NCB32b
#define basename_ODY_EHSM_BIU_CORE1_CMD_STATUS14 "EHSM_BIU_CORE1_CMD_STATUS14"
#define device_bar_ODY_EHSM_BIU_CORE1_CMD_STATUS14 0x0 /* PF_BAR0 */
#define busnum_ODY_EHSM_BIU_CORE1_CMD_STATUS14 0
#define arguments_ODY_EHSM_BIU_CORE1_CMD_STATUS14 -1, -1, -1, -1

/**
 * Register (NCB32b) ehsm_biu_core1_cmd_status15
 *
 * EHSM Biu Core1 Cmd Status15 Register
 * This register contains status 15 associated with a EHSM primitive command from host
 * processor core 1.
 */
union ody_ehsm_biu_core1_cmd_status15 {
	uint32_t u;
	struct ody_ehsm_biu_core1_cmd_status15_s {
		uint32_t core1_cmd_status15          : 32;
	} s;
	/* struct ody_ehsm_biu_core1_cmd_status15_s cn; */
};
typedef union ody_ehsm_biu_core1_cmd_status15 ody_ehsm_biu_core1_cmd_status15_t;

#define ODY_EHSM_BIU_CORE1_CMD_STATUS15 ODY_EHSM_BIU_CORE1_CMD_STATUS15_FUNC()
static inline uint64_t ODY_EHSM_BIU_CORE1_CMD_STATUS15_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_EHSM_BIU_CORE1_CMD_STATUS15_FUNC(void)
{
	return 0x80b0000000c0ll;
}

#define typedef_ODY_EHSM_BIU_CORE1_CMD_STATUS15 ody_ehsm_biu_core1_cmd_status15_t
#define bustype_ODY_EHSM_BIU_CORE1_CMD_STATUS15 CSR_TYPE_NCB32b
#define basename_ODY_EHSM_BIU_CORE1_CMD_STATUS15 "EHSM_BIU_CORE1_CMD_STATUS15"
#define device_bar_ODY_EHSM_BIU_CORE1_CMD_STATUS15 0x0 /* PF_BAR0 */
#define busnum_ODY_EHSM_BIU_CORE1_CMD_STATUS15 0
#define arguments_ODY_EHSM_BIU_CORE1_CMD_STATUS15 -1, -1, -1, -1

/**
 * Register (NCB32b) ehsm_biu_core1_cmd_status2
 *
 * EHSM Biu Core1 Cmd Status2 Register
 * This register contains status 2 associated with a EHSM primitive command from host
 * processor core 1.
 */
union ody_ehsm_biu_core1_cmd_status2 {
	uint32_t u;
	struct ody_ehsm_biu_core1_cmd_status2_s {
		uint32_t core1_cmd_status2           : 32;
	} s;
	/* struct ody_ehsm_biu_core1_cmd_status2_s cn; */
};
typedef union ody_ehsm_biu_core1_cmd_status2 ody_ehsm_biu_core1_cmd_status2_t;

#define ODY_EHSM_BIU_CORE1_CMD_STATUS2 ODY_EHSM_BIU_CORE1_CMD_STATUS2_FUNC()
static inline uint64_t ODY_EHSM_BIU_CORE1_CMD_STATUS2_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_EHSM_BIU_CORE1_CMD_STATUS2_FUNC(void)
{
	return 0x80b00000008cll;
}

#define typedef_ODY_EHSM_BIU_CORE1_CMD_STATUS2 ody_ehsm_biu_core1_cmd_status2_t
#define bustype_ODY_EHSM_BIU_CORE1_CMD_STATUS2 CSR_TYPE_NCB32b
#define basename_ODY_EHSM_BIU_CORE1_CMD_STATUS2 "EHSM_BIU_CORE1_CMD_STATUS2"
#define device_bar_ODY_EHSM_BIU_CORE1_CMD_STATUS2 0x0 /* PF_BAR0 */
#define busnum_ODY_EHSM_BIU_CORE1_CMD_STATUS2 0
#define arguments_ODY_EHSM_BIU_CORE1_CMD_STATUS2 -1, -1, -1, -1

/**
 * Register (NCB32b) ehsm_biu_core1_cmd_status3
 *
 * EHSM Biu Core1 Cmd Status3 Register
 * This register contains status 3 associated with a EHSM primitive command from host
 * processor core 1.
 */
union ody_ehsm_biu_core1_cmd_status3 {
	uint32_t u;
	struct ody_ehsm_biu_core1_cmd_status3_s {
		uint32_t core1_cmd_status3           : 32;
	} s;
	/* struct ody_ehsm_biu_core1_cmd_status3_s cn; */
};
typedef union ody_ehsm_biu_core1_cmd_status3 ody_ehsm_biu_core1_cmd_status3_t;

#define ODY_EHSM_BIU_CORE1_CMD_STATUS3 ODY_EHSM_BIU_CORE1_CMD_STATUS3_FUNC()
static inline uint64_t ODY_EHSM_BIU_CORE1_CMD_STATUS3_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_EHSM_BIU_CORE1_CMD_STATUS3_FUNC(void)
{
	return 0x80b000000090ll;
}

#define typedef_ODY_EHSM_BIU_CORE1_CMD_STATUS3 ody_ehsm_biu_core1_cmd_status3_t
#define bustype_ODY_EHSM_BIU_CORE1_CMD_STATUS3 CSR_TYPE_NCB32b
#define basename_ODY_EHSM_BIU_CORE1_CMD_STATUS3 "EHSM_BIU_CORE1_CMD_STATUS3"
#define device_bar_ODY_EHSM_BIU_CORE1_CMD_STATUS3 0x0 /* PF_BAR0 */
#define busnum_ODY_EHSM_BIU_CORE1_CMD_STATUS3 0
#define arguments_ODY_EHSM_BIU_CORE1_CMD_STATUS3 -1, -1, -1, -1

/**
 * Register (NCB32b) ehsm_biu_core1_cmd_status4
 *
 * EHSM Biu Core1 Cmd Status4 Register
 * This register contains status 4 associated with a EHSM primitive command from host
 * processor core 1.
 */
union ody_ehsm_biu_core1_cmd_status4 {
	uint32_t u;
	struct ody_ehsm_biu_core1_cmd_status4_s {
		uint32_t core1_cmd_status4           : 32;
	} s;
	/* struct ody_ehsm_biu_core1_cmd_status4_s cn; */
};
typedef union ody_ehsm_biu_core1_cmd_status4 ody_ehsm_biu_core1_cmd_status4_t;

#define ODY_EHSM_BIU_CORE1_CMD_STATUS4 ODY_EHSM_BIU_CORE1_CMD_STATUS4_FUNC()
static inline uint64_t ODY_EHSM_BIU_CORE1_CMD_STATUS4_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_EHSM_BIU_CORE1_CMD_STATUS4_FUNC(void)
{
	return 0x80b000000094ll;
}

#define typedef_ODY_EHSM_BIU_CORE1_CMD_STATUS4 ody_ehsm_biu_core1_cmd_status4_t
#define bustype_ODY_EHSM_BIU_CORE1_CMD_STATUS4 CSR_TYPE_NCB32b
#define basename_ODY_EHSM_BIU_CORE1_CMD_STATUS4 "EHSM_BIU_CORE1_CMD_STATUS4"
#define device_bar_ODY_EHSM_BIU_CORE1_CMD_STATUS4 0x0 /* PF_BAR0 */
#define busnum_ODY_EHSM_BIU_CORE1_CMD_STATUS4 0
#define arguments_ODY_EHSM_BIU_CORE1_CMD_STATUS4 -1, -1, -1, -1

/**
 * Register (NCB32b) ehsm_biu_core1_cmd_status5
 *
 * EHSM Biu Core1 Cmd Status5 Register
 * This register contains status 5 associated with a EHSM primitive command from host
 * processor core 1.
 */
union ody_ehsm_biu_core1_cmd_status5 {
	uint32_t u;
	struct ody_ehsm_biu_core1_cmd_status5_s {
		uint32_t core1_cmd_status5           : 32;
	} s;
	/* struct ody_ehsm_biu_core1_cmd_status5_s cn; */
};
typedef union ody_ehsm_biu_core1_cmd_status5 ody_ehsm_biu_core1_cmd_status5_t;

#define ODY_EHSM_BIU_CORE1_CMD_STATUS5 ODY_EHSM_BIU_CORE1_CMD_STATUS5_FUNC()
static inline uint64_t ODY_EHSM_BIU_CORE1_CMD_STATUS5_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_EHSM_BIU_CORE1_CMD_STATUS5_FUNC(void)
{
	return 0x80b000000098ll;
}

#define typedef_ODY_EHSM_BIU_CORE1_CMD_STATUS5 ody_ehsm_biu_core1_cmd_status5_t
#define bustype_ODY_EHSM_BIU_CORE1_CMD_STATUS5 CSR_TYPE_NCB32b
#define basename_ODY_EHSM_BIU_CORE1_CMD_STATUS5 "EHSM_BIU_CORE1_CMD_STATUS5"
#define device_bar_ODY_EHSM_BIU_CORE1_CMD_STATUS5 0x0 /* PF_BAR0 */
#define busnum_ODY_EHSM_BIU_CORE1_CMD_STATUS5 0
#define arguments_ODY_EHSM_BIU_CORE1_CMD_STATUS5 -1, -1, -1, -1

/**
 * Register (NCB32b) ehsm_biu_core1_cmd_status6
 *
 * EHSM Biu Core1 Cmd Status6 Register
 * This register contains status 6 associated with a EHSM primitive command from host
 * processor core 1.
 */
union ody_ehsm_biu_core1_cmd_status6 {
	uint32_t u;
	struct ody_ehsm_biu_core1_cmd_status6_s {
		uint32_t core1_cmd_status6           : 32;
	} s;
	/* struct ody_ehsm_biu_core1_cmd_status6_s cn; */
};
typedef union ody_ehsm_biu_core1_cmd_status6 ody_ehsm_biu_core1_cmd_status6_t;

#define ODY_EHSM_BIU_CORE1_CMD_STATUS6 ODY_EHSM_BIU_CORE1_CMD_STATUS6_FUNC()
static inline uint64_t ODY_EHSM_BIU_CORE1_CMD_STATUS6_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_EHSM_BIU_CORE1_CMD_STATUS6_FUNC(void)
{
	return 0x80b00000009cll;
}

#define typedef_ODY_EHSM_BIU_CORE1_CMD_STATUS6 ody_ehsm_biu_core1_cmd_status6_t
#define bustype_ODY_EHSM_BIU_CORE1_CMD_STATUS6 CSR_TYPE_NCB32b
#define basename_ODY_EHSM_BIU_CORE1_CMD_STATUS6 "EHSM_BIU_CORE1_CMD_STATUS6"
#define device_bar_ODY_EHSM_BIU_CORE1_CMD_STATUS6 0x0 /* PF_BAR0 */
#define busnum_ODY_EHSM_BIU_CORE1_CMD_STATUS6 0
#define arguments_ODY_EHSM_BIU_CORE1_CMD_STATUS6 -1, -1, -1, -1

/**
 * Register (NCB32b) ehsm_biu_core1_cmd_status7
 *
 * EHSM Biu Core1 Cmd Status7 Register
 * This register contains status 7 associated with a EHSM primitive command from host
 * processor core 1.
 */
union ody_ehsm_biu_core1_cmd_status7 {
	uint32_t u;
	struct ody_ehsm_biu_core1_cmd_status7_s {
		uint32_t core1_cmd_status7           : 32;
	} s;
	/* struct ody_ehsm_biu_core1_cmd_status7_s cn; */
};
typedef union ody_ehsm_biu_core1_cmd_status7 ody_ehsm_biu_core1_cmd_status7_t;

#define ODY_EHSM_BIU_CORE1_CMD_STATUS7 ODY_EHSM_BIU_CORE1_CMD_STATUS7_FUNC()
static inline uint64_t ODY_EHSM_BIU_CORE1_CMD_STATUS7_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_EHSM_BIU_CORE1_CMD_STATUS7_FUNC(void)
{
	return 0x80b0000000a0ll;
}

#define typedef_ODY_EHSM_BIU_CORE1_CMD_STATUS7 ody_ehsm_biu_core1_cmd_status7_t
#define bustype_ODY_EHSM_BIU_CORE1_CMD_STATUS7 CSR_TYPE_NCB32b
#define basename_ODY_EHSM_BIU_CORE1_CMD_STATUS7 "EHSM_BIU_CORE1_CMD_STATUS7"
#define device_bar_ODY_EHSM_BIU_CORE1_CMD_STATUS7 0x0 /* PF_BAR0 */
#define busnum_ODY_EHSM_BIU_CORE1_CMD_STATUS7 0
#define arguments_ODY_EHSM_BIU_CORE1_CMD_STATUS7 -1, -1, -1, -1

/**
 * Register (NCB32b) ehsm_biu_core1_cmd_status8
 *
 * EHSM Biu Core1 Cmd Status8 Register
 * This register contains status 8 associated with a EHSM primitive command from host
 * processor core 1.
 */
union ody_ehsm_biu_core1_cmd_status8 {
	uint32_t u;
	struct ody_ehsm_biu_core1_cmd_status8_s {
		uint32_t core1_cmd_status8           : 32;
	} s;
	/* struct ody_ehsm_biu_core1_cmd_status8_s cn; */
};
typedef union ody_ehsm_biu_core1_cmd_status8 ody_ehsm_biu_core1_cmd_status8_t;

#define ODY_EHSM_BIU_CORE1_CMD_STATUS8 ODY_EHSM_BIU_CORE1_CMD_STATUS8_FUNC()
static inline uint64_t ODY_EHSM_BIU_CORE1_CMD_STATUS8_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_EHSM_BIU_CORE1_CMD_STATUS8_FUNC(void)
{
	return 0x80b0000000a4ll;
}

#define typedef_ODY_EHSM_BIU_CORE1_CMD_STATUS8 ody_ehsm_biu_core1_cmd_status8_t
#define bustype_ODY_EHSM_BIU_CORE1_CMD_STATUS8 CSR_TYPE_NCB32b
#define basename_ODY_EHSM_BIU_CORE1_CMD_STATUS8 "EHSM_BIU_CORE1_CMD_STATUS8"
#define device_bar_ODY_EHSM_BIU_CORE1_CMD_STATUS8 0x0 /* PF_BAR0 */
#define busnum_ODY_EHSM_BIU_CORE1_CMD_STATUS8 0
#define arguments_ODY_EHSM_BIU_CORE1_CMD_STATUS8 -1, -1, -1, -1

/**
 * Register (NCB32b) ehsm_biu_core1_cmd_status9
 *
 * EHSM Biu Core1 Cmd Status9 Register
 * This register contains status 9 associated with a EHSM primitive command from host
 * processor core 1.
 */
union ody_ehsm_biu_core1_cmd_status9 {
	uint32_t u;
	struct ody_ehsm_biu_core1_cmd_status9_s {
		uint32_t core1_cmd_status9           : 32;
	} s;
	/* struct ody_ehsm_biu_core1_cmd_status9_s cn; */
};
typedef union ody_ehsm_biu_core1_cmd_status9 ody_ehsm_biu_core1_cmd_status9_t;

#define ODY_EHSM_BIU_CORE1_CMD_STATUS9 ODY_EHSM_BIU_CORE1_CMD_STATUS9_FUNC()
static inline uint64_t ODY_EHSM_BIU_CORE1_CMD_STATUS9_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_EHSM_BIU_CORE1_CMD_STATUS9_FUNC(void)
{
	return 0x80b0000000a8ll;
}

#define typedef_ODY_EHSM_BIU_CORE1_CMD_STATUS9 ody_ehsm_biu_core1_cmd_status9_t
#define bustype_ODY_EHSM_BIU_CORE1_CMD_STATUS9 CSR_TYPE_NCB32b
#define basename_ODY_EHSM_BIU_CORE1_CMD_STATUS9 "EHSM_BIU_CORE1_CMD_STATUS9"
#define device_bar_ODY_EHSM_BIU_CORE1_CMD_STATUS9 0x0 /* PF_BAR0 */
#define busnum_ODY_EHSM_BIU_CORE1_CMD_STATUS9 0
#define arguments_ODY_EHSM_BIU_CORE1_CMD_STATUS9 -1, -1, -1, -1

/**
 * Register (NCB32b) ehsm_biu_core1_hst_interrupt_mask
 *
 * EHSM Biu Core1 Hst Interrupt Mask Register
 * This is host interrupt masking register for host processor core 1
 */
union ody_ehsm_biu_core1_hst_interrupt_mask {
	uint32_t u;
	struct ody_ehsm_biu_core1_hst_interrupt_mask_s {
		uint32_t core1_hst_interrupt_mask    : 32;
	} s;
	/* struct ody_ehsm_biu_core1_hst_interrupt_mask_s cn; */
};
typedef union ody_ehsm_biu_core1_hst_interrupt_mask ody_ehsm_biu_core1_hst_interrupt_mask_t;

#define ODY_EHSM_BIU_CORE1_HST_INTERRUPT_MASK ODY_EHSM_BIU_CORE1_HST_INTERRUPT_MASK_FUNC()
static inline uint64_t ODY_EHSM_BIU_CORE1_HST_INTERRUPT_MASK_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_EHSM_BIU_CORE1_HST_INTERRUPT_MASK_FUNC(void)
{
	return 0x80b0000000ccll;
}

#define typedef_ODY_EHSM_BIU_CORE1_HST_INTERRUPT_MASK ody_ehsm_biu_core1_hst_interrupt_mask_t
#define bustype_ODY_EHSM_BIU_CORE1_HST_INTERRUPT_MASK CSR_TYPE_NCB32b
#define basename_ODY_EHSM_BIU_CORE1_HST_INTERRUPT_MASK "EHSM_BIU_CORE1_HST_INTERRUPT_MASK"
#define device_bar_ODY_EHSM_BIU_CORE1_HST_INTERRUPT_MASK 0x0 /* PF_BAR0 */
#define busnum_ODY_EHSM_BIU_CORE1_HST_INTERRUPT_MASK 0
#define arguments_ODY_EHSM_BIU_CORE1_HST_INTERRUPT_MASK -1, -1, -1, -1

/**
 * Register (NCB32b) ehsm_biu_core1_hst_interrupt_rst
 *
 * EHSM Biu Core1 Hst Interrupt Rst Register
 * This is host interrupt register for host processor core 1
 */
union ody_ehsm_biu_core1_hst_interrupt_rst {
	uint32_t u;
	struct ody_ehsm_biu_core1_hst_interrupt_rst_s {
		uint32_t irom_exe_int                : 1;
		uint32_t ehsm_mem_fail               : 1;
		uint32_t sysrdyp_timeout             : 1;
		uint32_t reserved_3_15               : 13;
		uint32_t hst_addr_range              : 1;
		uint32_t cmd_buffer_full_access      : 1;
		uint32_t reserved_18_31              : 14;
	} s;
	/* struct ody_ehsm_biu_core1_hst_interrupt_rst_s cn; */
};
typedef union ody_ehsm_biu_core1_hst_interrupt_rst ody_ehsm_biu_core1_hst_interrupt_rst_t;

#define ODY_EHSM_BIU_CORE1_HST_INTERRUPT_RST ODY_EHSM_BIU_CORE1_HST_INTERRUPT_RST_FUNC()
static inline uint64_t ODY_EHSM_BIU_CORE1_HST_INTERRUPT_RST_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_EHSM_BIU_CORE1_HST_INTERRUPT_RST_FUNC(void)
{
	return 0x80b0000000c8ll;
}

#define typedef_ODY_EHSM_BIU_CORE1_HST_INTERRUPT_RST ody_ehsm_biu_core1_hst_interrupt_rst_t
#define bustype_ODY_EHSM_BIU_CORE1_HST_INTERRUPT_RST CSR_TYPE_NCB32b
#define basename_ODY_EHSM_BIU_CORE1_HST_INTERRUPT_RST "EHSM_BIU_CORE1_HST_INTERRUPT_RST"
#define device_bar_ODY_EHSM_BIU_CORE1_HST_INTERRUPT_RST 0x0 /* PF_BAR0 */
#define busnum_ODY_EHSM_BIU_CORE1_HST_INTERRUPT_RST 0
#define arguments_ODY_EHSM_BIU_CORE1_HST_INTERRUPT_RST -1, -1, -1, -1

/**
 * Register (NCB32b) ehsm_biu_core2_cmd
 *
 * EHSM Biu Core2 Cmd Register
 */
union ody_ehsm_biu_core2_cmd {
	uint32_t u;
	struct ody_ehsm_biu_core2_cmd_s {
		uint32_t cmd                         : 16;
		uint32_t reserved_16_31              : 16;
	} s;
	/* struct ody_ehsm_biu_core2_cmd_s cn; */
};
typedef union ody_ehsm_biu_core2_cmd ody_ehsm_biu_core2_cmd_t;

#define ODY_EHSM_BIU_CORE2_CMD ODY_EHSM_BIU_CORE2_CMD_FUNC()
static inline uint64_t ODY_EHSM_BIU_CORE2_CMD_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_EHSM_BIU_CORE2_CMD_FUNC(void)
{
	return 0x80b000000180ll;
}

#define typedef_ODY_EHSM_BIU_CORE2_CMD ody_ehsm_biu_core2_cmd_t
#define bustype_ODY_EHSM_BIU_CORE2_CMD CSR_TYPE_NCB32b
#define basename_ODY_EHSM_BIU_CORE2_CMD "EHSM_BIU_CORE2_CMD"
#define device_bar_ODY_EHSM_BIU_CORE2_CMD 0x0 /* PF_BAR0 */
#define busnum_ODY_EHSM_BIU_CORE2_CMD 0
#define arguments_ODY_EHSM_BIU_CORE2_CMD -1, -1, -1, -1

/**
 * Register (NCB32b) ehsm_biu_core2_cmd_param0
 *
 * EHSM Biu Core2 Cmd Param0 Register
 * This register contains parameter 0 associated with a EHSM primitive command from
 * host processor core 2. There are a total of 16 spaces for primitive command
 * parameters. When the host processor core 2 wants to send a primitive command to
 * EHSM, it must first write all the associated parameters (if any). Once all the
 * parameters associated with a primitive command have been written, the host processor
 * core 2 can write the associated primitive command to the CORE2_CMD register. Host
 * does not need to write the unused parameters.
 */
union ody_ehsm_biu_core2_cmd_param0 {
	uint32_t u;
	struct ody_ehsm_biu_core2_cmd_param0_s {
		uint32_t core2_cmd_param0            : 32;
	} s;
	/* struct ody_ehsm_biu_core2_cmd_param0_s cn; */
};
typedef union ody_ehsm_biu_core2_cmd_param0 ody_ehsm_biu_core2_cmd_param0_t;

#define ODY_EHSM_BIU_CORE2_CMD_PARAM0 ODY_EHSM_BIU_CORE2_CMD_PARAM0_FUNC()
static inline uint64_t ODY_EHSM_BIU_CORE2_CMD_PARAM0_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_EHSM_BIU_CORE2_CMD_PARAM0_FUNC(void)
{
	return 0x80b000000140ll;
}

#define typedef_ODY_EHSM_BIU_CORE2_CMD_PARAM0 ody_ehsm_biu_core2_cmd_param0_t
#define bustype_ODY_EHSM_BIU_CORE2_CMD_PARAM0 CSR_TYPE_NCB32b
#define basename_ODY_EHSM_BIU_CORE2_CMD_PARAM0 "EHSM_BIU_CORE2_CMD_PARAM0"
#define device_bar_ODY_EHSM_BIU_CORE2_CMD_PARAM0 0x0 /* PF_BAR0 */
#define busnum_ODY_EHSM_BIU_CORE2_CMD_PARAM0 0
#define arguments_ODY_EHSM_BIU_CORE2_CMD_PARAM0 -1, -1, -1, -1

/**
 * Register (NCB32b) ehsm_biu_core2_cmd_param1
 *
 * EHSM Biu Core2 Cmd Param1 Register
 * This register contains parameter 1 associated with a EHSM primitive command from
 * host processor core 2.
 */
union ody_ehsm_biu_core2_cmd_param1 {
	uint32_t u;
	struct ody_ehsm_biu_core2_cmd_param1_s {
		uint32_t core2_cmd_param1            : 32;
	} s;
	/* struct ody_ehsm_biu_core2_cmd_param1_s cn; */
};
typedef union ody_ehsm_biu_core2_cmd_param1 ody_ehsm_biu_core2_cmd_param1_t;

#define ODY_EHSM_BIU_CORE2_CMD_PARAM1 ODY_EHSM_BIU_CORE2_CMD_PARAM1_FUNC()
static inline uint64_t ODY_EHSM_BIU_CORE2_CMD_PARAM1_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_EHSM_BIU_CORE2_CMD_PARAM1_FUNC(void)
{
	return 0x80b000000144ll;
}

#define typedef_ODY_EHSM_BIU_CORE2_CMD_PARAM1 ody_ehsm_biu_core2_cmd_param1_t
#define bustype_ODY_EHSM_BIU_CORE2_CMD_PARAM1 CSR_TYPE_NCB32b
#define basename_ODY_EHSM_BIU_CORE2_CMD_PARAM1 "EHSM_BIU_CORE2_CMD_PARAM1"
#define device_bar_ODY_EHSM_BIU_CORE2_CMD_PARAM1 0x0 /* PF_BAR0 */
#define busnum_ODY_EHSM_BIU_CORE2_CMD_PARAM1 0
#define arguments_ODY_EHSM_BIU_CORE2_CMD_PARAM1 -1, -1, -1, -1

/**
 * Register (NCB32b) ehsm_biu_core2_cmd_param10
 *
 * EHSM Biu Core2 Cmd Param10 Register
 * This register contains parameter 10 associated with a EHSM primitive command from
 * host processor core 2.
 */
union ody_ehsm_biu_core2_cmd_param10 {
	uint32_t u;
	struct ody_ehsm_biu_core2_cmd_param10_s {
		uint32_t core2_cmd_param10           : 32;
	} s;
	/* struct ody_ehsm_biu_core2_cmd_param10_s cn; */
};
typedef union ody_ehsm_biu_core2_cmd_param10 ody_ehsm_biu_core2_cmd_param10_t;

#define ODY_EHSM_BIU_CORE2_CMD_PARAM10 ODY_EHSM_BIU_CORE2_CMD_PARAM10_FUNC()
static inline uint64_t ODY_EHSM_BIU_CORE2_CMD_PARAM10_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_EHSM_BIU_CORE2_CMD_PARAM10_FUNC(void)
{
	return 0x80b000000168ll;
}

#define typedef_ODY_EHSM_BIU_CORE2_CMD_PARAM10 ody_ehsm_biu_core2_cmd_param10_t
#define bustype_ODY_EHSM_BIU_CORE2_CMD_PARAM10 CSR_TYPE_NCB32b
#define basename_ODY_EHSM_BIU_CORE2_CMD_PARAM10 "EHSM_BIU_CORE2_CMD_PARAM10"
#define device_bar_ODY_EHSM_BIU_CORE2_CMD_PARAM10 0x0 /* PF_BAR0 */
#define busnum_ODY_EHSM_BIU_CORE2_CMD_PARAM10 0
#define arguments_ODY_EHSM_BIU_CORE2_CMD_PARAM10 -1, -1, -1, -1

/**
 * Register (NCB32b) ehsm_biu_core2_cmd_param11
 *
 * EHSM Biu Core2 Cmd Param11 Register
 * This register contains parameter 11 associated with a EHSM primitive command from
 * host processor core 2.
 */
union ody_ehsm_biu_core2_cmd_param11 {
	uint32_t u;
	struct ody_ehsm_biu_core2_cmd_param11_s {
		uint32_t core2_cmd_param11           : 32;
	} s;
	/* struct ody_ehsm_biu_core2_cmd_param11_s cn; */
};
typedef union ody_ehsm_biu_core2_cmd_param11 ody_ehsm_biu_core2_cmd_param11_t;

#define ODY_EHSM_BIU_CORE2_CMD_PARAM11 ODY_EHSM_BIU_CORE2_CMD_PARAM11_FUNC()
static inline uint64_t ODY_EHSM_BIU_CORE2_CMD_PARAM11_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_EHSM_BIU_CORE2_CMD_PARAM11_FUNC(void)
{
	return 0x80b00000016cll;
}

#define typedef_ODY_EHSM_BIU_CORE2_CMD_PARAM11 ody_ehsm_biu_core2_cmd_param11_t
#define bustype_ODY_EHSM_BIU_CORE2_CMD_PARAM11 CSR_TYPE_NCB32b
#define basename_ODY_EHSM_BIU_CORE2_CMD_PARAM11 "EHSM_BIU_CORE2_CMD_PARAM11"
#define device_bar_ODY_EHSM_BIU_CORE2_CMD_PARAM11 0x0 /* PF_BAR0 */
#define busnum_ODY_EHSM_BIU_CORE2_CMD_PARAM11 0
#define arguments_ODY_EHSM_BIU_CORE2_CMD_PARAM11 -1, -1, -1, -1

/**
 * Register (NCB32b) ehsm_biu_core2_cmd_param12
 *
 * EHSM Biu Core2 Cmd Param12 Register
 * This register contains parameter 12 associated with a EHSM primitive command from
 * host processor core 2.
 */
union ody_ehsm_biu_core2_cmd_param12 {
	uint32_t u;
	struct ody_ehsm_biu_core2_cmd_param12_s {
		uint32_t core2_cmd_param12           : 32;
	} s;
	/* struct ody_ehsm_biu_core2_cmd_param12_s cn; */
};
typedef union ody_ehsm_biu_core2_cmd_param12 ody_ehsm_biu_core2_cmd_param12_t;

#define ODY_EHSM_BIU_CORE2_CMD_PARAM12 ODY_EHSM_BIU_CORE2_CMD_PARAM12_FUNC()
static inline uint64_t ODY_EHSM_BIU_CORE2_CMD_PARAM12_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_EHSM_BIU_CORE2_CMD_PARAM12_FUNC(void)
{
	return 0x80b000000170ll;
}

#define typedef_ODY_EHSM_BIU_CORE2_CMD_PARAM12 ody_ehsm_biu_core2_cmd_param12_t
#define bustype_ODY_EHSM_BIU_CORE2_CMD_PARAM12 CSR_TYPE_NCB32b
#define basename_ODY_EHSM_BIU_CORE2_CMD_PARAM12 "EHSM_BIU_CORE2_CMD_PARAM12"
#define device_bar_ODY_EHSM_BIU_CORE2_CMD_PARAM12 0x0 /* PF_BAR0 */
#define busnum_ODY_EHSM_BIU_CORE2_CMD_PARAM12 0
#define arguments_ODY_EHSM_BIU_CORE2_CMD_PARAM12 -1, -1, -1, -1

/**
 * Register (NCB32b) ehsm_biu_core2_cmd_param13
 *
 * EHSM Biu Core2 Cmd Param13 Register
 * This register contains parameter 13 associated with a EHSM primitive command from
 * host processor core 2.
 */
union ody_ehsm_biu_core2_cmd_param13 {
	uint32_t u;
	struct ody_ehsm_biu_core2_cmd_param13_s {
		uint32_t core2_cmd_param13           : 32;
	} s;
	/* struct ody_ehsm_biu_core2_cmd_param13_s cn; */
};
typedef union ody_ehsm_biu_core2_cmd_param13 ody_ehsm_biu_core2_cmd_param13_t;

#define ODY_EHSM_BIU_CORE2_CMD_PARAM13 ODY_EHSM_BIU_CORE2_CMD_PARAM13_FUNC()
static inline uint64_t ODY_EHSM_BIU_CORE2_CMD_PARAM13_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_EHSM_BIU_CORE2_CMD_PARAM13_FUNC(void)
{
	return 0x80b000000174ll;
}

#define typedef_ODY_EHSM_BIU_CORE2_CMD_PARAM13 ody_ehsm_biu_core2_cmd_param13_t
#define bustype_ODY_EHSM_BIU_CORE2_CMD_PARAM13 CSR_TYPE_NCB32b
#define basename_ODY_EHSM_BIU_CORE2_CMD_PARAM13 "EHSM_BIU_CORE2_CMD_PARAM13"
#define device_bar_ODY_EHSM_BIU_CORE2_CMD_PARAM13 0x0 /* PF_BAR0 */
#define busnum_ODY_EHSM_BIU_CORE2_CMD_PARAM13 0
#define arguments_ODY_EHSM_BIU_CORE2_CMD_PARAM13 -1, -1, -1, -1

/**
 * Register (NCB32b) ehsm_biu_core2_cmd_param14
 *
 * EHSM Biu Core2 Cmd Param14 Register
 * This register contains parameter 14 associated with a EHSM primitive command from
 * host processor core 2.
 */
union ody_ehsm_biu_core2_cmd_param14 {
	uint32_t u;
	struct ody_ehsm_biu_core2_cmd_param14_s {
		uint32_t core2_cmd_param14           : 32;
	} s;
	/* struct ody_ehsm_biu_core2_cmd_param14_s cn; */
};
typedef union ody_ehsm_biu_core2_cmd_param14 ody_ehsm_biu_core2_cmd_param14_t;

#define ODY_EHSM_BIU_CORE2_CMD_PARAM14 ODY_EHSM_BIU_CORE2_CMD_PARAM14_FUNC()
static inline uint64_t ODY_EHSM_BIU_CORE2_CMD_PARAM14_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_EHSM_BIU_CORE2_CMD_PARAM14_FUNC(void)
{
	return 0x80b000000178ll;
}

#define typedef_ODY_EHSM_BIU_CORE2_CMD_PARAM14 ody_ehsm_biu_core2_cmd_param14_t
#define bustype_ODY_EHSM_BIU_CORE2_CMD_PARAM14 CSR_TYPE_NCB32b
#define basename_ODY_EHSM_BIU_CORE2_CMD_PARAM14 "EHSM_BIU_CORE2_CMD_PARAM14"
#define device_bar_ODY_EHSM_BIU_CORE2_CMD_PARAM14 0x0 /* PF_BAR0 */
#define busnum_ODY_EHSM_BIU_CORE2_CMD_PARAM14 0
#define arguments_ODY_EHSM_BIU_CORE2_CMD_PARAM14 -1, -1, -1, -1

/**
 * Register (NCB32b) ehsm_biu_core2_cmd_param15
 *
 * EHSM Biu Core2 Cmd Param15 Register
 * This register contains parameter 15 associated with a EHSM primitive command from
 * host processor core 2.
 */
union ody_ehsm_biu_core2_cmd_param15 {
	uint32_t u;
	struct ody_ehsm_biu_core2_cmd_param15_s {
		uint32_t core2_cmd_param15           : 32;
	} s;
	/* struct ody_ehsm_biu_core2_cmd_param15_s cn; */
};
typedef union ody_ehsm_biu_core2_cmd_param15 ody_ehsm_biu_core2_cmd_param15_t;

#define ODY_EHSM_BIU_CORE2_CMD_PARAM15 ODY_EHSM_BIU_CORE2_CMD_PARAM15_FUNC()
static inline uint64_t ODY_EHSM_BIU_CORE2_CMD_PARAM15_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_EHSM_BIU_CORE2_CMD_PARAM15_FUNC(void)
{
	return 0x80b00000017cll;
}

#define typedef_ODY_EHSM_BIU_CORE2_CMD_PARAM15 ody_ehsm_biu_core2_cmd_param15_t
#define bustype_ODY_EHSM_BIU_CORE2_CMD_PARAM15 CSR_TYPE_NCB32b
#define basename_ODY_EHSM_BIU_CORE2_CMD_PARAM15 "EHSM_BIU_CORE2_CMD_PARAM15"
#define device_bar_ODY_EHSM_BIU_CORE2_CMD_PARAM15 0x0 /* PF_BAR0 */
#define busnum_ODY_EHSM_BIU_CORE2_CMD_PARAM15 0
#define arguments_ODY_EHSM_BIU_CORE2_CMD_PARAM15 -1, -1, -1, -1

/**
 * Register (NCB32b) ehsm_biu_core2_cmd_param2
 *
 * EHSM Biu Core2 Cmd Param2 Register
 * This register contains parameter 2 associated with a EHSM primitive command from
 * host processor core 2.
 */
union ody_ehsm_biu_core2_cmd_param2 {
	uint32_t u;
	struct ody_ehsm_biu_core2_cmd_param2_s {
		uint32_t core2_cmd_param2            : 32;
	} s;
	/* struct ody_ehsm_biu_core2_cmd_param2_s cn; */
};
typedef union ody_ehsm_biu_core2_cmd_param2 ody_ehsm_biu_core2_cmd_param2_t;

#define ODY_EHSM_BIU_CORE2_CMD_PARAM2 ODY_EHSM_BIU_CORE2_CMD_PARAM2_FUNC()
static inline uint64_t ODY_EHSM_BIU_CORE2_CMD_PARAM2_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_EHSM_BIU_CORE2_CMD_PARAM2_FUNC(void)
{
	return 0x80b000000148ll;
}

#define typedef_ODY_EHSM_BIU_CORE2_CMD_PARAM2 ody_ehsm_biu_core2_cmd_param2_t
#define bustype_ODY_EHSM_BIU_CORE2_CMD_PARAM2 CSR_TYPE_NCB32b
#define basename_ODY_EHSM_BIU_CORE2_CMD_PARAM2 "EHSM_BIU_CORE2_CMD_PARAM2"
#define device_bar_ODY_EHSM_BIU_CORE2_CMD_PARAM2 0x0 /* PF_BAR0 */
#define busnum_ODY_EHSM_BIU_CORE2_CMD_PARAM2 0
#define arguments_ODY_EHSM_BIU_CORE2_CMD_PARAM2 -1, -1, -1, -1

/**
 * Register (NCB32b) ehsm_biu_core2_cmd_param3
 *
 * EHSM Biu Core2 Cmd Param3 Register
 * This register contains parameter 3 associated with a EHSM primitive command from
 * host processor core 2.
 */
union ody_ehsm_biu_core2_cmd_param3 {
	uint32_t u;
	struct ody_ehsm_biu_core2_cmd_param3_s {
		uint32_t core2_cmd_param3            : 32;
	} s;
	/* struct ody_ehsm_biu_core2_cmd_param3_s cn; */
};
typedef union ody_ehsm_biu_core2_cmd_param3 ody_ehsm_biu_core2_cmd_param3_t;

#define ODY_EHSM_BIU_CORE2_CMD_PARAM3 ODY_EHSM_BIU_CORE2_CMD_PARAM3_FUNC()
static inline uint64_t ODY_EHSM_BIU_CORE2_CMD_PARAM3_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_EHSM_BIU_CORE2_CMD_PARAM3_FUNC(void)
{
	return 0x80b00000014cll;
}

#define typedef_ODY_EHSM_BIU_CORE2_CMD_PARAM3 ody_ehsm_biu_core2_cmd_param3_t
#define bustype_ODY_EHSM_BIU_CORE2_CMD_PARAM3 CSR_TYPE_NCB32b
#define basename_ODY_EHSM_BIU_CORE2_CMD_PARAM3 "EHSM_BIU_CORE2_CMD_PARAM3"
#define device_bar_ODY_EHSM_BIU_CORE2_CMD_PARAM3 0x0 /* PF_BAR0 */
#define busnum_ODY_EHSM_BIU_CORE2_CMD_PARAM3 0
#define arguments_ODY_EHSM_BIU_CORE2_CMD_PARAM3 -1, -1, -1, -1

/**
 * Register (NCB32b) ehsm_biu_core2_cmd_param4
 *
 * EHSM Biu Core2 Cmd Param4 Register
 * This register contains parameter 4 associated with a EHSM primitive command from
 * host processor core 2.
 */
union ody_ehsm_biu_core2_cmd_param4 {
	uint32_t u;
	struct ody_ehsm_biu_core2_cmd_param4_s {
		uint32_t core2_cmd_param4            : 32;
	} s;
	/* struct ody_ehsm_biu_core2_cmd_param4_s cn; */
};
typedef union ody_ehsm_biu_core2_cmd_param4 ody_ehsm_biu_core2_cmd_param4_t;

#define ODY_EHSM_BIU_CORE2_CMD_PARAM4 ODY_EHSM_BIU_CORE2_CMD_PARAM4_FUNC()
static inline uint64_t ODY_EHSM_BIU_CORE2_CMD_PARAM4_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_EHSM_BIU_CORE2_CMD_PARAM4_FUNC(void)
{
	return 0x80b000000150ll;
}

#define typedef_ODY_EHSM_BIU_CORE2_CMD_PARAM4 ody_ehsm_biu_core2_cmd_param4_t
#define bustype_ODY_EHSM_BIU_CORE2_CMD_PARAM4 CSR_TYPE_NCB32b
#define basename_ODY_EHSM_BIU_CORE2_CMD_PARAM4 "EHSM_BIU_CORE2_CMD_PARAM4"
#define device_bar_ODY_EHSM_BIU_CORE2_CMD_PARAM4 0x0 /* PF_BAR0 */
#define busnum_ODY_EHSM_BIU_CORE2_CMD_PARAM4 0
#define arguments_ODY_EHSM_BIU_CORE2_CMD_PARAM4 -1, -1, -1, -1

/**
 * Register (NCB32b) ehsm_biu_core2_cmd_param5
 *
 * EHSM Biu Core2 Cmd Param5 Register
 * This register contains parameter 5 associated with a EHSM primitive command from
 * host processor core 2.
 */
union ody_ehsm_biu_core2_cmd_param5 {
	uint32_t u;
	struct ody_ehsm_biu_core2_cmd_param5_s {
		uint32_t core2_cmd_param5            : 32;
	} s;
	/* struct ody_ehsm_biu_core2_cmd_param5_s cn; */
};
typedef union ody_ehsm_biu_core2_cmd_param5 ody_ehsm_biu_core2_cmd_param5_t;

#define ODY_EHSM_BIU_CORE2_CMD_PARAM5 ODY_EHSM_BIU_CORE2_CMD_PARAM5_FUNC()
static inline uint64_t ODY_EHSM_BIU_CORE2_CMD_PARAM5_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_EHSM_BIU_CORE2_CMD_PARAM5_FUNC(void)
{
	return 0x80b000000154ll;
}

#define typedef_ODY_EHSM_BIU_CORE2_CMD_PARAM5 ody_ehsm_biu_core2_cmd_param5_t
#define bustype_ODY_EHSM_BIU_CORE2_CMD_PARAM5 CSR_TYPE_NCB32b
#define basename_ODY_EHSM_BIU_CORE2_CMD_PARAM5 "EHSM_BIU_CORE2_CMD_PARAM5"
#define device_bar_ODY_EHSM_BIU_CORE2_CMD_PARAM5 0x0 /* PF_BAR0 */
#define busnum_ODY_EHSM_BIU_CORE2_CMD_PARAM5 0
#define arguments_ODY_EHSM_BIU_CORE2_CMD_PARAM5 -1, -1, -1, -1

/**
 * Register (NCB32b) ehsm_biu_core2_cmd_param6
 *
 * EHSM Biu Core2 Cmd Param6 Register
 * This register contains parameter 6 associated with a EHSM primitive command from
 * host processor core 2.
 */
union ody_ehsm_biu_core2_cmd_param6 {
	uint32_t u;
	struct ody_ehsm_biu_core2_cmd_param6_s {
		uint32_t core2_cmd_param6            : 32;
	} s;
	/* struct ody_ehsm_biu_core2_cmd_param6_s cn; */
};
typedef union ody_ehsm_biu_core2_cmd_param6 ody_ehsm_biu_core2_cmd_param6_t;

#define ODY_EHSM_BIU_CORE2_CMD_PARAM6 ODY_EHSM_BIU_CORE2_CMD_PARAM6_FUNC()
static inline uint64_t ODY_EHSM_BIU_CORE2_CMD_PARAM6_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_EHSM_BIU_CORE2_CMD_PARAM6_FUNC(void)
{
	return 0x80b000000158ll;
}

#define typedef_ODY_EHSM_BIU_CORE2_CMD_PARAM6 ody_ehsm_biu_core2_cmd_param6_t
#define bustype_ODY_EHSM_BIU_CORE2_CMD_PARAM6 CSR_TYPE_NCB32b
#define basename_ODY_EHSM_BIU_CORE2_CMD_PARAM6 "EHSM_BIU_CORE2_CMD_PARAM6"
#define device_bar_ODY_EHSM_BIU_CORE2_CMD_PARAM6 0x0 /* PF_BAR0 */
#define busnum_ODY_EHSM_BIU_CORE2_CMD_PARAM6 0
#define arguments_ODY_EHSM_BIU_CORE2_CMD_PARAM6 -1, -1, -1, -1

/**
 * Register (NCB32b) ehsm_biu_core2_cmd_param7
 *
 * EHSM Biu Core2 Cmd Param7 Register
 * This register contains parameter 7 associated with a EHSM primitive command from
 * host processor core 2.
 */
union ody_ehsm_biu_core2_cmd_param7 {
	uint32_t u;
	struct ody_ehsm_biu_core2_cmd_param7_s {
		uint32_t core2_cmd_param7            : 32;
	} s;
	/* struct ody_ehsm_biu_core2_cmd_param7_s cn; */
};
typedef union ody_ehsm_biu_core2_cmd_param7 ody_ehsm_biu_core2_cmd_param7_t;

#define ODY_EHSM_BIU_CORE2_CMD_PARAM7 ODY_EHSM_BIU_CORE2_CMD_PARAM7_FUNC()
static inline uint64_t ODY_EHSM_BIU_CORE2_CMD_PARAM7_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_EHSM_BIU_CORE2_CMD_PARAM7_FUNC(void)
{
	return 0x80b00000015cll;
}

#define typedef_ODY_EHSM_BIU_CORE2_CMD_PARAM7 ody_ehsm_biu_core2_cmd_param7_t
#define bustype_ODY_EHSM_BIU_CORE2_CMD_PARAM7 CSR_TYPE_NCB32b
#define basename_ODY_EHSM_BIU_CORE2_CMD_PARAM7 "EHSM_BIU_CORE2_CMD_PARAM7"
#define device_bar_ODY_EHSM_BIU_CORE2_CMD_PARAM7 0x0 /* PF_BAR0 */
#define busnum_ODY_EHSM_BIU_CORE2_CMD_PARAM7 0
#define arguments_ODY_EHSM_BIU_CORE2_CMD_PARAM7 -1, -1, -1, -1

/**
 * Register (NCB32b) ehsm_biu_core2_cmd_param8
 *
 * EHSM Biu Core2 Cmd Param8 Register
 * This register contains parameter 8 associated with a EHSM primitive command from
 * host processor core 2.
 */
union ody_ehsm_biu_core2_cmd_param8 {
	uint32_t u;
	struct ody_ehsm_biu_core2_cmd_param8_s {
		uint32_t core2_cmd_param8            : 32;
	} s;
	/* struct ody_ehsm_biu_core2_cmd_param8_s cn; */
};
typedef union ody_ehsm_biu_core2_cmd_param8 ody_ehsm_biu_core2_cmd_param8_t;

#define ODY_EHSM_BIU_CORE2_CMD_PARAM8 ODY_EHSM_BIU_CORE2_CMD_PARAM8_FUNC()
static inline uint64_t ODY_EHSM_BIU_CORE2_CMD_PARAM8_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_EHSM_BIU_CORE2_CMD_PARAM8_FUNC(void)
{
	return 0x80b000000160ll;
}

#define typedef_ODY_EHSM_BIU_CORE2_CMD_PARAM8 ody_ehsm_biu_core2_cmd_param8_t
#define bustype_ODY_EHSM_BIU_CORE2_CMD_PARAM8 CSR_TYPE_NCB32b
#define basename_ODY_EHSM_BIU_CORE2_CMD_PARAM8 "EHSM_BIU_CORE2_CMD_PARAM8"
#define device_bar_ODY_EHSM_BIU_CORE2_CMD_PARAM8 0x0 /* PF_BAR0 */
#define busnum_ODY_EHSM_BIU_CORE2_CMD_PARAM8 0
#define arguments_ODY_EHSM_BIU_CORE2_CMD_PARAM8 -1, -1, -1, -1

/**
 * Register (NCB32b) ehsm_biu_core2_cmd_param9
 *
 * EHSM Biu Core2 Cmd Param9 Register
 * This register contains parameter 9 associated with a EHSM primitive command from
 * host processor core 2.
 */
union ody_ehsm_biu_core2_cmd_param9 {
	uint32_t u;
	struct ody_ehsm_biu_core2_cmd_param9_s {
		uint32_t core2_cmd_param9            : 32;
	} s;
	/* struct ody_ehsm_biu_core2_cmd_param9_s cn; */
};
typedef union ody_ehsm_biu_core2_cmd_param9 ody_ehsm_biu_core2_cmd_param9_t;

#define ODY_EHSM_BIU_CORE2_CMD_PARAM9 ODY_EHSM_BIU_CORE2_CMD_PARAM9_FUNC()
static inline uint64_t ODY_EHSM_BIU_CORE2_CMD_PARAM9_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_EHSM_BIU_CORE2_CMD_PARAM9_FUNC(void)
{
	return 0x80b000000164ll;
}

#define typedef_ODY_EHSM_BIU_CORE2_CMD_PARAM9 ody_ehsm_biu_core2_cmd_param9_t
#define bustype_ODY_EHSM_BIU_CORE2_CMD_PARAM9 CSR_TYPE_NCB32b
#define basename_ODY_EHSM_BIU_CORE2_CMD_PARAM9 "EHSM_BIU_CORE2_CMD_PARAM9"
#define device_bar_ODY_EHSM_BIU_CORE2_CMD_PARAM9 0x0 /* PF_BAR0 */
#define busnum_ODY_EHSM_BIU_CORE2_CMD_PARAM9 0
#define arguments_ODY_EHSM_BIU_CORE2_CMD_PARAM9 -1, -1, -1, -1

/**
 * Register (NCB32b) ehsm_biu_core2_cmd_ret_status
 *
 * EHSM Biu Core2 Cmd Ret Status Register
 * This register contains return status associated with a EHSM primitive command from
 * host processor core 2.
 * If it is 0, it indicates command execution success. If it is non 0, it indicates
 * command execution failure and the value is the error code.
 */
union ody_ehsm_biu_core2_cmd_ret_status {
	uint32_t u;
	struct ody_ehsm_biu_core2_cmd_ret_status_s {
		uint32_t core2_cmd_ret_status        : 32;
	} s;
	/* struct ody_ehsm_biu_core2_cmd_ret_status_s cn; */
};
typedef union ody_ehsm_biu_core2_cmd_ret_status ody_ehsm_biu_core2_cmd_ret_status_t;

#define ODY_EHSM_BIU_CORE2_CMD_RET_STATUS ODY_EHSM_BIU_CORE2_CMD_RET_STATUS_FUNC()
static inline uint64_t ODY_EHSM_BIU_CORE2_CMD_RET_STATUS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_EHSM_BIU_CORE2_CMD_RET_STATUS_FUNC(void)
{
	return 0x80b0000001a0ll;
}

#define typedef_ODY_EHSM_BIU_CORE2_CMD_RET_STATUS ody_ehsm_biu_core2_cmd_ret_status_t
#define bustype_ODY_EHSM_BIU_CORE2_CMD_RET_STATUS CSR_TYPE_NCB32b
#define basename_ODY_EHSM_BIU_CORE2_CMD_RET_STATUS "EHSM_BIU_CORE2_CMD_RET_STATUS"
#define device_bar_ODY_EHSM_BIU_CORE2_CMD_RET_STATUS 0x0 /* PF_BAR0 */
#define busnum_ODY_EHSM_BIU_CORE2_CMD_RET_STATUS 0
#define arguments_ODY_EHSM_BIU_CORE2_CMD_RET_STATUS -1, -1, -1, -1

/**
 * Register (NCB32b) ehsm_biu_core2_cmd_status0
 *
 * EHSM Biu Core2 Cmd Status0 Register
 * This register contains status 0 associated with a EHSM primitive command from host
 * processor core 2.
 */
union ody_ehsm_biu_core2_cmd_status0 {
	uint32_t u;
	struct ody_ehsm_biu_core2_cmd_status0_s {
		uint32_t core2_cmd_status0           : 32;
	} s;
	/* struct ody_ehsm_biu_core2_cmd_status0_s cn; */
};
typedef union ody_ehsm_biu_core2_cmd_status0 ody_ehsm_biu_core2_cmd_status0_t;

#define ODY_EHSM_BIU_CORE2_CMD_STATUS0 ODY_EHSM_BIU_CORE2_CMD_STATUS0_FUNC()
static inline uint64_t ODY_EHSM_BIU_CORE2_CMD_STATUS0_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_EHSM_BIU_CORE2_CMD_STATUS0_FUNC(void)
{
	return 0x80b0000001a4ll;
}

#define typedef_ODY_EHSM_BIU_CORE2_CMD_STATUS0 ody_ehsm_biu_core2_cmd_status0_t
#define bustype_ODY_EHSM_BIU_CORE2_CMD_STATUS0 CSR_TYPE_NCB32b
#define basename_ODY_EHSM_BIU_CORE2_CMD_STATUS0 "EHSM_BIU_CORE2_CMD_STATUS0"
#define device_bar_ODY_EHSM_BIU_CORE2_CMD_STATUS0 0x0 /* PF_BAR0 */
#define busnum_ODY_EHSM_BIU_CORE2_CMD_STATUS0 0
#define arguments_ODY_EHSM_BIU_CORE2_CMD_STATUS0 -1, -1, -1, -1

/**
 * Register (NCB32b) ehsm_biu_core2_cmd_status1
 *
 * EHSM Biu Core2 Cmd Status1 Register
 * This register contains status 1 associated with a EHSM primitive command from host
 * processor core 2.
 */
union ody_ehsm_biu_core2_cmd_status1 {
	uint32_t u;
	struct ody_ehsm_biu_core2_cmd_status1_s {
		uint32_t core2_cmd_status1           : 32;
	} s;
	/* struct ody_ehsm_biu_core2_cmd_status1_s cn; */
};
typedef union ody_ehsm_biu_core2_cmd_status1 ody_ehsm_biu_core2_cmd_status1_t;

#define ODY_EHSM_BIU_CORE2_CMD_STATUS1 ODY_EHSM_BIU_CORE2_CMD_STATUS1_FUNC()
static inline uint64_t ODY_EHSM_BIU_CORE2_CMD_STATUS1_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_EHSM_BIU_CORE2_CMD_STATUS1_FUNC(void)
{
	return 0x80b0000001a8ll;
}

#define typedef_ODY_EHSM_BIU_CORE2_CMD_STATUS1 ody_ehsm_biu_core2_cmd_status1_t
#define bustype_ODY_EHSM_BIU_CORE2_CMD_STATUS1 CSR_TYPE_NCB32b
#define basename_ODY_EHSM_BIU_CORE2_CMD_STATUS1 "EHSM_BIU_CORE2_CMD_STATUS1"
#define device_bar_ODY_EHSM_BIU_CORE2_CMD_STATUS1 0x0 /* PF_BAR0 */
#define busnum_ODY_EHSM_BIU_CORE2_CMD_STATUS1 0
#define arguments_ODY_EHSM_BIU_CORE2_CMD_STATUS1 -1, -1, -1, -1

/**
 * Register (NCB32b) ehsm_biu_core2_cmd_status10
 *
 * EHSM Biu Core2 Cmd Status10 Register
 * This register contains status 10 associated with a EHSM primitive command from host
 * processor core 2.
 */
union ody_ehsm_biu_core2_cmd_status10 {
	uint32_t u;
	struct ody_ehsm_biu_core2_cmd_status10_s {
		uint32_t core2_cmd_status10          : 32;
	} s;
	/* struct ody_ehsm_biu_core2_cmd_status10_s cn; */
};
typedef union ody_ehsm_biu_core2_cmd_status10 ody_ehsm_biu_core2_cmd_status10_t;

#define ODY_EHSM_BIU_CORE2_CMD_STATUS10 ODY_EHSM_BIU_CORE2_CMD_STATUS10_FUNC()
static inline uint64_t ODY_EHSM_BIU_CORE2_CMD_STATUS10_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_EHSM_BIU_CORE2_CMD_STATUS10_FUNC(void)
{
	return 0x80b0000001ccll;
}

#define typedef_ODY_EHSM_BIU_CORE2_CMD_STATUS10 ody_ehsm_biu_core2_cmd_status10_t
#define bustype_ODY_EHSM_BIU_CORE2_CMD_STATUS10 CSR_TYPE_NCB32b
#define basename_ODY_EHSM_BIU_CORE2_CMD_STATUS10 "EHSM_BIU_CORE2_CMD_STATUS10"
#define device_bar_ODY_EHSM_BIU_CORE2_CMD_STATUS10 0x0 /* PF_BAR0 */
#define busnum_ODY_EHSM_BIU_CORE2_CMD_STATUS10 0
#define arguments_ODY_EHSM_BIU_CORE2_CMD_STATUS10 -1, -1, -1, -1

/**
 * Register (NCB32b) ehsm_biu_core2_cmd_status11
 *
 * EHSM Biu Core2 Cmd Status11 Register
 * This register contains status 11 associated with a EHSM primitive command from host
 * processor core 2.
 */
union ody_ehsm_biu_core2_cmd_status11 {
	uint32_t u;
	struct ody_ehsm_biu_core2_cmd_status11_s {
		uint32_t core2_cmd_status11          : 32;
	} s;
	/* struct ody_ehsm_biu_core2_cmd_status11_s cn; */
};
typedef union ody_ehsm_biu_core2_cmd_status11 ody_ehsm_biu_core2_cmd_status11_t;

#define ODY_EHSM_BIU_CORE2_CMD_STATUS11 ODY_EHSM_BIU_CORE2_CMD_STATUS11_FUNC()
static inline uint64_t ODY_EHSM_BIU_CORE2_CMD_STATUS11_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_EHSM_BIU_CORE2_CMD_STATUS11_FUNC(void)
{
	return 0x80b0000001d0ll;
}

#define typedef_ODY_EHSM_BIU_CORE2_CMD_STATUS11 ody_ehsm_biu_core2_cmd_status11_t
#define bustype_ODY_EHSM_BIU_CORE2_CMD_STATUS11 CSR_TYPE_NCB32b
#define basename_ODY_EHSM_BIU_CORE2_CMD_STATUS11 "EHSM_BIU_CORE2_CMD_STATUS11"
#define device_bar_ODY_EHSM_BIU_CORE2_CMD_STATUS11 0x0 /* PF_BAR0 */
#define busnum_ODY_EHSM_BIU_CORE2_CMD_STATUS11 0
#define arguments_ODY_EHSM_BIU_CORE2_CMD_STATUS11 -1, -1, -1, -1

/**
 * Register (NCB32b) ehsm_biu_core2_cmd_status12
 *
 * EHSM Biu Core2 Cmd Status12 Register
 * This register contains status 12 associated with a EHSM primitive command from host
 * processor core 2.
 */
union ody_ehsm_biu_core2_cmd_status12 {
	uint32_t u;
	struct ody_ehsm_biu_core2_cmd_status12_s {
		uint32_t core2_cmd_status12          : 32;
	} s;
	/* struct ody_ehsm_biu_core2_cmd_status12_s cn; */
};
typedef union ody_ehsm_biu_core2_cmd_status12 ody_ehsm_biu_core2_cmd_status12_t;

#define ODY_EHSM_BIU_CORE2_CMD_STATUS12 ODY_EHSM_BIU_CORE2_CMD_STATUS12_FUNC()
static inline uint64_t ODY_EHSM_BIU_CORE2_CMD_STATUS12_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_EHSM_BIU_CORE2_CMD_STATUS12_FUNC(void)
{
	return 0x80b0000001d4ll;
}

#define typedef_ODY_EHSM_BIU_CORE2_CMD_STATUS12 ody_ehsm_biu_core2_cmd_status12_t
#define bustype_ODY_EHSM_BIU_CORE2_CMD_STATUS12 CSR_TYPE_NCB32b
#define basename_ODY_EHSM_BIU_CORE2_CMD_STATUS12 "EHSM_BIU_CORE2_CMD_STATUS12"
#define device_bar_ODY_EHSM_BIU_CORE2_CMD_STATUS12 0x0 /* PF_BAR0 */
#define busnum_ODY_EHSM_BIU_CORE2_CMD_STATUS12 0
#define arguments_ODY_EHSM_BIU_CORE2_CMD_STATUS12 -1, -1, -1, -1

/**
 * Register (NCB32b) ehsm_biu_core2_cmd_status13
 *
 * EHSM Biu Core2 Cmd Status13 Register
 * This register contains status 13 associated with a EHSM primitive command from host
 * processor core 2.
 */
union ody_ehsm_biu_core2_cmd_status13 {
	uint32_t u;
	struct ody_ehsm_biu_core2_cmd_status13_s {
		uint32_t core2_cmd_status13          : 32;
	} s;
	/* struct ody_ehsm_biu_core2_cmd_status13_s cn; */
};
typedef union ody_ehsm_biu_core2_cmd_status13 ody_ehsm_biu_core2_cmd_status13_t;

#define ODY_EHSM_BIU_CORE2_CMD_STATUS13 ODY_EHSM_BIU_CORE2_CMD_STATUS13_FUNC()
static inline uint64_t ODY_EHSM_BIU_CORE2_CMD_STATUS13_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_EHSM_BIU_CORE2_CMD_STATUS13_FUNC(void)
{
	return 0x80b0000001d8ll;
}

#define typedef_ODY_EHSM_BIU_CORE2_CMD_STATUS13 ody_ehsm_biu_core2_cmd_status13_t
#define bustype_ODY_EHSM_BIU_CORE2_CMD_STATUS13 CSR_TYPE_NCB32b
#define basename_ODY_EHSM_BIU_CORE2_CMD_STATUS13 "EHSM_BIU_CORE2_CMD_STATUS13"
#define device_bar_ODY_EHSM_BIU_CORE2_CMD_STATUS13 0x0 /* PF_BAR0 */
#define busnum_ODY_EHSM_BIU_CORE2_CMD_STATUS13 0
#define arguments_ODY_EHSM_BIU_CORE2_CMD_STATUS13 -1, -1, -1, -1

/**
 * Register (NCB32b) ehsm_biu_core2_cmd_status14
 *
 * EHSM Biu Core2 Cmd Status14 Register
 * This register contains status 14 associated with a EHSM primitive command from host
 * processor core 2.
 */
union ody_ehsm_biu_core2_cmd_status14 {
	uint32_t u;
	struct ody_ehsm_biu_core2_cmd_status14_s {
		uint32_t core2_cmd_status14          : 32;
	} s;
	/* struct ody_ehsm_biu_core2_cmd_status14_s cn; */
};
typedef union ody_ehsm_biu_core2_cmd_status14 ody_ehsm_biu_core2_cmd_status14_t;

#define ODY_EHSM_BIU_CORE2_CMD_STATUS14 ODY_EHSM_BIU_CORE2_CMD_STATUS14_FUNC()
static inline uint64_t ODY_EHSM_BIU_CORE2_CMD_STATUS14_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_EHSM_BIU_CORE2_CMD_STATUS14_FUNC(void)
{
	return 0x80b0000001dcll;
}

#define typedef_ODY_EHSM_BIU_CORE2_CMD_STATUS14 ody_ehsm_biu_core2_cmd_status14_t
#define bustype_ODY_EHSM_BIU_CORE2_CMD_STATUS14 CSR_TYPE_NCB32b
#define basename_ODY_EHSM_BIU_CORE2_CMD_STATUS14 "EHSM_BIU_CORE2_CMD_STATUS14"
#define device_bar_ODY_EHSM_BIU_CORE2_CMD_STATUS14 0x0 /* PF_BAR0 */
#define busnum_ODY_EHSM_BIU_CORE2_CMD_STATUS14 0
#define arguments_ODY_EHSM_BIU_CORE2_CMD_STATUS14 -1, -1, -1, -1

/**
 * Register (NCB32b) ehsm_biu_core2_cmd_status15
 *
 * EHSM Biu Core2 Cmd Status15 Register
 * This register contains status 15 associated with a EHSM primitive command from host
 * processor core 2.
 */
union ody_ehsm_biu_core2_cmd_status15 {
	uint32_t u;
	struct ody_ehsm_biu_core2_cmd_status15_s {
		uint32_t core2_cmd_status15          : 32;
	} s;
	/* struct ody_ehsm_biu_core2_cmd_status15_s cn; */
};
typedef union ody_ehsm_biu_core2_cmd_status15 ody_ehsm_biu_core2_cmd_status15_t;

#define ODY_EHSM_BIU_CORE2_CMD_STATUS15 ODY_EHSM_BIU_CORE2_CMD_STATUS15_FUNC()
static inline uint64_t ODY_EHSM_BIU_CORE2_CMD_STATUS15_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_EHSM_BIU_CORE2_CMD_STATUS15_FUNC(void)
{
	return 0x80b0000001e0ll;
}

#define typedef_ODY_EHSM_BIU_CORE2_CMD_STATUS15 ody_ehsm_biu_core2_cmd_status15_t
#define bustype_ODY_EHSM_BIU_CORE2_CMD_STATUS15 CSR_TYPE_NCB32b
#define basename_ODY_EHSM_BIU_CORE2_CMD_STATUS15 "EHSM_BIU_CORE2_CMD_STATUS15"
#define device_bar_ODY_EHSM_BIU_CORE2_CMD_STATUS15 0x0 /* PF_BAR0 */
#define busnum_ODY_EHSM_BIU_CORE2_CMD_STATUS15 0
#define arguments_ODY_EHSM_BIU_CORE2_CMD_STATUS15 -1, -1, -1, -1

/**
 * Register (NCB32b) ehsm_biu_core2_cmd_status2
 *
 * EHSM Biu Core2 Cmd Status2 Register
 * This register contains status 2 associated with a EHSM primitive command from host
 * processor core 2.
 */
union ody_ehsm_biu_core2_cmd_status2 {
	uint32_t u;
	struct ody_ehsm_biu_core2_cmd_status2_s {
		uint32_t core2_cmd_status2           : 32;
	} s;
	/* struct ody_ehsm_biu_core2_cmd_status2_s cn; */
};
typedef union ody_ehsm_biu_core2_cmd_status2 ody_ehsm_biu_core2_cmd_status2_t;

#define ODY_EHSM_BIU_CORE2_CMD_STATUS2 ODY_EHSM_BIU_CORE2_CMD_STATUS2_FUNC()
static inline uint64_t ODY_EHSM_BIU_CORE2_CMD_STATUS2_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_EHSM_BIU_CORE2_CMD_STATUS2_FUNC(void)
{
	return 0x80b0000001acll;
}

#define typedef_ODY_EHSM_BIU_CORE2_CMD_STATUS2 ody_ehsm_biu_core2_cmd_status2_t
#define bustype_ODY_EHSM_BIU_CORE2_CMD_STATUS2 CSR_TYPE_NCB32b
#define basename_ODY_EHSM_BIU_CORE2_CMD_STATUS2 "EHSM_BIU_CORE2_CMD_STATUS2"
#define device_bar_ODY_EHSM_BIU_CORE2_CMD_STATUS2 0x0 /* PF_BAR0 */
#define busnum_ODY_EHSM_BIU_CORE2_CMD_STATUS2 0
#define arguments_ODY_EHSM_BIU_CORE2_CMD_STATUS2 -1, -1, -1, -1

/**
 * Register (NCB32b) ehsm_biu_core2_cmd_status3
 *
 * EHSM Biu Core2 Cmd Status3 Register
 * This register contains status 3 associated with a EHSM primitive command from host
 * processor core 2.
 */
union ody_ehsm_biu_core2_cmd_status3 {
	uint32_t u;
	struct ody_ehsm_biu_core2_cmd_status3_s {
		uint32_t core2_cmd_status3           : 32;
	} s;
	/* struct ody_ehsm_biu_core2_cmd_status3_s cn; */
};
typedef union ody_ehsm_biu_core2_cmd_status3 ody_ehsm_biu_core2_cmd_status3_t;

#define ODY_EHSM_BIU_CORE2_CMD_STATUS3 ODY_EHSM_BIU_CORE2_CMD_STATUS3_FUNC()
static inline uint64_t ODY_EHSM_BIU_CORE2_CMD_STATUS3_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_EHSM_BIU_CORE2_CMD_STATUS3_FUNC(void)
{
	return 0x80b0000001b0ll;
}

#define typedef_ODY_EHSM_BIU_CORE2_CMD_STATUS3 ody_ehsm_biu_core2_cmd_status3_t
#define bustype_ODY_EHSM_BIU_CORE2_CMD_STATUS3 CSR_TYPE_NCB32b
#define basename_ODY_EHSM_BIU_CORE2_CMD_STATUS3 "EHSM_BIU_CORE2_CMD_STATUS3"
#define device_bar_ODY_EHSM_BIU_CORE2_CMD_STATUS3 0x0 /* PF_BAR0 */
#define busnum_ODY_EHSM_BIU_CORE2_CMD_STATUS3 0
#define arguments_ODY_EHSM_BIU_CORE2_CMD_STATUS3 -1, -1, -1, -1

/**
 * Register (NCB32b) ehsm_biu_core2_cmd_status4
 *
 * EHSM Biu Core2 Cmd Status4 Register
 * This register contains status 4 associated with a EHSM primitive command from host
 * processor core 2.
 */
union ody_ehsm_biu_core2_cmd_status4 {
	uint32_t u;
	struct ody_ehsm_biu_core2_cmd_status4_s {
		uint32_t core2_cmd_status4           : 32;
	} s;
	/* struct ody_ehsm_biu_core2_cmd_status4_s cn; */
};
typedef union ody_ehsm_biu_core2_cmd_status4 ody_ehsm_biu_core2_cmd_status4_t;

#define ODY_EHSM_BIU_CORE2_CMD_STATUS4 ODY_EHSM_BIU_CORE2_CMD_STATUS4_FUNC()
static inline uint64_t ODY_EHSM_BIU_CORE2_CMD_STATUS4_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_EHSM_BIU_CORE2_CMD_STATUS4_FUNC(void)
{
	return 0x80b0000001b4ll;
}

#define typedef_ODY_EHSM_BIU_CORE2_CMD_STATUS4 ody_ehsm_biu_core2_cmd_status4_t
#define bustype_ODY_EHSM_BIU_CORE2_CMD_STATUS4 CSR_TYPE_NCB32b
#define basename_ODY_EHSM_BIU_CORE2_CMD_STATUS4 "EHSM_BIU_CORE2_CMD_STATUS4"
#define device_bar_ODY_EHSM_BIU_CORE2_CMD_STATUS4 0x0 /* PF_BAR0 */
#define busnum_ODY_EHSM_BIU_CORE2_CMD_STATUS4 0
#define arguments_ODY_EHSM_BIU_CORE2_CMD_STATUS4 -1, -1, -1, -1

/**
 * Register (NCB32b) ehsm_biu_core2_cmd_status5
 *
 * EHSM Biu Core2 Cmd Status5 Register
 * This register contains status 5 associated with a EHSM primitive command from host
 * processor core 2.
 */
union ody_ehsm_biu_core2_cmd_status5 {
	uint32_t u;
	struct ody_ehsm_biu_core2_cmd_status5_s {
		uint32_t core2_cmd_status5           : 32;
	} s;
	/* struct ody_ehsm_biu_core2_cmd_status5_s cn; */
};
typedef union ody_ehsm_biu_core2_cmd_status5 ody_ehsm_biu_core2_cmd_status5_t;

#define ODY_EHSM_BIU_CORE2_CMD_STATUS5 ODY_EHSM_BIU_CORE2_CMD_STATUS5_FUNC()
static inline uint64_t ODY_EHSM_BIU_CORE2_CMD_STATUS5_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_EHSM_BIU_CORE2_CMD_STATUS5_FUNC(void)
{
	return 0x80b0000001b8ll;
}

#define typedef_ODY_EHSM_BIU_CORE2_CMD_STATUS5 ody_ehsm_biu_core2_cmd_status5_t
#define bustype_ODY_EHSM_BIU_CORE2_CMD_STATUS5 CSR_TYPE_NCB32b
#define basename_ODY_EHSM_BIU_CORE2_CMD_STATUS5 "EHSM_BIU_CORE2_CMD_STATUS5"
#define device_bar_ODY_EHSM_BIU_CORE2_CMD_STATUS5 0x0 /* PF_BAR0 */
#define busnum_ODY_EHSM_BIU_CORE2_CMD_STATUS5 0
#define arguments_ODY_EHSM_BIU_CORE2_CMD_STATUS5 -1, -1, -1, -1

/**
 * Register (NCB32b) ehsm_biu_core2_cmd_status6
 *
 * EHSM Biu Core2 Cmd Status6 Register
 * This register contains status 6 associated with a EHSM primitive command from host
 * processor core 2.
 */
union ody_ehsm_biu_core2_cmd_status6 {
	uint32_t u;
	struct ody_ehsm_biu_core2_cmd_status6_s {
		uint32_t core2_cmd_status6           : 32;
	} s;
	/* struct ody_ehsm_biu_core2_cmd_status6_s cn; */
};
typedef union ody_ehsm_biu_core2_cmd_status6 ody_ehsm_biu_core2_cmd_status6_t;

#define ODY_EHSM_BIU_CORE2_CMD_STATUS6 ODY_EHSM_BIU_CORE2_CMD_STATUS6_FUNC()
static inline uint64_t ODY_EHSM_BIU_CORE2_CMD_STATUS6_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_EHSM_BIU_CORE2_CMD_STATUS6_FUNC(void)
{
	return 0x80b0000001bcll;
}

#define typedef_ODY_EHSM_BIU_CORE2_CMD_STATUS6 ody_ehsm_biu_core2_cmd_status6_t
#define bustype_ODY_EHSM_BIU_CORE2_CMD_STATUS6 CSR_TYPE_NCB32b
#define basename_ODY_EHSM_BIU_CORE2_CMD_STATUS6 "EHSM_BIU_CORE2_CMD_STATUS6"
#define device_bar_ODY_EHSM_BIU_CORE2_CMD_STATUS6 0x0 /* PF_BAR0 */
#define busnum_ODY_EHSM_BIU_CORE2_CMD_STATUS6 0
#define arguments_ODY_EHSM_BIU_CORE2_CMD_STATUS6 -1, -1, -1, -1

/**
 * Register (NCB32b) ehsm_biu_core2_cmd_status7
 *
 * EHSM Biu Core2 Cmd Status7 Register
 * This register contains status 7 associated with a EHSM primitive command from host
 * processor core 2.
 */
union ody_ehsm_biu_core2_cmd_status7 {
	uint32_t u;
	struct ody_ehsm_biu_core2_cmd_status7_s {
		uint32_t core2_cmd_status7           : 32;
	} s;
	/* struct ody_ehsm_biu_core2_cmd_status7_s cn; */
};
typedef union ody_ehsm_biu_core2_cmd_status7 ody_ehsm_biu_core2_cmd_status7_t;

#define ODY_EHSM_BIU_CORE2_CMD_STATUS7 ODY_EHSM_BIU_CORE2_CMD_STATUS7_FUNC()
static inline uint64_t ODY_EHSM_BIU_CORE2_CMD_STATUS7_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_EHSM_BIU_CORE2_CMD_STATUS7_FUNC(void)
{
	return 0x80b0000001c0ll;
}

#define typedef_ODY_EHSM_BIU_CORE2_CMD_STATUS7 ody_ehsm_biu_core2_cmd_status7_t
#define bustype_ODY_EHSM_BIU_CORE2_CMD_STATUS7 CSR_TYPE_NCB32b
#define basename_ODY_EHSM_BIU_CORE2_CMD_STATUS7 "EHSM_BIU_CORE2_CMD_STATUS7"
#define device_bar_ODY_EHSM_BIU_CORE2_CMD_STATUS7 0x0 /* PF_BAR0 */
#define busnum_ODY_EHSM_BIU_CORE2_CMD_STATUS7 0
#define arguments_ODY_EHSM_BIU_CORE2_CMD_STATUS7 -1, -1, -1, -1

/**
 * Register (NCB32b) ehsm_biu_core2_cmd_status8
 *
 * EHSM Biu Core2 Cmd Status8 Register
 * This register contains status 8 associated with a EHSM primitive command from host
 * processor core 2.
 */
union ody_ehsm_biu_core2_cmd_status8 {
	uint32_t u;
	struct ody_ehsm_biu_core2_cmd_status8_s {
		uint32_t core2_cmd_status8           : 32;
	} s;
	/* struct ody_ehsm_biu_core2_cmd_status8_s cn; */
};
typedef union ody_ehsm_biu_core2_cmd_status8 ody_ehsm_biu_core2_cmd_status8_t;

#define ODY_EHSM_BIU_CORE2_CMD_STATUS8 ODY_EHSM_BIU_CORE2_CMD_STATUS8_FUNC()
static inline uint64_t ODY_EHSM_BIU_CORE2_CMD_STATUS8_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_EHSM_BIU_CORE2_CMD_STATUS8_FUNC(void)
{
	return 0x80b0000001c4ll;
}

#define typedef_ODY_EHSM_BIU_CORE2_CMD_STATUS8 ody_ehsm_biu_core2_cmd_status8_t
#define bustype_ODY_EHSM_BIU_CORE2_CMD_STATUS8 CSR_TYPE_NCB32b
#define basename_ODY_EHSM_BIU_CORE2_CMD_STATUS8 "EHSM_BIU_CORE2_CMD_STATUS8"
#define device_bar_ODY_EHSM_BIU_CORE2_CMD_STATUS8 0x0 /* PF_BAR0 */
#define busnum_ODY_EHSM_BIU_CORE2_CMD_STATUS8 0
#define arguments_ODY_EHSM_BIU_CORE2_CMD_STATUS8 -1, -1, -1, -1

/**
 * Register (NCB32b) ehsm_biu_core2_cmd_status9
 *
 * EHSM Biu Core2 Cmd Status9 Register
 * This register contains status 9 associated with a EHSM primitive command from host
 * processor core 2.
 */
union ody_ehsm_biu_core2_cmd_status9 {
	uint32_t u;
	struct ody_ehsm_biu_core2_cmd_status9_s {
		uint32_t core2_cmd_status9           : 32;
	} s;
	/* struct ody_ehsm_biu_core2_cmd_status9_s cn; */
};
typedef union ody_ehsm_biu_core2_cmd_status9 ody_ehsm_biu_core2_cmd_status9_t;

#define ODY_EHSM_BIU_CORE2_CMD_STATUS9 ODY_EHSM_BIU_CORE2_CMD_STATUS9_FUNC()
static inline uint64_t ODY_EHSM_BIU_CORE2_CMD_STATUS9_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_EHSM_BIU_CORE2_CMD_STATUS9_FUNC(void)
{
	return 0x80b0000001c8ll;
}

#define typedef_ODY_EHSM_BIU_CORE2_CMD_STATUS9 ody_ehsm_biu_core2_cmd_status9_t
#define bustype_ODY_EHSM_BIU_CORE2_CMD_STATUS9 CSR_TYPE_NCB32b
#define basename_ODY_EHSM_BIU_CORE2_CMD_STATUS9 "EHSM_BIU_CORE2_CMD_STATUS9"
#define device_bar_ODY_EHSM_BIU_CORE2_CMD_STATUS9 0x0 /* PF_BAR0 */
#define busnum_ODY_EHSM_BIU_CORE2_CMD_STATUS9 0
#define arguments_ODY_EHSM_BIU_CORE2_CMD_STATUS9 -1, -1, -1, -1

/**
 * Register (NCB32b) ehsm_biu_core2_hst_interrupt_mask
 *
 * EHSM Biu Core2 Hst Interrupt Mask Register
 * This is host interrupt masking register for host processor core 2
 */
union ody_ehsm_biu_core2_hst_interrupt_mask {
	uint32_t u;
	struct ody_ehsm_biu_core2_hst_interrupt_mask_s {
		uint32_t core2_hst_interrupt_mask    : 32;
	} s;
	/* struct ody_ehsm_biu_core2_hst_interrupt_mask_s cn; */
};
typedef union ody_ehsm_biu_core2_hst_interrupt_mask ody_ehsm_biu_core2_hst_interrupt_mask_t;

#define ODY_EHSM_BIU_CORE2_HST_INTERRUPT_MASK ODY_EHSM_BIU_CORE2_HST_INTERRUPT_MASK_FUNC()
static inline uint64_t ODY_EHSM_BIU_CORE2_HST_INTERRUPT_MASK_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_EHSM_BIU_CORE2_HST_INTERRUPT_MASK_FUNC(void)
{
	return 0x80b0000001e8ll;
}

#define typedef_ODY_EHSM_BIU_CORE2_HST_INTERRUPT_MASK ody_ehsm_biu_core2_hst_interrupt_mask_t
#define bustype_ODY_EHSM_BIU_CORE2_HST_INTERRUPT_MASK CSR_TYPE_NCB32b
#define basename_ODY_EHSM_BIU_CORE2_HST_INTERRUPT_MASK "EHSM_BIU_CORE2_HST_INTERRUPT_MASK"
#define device_bar_ODY_EHSM_BIU_CORE2_HST_INTERRUPT_MASK 0x0 /* PF_BAR0 */
#define busnum_ODY_EHSM_BIU_CORE2_HST_INTERRUPT_MASK 0
#define arguments_ODY_EHSM_BIU_CORE2_HST_INTERRUPT_MASK -1, -1, -1, -1

/**
 * Register (NCB32b) ehsm_biu_core2_hst_interrupt_rst
 *
 * EHSM Biu Core2 Hst Interrupt Rst Register
 * This is host interrupt register for host processor core 2
 */
union ody_ehsm_biu_core2_hst_interrupt_rst {
	uint32_t u;
	struct ody_ehsm_biu_core2_hst_interrupt_rst_s {
		uint32_t irom_exe_int                : 1;
		uint32_t ehsm_mem_fail               : 1;
		uint32_t sysrdyp_timeout             : 1;
		uint32_t reserved_3_15               : 13;
		uint32_t hst_addr_range              : 1;
		uint32_t cmd_buffer_full_access      : 1;
		uint32_t reserved_18_31              : 14;
	} s;
	/* struct ody_ehsm_biu_core2_hst_interrupt_rst_s cn; */
};
typedef union ody_ehsm_biu_core2_hst_interrupt_rst ody_ehsm_biu_core2_hst_interrupt_rst_t;

#define ODY_EHSM_BIU_CORE2_HST_INTERRUPT_RST ODY_EHSM_BIU_CORE2_HST_INTERRUPT_RST_FUNC()
static inline uint64_t ODY_EHSM_BIU_CORE2_HST_INTERRUPT_RST_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_EHSM_BIU_CORE2_HST_INTERRUPT_RST_FUNC(void)
{
	return 0x80b0000001e4ll;
}

#define typedef_ODY_EHSM_BIU_CORE2_HST_INTERRUPT_RST ody_ehsm_biu_core2_hst_interrupt_rst_t
#define bustype_ODY_EHSM_BIU_CORE2_HST_INTERRUPT_RST CSR_TYPE_NCB32b
#define basename_ODY_EHSM_BIU_CORE2_HST_INTERRUPT_RST "EHSM_BIU_CORE2_HST_INTERRUPT_RST"
#define device_bar_ODY_EHSM_BIU_CORE2_HST_INTERRUPT_RST 0x0 /* PF_BAR0 */
#define busnum_ODY_EHSM_BIU_CORE2_HST_INTERRUPT_RST 0
#define arguments_ODY_EHSM_BIU_CORE2_HST_INTERRUPT_RST -1, -1, -1, -1

/**
 * Register (NCB32b) ehsm_biu_ehsm_id
 *
 * EHSM Biu Ehsm Id Register
 * This is EHSM ID. Each project is assigned with a unique EHSM ID.
 */
union ody_ehsm_biu_ehsm_id {
	uint32_t u;
	struct ody_ehsm_biu_ehsm_id_s {
		uint32_t ehsm_id                     : 32;
	} s;
	/* struct ody_ehsm_biu_ehsm_id_s cn; */
};
typedef union ody_ehsm_biu_ehsm_id ody_ehsm_biu_ehsm_id_t;

#define ODY_EHSM_BIU_EHSM_ID ODY_EHSM_BIU_EHSM_ID_FUNC()
static inline uint64_t ODY_EHSM_BIU_EHSM_ID_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_EHSM_BIU_EHSM_ID_FUNC(void)
{
	return 0x80b0000000d8ll;
}

#define typedef_ODY_EHSM_BIU_EHSM_ID ody_ehsm_biu_ehsm_id_t
#define bustype_ODY_EHSM_BIU_EHSM_ID CSR_TYPE_NCB32b
#define basename_ODY_EHSM_BIU_EHSM_ID "EHSM_BIU_EHSM_ID"
#define device_bar_ODY_EHSM_BIU_EHSM_ID 0x0 /* PF_BAR0 */
#define busnum_ODY_EHSM_BIU_EHSM_ID 0
#define arguments_ODY_EHSM_BIU_EHSM_ID -1, -1, -1, -1

/**
 * Register (NCB32b) ehsm_biu_ehsm_rev
 *
 * EHSM Biu Ehsm Rev Register
 * This is EHSM revision.
 */
union ody_ehsm_biu_ehsm_rev {
	uint32_t u;
	struct ody_ehsm_biu_ehsm_rev_s {
		uint32_t ehsm_rev                    : 32;
	} s;
	/* struct ody_ehsm_biu_ehsm_rev_s cn; */
};
typedef union ody_ehsm_biu_ehsm_rev ody_ehsm_biu_ehsm_rev_t;

#define ODY_EHSM_BIU_EHSM_REV ODY_EHSM_BIU_EHSM_REV_FUNC()
static inline uint64_t ODY_EHSM_BIU_EHSM_REV_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_EHSM_BIU_EHSM_REV_FUNC(void)
{
	return 0x80b0000000dcll;
}

#define typedef_ODY_EHSM_BIU_EHSM_REV ody_ehsm_biu_ehsm_rev_t
#define bustype_ODY_EHSM_BIU_EHSM_REV CSR_TYPE_NCB32b
#define basename_ODY_EHSM_BIU_EHSM_REV "EHSM_BIU_EHSM_REV"
#define device_bar_ODY_EHSM_BIU_EHSM_REV 0x0 /* PF_BAR0 */
#define busnum_ODY_EHSM_BIU_EHSM_REV 0
#define arguments_ODY_EHSM_BIU_EHSM_REV -1, -1, -1, -1

/**
 * Register (NCB32b) ehsm_biu_fw_security_version
 *
 * EHSM Biu Fw Security Version Register
 * This is for EHSM-78
 */
union ody_ehsm_biu_fw_security_version {
	uint32_t u;
	struct ody_ehsm_biu_fw_security_version_s {
		uint32_t loader_fw_security_version  : 4;
		uint32_t main_fw_security_version    : 6;
		uint32_t kak_id_valid                : 1;
		uint32_t kak_id                      : 2;
		uint32_t reserved_13_31              : 19;
	} s;
	/* struct ody_ehsm_biu_fw_security_version_s cn; */
};
typedef union ody_ehsm_biu_fw_security_version ody_ehsm_biu_fw_security_version_t;

#define ODY_EHSM_BIU_FW_SECURITY_VERSION ODY_EHSM_BIU_FW_SECURITY_VERSION_FUNC()
static inline uint64_t ODY_EHSM_BIU_FW_SECURITY_VERSION_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_EHSM_BIU_FW_SECURITY_VERSION_FUNC(void)
{
	return 0x80b000000124ll;
}

#define typedef_ODY_EHSM_BIU_FW_SECURITY_VERSION ody_ehsm_biu_fw_security_version_t
#define bustype_ODY_EHSM_BIU_FW_SECURITY_VERSION CSR_TYPE_NCB32b
#define basename_ODY_EHSM_BIU_FW_SECURITY_VERSION "EHSM_BIU_FW_SECURITY_VERSION"
#define device_bar_ODY_EHSM_BIU_FW_SECURITY_VERSION 0x0 /* PF_BAR0 */
#define busnum_ODY_EHSM_BIU_FW_SECURITY_VERSION 0
#define arguments_ODY_EHSM_BIU_FW_SECURITY_VERSION -1, -1, -1, -1

/**
 * Register (NCB32b) ehsm_biu_hst_except_addr
 *
 * EHSM Biu Hst Except Addr Register
 * This is the address that triggers HST_ADDR_RANGE in CORE1_HST_INTERRUPT_RST and
 * CORE2_HST_INTERRUPT_RST.
 */
union ody_ehsm_biu_hst_except_addr {
	uint32_t u;
	struct ody_ehsm_biu_hst_except_addr_s {
		uint32_t hst_except_addr             : 32;
	} s;
	/* struct ody_ehsm_biu_hst_except_addr_s cn; */
};
typedef union ody_ehsm_biu_hst_except_addr ody_ehsm_biu_hst_except_addr_t;

#define ODY_EHSM_BIU_HST_EXCEPT_ADDR ODY_EHSM_BIU_HST_EXCEPT_ADDR_FUNC()
static inline uint64_t ODY_EHSM_BIU_HST_EXCEPT_ADDR_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_EHSM_BIU_HST_EXCEPT_ADDR_FUNC(void)
{
	return 0x80b0000000d0ll;
}

#define typedef_ODY_EHSM_BIU_HST_EXCEPT_ADDR ody_ehsm_biu_hst_except_addr_t
#define bustype_ODY_EHSM_BIU_HST_EXCEPT_ADDR CSR_TYPE_NCB32b
#define basename_ODY_EHSM_BIU_HST_EXCEPT_ADDR "EHSM_BIU_HST_EXCEPT_ADDR"
#define device_bar_ODY_EHSM_BIU_HST_EXCEPT_ADDR 0x0 /* PF_BAR0 */
#define busnum_ODY_EHSM_BIU_HST_EXCEPT_ADDR 0
#define arguments_ODY_EHSM_BIU_HST_EXCEPT_ADDR -1, -1, -1, -1

/**
 * Register (NCB32b) ehsm_biu_hst_trust
 *
 * EHSM Biu Hst Trust Register
 */
union ody_ehsm_biu_hst_trust {
	uint32_t u;
	struct ody_ehsm_biu_hst_trust_s {
		uint32_t hst_trust                   : 32;
	} s;
	/* struct ody_ehsm_biu_hst_trust_s cn; */
};
typedef union ody_ehsm_biu_hst_trust ody_ehsm_biu_hst_trust_t;

#define ODY_EHSM_BIU_HST_TRUST ODY_EHSM_BIU_HST_TRUST_FUNC()
static inline uint64_t ODY_EHSM_BIU_HST_TRUST_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_EHSM_BIU_HST_TRUST_FUNC(void)
{
	return 0x80b0000000d4ll;
}

#define typedef_ODY_EHSM_BIU_HST_TRUST ody_ehsm_biu_hst_trust_t
#define bustype_ODY_EHSM_BIU_HST_TRUST CSR_TYPE_NCB32b
#define basename_ODY_EHSM_BIU_HST_TRUST "EHSM_BIU_HST_TRUST"
#define device_bar_ODY_EHSM_BIU_HST_TRUST 0x0 /* PF_BAR0 */
#define busnum_ODY_EHSM_BIU_HST_TRUST 0
#define arguments_ODY_EHSM_BIU_HST_TRUST -1, -1, -1, -1

/**
 * Register (NCB32b) ehsm_biu_key_revoc_status
 *
 * EHSM Biu Key Revoc Status Register
 * This is for EHSM-78
 */
union ody_ehsm_biu_key_revoc_status {
	uint32_t u;
	struct ody_ehsm_biu_key_revoc_status_s {
		uint32_t key_manifest_version_control : 16;
		uint32_t key_revocation_control      : 3;
		uint32_t reserved_19_31              : 13;
	} s;
	/* struct ody_ehsm_biu_key_revoc_status_s cn; */
};
typedef union ody_ehsm_biu_key_revoc_status ody_ehsm_biu_key_revoc_status_t;

#define ODY_EHSM_BIU_KEY_REVOC_STATUS ODY_EHSM_BIU_KEY_REVOC_STATUS_FUNC()
static inline uint64_t ODY_EHSM_BIU_KEY_REVOC_STATUS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_EHSM_BIU_KEY_REVOC_STATUS_FUNC(void)
{
	return 0x80b000000120ll;
}

#define typedef_ODY_EHSM_BIU_KEY_REVOC_STATUS ody_ehsm_biu_key_revoc_status_t
#define bustype_ODY_EHSM_BIU_KEY_REVOC_STATUS CSR_TYPE_NCB32b
#define basename_ODY_EHSM_BIU_KEY_REVOC_STATUS "EHSM_BIU_KEY_REVOC_STATUS"
#define device_bar_ODY_EHSM_BIU_KEY_REVOC_STATUS 0x0 /* PF_BAR0 */
#define busnum_ODY_EHSM_BIU_KEY_REVOC_STATUS 0
#define arguments_ODY_EHSM_BIU_KEY_REVOC_STATUS -1, -1, -1, -1

/**
 * Register (NCB32b) ehsm_biu_lcs_debug_port_status
 *
 * EHSM Biu Lcs Debug Port Status Register
 * This is for EHSM-78
 */
union ody_ehsm_biu_lcs_debug_port_status {
	uint32_t u;
	struct ody_ehsm_biu_lcs_debug_port_status_s {
		uint32_t life_cycle_state            : 4;
		uint32_t permnt_disable_ehsm_debug   : 1;
		uint32_t permnt_disable_jtag_debug   : 1;
		uint32_t permnt_disable_mcp_jtag     : 1;
		uint32_t permnt_disable_ap_dbgen     : 1;
		uint32_t permnt_disable_ap_niden     : 1;
		uint32_t permnt_disable_ap_spiden    : 1;
		uint32_t permnt_disable_ap_spniden   : 1;
		uint32_t permnt_disable_ap_spare0    : 1;
		uint32_t permnt_disable_ap_spare1    : 1;
		uint32_t final_disable_ehsm_debug    : 1;
		uint32_t final_disable_jtag_debug    : 1;
		uint32_t final_disable_mcp_debug     : 1;
		uint32_t final_disable_ap_dbgen_debug : 1;
		uint32_t final_disable_ap_niden_debug : 1;
		uint32_t final_disable_ap_spiden_debug : 1;
		uint32_t final_disable_ap_spniden_debug : 1;
		uint32_t final_disable_spare0_debug  : 1;
		uint32_t final_disable_spare1_debug  : 1;
		uint32_t remaining_enable_disable_spare0 : 4;
		uint32_t remaining_enable_disable_spare1 : 4;
		uint32_t reserved_30_31              : 2;
	} s;
	/* struct ody_ehsm_biu_lcs_debug_port_status_s cn; */
};
typedef union ody_ehsm_biu_lcs_debug_port_status ody_ehsm_biu_lcs_debug_port_status_t;

#define ODY_EHSM_BIU_LCS_DEBUG_PORT_STATUS ODY_EHSM_BIU_LCS_DEBUG_PORT_STATUS_FUNC()
static inline uint64_t ODY_EHSM_BIU_LCS_DEBUG_PORT_STATUS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_EHSM_BIU_LCS_DEBUG_PORT_STATUS_FUNC(void)
{
	return 0x80b000000114ll;
}

#define typedef_ODY_EHSM_BIU_LCS_DEBUG_PORT_STATUS ody_ehsm_biu_lcs_debug_port_status_t
#define bustype_ODY_EHSM_BIU_LCS_DEBUG_PORT_STATUS CSR_TYPE_NCB32b
#define basename_ODY_EHSM_BIU_LCS_DEBUG_PORT_STATUS "EHSM_BIU_LCS_DEBUG_PORT_STATUS"
#define device_bar_ODY_EHSM_BIU_LCS_DEBUG_PORT_STATUS 0x0 /* PF_BAR0 */
#define busnum_ODY_EHSM_BIU_LCS_DEBUG_PORT_STATUS 0
#define arguments_ODY_EHSM_BIU_LCS_DEBUG_PORT_STATUS -1, -1, -1, -1

/**
 * Register (NCB32b) ehsm_biu_remaining_config_status
 *
 * EHSM Biu Remaining Config Status Register
 * This is for EHSM-78
 */
union ody_ehsm_biu_remaining_config_status {
	uint32_t u;
	struct ody_ehsm_biu_remaining_config_status_s {
		uint32_t remain_enable_disable_ehsm_debug : 4;
		uint32_t remain_enable_disable_debug_jtag : 4;
		uint32_t remain_enable_disable_mcp_jtag : 4;
		uint32_t remain_enable_disable_ap_dbgen : 4;
		uint32_t remain_enable_disable_ap_niden : 4;
		uint32_t remain_enable_disable_ap_spiden : 4;
		uint32_t remain_enable_disable_ap_spniden : 4;
		uint32_t reserved_28_31              : 4;
	} s;
	/* struct ody_ehsm_biu_remaining_config_status_s cn; */
};
typedef union ody_ehsm_biu_remaining_config_status ody_ehsm_biu_remaining_config_status_t;

#define ODY_EHSM_BIU_REMAINING_CONFIG_STATUS ODY_EHSM_BIU_REMAINING_CONFIG_STATUS_FUNC()
static inline uint64_t ODY_EHSM_BIU_REMAINING_CONFIG_STATUS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_EHSM_BIU_REMAINING_CONFIG_STATUS_FUNC(void)
{
	return 0x80b00000012cll;
}

#define typedef_ODY_EHSM_BIU_REMAINING_CONFIG_STATUS ody_ehsm_biu_remaining_config_status_t
#define bustype_ODY_EHSM_BIU_REMAINING_CONFIG_STATUS CSR_TYPE_NCB32b
#define basename_ODY_EHSM_BIU_REMAINING_CONFIG_STATUS "EHSM_BIU_REMAINING_CONFIG_STATUS"
#define device_bar_ODY_EHSM_BIU_REMAINING_CONFIG_STATUS 0x0 /* PF_BAR0 */
#define busnum_ODY_EHSM_BIU_REMAINING_CONFIG_STATUS 0
#define arguments_ODY_EHSM_BIU_REMAINING_CONFIG_STATUS -1, -1, -1, -1

/**
 * Register (NCB32b) ehsm_biu_root_of_trust_status
 *
 * EHSM Biu Root Of Trust Status Register
 * This is for EHSM-78
 */
union ody_ehsm_biu_root_of_trust_status {
	uint32_t u;
	struct ody_ehsm_biu_root_of_trust_status_s {
		uint32_t disable_ecp                 : 1;
		uint32_t fips_mode                   : 1;
		uint32_t l0_fw_aes_key_read_disable  : 1;
		uint32_t uds_read_disable            : 1;
		uint32_t rkek_read_disable           : 1;
		uint32_t rkek_lock                   : 1;
		uint32_t uuid_lock                   : 1;
		uint32_t enable_puf                  : 1;
		uint32_t disable_ehsm_self_test      : 1;
		uint32_t disable_ehsm_crypto         : 1;
		uint32_t auth_cmd_mode               : 1;
		uint32_t kak0_binding_digest_provisioned : 1;
		uint32_t kak1_binding_digest_provisioned : 1;
		uint32_t kak2_binding_digest_provisioned : 1;
		uint32_t kak3_binding_digest_provisioned : 1;
		uint32_t l0_fw_aes_key0_provisioned  : 1;
		uint32_t l0_fw_aes_key1_provisioned  : 1;
		uint32_t l0_fw_aes_key2_provisioned  : 1;
		uint32_t l0_fw_aes_key3_provisioned  : 1;
		uint32_t uds_provisioned             : 1;
		uint32_t rkek_provisioned            : 1;
		uint32_t reserved_21_23              : 3;
		uint32_t ehsm_panic_state            : 1;
		uint32_t ebg_start_up_health_test_fail : 1;
		uint32_t ebg_start_up_health_test_done : 1;
		uint32_t ebg_continuous_health_test_fail : 1;
		uint32_t reserved_28_31              : 4;
	} s;
	/* struct ody_ehsm_biu_root_of_trust_status_s cn; */
};
typedef union ody_ehsm_biu_root_of_trust_status ody_ehsm_biu_root_of_trust_status_t;

#define ODY_EHSM_BIU_ROOT_OF_TRUST_STATUS ODY_EHSM_BIU_ROOT_OF_TRUST_STATUS_FUNC()
static inline uint64_t ODY_EHSM_BIU_ROOT_OF_TRUST_STATUS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_EHSM_BIU_ROOT_OF_TRUST_STATUS_FUNC(void)
{
	return 0x80b00000011cll;
}

#define typedef_ODY_EHSM_BIU_ROOT_OF_TRUST_STATUS ody_ehsm_biu_root_of_trust_status_t
#define bustype_ODY_EHSM_BIU_ROOT_OF_TRUST_STATUS CSR_TYPE_NCB32b
#define basename_ODY_EHSM_BIU_ROOT_OF_TRUST_STATUS "EHSM_BIU_ROOT_OF_TRUST_STATUS"
#define device_bar_ODY_EHSM_BIU_ROOT_OF_TRUST_STATUS 0x0 /* PF_BAR0 */
#define busnum_ODY_EHSM_BIU_ROOT_OF_TRUST_STATUS 0
#define arguments_ODY_EHSM_BIU_ROOT_OF_TRUST_STATUS -1, -1, -1, -1

/**
 * Register (NCB32b) ehsm_biu_shadow_reg_status
 *
 * EHSM Biu Shadow Reg Status Register
 */
union ody_ehsm_biu_shadow_reg_status {
	uint32_t u;
	struct ody_ehsm_biu_shadow_reg_status_s {
		uint32_t lcs_phase1_valid            : 1;
		uint32_t lcs_all_valid               : 1;
		uint32_t cm3_sleeping                : 1;
		uint32_t cm3_sleepdeep               : 1;
		uint32_t cm3_sram_sd                 : 1;
		uint32_t vdd_gate                    : 1;
		uint32_t clk_gate                    : 1;
		uint32_t cm3_rom_fail                : 1;
		uint32_t cm3_ram_fail                : 1;
		uint32_t spad_mem_fail               : 1;
		uint32_t reserved_10                 : 1;
		uint32_t dormant_enable              : 1;
		uint32_t dormant_activation_status   : 1;
		uint32_t puf_key_aging_test_done     : 1;
		uint32_t puf_key_aging_test_error    : 1;
		uint32_t puf_key_aging_test_unavailable : 1;
		uint32_t puf_sysrdyp_timeout         : 1;
		uint32_t puf_sysrdyp_fall            : 1;
		uint32_t otp_sysrdyp_timeout         : 1;
		uint32_t otp_sysrdyp_fall            : 1;
		uint32_t reserved_20_31              : 12;
	} s;
	/* struct ody_ehsm_biu_shadow_reg_status_s cn; */
};
typedef union ody_ehsm_biu_shadow_reg_status ody_ehsm_biu_shadow_reg_status_t;

#define ODY_EHSM_BIU_SHADOW_REG_STATUS ODY_EHSM_BIU_SHADOW_REG_STATUS_FUNC()
static inline uint64_t ODY_EHSM_BIU_SHADOW_REG_STATUS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_EHSM_BIU_SHADOW_REG_STATUS_FUNC(void)
{
	return 0x80b000000100ll;
}

#define typedef_ODY_EHSM_BIU_SHADOW_REG_STATUS ody_ehsm_biu_shadow_reg_status_t
#define bustype_ODY_EHSM_BIU_SHADOW_REG_STATUS CSR_TYPE_NCB32b
#define basename_ODY_EHSM_BIU_SHADOW_REG_STATUS "EHSM_BIU_SHADOW_REG_STATUS"
#define device_bar_ODY_EHSM_BIU_SHADOW_REG_STATUS 0x0 /* PF_BAR0 */
#define busnum_ODY_EHSM_BIU_SHADOW_REG_STATUS 0
#define arguments_ODY_EHSM_BIU_SHADOW_REG_STATUS -1, -1, -1, -1

/**
 * Register (NCB32b) ehsm_biu_uuid_0
 *
 * EHSM Biu Uuid 0 Register
 * This register saves bit 31~0 of UUID.
 * This is for EHSM-32.
 */
union ody_ehsm_biu_uuid_0 {
	uint32_t u;
	struct ody_ehsm_biu_uuid_0_s {
		uint32_t uuid_0                      : 32;
	} s;
	/* struct ody_ehsm_biu_uuid_0_s cn; */
};
typedef union ody_ehsm_biu_uuid_0 ody_ehsm_biu_uuid_0_t;

#define ODY_EHSM_BIU_UUID_0 ODY_EHSM_BIU_UUID_0_FUNC()
static inline uint64_t ODY_EHSM_BIU_UUID_0_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_EHSM_BIU_UUID_0_FUNC(void)
{
	return 0x80b000000104ll;
}

#define typedef_ODY_EHSM_BIU_UUID_0 ody_ehsm_biu_uuid_0_t
#define bustype_ODY_EHSM_BIU_UUID_0 CSR_TYPE_NCB32b
#define basename_ODY_EHSM_BIU_UUID_0 "EHSM_BIU_UUID_0"
#define device_bar_ODY_EHSM_BIU_UUID_0 0x0 /* PF_BAR0 */
#define busnum_ODY_EHSM_BIU_UUID_0 0
#define arguments_ODY_EHSM_BIU_UUID_0 -1, -1, -1, -1

/**
 * Register (NCB32b) ehsm_biu_uuid_1
 *
 * EHSM Biu Uuid 1 Register
 * This register saves bit 63~32 of UUID.
 * This is for EHSM-32.
 */
union ody_ehsm_biu_uuid_1 {
	uint32_t u;
	struct ody_ehsm_biu_uuid_1_s {
		uint32_t uuid_1                      : 32;
	} s;
	/* struct ody_ehsm_biu_uuid_1_s cn; */
};
typedef union ody_ehsm_biu_uuid_1 ody_ehsm_biu_uuid_1_t;

#define ODY_EHSM_BIU_UUID_1 ODY_EHSM_BIU_UUID_1_FUNC()
static inline uint64_t ODY_EHSM_BIU_UUID_1_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_EHSM_BIU_UUID_1_FUNC(void)
{
	return 0x80b000000108ll;
}

#define typedef_ODY_EHSM_BIU_UUID_1 ody_ehsm_biu_uuid_1_t
#define bustype_ODY_EHSM_BIU_UUID_1 CSR_TYPE_NCB32b
#define basename_ODY_EHSM_BIU_UUID_1 "EHSM_BIU_UUID_1"
#define device_bar_ODY_EHSM_BIU_UUID_1 0x0 /* PF_BAR0 */
#define busnum_ODY_EHSM_BIU_UUID_1 0
#define arguments_ODY_EHSM_BIU_UUID_1 -1, -1, -1, -1

/**
 * Register (NCB32b) ehsm_biu_uuid_2
 *
 * EHSM Biu Uuid 2 Register
 * This register saves bit 95~64 of UUID.
 * This is for EHSM-32.
 */
union ody_ehsm_biu_uuid_2 {
	uint32_t u;
	struct ody_ehsm_biu_uuid_2_s {
		uint32_t uuid_2                      : 32;
	} s;
	/* struct ody_ehsm_biu_uuid_2_s cn; */
};
typedef union ody_ehsm_biu_uuid_2 ody_ehsm_biu_uuid_2_t;

#define ODY_EHSM_BIU_UUID_2 ODY_EHSM_BIU_UUID_2_FUNC()
static inline uint64_t ODY_EHSM_BIU_UUID_2_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_EHSM_BIU_UUID_2_FUNC(void)
{
	return 0x80b00000010cll;
}

#define typedef_ODY_EHSM_BIU_UUID_2 ody_ehsm_biu_uuid_2_t
#define bustype_ODY_EHSM_BIU_UUID_2 CSR_TYPE_NCB32b
#define basename_ODY_EHSM_BIU_UUID_2 "EHSM_BIU_UUID_2"
#define device_bar_ODY_EHSM_BIU_UUID_2 0x0 /* PF_BAR0 */
#define busnum_ODY_EHSM_BIU_UUID_2 0
#define arguments_ODY_EHSM_BIU_UUID_2 -1, -1, -1, -1

/**
 * Register (NCB32b) ehsm_biu_uuid_status
 *
 * EHSM Biu Uuid Status Register
 * This register saves the status of UUID.
 * This is for EHSM-32
 */
union ody_ehsm_biu_uuid_status {
	uint32_t u;
	struct ody_ehsm_biu_uuid_status_s {
		uint32_t correction_done             : 1;
		uint32_t uncorrectable_error         : 1;
		uint32_t no_correction               : 1;
		uint32_t reserved_3_31               : 29;
	} s;
	/* struct ody_ehsm_biu_uuid_status_s cn; */
};
typedef union ody_ehsm_biu_uuid_status ody_ehsm_biu_uuid_status_t;

#define ODY_EHSM_BIU_UUID_STATUS ODY_EHSM_BIU_UUID_STATUS_FUNC()
static inline uint64_t ODY_EHSM_BIU_UUID_STATUS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_EHSM_BIU_UUID_STATUS_FUNC(void)
{
	return 0x80b0000000fcll;
}

#define typedef_ODY_EHSM_BIU_UUID_STATUS ody_ehsm_biu_uuid_status_t
#define bustype_ODY_EHSM_BIU_UUID_STATUS CSR_TYPE_NCB32b
#define basename_ODY_EHSM_BIU_UUID_STATUS "EHSM_BIU_UUID_STATUS"
#define device_bar_ODY_EHSM_BIU_UUID_STATUS 0x0 /* PF_BAR0 */
#define busnum_ODY_EHSM_BIU_UUID_STATUS 0
#define arguments_ODY_EHSM_BIU_UUID_STATUS -1, -1, -1, -1

/**
 * Register (NCB32b) ehsm_side_sensor_status
 *
 * EHSM CPC Side Sensor Status Register
 */
union ody_ehsm_side_sensor_status {
	uint32_t u;
	struct ody_ehsm_side_sensor_status_s {
		uint32_t sensors                     : 6;
		uint32_t reserved_6_7                : 2;
		uint32_t sensors_pre_qualifier       : 6;
		uint32_t reserved_14_15              : 2;
		uint32_t sensors_enable_fuse         : 7;
		uint32_t reserved_23                 : 1;
		uint32_t sticky_status               : 4;
		uint32_t reserved_28_31              : 4;
	} s;
	/* struct ody_ehsm_side_sensor_status_s cn; */
};
typedef union ody_ehsm_side_sensor_status ody_ehsm_side_sensor_status_t;

#define ODY_EHSM_SIDE_SENSOR_STATUS ODY_EHSM_SIDE_SENSOR_STATUS_FUNC()
static inline uint64_t ODY_EHSM_SIDE_SENSOR_STATUS_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_EHSM_SIDE_SENSOR_STATUS_FUNC(void)
{
	return 0x80b000004028ll;
}

#define typedef_ODY_EHSM_SIDE_SENSOR_STATUS ody_ehsm_side_sensor_status_t
#define bustype_ODY_EHSM_SIDE_SENSOR_STATUS CSR_TYPE_NCB32b
#define basename_ODY_EHSM_SIDE_SENSOR_STATUS "EHSM_SIDE_SENSOR_STATUS"
#define device_bar_ODY_EHSM_SIDE_SENSOR_STATUS 0x0 /* PF_BAR0 */
#define busnum_ODY_EHSM_SIDE_SENSOR_STATUS 0
#define arguments_ODY_EHSM_SIDE_SENSOR_STATUS -1, -1, -1, -1

/**
 * Register (NCB32b) ehsm_sw_sensor
 *
 * EHSM CPC Software Sensor Register
 */
union ody_ehsm_sw_sensor {
	uint32_t u;
	struct ody_ehsm_sw_sensor_s {
		uint32_t sw_sense                    : 1;
		uint32_t reserved_1_31               : 31;
	} s;
	/* struct ody_ehsm_sw_sensor_s cn; */
};
typedef union ody_ehsm_sw_sensor ody_ehsm_sw_sensor_t;

#define ODY_EHSM_SW_SENSOR ODY_EHSM_SW_SENSOR_FUNC()
static inline uint64_t ODY_EHSM_SW_SENSOR_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_EHSM_SW_SENSOR_FUNC(void)
{
	return 0x80b000004020ll;
}

#define typedef_ODY_EHSM_SW_SENSOR ody_ehsm_sw_sensor_t
#define bustype_ODY_EHSM_SW_SENSOR CSR_TYPE_NCB32b
#define basename_ODY_EHSM_SW_SENSOR "EHSM_SW_SENSOR"
#define device_bar_ODY_EHSM_SW_SENSOR 0x0 /* PF_BAR0 */
#define busnum_ODY_EHSM_SW_SENSOR 0
#define arguments_ODY_EHSM_SW_SENSOR -1, -1, -1, -1

#endif /* __ODY_CSRS_EHSM_H__ */
