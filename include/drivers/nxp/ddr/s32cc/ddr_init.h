/*
 * Copyright 2020-2022,2025-2026 NXP
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef DDR_INIT_H
#define DDR_INIT_H

#include <stdlib.h>
#include <string.h>
#include "ddr_utils.h"

#define APBONLY_MICRORESET   0x40380420U
#define MASTER_PLLCTRL1      0x403816F0U
#define MASTER_PLLTESTMODE   0x40381708U
#define MASTER_PLLCTRL4      0x4038171CU
#define MASTER_PLLCTRL2      0x403816DCU

#define MASTER_CALOFFSET     0x40381514U
#define MASTER_CALMISC2      0x40381660U

#define CALDRV               0x9U
#define CALDRV_OFFSET        0x6U
#define CALDRV2_OFFSET       0xAU
#define CALDRV_MASK          0x3FC0U

#define CALMISC2             0x1U
#define CALMISC2_OFFSET      0xDU

#define MICROCONT_MUX_SEL    0x40380400U
#define LOCK_CSR_ACCESS      0x00000001U
#define UNLOCK_CSR_ACCESS    0x00000000U

#define APBONLY_RESET_TO_MICRO_MASK		0x00000008U
#define APBONLY_STALL_TO_MICRO_MASK		0x00000001U
#define APBONLY_RESET_STALL_MASK	APBONLY_RESET_TO_MICRO_MASK | \
	APBONLY_STALL_TO_MICRO_MASK
#define APBONLY_MICRORESET_CLR_MASK	    0x00000000U

#define PLLCTRL1_VALUE       0x00000021U
#define PLLTESTMODE_VALUE    0x00000024U
#define PLLCTRL4_VALUE       0x0000017FU

static inline uint32_t pllctrl2_value(uint16_t freq)
{
	if (freq < 469U) {
		return 0x7U;
	} else if (freq < 625U) {
		return 0x6U;
	} else if (freq <= 937U) {
		return 0xbU;
	} else if (freq < 1250U) {
		return 0xaU;
	} else {
		return 0x19U;
	}
}

/* Enum for DRAM Type */
enum dram_type {
	DDR3L = 1,
	LPDDR4
};

struct regconf {
	uint32_t addr;
	uint32_t data;
};

struct regconf_16 {
	uint32_t addr;
	uint16_t data;
} __packed;

struct dqconf {
	uint32_t addr;
	uint8_t data;
} __packed;

struct ddrss_config {
	uint8_t memory_type;
	uint16_t frequency;
	struct regconf *ddrc;
	size_t ddrc_size;
	struct dqconf *dq_swap;
	size_t dq_swap_size;
	struct regconf_16 *phy;
	size_t phy_size;
	struct regconf_16 *pie;
	size_t pie_size;
	uint16_t *imem_1d;
	size_t imem_1d_size;
	uint16_t *dmem_1d;
	size_t dmem_1d_size;
	uint16_t *imem_2d;
	size_t imem_2d_size;
	uint16_t *dmem_2d;
	size_t dmem_2d_size;
	uint32_t *phy_csr;
	size_t phy_csr_size;
	uint32_t *ddrc_csr;
	size_t ddrc_csr_size;
};

struct ddr_fw_header {
	uint8_t header_version;
	char ddrt_version[8];
	char soc_name[16];
	char fw_version[16];
	char reserved[23];
};

struct ddr_fw_layout {
	uint8_t memory_type;
	uint16_t frequency;
	uint16_t ddrc_size;
	uint16_t dq_swap_size;
	uint16_t phy_size;
	uint16_t pie_size;
	uint16_t imem_1d_size;
	uint16_t dmem_1d_size;
	uint16_t imem_2d_size;
	uint16_t dmem_2d_size;
	uint16_t phy_csr_size;
	uint16_t ddrc_csr_size;
	uint32_t ddrc_offset;
	uint32_t dq_swap_offset;
	uint32_t phy_offset;
	uint32_t pie_offset;
	uint32_t imem_1d_offset;
	uint32_t dmem_1d_offset;
	uint32_t imem_2d_offset;
	uint32_t dmem_2d_offset;
	uint32_t phy_csr_offset;
	uint32_t ddrc_csr_offset;
};

uint32_t ddr_init_cfg(const struct ddrss_config *config);

/*
 * Full initialization of DDR SubSystem.
 * @param load_from - memory address from where imem/dmem binary will be loaded.
 * @return - error code, 0 if init succeeds, non-zero on error.
 */
uint32_t ddr_init(uintptr_t load_from);

/*
 * Map DDR-related memory regions before DDR initialization.
 *
 * @return - error code, 0 if succeeds, non-zero on error.
 */
int plat_ddr_mmap_setup(void);

/*
 * Writes the data associated for each address.
 *
 * @param size - size of the array, number of elements
 * @param cfg - array of configuration elements
 * @return - error code, 0 if init succeeds, non-zero on error.
 */
uint32_t load_register_cfg(size_t size, const struct regconf cfg[]);

/*
 * Writes the data associated for each address. Similar to
 * @load_register_cfg but uses 16bit data elements for memory
 * usage optimization.
 *
 * @param size - size of the array, number of elements
 * @param cfg - array of configuration elements
 * @return - error code, 0 if init succeeds, non-zero on error.
 */
uint32_t load_register_cfg_16(size_t size, const struct regconf_16 cfg[]);

/*
 * Writes the data associated for each address. Similar to
 * @load_register_cfg but uses 8bit data elements for memory
 * usage optimization.
 *
 * @param size - size of the array, number of elements
 * @param cfg - array of configuration elements
 * @return - error code, 0 if init succeeds, non-zero on error.
 */
uint32_t load_dq_cfg(size_t size, const struct dqconf cfg[]);

/*
 * Updates PHY internal PLL settings.
 * @param frequency - selected DDR frequency
 */
void set_optimal_pll(uint16_t frequency);

#endif /* DDR_INIT_H */
