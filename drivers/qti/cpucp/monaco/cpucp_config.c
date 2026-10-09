/*
 * Copyright (c) 2026, Qualcomm Technologies, Inc. and/or its subsidiaries.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include <stddef.h>
#include <stdint.h>

#include <cpucp_config.h>
#include <cpucp_hwio.h>
#include <cpucp_shared.h>
#include <lib/cassert.h>
#include <lib/mmio.h>
#include <lib/utils_def.h>

#include <platform_def.h>

/* Offsets the firmware expects for the interface version 1 host fields. */
CASSERT(offsetof(struct cpucp_shared_data, soc_info) == 0x2d0U,
	assert_cpucp_soc_info_offset);
CASSERT(offsetof(struct cpucp_shared_data, cpr_info) == 0x2fcU,
	assert_cpucp_cpr_info_offset);
CASSERT(offsetof(struct cpucp_shared_data, cpr_info.targ_volt) == 0x396U,
	assert_cpucp_targ_volt_offset);
CASSERT(offsetof(struct cpucp_shared_data, cpr_info.quot_vmin) == 0x5b6U,
	assert_cpucp_quot_vmin_offset);
CASSERT(offsetof(struct cpucp_shared_data, acc_info) == 0x6c6U,
	assert_cpucp_acc_info_offset);
CASSERT(offsetof(struct cpucp_shared_data, mx_cmd_db) == 0x6f4U,
	assert_cpucp_mx_cmd_db_offset);
CASSERT(sizeof(struct cpucp_shared_data) == 0x738U,
	assert_cpucp_shared_data_size);

static const struct apss_clk apss_clks[] = {
	{ APSS_AHB_CLK_CFG,           8U, 4U, APSS_AHB_CLK_CFG,             5U },
	{ APSS_LMH_CDIV_COUNT,        0U, 3U, APSS_LMH_GFMUX_CFG,           5U },
	{ APSS_OSM_CDIV_COUNT,        0U, 3U, APSS_OSM_GFMUX_CFG,           1U },
	{ APSS_PERIPH_CDIV_COUNT,     0U, 4U, APSS_PERIPHCLK_GFMUX_CFG,     1U },
	{ APSS_CL1_PERIPH_CDIV_COUNT, 0U, 4U, APSS_CL1_PERIPHCLK_GFMUX_CFG, 1U },
	{ APSS_IPM_CDIV_COUNT,        0U, 4U, APSS_IPM_GFMUX_CFG,           3U },
};

/*
 * CPR instances 12 to 16 serve, in order, the cluster 0 L3, gold and gold+
 * domains on the APC0 rail and the cluster 1 L3 and silver domains on APC1.
 */
#define FIRST_APSS_CPR		12U
#define NUM_APSS_CPR		5U

/* Open-loop target voltage codes: 8 mV steps in bits [4:0], sign in bit 5. */
static const struct fuse_field
targ_volt_fuses[NUM_APSS_CPR][CPUCP_NUM_FUSED_CORNERS] = {
	{
		F(ROW_LSB(7), 19U, 6U), F(ROW_LSB(7), 13U, 6U),
		F(ROW_LSB(7), 7U, 6U), F(ROW_LSB(7), 1U, 6U),
	}, {
		F(ROW_MSB(7), 11U, 6U), F(ROW_MSB(7), 5U, 6U),
		F2(ROW_LSB(7), 31U, 1U, ROW_MSB(7), 0U, 5U),
		F(ROW_LSB(7), 25U, 6U),
	}, {
		F(ROW_LSB(8), 3U, 6U),
		F2(ROW_MSB(7), 29U, 3U, ROW_LSB(8), 0U, 3U),
		F(ROW_MSB(7), 23U, 6U), F(ROW_MSB(7), 17U, 6U),
	}, {
		F2(ROW_LSB(8), 27U, 5U, ROW_MSB(8), 0U, 1U),
		F(ROW_LSB(8), 21U, 6U), F(ROW_LSB(8), 15U, 6U),
		F(ROW_LSB(8), 9U, 6U),
	}, {
		F(ROW_MSB(13), 20U, 6U), F(ROW_MSB(13), 14U, 6U),
		F(ROW_MSB(13), 26U, 6U), F(ROW_LSB(14), 0U, 6U),
	},
};

static const struct fuse_field
quot_vmin_fuses[NUM_APSS_CPR][CPUCP_NUM_FUSED_CORNERS] = {
	{
		F(ROW_LSB(9), 5U, 12U),
		F2(ROW_MSB(8), 25U, 7U, ROW_LSB(9), 0U, 5U),
		F(ROW_MSB(8), 13U, 12U), F(ROW_MSB(8), 1U, 12U),
	}, {
		F2(ROW_MSB(9), 21U, 11U, ROW_LSB(10), 0U, 1U),
		F(ROW_MSB(9), 9U, 12U),
		F2(ROW_LSB(9), 29U, 3U, ROW_MSB(9), 0U, 9U),
		F(ROW_LSB(9), 17U, 12U),
	}, {
		F(ROW_MSB(10), 5U, 12U),
		F2(ROW_LSB(10), 25U, 7U, ROW_MSB(10), 0U, 5U),
		F(ROW_LSB(10), 13U, 12U), F(ROW_LSB(10), 1U, 12U),
	}, {
		F2(ROW_LSB(11), 21U, 11U, ROW_MSB(11), 0U, 1U),
		F(ROW_LSB(11), 9U, 12U),
		F2(ROW_MSB(10), 29U, 3U, ROW_LSB(11), 0U, 9U),
		F(ROW_MSB(10), 17U, 12U),
	}, {
		F(ROW_LSB(13), 2U, 12U),
		F2(ROW_MSB(12), 22U, 10U, ROW_LSB(13), 0U, 2U),
		F(ROW_LSB(13), 14U, 12U),
		F2(ROW_LSB(13), 26U, 6U, ROW_MSB(13), 0U, 6U),
	},
};

/* Each rail has one aging fuse shared by its CPR instances. */
static const struct fuse_field aging_fuses[NUM_APSS_CPR] = {
	F(ROW_MSB(22), 0U, 8U), F(ROW_MSB(22), 0U, 8U), F(ROW_MSB(22), 0U, 8U),
	F(ROW_MSB(12), 6U, 8U), F(ROW_MSB(12), 6U, 8U),
};

static const struct cpucp_config monaco_cpucp_config = {
	.apss_clks = apss_clks,
	.num_apss_clks = ARRAY_SIZE(apss_clks),
	.cpr = {
		.targ_volt = &targ_volt_fuses[0][0],
		.quot_vmin = &quot_vmin_fuses[0][0],
		.aging = aging_fuses,
		.first_cpr = FIRST_APSS_CPR,
		.num_cpr = NUM_APSS_CPR,
		.num_acc_domains = CD_CL1_SILVER + 1U,
	},
};

const struct cpucp_config *cpucp_get_config(void)
{
	return &monaco_cpucp_config;
}

void cpucp_fill_soc_info(void)
{
	uint32_t l3_sku = mmio_read_32(TCSR_SPARE_RG63_WO_0);
	uint32_t l3_lval = cpucp_soft_sku_lval(l3_sku, (l3_sku >> 16) & 0xffU);

	mmio_write_32(SHARED(soc_info.chip_version),
		      (cpucp_read_bits(QTI_SOC_REVISION_REG, 8U, 8U) << 16) |
		      cpucp_read_bits(QTI_SOC_REVISION_REG, 0U, 8U));
	mmio_write_32(SHARED(soc_info.foundry_id),
		      cpucp_read_bits(QFPROM_CORR_FEATURE_CONFIG_NM_ROW2_LSB,
				      6U, 4U));
	mmio_write_32(SHARED(soc_info.speed_bin),
		      cpucp_read_bits(QFPROM_CORR_PTE_ROW0_LSB, 29U, 3U));
	mmio_write_32(SHARED(soc_info.feature_id),
		      cpucp_read_bits(QFPROM_CORR_PTE_ROW0_LSB, 20U, 8U));
	mmio_write_32(SHARED(soc_info.jtag_id),
		      cpucp_read_bits(QFPROM_CORR_PTE_ROW0_LSB, 0U, 20U));
	mmio_write_32(SHARED(soc_info.vp_id),
		      cpucp_read_bits(QFPROM_CORR_QC_SPARE_21_ROW0_LSB, 4U, 4U));

	mmio_write_32(SHARED(soc_info.soft_sku_lval[CD_CL0_L3]), l3_lval);
	mmio_write_32(SHARED(soc_info.soft_sku_lval[CD_CL1_L3]), l3_lval);
	mmio_write_32(SHARED(soc_info.soft_sku_lval[CD_CL0_GOLD]),
		      cpucp_soft_sku_lval(
			      cpucp_read_bits(SOFT_SKU_APC0_FREQ, 8U, 1U),
			      cpucp_read_bits(SOFT_SKU_APC0_FREQ, 0U, 8U)));
	mmio_write_32(SHARED(soc_info.soft_sku_lval[CD_CL1_SILVER]),
		      cpucp_soft_sku_lval(
			      cpucp_read_bits(SOFT_SKU_APC1_FREQ, 8U, 1U),
			      cpucp_read_bits(SOFT_SKU_APC1_FREQ, 0U, 8U)));
	mmio_write_32(SHARED(soc_info.soft_sku_lval[CD_CL0_GOLDPLUS]),
		      cpucp_soft_sku_lval(
			      cpucp_read_bits(SOFT_SKU_APC0_GOLDPLUS_FREQ, 8U, 1U),
			      cpucp_read_bits(SOFT_SKU_APC0_GOLDPLUS_FREQ, 0U, 8U)));
}
