/***********************license start***********************************
* Copyright (C) 2021-2026 Marvell.
* SPDX-License-Identifier: BSD-3-Clause
* https://spdx.org/licenses
***********************license end**************************************/
#ifndef __ODY_CSR_H__
#define __ODY_CSR_H__

/**
 * @file
 *
 * Functions and macros for accessing Cavium CSRs.
 *
 * <hr>$Revision: 49448 $<hr>
 *
 * @defgroup csr CSR support
 * @{
 */

/**
 * Possible CSR bus types
 */
typedef enum {
	CSR_TYPE_DAB,            /**< External debug 64bit CSR */
	CSR_TYPE_DAB32b,         /**< External debug 32bit CSR */
	CSR_TYPE_MDSB,           /**< CN96XX: Memory Diagnostic Serial Bus?, not memory mapped */
	CSR_TYPE_NCB,            /**< Fast 64bit CSR */
	CSR_TYPE_NCB32b,         /**< Fast 32bit CSR */
	CSR_TYPE_PCCBR,
	CSR_TYPE_PCCPF,
	CSR_TYPE_PCCVF,
	CSR_TYPE_PCICONFIGRC,    /**< PCIe config address (RC mode) */
	CSR_TYPE_PCICONFIGEP,    /**< PCIe config address (EP mode) */
	CSR_TYPE_PCICONFIGEP_SHADOW, /**< CN96XX: PCIEP register invisible to host, not memory mapped */
	CSR_TYPE_PCICONFIGEPVF,  /**< CN96XX: PCIEP registers only on vertain PEMs, not memory mapped */
	CSR_TYPE_PEXP,           /**< PCIe BAR 0 address only */
	CSR_TYPE_PEXP_NCB,       /**< NCB-direct and PCIe BAR0 address */
	CSR_TYPE_RSL,            /**< Slow 64bit CSR */
	CSR_TYPE_RSL32b,         /**< Slow 32bit CSR */
	CSR_TYPE_RVU_PF_BAR0,    /**< Index into RVU PF BAR0 */
	CSR_TYPE_RVU_PF_BAR2,    /**< Index into RVU PF BAR2 */
	CSR_TYPE_RVU_PFVF_BAR2,  /**< Index into RVU PF or VF BAR2 */
	CSR_TYPE_RVU_VF_BAR2,    /**< Index into RVU VF BAR2 */
	CSR_TYPE_SYSREG,         /**< Core system register */
} ody_csr_type_t;

#define CSR_DB_MAX_PARAM 6
typedef struct __attribute__ ((packed)) {
	uint32_t        name_index : 20;/**< Index into __ody_csr_db_string where the name is */
	uint32_t        width : 4;      /**< CSR width in bytes */
	ody_csr_type_t  type : 8;       /**< Enum type from above */
	uint16_t        base_index;     /**< Index into __ody_csr_db_number where the base address is */
	uint16_t        field_index;    /**< Index into __ody_csr_db_fieldList where the fields start */
	uint16_t        range_index;    /**< Index into __ody_csr_db_range where the range is */
	uint16_t        param_inc_index; /**< Index into __ody_csr_db_number where the param multiplier is */
} __ody_csr_db_type_t;

typedef struct __attribute__ ((packed)) {
	uint32_t        name_index : 20;/**< Index into __ody_csr_db_string where the name is */
	uint32_t        start_bit : 6;  /**< LSB of the field */
	uint32_t        stop_bit : 6;   /**< MSB of the field */
} __ody_csr_db_field_t;

typedef struct {
	uint32_t model;
	uint32_t offset;
} __ody_csr_db_map_t;

struct ody_readline_tab;
extern uint64_t ody_sysreg_read(int core, uint64_t regnum);
extern void ody_sysreg_write(int core, uint64_t regnum, uint64_t value);

#ifndef ODY_BUILD_HOST

/**
 * Read a value from a CSR. Normally this function should not be
 * used directly. Instead use the macro CSR_READ that fills
 * in the parameters to this function for you.
 *
 * @param type    Bus type the CSR is on
 * @param busnum  Bus number the CSR is on
 * @param size    Width of the CSR in bytes
 * @param address The address of the CSR
 *
 * @return The value of the CSR
 */
static inline uint64_t ody_csr_read(ody_csr_type_t type, int busnum, int size, uint64_t address) __attribute__ ((always_inline));
static inline uint64_t ody_csr_read(ody_csr_type_t type, int busnum, int size, uint64_t address)
{
	extern uint64_t __ody_csr_read_slow(ody_csr_type_t type, int busnum, int size, uint64_t address);

	switch (type) {
	case CSR_TYPE_DAB:
	case CSR_TYPE_DAB32b:
	case CSR_TYPE_NCB:
	case CSR_TYPE_NCB32b:
	case CSR_TYPE_PEXP_NCB:
	case CSR_TYPE_RSL:
	case CSR_TYPE_RSL32b:
	case CSR_TYPE_RVU_PF_BAR0:
	case CSR_TYPE_RVU_PF_BAR2:
	case CSR_TYPE_RVU_PFVF_BAR2:
	case CSR_TYPE_RVU_VF_BAR2:
		/* Note: This code assume a 1:1 mapping of all of address space
		 * It is designed to run with the MMU disabled
		 */
		switch (size) {
		case 1:
			return *(volatile uint8_t *)address;
		case 2:
			return ody_le16_to_cpu(*(volatile uint16_t *)address);
		case 4:
			return ody_le32_to_cpu(*(volatile uint32_t *)address);
		default:
			return ody_le64_to_cpu(*(volatile uint64_t *)address);
		}
	default:
		return __ody_csr_read_slow(type, busnum, size, address);
	}
}


/**
 * Wrate a value to a CSR. Normally this function should not be
 * used directly. Instead use the macro CSR_WRITE that fills
 * in the parameters to this function for you.
 *
 * @param type    Bus type the CSR is on
 * @param busnum  Bus number the CSR is on
 * @param size    Width of the CSR in bytes
 * @param address The address of the CSR
 * @param value   Value to write to the CSR
 */
static inline void ody_csr_write(ody_csr_type_t type, int busnum, int size, uint64_t address, uint64_t value) __attribute__ ((always_inline));
static inline void ody_csr_write(ody_csr_type_t type, int busnum, int size, uint64_t address, uint64_t value)
{
	extern void __ody_csr_write_slow(ody_csr_type_t type, int busnum, int size, uint64_t address, uint64_t value);

	switch (type) {
	case CSR_TYPE_DAB:
	case CSR_TYPE_DAB32b:
	case CSR_TYPE_NCB:
	case CSR_TYPE_NCB32b:
	case CSR_TYPE_PEXP_NCB:
	case CSR_TYPE_RSL:
	case CSR_TYPE_RSL32b:
	case CSR_TYPE_RVU_PF_BAR0:
	case CSR_TYPE_RVU_PF_BAR2:
	case CSR_TYPE_RVU_PFVF_BAR2:
	case CSR_TYPE_RVU_VF_BAR2:
		/* Note: This code assume a 1:1 mapping of all of address space.
		 * It is designed to run with the MMU disabled
		 */
		switch (size) {
		case 1:
			*(volatile uint8_t *)address = value;
			break;
		case 2:
			*(volatile uint16_t *)address = ody_cpu_to_le16(value);
			break;
		case 4:
			*(volatile uint32_t *)address = ody_cpu_to_le32(value);
			break;
		default:
			*(volatile uint64_t *)address = ody_cpu_to_le64(value);
			break;
		}
		break;
	default:
		__ody_csr_write_slow(type, busnum, size, address, value);
	}
}

#else
#define ody_csr_read thunder_remote_read_csr
#define ody_csr_write thunder_remote_write_csr
#endif

/**
 * This macro makes it easy to define a variable of the correct
 * type for a CSR.
 */
#define CSR_DEFINE(name, csr) typedef_##csr name

/**
 * This macro makes it easy to define a variable and initialize it
 * with a CSR.
 */
#define CSR_INIT(name, csr) typedef_##csr name = {.u = ody_csr_read(bustype_##csr, busnum_##csr, sizeof(typedef_##csr), csr)}

/**
 * Macro to read a CSR
 */
#define CSR_READ(csr) ody_csr_read(bustype_##csr, busnum_##csr, sizeof(typedef_##csr), csr)

/**
 * Macro to write a CSR
 */
#define CSR_WRITE(csr, value) ody_csr_write(bustype_##csr, busnum_##csr, sizeof(typedef_##csr), csr, value)

/**
 * Macro to make a read, modify, and write sequence easy. The "code_block"
 * should be replaced with a C code block or a comma separated list of
 * "name.s.field = value", without the quotes.
 */
#define CSR_MODIFY(name, csr, code_block) do { \
	uint64_t _tmp_address = csr; \
	typedef_##csr name = {.u = ody_csr_read(bustype_##csr, busnum_##csr, sizeof(typedef_##csr), _tmp_address)}; \
	code_block; \
	ody_csr_write(bustype_##csr, busnum_##csr, sizeof(typedef_##csr), _tmp_address, name.u); \
	} while (0)

/**
 * This macro spins on a field waiting for it to reach a value. It
 * is common in code to need to wait for a specific field in a CSR
 * to match a specific value. Conceptually this macro expands to:
 *
 * 1) read csr at "address" with a csr typedef of "type"
 * 2) Check if ("type".s."field" "op" "value")
 * 3) If #2 isn't true loop to #1 unless too much time has passed.
 */
#define CSR_WAIT_FOR_FIELD(csr, field, op, value, timeout_usec) \
({int result;                                                       \
do {                                                                \
	uint64_t done = ody_clock_get_count(CLOCK_TIME) + (uint64_t)timeout_usec * \
	ody_clock_get_rate(CLOCK_TIME) / 1000000;                    \
	typedef_##csr c;                                             \
	uint64_t _tmp_address = csr;                                 \
	while (1) {                                                  \
		c.u = ody_csr_read(bustype_##csr, busnum_##csr, sizeof(typedef_##csr), _tmp_address); \
		if ((c.s.field) op(value)) {                          \
			result = 0;                                   \
			break;                                        \
		} else if (ody_clock_get_count(CLOCK_TIME) > done) {  \
			result = -1;                                  \
			break;                                        \
		} else                                                \
			ody_wait_usec(1);                             \
	}                                                             \
} while (0);                                                          \
result; })

/**
 * This macro spins on a field waiting for it to reach a value. It
 * is common in code to need to wait for a specific field in a CSR
 * to match a specific value. Conceptually this macro expands to:
 *
 * 1) read csr at "address" with a csr typedef of "type"
 * 2) Check if ("type".s."field" "op" "value")
 * 3) If #2 isn't true loop to #1 unless too much time has passed.
 */
#define CSR_WAIT_FOR_FIELD_ACTUAL(csr, field, op, value, timeout_usec) \
({int result;                                                       \
do {                                                                \
	uint64_t _start_time = ody_clock_get_count(CLOCK_TIME);     \
	uint64_t done = _start_time + (uint64_t)timeout_usec *      \
	ody_clock_get_rate(CLOCK_TIME) / 1000000;                   \
	typedef_##csr c;                                            \
	uint64_t _tmp_address = csr;                                \
	uint64_t _current_time;                                     \
	while (1) {                                                 \
		c.u = ody_csr_read(bustype_##csr, busnum_##csr, sizeof(typedef_##csr), _tmp_address); \
		_current_time = ody_clock_get_count(CLOCK_TIME);    \
		if ((c.s.field) op(value)) {                        \
			result = _current_time - _start_time;       \
			break;                                      \
		} else if (_current_time > done) {                  \
			result = -1;                                \
			break;                                      \
		} else                                              \
			ody_thread_yield();                         \
		}                                                   \
} while (0);                                                        \
result; })

/**
 * This macro spins on a field waiting for it to reach a value. It
 * is common in code to need to wait for a specific field in a CSR
 * to match a specific value. Conceptually this macro expands to:
 *
 * 1) read csr at "address" with a csr typedef of "type"
 * 2) Check if ("type"."chip"."field" "op" "value")
 * 3) If #2 isn't true loop to #1 unless too much time has passed.
 *
 * Note that usage of this macro should be avoided. When future chips
 * change bit locations, the compiler will not catch those changes
 * with this macro. Changes silently do the wrong thing at runtime.
 */
#define CSR_WAIT_FOR_CHIP_FIELD(csr, chip, field, op, value, timeout_usec) \
({int result;                                                        \
do {                                                                \
	uint64_t done = ody_clock_get_count(CLOCK_TIME) + (uint64_t)timeout_usec * \
	ody_clock_get_rate(CLOCK_TIME) / 1000000;                    \
	typedef_##csr c;                                             \
	uint64_t _tmp_address = csr;                                 \
	while (1) {                                                  \
		c.u = ody_csr_read(bustype_##csr, busnum_##csr, sizeof(typedef_##csr), _tmp_address); \
		if ((c.chip.field) op(value)) {                      \
			result = 0;                                  \
			break;                                       \
		} else if (ody_clock_get_count(CLOCK_TIME) > done) { \
			result = -1;                                 \
			break;                                       \
		} else                                               \
			ody_wait_usec(1);                            \
	 }                                                           \
} while (0);                                                         \
result; })

/** @} */
#endif
