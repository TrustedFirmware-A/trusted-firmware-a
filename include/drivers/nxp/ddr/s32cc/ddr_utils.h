/*
 * Copyright 2020-2025 NXP
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef DDR_UTILS_H
#define DDR_UTILS_H

#include <stdbool.h>
#include <stdlib.h>

#include <lib/mmio.h>

#include <platform_def.h>

/* Possible errors */
#define NO_ERR              0x00000000U
#define TIMEOUT_ERR         0x00000002U
#define TRAINING_FAILED     0x00000003U
#define BITFIELD_EXCEEDED   0x00000004U
#define DEASSERT_FAILED	    0x00000005U

/* DDRC related */
#define DDRC_BASE                        0x403C0000U
#define OFFSET_DDRC_SWCTL                0x320U
#define OFFSET_DDRC_DFIMISC              0x1B0U
#define OFFSET_DDRC_PWRCTL               0x30U
#define OFFSET_DDRC_SWSTAT               0x324U
#define OFFSET_DDRC_DFITMG0              0x190U
#define OFFSET_DDRC_DBG1                 0x304U

/* DDRC masks and values */
#define MSTR_LPDDR4_VAL		0x20U
#define SWSTAT_SW_DONE		1U
#define SWSTAT_SW_NOT_DONE	0U
#define SWCTL_SWDONE_DONE	0x1U
#define SWCTL_SWDONE_ENABLE	0x0U
#define SWSTAT_SWDONE_ACK_MASK	GENMASK_32(1U, 0U)

#define MSTR_DRAM_MASK		GENMASK_32(5U, 0U)
#define MSTR_ACT_RANKS_MASK GENMASK_32(25U, 24U)
#define MSTR_DUAL_RANK_VAL  0x3000000U
#define MSTR_BURST_RDWR_POS 16
#define MSTR_BURST_RDWR_MASK 0xFU
#define DFITMG0_PHY_CLK_POS  15
#define DFITMG0_PHY_CLK_MASK 0x1U

#define DDR_SS_AXI_PARITY_ENABLE_MASK	GENMASK_32(12U, 4U)
#define DDR_SS_AXI_PARITY_TYPE_MASK	GENMASK_32(24U, 16U)
#define DDR_SS_DFI_1_ENABLED		0x1U
#define DBG1_DISABLE_DE_QUEUEING	0x0U
#define RFSHCTL3_DISABLE_AUTO_REFRESH	0x1U

#define PWRCTL_POWER_DOWN_ENABLE_MASK		BIT_32(1)
#define PWRCTL_SELF_REFRESH_ENABLE_MASK		BIT_32(0)
#define PWRCTL_EN_DFI_DRAM_CLOCK_DIS_MASK	BIT_32(3)
#define DFIMISC_DFI_INIT_COMPLETE_EN_MASK	BIT_32(0)

#define	TRAINING_OK_MSG			0x07U
#define	TRAINING_FAILED_MSG		0xFFU

#define	APBONLY_DCTWRITEPROT_ACK_EN              0U
#define	APBONLY_DCTWRITEPROT_ACK_DIS             1U

/* PHY related */
#define DDR_PHYA_APBONLY_UCTSHADOWREGS      0x40380404U
#define UCT_WRITE_PROT_SHADOW_MASK          0x1U
#define DDR_PHYA_DCTWRITEPROT               0x4038040CU
#define DDR_PHYA_APBONLY_UCTWRITEONLYSHADOW 0x40380410U
#define OFFSET_DDRC_RFSHCTL3                0x60U
#define UCT_WRITE_PROT_SHADOW_ACK           0x0U
#define TXDQDLY_COARSE                      6U
#define DDRPHY_PIPE_DFI_MISC                1U
#define ARDPTR_INITVAL_ADDR                 0x40381494U

#define CDD_CHA_RR_1_0    0x403B004CU
#define CDD_CHA_RR_0_1    0x403B004DU
#define CDD_CHA_RW_1_1    0x403B0050U
#define CDD_CHA_RW_1_0    0x403B0051U
#define CDD_CHA_RW_0_1    0x403B0054U
#define CDD_CHA_RW_0_0    0x403B0055U
#define CDD_CHA_WR_1_1    0x403B0058U
#define CDD_CHA_WR_1_0    0x403B0059U
#define CDD_CHA_WR_0_1    0x403B005CU
#define CDD_CHA_WR_0_0    0x403B005DU
#define CDD_CHA_WW_1_0    0x403B0060U
#define CDD_CHA_WW_0_1    0x403B0061U

#define CDD_CHB_RR_1_0    0x403B00B1U
#define CDD_CHB_RR_0_1    0x403B00B4U
#define CDD_CHB_RW_1_1    0x403B00B5U
#define CDD_CHB_RW_1_0    0x403B00B8U
#define CDD_CHB_RW_0_1    0x403B00B9U
#define CDD_CHB_RW_0_0    0x403B00BCU
#define CDD_CHB_WR_1_1    0x403B00BDU
#define CDD_CHB_WR_1_0    0x403B00C0U
#define CDD_CHB_WR_0_1    0x403B00C1U
#define CDD_CHB_WR_0_0    0x403B00C4U
#define CDD_CHB_WW_1_0    0x403B00C5U
#define CDD_CHB_WW_0_1    0x403B00C8U

#define CDD_CHA_RR_1_0_DDR3   0x403B0059U
#define CDD_CHA_RR_0_1_DDR3   0x403B0060U
#define CDD_CHA_RW_1_1_DDR3   0x403B008DU
#define CDD_CHA_RW_1_0_DDR3   0x403B0090U
#define CDD_CHA_RW_0_1_DDR3   0x403B0095U
#define CDD_CHA_RW_0_0_DDR3   0x403B0098U
#define CDD_CHA_WR_1_1_DDR3   0x403B00ADU
#define CDD_CHA_WR_1_0_DDR3   0x403B00B0U
#define CDD_CHA_WR_0_1_DDR3   0x403B00B5U
#define CDD_CHA_WR_0_0_DDR3   0x403B00B8U
#define CDD_CHA_WW_1_0_DDR3   0x403B0071U
#define CDD_CHA_WW_0_1_DDR3   0x403B0078U

#define DBYTE0_TXDQSDLYTG0_U0 0x40394B4CU
#define DBYTE0_TXDQSDLYTG0_U1 0x40394B50U
#define DBYTE1_TXDQSDLYTG0_U0 0x40396B4CU
#define DBYTE1_TXDQSDLYTG0_U1 0x40396B50U
#define DBYTE2_TXDQSDLYTG0_U0 0x40398B4CU
#define DBYTE2_TXDQSDLYTG0_U1 0x40398B50U
#define DBYTE3_TXDQSDLYTG0_U0 0x4039AB4CU
#define DBYTE3_TXDQSDLYTG0_U1 0x4039AB50U

#define DBYTE0_TXDQSDLYTG1_U0 0x40394B6CU
#define DBYTE0_TXDQSDLYTG1_U1 0x40394B70U
#define DBYTE1_TXDQSDLYTG1_U0 0x40396B6CU
#define DBYTE1_TXDQSDLYTG1_U1 0x40396B70U
#define DBYTE2_TXDQSDLYTG1_U0 0x40398B6CU
#define DBYTE2_TXDQSDLYTG1_U1 0x40398B70U
#define DBYTE3_TXDQSDLYTG1_U0 0x4039AB6CU
#define DBYTE3_TXDQSDLYTG1_U1 0x4039AB70U

#define VREF_CA_A0 0x403B0095U
#define VREF_CA_A1 0x403B0098U
#define VREF_CA_B0 0x403B00FCU
#define VREF_CA_B1 0x403B00FDU

#define VREF_DQ_A0 0x403B0099U
#define VREF_DQ_A1 0x403B009CU
#define VREF_DQ_B0 0x403B0100U
#define VREF_DQ_B1 0x403B0101U

/* DDR Subsystem */
#define DDR_SS_REG                0x403D0000U

/* Default timeout for DDR PHY operations */
#define DEFAULT_TIMEOUT_US 1000000U

struct cdd_type {
	uint8_t rr;
	uint8_t rw;
	uint8_t wr;
	uint8_t ww;
};

struct space_timing_params {
	struct cdd_type cdd;
	uint8_t vref_ca;
	uint8_t vref_dq;
	uint16_t tphy_wrdata_delay;
};

/* Wait until firmware finishes execution and return training result */
uint32_t wait_firmware_execution(void);

/* Set default AXI parity. */
uint32_t set_axi_parity(void);

/* Modify bitfield value with delta, given bitfield position and mask */
bool update_bf(uint32_t *v, uint8_t pos, uint32_t mask, int32_t delta);

/* Read Critical Delay Differences from message block and store max values */
void read_cdds(void);

/* Read trained VrefCA from message block and store average value */
void read_vref_ca(void);

/* Read trained VrefDQ from message block and store average value */
void read_vref_dq(void);

/* Calculate DFITMG1.dfi_t_wrdata_delay */
void compute_tphy_wrdata_delay(void);

#endif /* DDR_UTILS_H */
