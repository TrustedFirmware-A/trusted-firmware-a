/*
 * Copyright (c) 2020-2026, Renesas Electronics Corporation. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include <stdint.h>

#include <common/debug.h>
#include "cpg_regs.h"
#include <drivers/delay_timer.h>
#include <drivers/renesas/rza/cpg/cpg.h>
#include <lib/mmio.h>

#define CPG_OFF		0
#define CPG_ON		1
#define CPG_T_CLK	0
#define CPG_T_RST	1

#define CPG_RST_DDR_OPT_VALUE	0x0
#define CPG_SEL_PLL1_ON_OFF	0
#define CPG_SEL_PLL2_1_ON_OFF	1
#define CPG_SEL_PLL2_2_ON_OFF	2
#define CPG_SEL_PLL3_1_ON_OFF	3
#define CPG_SEL_PLL3_2_ON_OFF	4
#define CPG_SEL_PLL3_3_ON_OFF	5
#define CPG_SEL_PLL5_1_ON_OFF	6
#define CPG_SEL_PLL5_3_ON_OFF	7
#define CPG_SEL_PLL5_4_ON_OFF	8

typedef struct {
	uintptr_t reg;
	uintptr_t mon;
	uint32_t val;
	uint32_t type;
} CPG_SETUP_DATA;

typedef struct {
	uintptr_t reg;
	uint32_t val;
} CPG_REG_SETTING;

typedef struct {
	CPG_REG_SETTING clk1_dat;
	CPG_REG_SETTING clk2_dat;
	CPG_REG_SETTING stby_dat;
} CPG_PLL_SETDATA_146;

typedef struct {
	CPG_REG_SETTING clk1_dat;
	CPG_REG_SETTING clk2_dat;
	CPG_REG_SETTING clk3_dat;
	CPG_REG_SETTING clk4_dat;
	CPG_REG_SETTING clk5_dat;
	CPG_REG_SETTING stby_dat;
} CPG_PLL_SETDATA_235;

typedef struct st_cpg_spi_clk_table {
	int frequency;
	uint8_t selector;
	uint8_t divider;
} cpg_spi_clk_table;

static const cpg_spi_clk_table cpg_xspi_table[] = {
	{ 533000000, 0, 0 }, /* 533.0MHz */
	{ 400000000, 1, 0 }, /* 400.0MHz */
	{ 266500000, 0, 1 }, /* 266.5MHz */
	{ 200000000, 1, 1 }, /* 200.0MHz */
	{ 133250000, 0, 2 }, /* 133.3MHz */
	{ 100000000, 1, 2 }, /* 100.0MHz */
	{ 66625000, 0, 3 }, /*  66.6MHz */
	{ 50000000, 1, 3 }, /*  50.0MHz */
	{ 16656250, 0, 4 }, /*  16.7MHz */
	{ 12500000, 1, 4 }, /*  12.5MHz */
};

#if USE_SDRAM
static const CPG_PLL_SETDATA_146 cpg_pll4_setdata = {
#if (DDR_PLL4 == 1600)
	{ CPG_PLL4_CLK1, 0xFAE13203 },
	{ CPG_PLL4_CLK2, 0x00081000 },
#elif (DDR_PLL4 == 1333)
	{ CPG_PLL4_CLK1, 0xA66629C3 },
	{ CPG_PLL4_CLK2, 0x00080D00 },
#else
#error "Unknown Board Type."
#endif
	{ CPG_PLL4_STBY, 0x00010001 }
};
#endif

static const CPG_PLL_SETDATA_146 cpg_pll6_setdata = {
	{ CPG_PLL6_CLK1, 0x00003e83 },
	{ CPG_PLL6_CLK2, 0x00082D02 },
	{ CPG_PLL6_STBY, 0x00010001 }, /* SSC OFF */
};

static const CPG_SETUP_DATA early_setup_tbl[] = {
	{ CPG_CLKON_SYC, CPG_CLKMON_SYC, 0x00010001, CPG_T_CLK },
	{ CPG_RST_SYC, CPG_RSTMON_SYC, 0x00010001, CPG_T_RST }
};

static const CPG_SETUP_DATA cpg_clk_on_tbl[] = {
	{ /* CM33 */
	  CPG_CLKON_CM33, CPG_CLKMON_CM33, 0x00030000, CPG_T_CLK },
	{ /* MHU */
	  CPG_CLKON_MHU, CPG_CLKMON_MHU, 0x00010000, CPG_T_CLK },
	{ /* DMAC */
	  CPG_CLKON_DAMC_REG, CPG_CLKMON_DAMC_REG, 0x00030003, CPG_T_CLK },
	{ /* OSTM */
	  CPG_CLKON_OSTM, CPG_CLKMON_OSTM, 0x00060000, CPG_T_CLK },
	{ /* MTU */
	  CPG_CLKON_MTU, CPG_CLKMON_MTU, 0x00010000, CPG_T_CLK },
	{ /* POE3 */
	  CPG_CLKON_POE3, CPG_CLKMON_POE3, 0x00010000, CPG_T_CLK },
	{ /* WDT */
	  CPG_CLKON_WDT, CPG_CLKMON_WDT, 0x00300000, CPG_T_CLK },
#if USE_SDRAM
	{ /* DDR */
	  CPG_CLKON_DDR, CPG_CLKMON_DDR, 0x00030000, CPG_T_CLK },
#else
	{ /* DDR */
	  CPG_CLKON_DDR, CPG_CLKMON_DDR, 0x00030003, CPG_T_CLK },
#endif
	{ /* SDHI */
	  CPG_CLKON_SDHI, CPG_CLKMON_SDHI,
#if RZA3M
	  0x000f0000,
#else
	  0x00ff0000,
#endif
	  CPG_T_CLK },
	{ /* Image Scaling Unit */
	  CPG_CLKON_ISU, CPG_CLKMON_ISU, 0x00030000, CPG_T_CLK },
	{ /* Camera Data Receive Unit */
	  CPG_CLKON_CRU, CPG_CLKMON_CRU, 0x001f0000, CPG_T_CLK },
	{ /* LCDC */
	  CPG_CLKON_LCDC, CPG_CLKMON_LCDC, 0x00030000, CPG_T_CLK },
	{ /* Serial Sound Interface */
	  CPG_CLKON_SSI, CPG_CLKMON_SSI, 0x00ff0000, CPG_T_CLK },
	{ /* Sampling Rate Converter */
	  CPG_CLKON_SRC, CPG_CLKMON_SRC, 0x00010000, CPG_T_CLK },
	{ /* USB2.0 */
	  CPG_CLKON_USB, CPG_CLKMON_USB, 0x000f0000, CPG_T_CLK },
	{ /* ETHER */
	  CPG_CLKON_ETH, CPG_CLKMON_ETH, 0x00030000, CPG_T_CLK },
	{ /* I2C */
	  CPG_CLKON_I2C, CPG_CLKMON_I2C, 0x000f0000, CPG_T_CLK },
	{ /* SCIF */
	  CPG_CLKON_SCIF, CPG_CLKMON_SCIF, 0x001f0001, CPG_T_CLK },
	{ /* SCI */
	  CPG_CLKON_SCI, CPG_CLKMON_SCI, 0x00030000, CPG_T_CLK },
	{ /* IrDA */
	  CPG_CLKON_IRDA, CPG_CLKMON_IRDA, 0x00010000, CPG_T_CLK },
	{ /* SPI */
	  CPG_CLKON_RSPI, CPG_CLKMON_RSPI, 0x00070000, CPG_T_CLK },
	{ /* CAN */
	  CPG_CLKON_CANFD, CPG_CLKMON_CANFD, 0x00010000, CPG_T_CLK },
	{ /* GPIO */
	  CPG_CLKON_GPIO, CPG_CLKMON_GPIO, 0x00010001, CPG_T_CLK },
	{ /* ADC */
	  CPG_CLKON_ADC, CPG_CLKMON_ADC, 0x00030000, CPG_T_CLK },
	{ /* Thermal Sensor Unit */
	  CPG_CLKON_TSU, CPG_CLKMON_TSU, 0x00010000, CPG_T_CLK }
};

static const CPG_SETUP_DATA cpg_reset_tbl[] = {
	{ /* CM33 */
	  CPG_RST_CM33, CPG_RSTMON_CM33, 0x00070000, CPG_T_RST },
	{ /* MHU */
	  CPG_RST_MHU, CPG_RSTMON_MHU, 0x00010000, CPG_T_RST },
	{ /* DMAC */
	  CPG_RST_DMAC, CPG_RSTMON_DMAC, 0x00030003, CPG_T_RST },
	{ /* OSTM */
	  CPG_RST_OSTM, CPG_RSTMON_OSTM, 0x00060000, CPG_T_RST },
	{ /* MTU */
	  CPG_RST_MTU, CPG_RSTMON_MTU, 0x00010000, CPG_T_RST },
	{ /* POE3 */
	  CPG_RST_POE3, CPG_RSTMON_POE3, 0x00010000, CPG_T_RST },
	{ /* WDT */
	  CPG_RST_WDT, CPG_RSTMON_WDT, 0x00040000, CPG_T_RST },
#if USE_SDRAM
	{ /* DDR */
	  CPG_RST_DDR, CPG_RSTMON_DDR, 0x007F0000, CPG_T_RST },
#else
	{ /* DDR */
	  CPG_RST_DDR, CPG_RSTMON_DDR, 0x007F007F, CPG_T_RST },
#endif
	{ /* SDHI */
	  CPG_RST_SDHI, CPG_RSTMON_SDHI,
#if RZA3M
	  0x00010000,
#else
	  0x00030000,
#endif
	  CPG_T_RST },
	{ /* Image Scaling Unit */
	  CPG_RST_ISU, CPG_RSTMON_ISU, 0x00030000, CPG_T_RST },
	{ /* Camera Data Receive Unit */
	  CPG_RST_CRU, CPG_RSTMON_CRU, 0x00070000, CPG_T_RST },
	{ /* LCDC */
	  CPG_RST_LCDC, CPG_RSTMON_LCDC, 0x00010000, CPG_T_RST },
	{ /* Serial Sound Interface */
	  CPG_RST_SSIF, CPG_RSTMON_SSIF, 0x000f0000, CPG_T_RST },
	{ /* Sampling Rate Converter */
	  CPG_RST_SRC, CPG_RSTMON_SRC, 0x00010000, CPG_T_RST },
	{ /* USB2.0 */
	  CPG_RST_USB, CPG_RSTMON_USB, 0x000f0000, CPG_T_RST },
	{ /* ETHER */
	  CPG_RST_ETH, CPG_RSTMON_ETH, 0x00030000, CPG_T_RST },
	{ /* I2C */
	  CPG_RST_I2C, CPG_RSTMON_I2C, 0x000f0000, CPG_T_RST },
	{ /* SCIF */
	  CPG_RST_SCIF, CPG_RSTMON_SCIF, 0x001f0001, CPG_T_RST },
	{ /* SCI */
	  CPG_RST_SCI, CPG_RSTMON_SCI, 0x00030000, CPG_T_RST },
	{ /* IrDA */
	  CPG_RST_IRDA, CPG_RSTMON_IRDA, 0x00010000, CPG_T_RST },
	{ /* SPI */
	  CPG_RST_RSPI, CPG_RSTMON_RSPI, 0x00070000, CPG_T_RST },
	{ /* CAN */
	  CPG_RST_CANFD, CPG_RSTMON_CANFD, 0x00030000, CPG_T_RST },
	{ /* GPIO */
	  CPG_RST_GPIO, CPG_RSTMON_GPIO, 0x00070007, CPG_T_RST },
	{ /* ADC */
	  CPG_RST_ADC, CPG_RSTMON_ADC, 0x00030000, CPG_T_RST },
	{ /* Thermal Sensor Unit */
	  CPG_RST_TSU, CPG_RSTMON_TSU, 0x00010000, CPG_T_RST },
};

static const CPG_REG_SETTING cpg_static_select_tbl[] = {
	{ CPG_PL3A_DDIV, 0x01000100 },
	{ CPG_PL3_SSEL, 0x01000000 },
};

static const CPG_REG_SETTING cpg_dynamic_select_tbl[] = {
	{ CPG_PL4_DSEL, 0x00010001 },
#if RZA3M
	{ CPG_PL2SDHI_DSEL, 0x00010003 },
	{ CPG_PL2SDHI_DSEL, 0x00010002 },
#else
	{ CPG_PL2SDHI_DSEL, 0x00110033 },
	{ CPG_PL2SDHI_DSEL, 0x00110022 },
#endif
};

static const CPG_REG_SETTING cpg_sel_pll1_on_off[] = { { CPG_CLKON_CA55,
							 0x00010001 } };

static const CPG_REG_SETTING cpg_sel_pll2_1_on_off[] = {
	{ CPG_CLKON_ADC, 0x00010001 },
	{ CPG_CLKON_TSU, 0x00010001 },
#if RZA3M
	{ CPG_CLKON_SDHI, 0x000f0000 },
#else
	{ CPG_CLKON_SDHI, 0x00ff0000 },
#endif
};

static const CPG_REG_SETTING cpg_sel_pll2_2_on_off[] = {
#if RZA3M
	{ CPG_CLKON_SDHI, 0x000f0000 },
#else
	{ CPG_CLKON_SDHI, 0x00ff0000 },
#endif
};

static const CPG_REG_SETTING cpg_sel_pll3_1_on_off[] = {
	{ CPG_CLKON_AXI_ACPU_BUS, 0x000F000F },
	{ CPG_CLKON_AXI_COM_BUS, 0x00030003 },
	{ CPG_CLKON_AXI_DEFAULT_SLV, 0x00010001 },
	{ CPG_CLKON_AXI_MCPU_BUS, 0x01930193 },
	{ CPG_CLKON_AXI_TZCDDR, 0x001F001F },
	{ CPG_CLKON_AXI_VIDEO_BUS, 0x00030003 },
	{ CPG_CLKON_CA55, 0x001E001E },
	{ CPG_CLKON_CM33, 0x00010001 },
	{ CPG_CLKON_CRU, 0x000C000C },
	{ CPG_CLKON_CST, 0x07FD07FD },
	{ CPG_CLKON_DAMC_REG, 0x00030003 },
	{ CPG_CLKON_DDR, 0x00030003 },
	{ CPG_CLKON_ETH, 0x00030003 },
	{ CPG_CLKON_GIC600, 0x00010001 },
	{ CPG_CLKON_IA55, 0x00030003 },
	{ CPG_CLKON_IM33, 0x00030003 },
	{ CPG_CLKON_ISU, 0x00030003 },
	{ CPG_CLKON_JAUTH, 0x00010001 },
	{ CPG_CLKON_LCDC, 0x00010001 },
	{ CPG_CLKON_OTP, 0x00020002 },
	{ CPG_CLKON_PERI_COM, 0x00030003 },
	{ CPG_CLKON_PERI_CPU, 0x000D000D },
	{ CPG_CLKON_PERI_DDR, 0x00010001 },
	{ CPG_CLKON_PERI_VIDEO, 0x00070007 },
	{ CPG_CLKON_REG0_BUS, 0x00010001 },
	{ CPG_CLKON_REG1_BUS, 0x00030003 },
	{ CPG_CLKON_ROM, 0x00010001 },
#if RZA3M
	{ CPG_CLKON_SDHI, 0x000f0000 },
#else
	{ CPG_CLKON_SDHI, 0x00ff0000 },
#endif
	{ CPG_CLKON_SRAM_ACPU, 0x00010001 },
	{ CPG_CLKON_SRAM_MCPU, 0x00010001 },
	{ CPG_CLKON_SYSC, 0x00020002 },
	{ CPG_CLKON_TSIPG, 0x00030003 },
	{ CPG_CLKON_USB, 0x000F000F }
};

static const CPG_REG_SETTING cpg_sel_pll3_2_on_off[] = {
	{ CPG_CLKON_CRU, 0x00030003 },
	{ CPG_CLKON_SPI_MULTI, 0x00030003 },
	{ CPG_CLKON_AXI_MCPU_BUS, 0x02080208 },
};

static const CPG_REG_SETTING cpg_sel_pll3_3_on_off[] = {
	{ CPG_CLKON_SPI_MULTI, 0x00030003 },
	{ CPG_CLKON_AXI_MCPU_BUS, 0x02080208 },
};

static const CPG_REG_SETTING cpg_sel_pll5_1_on_off[] = {
	{ CPG_CLKON_CRU, 0x00100010 },
	{ CPG_CLKON_LCDC, 0x00020002 }
};

static const CPG_REG_SETTING cpg_sel_pll5_3_on_off[] = { { CPG_CLKON_LCDC,
							   0x00020002 } };

static const CPG_REG_SETTING cpg_sel_pll5_4_on_off[] = { { CPG_CLKON_LCDC,
							   0x00020002 } };

static void cpg_ctrl_clkrst(CPG_SETUP_DATA const *array, uint32_t num)
{
	int i;
	uint32_t mask;
	uint32_t cmp;

	for (i = 0; i < num; i++, array++) {
		mmio_write_32(array->reg, array->val);

		mask = (array->val >> 16) & 0xFFFF;
		cmp = array->val & 0xFFFF;
		if (array->type == CPG_T_RST) {
			cmp = ~(cmp);
		}
		while ((mmio_read_32(array->mon) & mask) != (cmp & mask))
			;
	}
}

static void cpg_selector_on_off(uint32_t sel, uint8_t flag)
{
	uint32_t cnt;
	uint32_t tbl_num;
	CPG_REG_SETTING const *ptr;

	switch (sel) {
	case CPG_SEL_PLL1_ON_OFF:
		tbl_num = ARRAY_SIZE(cpg_sel_pll1_on_off);
		ptr = &cpg_sel_pll1_on_off[0];
		break;
	case CPG_SEL_PLL2_1_ON_OFF:
		tbl_num = ARRAY_SIZE(cpg_sel_pll2_1_on_off);
		ptr = &cpg_sel_pll2_1_on_off[0];
		break;
	case CPG_SEL_PLL2_2_ON_OFF:
		tbl_num = ARRAY_SIZE(cpg_sel_pll2_2_on_off);
		ptr = &cpg_sel_pll2_2_on_off[0];
		break;
	case CPG_SEL_PLL3_1_ON_OFF:
		tbl_num = ARRAY_SIZE(cpg_sel_pll3_1_on_off);
		ptr = &cpg_sel_pll3_1_on_off[0];
		break;
	case CPG_SEL_PLL3_2_ON_OFF:
		tbl_num = ARRAY_SIZE(cpg_sel_pll3_2_on_off);
		ptr = &cpg_sel_pll3_2_on_off[0];
		break;
	case CPG_SEL_PLL3_3_ON_OFF:
		tbl_num = ARRAY_SIZE(cpg_sel_pll3_3_on_off);
		ptr = &cpg_sel_pll3_3_on_off[0];
		break;
	case CPG_SEL_PLL5_1_ON_OFF:
		tbl_num = ARRAY_SIZE(cpg_sel_pll5_1_on_off);
		ptr = &cpg_sel_pll5_1_on_off[0];
		break;
	case CPG_SEL_PLL5_3_ON_OFF:
		tbl_num = ARRAY_SIZE(cpg_sel_pll5_3_on_off);
		ptr = &cpg_sel_pll5_3_on_off[0];
		break;
	case CPG_SEL_PLL5_4_ON_OFF:
		tbl_num = ARRAY_SIZE(cpg_sel_pll5_4_on_off);
		ptr = &cpg_sel_pll5_4_on_off[0];
		break;
	default:
		break;
	}

	for (cnt = 0; cnt < tbl_num; cnt++) {
		if (flag == CPG_ON) {
			mmio_write_32(ptr[cnt].reg,
				      (mmio_read_32(ptr[cnt].reg) |
				       ptr[cnt].val));
		} else {
			mmio_write_32(ptr[cnt].reg,
				      (ptr[cnt].val & 0xFFFF0000));
		}
	}
}

static void cpg_pll_start_146(CPG_PLL_SETDATA_146 const *pdata)
{
	mmio_write_32(pdata->clk1_dat.reg, pdata->clk1_dat.val);
	mmio_write_32(pdata->clk2_dat.reg, pdata->clk2_dat.val);
	mmio_write_32(pdata->stby_dat.reg, pdata->stby_dat.val);
}

/* It is assumed that the PLL has stopped by the time this function is executed. */
static void cpg_pll_setup(void)
{
	uint32_t val = 0;
#if USE_SDRAM
	/* PLL4 reset (RESET=0) */
	mmio_write_32(CPG_PLL4_STBY, PLL4_STBY_RESETB_WEN);

	/* PLL4 startup */
	/* PLL4 standby mode transition confirmation */
	do {
		val = mmio_read_32(CPG_PLL4_MON);
	} while ((val & (PLL4_MON_PLL4_RESETB | PLL4_MON_PLL4_LOCK)) != 0);
#endif
	/* PLL6 reset (RESET=0) */
	mmio_write_32(CPG_PLL6_STBY, PLL6_STBY_RESETB_WEN);

	/* PLL6 startup */
	/* PLL6 standby mode transition confirmation */
	do {
		val = mmio_read_32(CPG_PLL6_MON);
	} while ((val & (PLL6_MON_PLL6_RESETB | PLL6_MON_PLL6_LOCK)) != 0);

#if USE_SDRAM
	/* Set PLL4 to normal mode */
	cpg_pll_start_146(&cpg_pll4_setdata);
#endif
	/* Set PLL6 to normal mode */
	cpg_pll_start_146(&cpg_pll6_setdata);

#if USE_SDRAM
	/* PLL4 normal mode transition confirmation */
	do {
		val = mmio_read_32(CPG_PLL4_MON);
	} while ((val & (PLL4_MON_PLL4_RESETB | PLL4_MON_PLL4_LOCK)) == 0);
#endif
#if !(RZA3M)
	/* PLL6 normal mode transition confirmation */
	do {
		val = mmio_read_32(CPG_PLL6_MON);
	} while ((val & (PLL6_MON_PLL6_RESETB | PLL6_MON_PLL6_LOCK)) == 0);
#endif
}

static void cpg_div_sel_setup(CPG_REG_SETTING const *tbl, uint32_t size)
{
	int cnt;

	for (cnt = 0; cnt < size; cnt++, tbl++) {
		mmio_write_32(tbl->reg, tbl->val);
	}

#if USE_SDRAM
	/* Wait for completion of settings */
	while (mmio_read_32(CPG_CLKSTATUS) != 0)
		;
#endif
}

static void cpg_div_sel_static_setup(void)
{
	cpg_div_sel_setup(cpg_static_select_tbl,
			  ARRAY_SIZE(cpg_static_select_tbl));
}

static void cpg_div_sel_dynamic_setup(void)
{
	cpg_div_sel_setup(cpg_dynamic_select_tbl,
			  ARRAY_SIZE(cpg_dynamic_select_tbl));
}

static void cpg_clk_on_setup(void)
{
	cpg_ctrl_clkrst(&cpg_clk_on_tbl[0], ARRAY_SIZE(cpg_clk_on_tbl));
}

static void cpg_reset_setup(void)
{
	cpg_ctrl_clkrst(&cpg_reset_tbl[0], ARRAY_SIZE(cpg_reset_tbl));
}

void cpg_active_ddr(void (*disable_phy)(void))
{
#if RZA3M
	/* Assert AXI_PERIDDR.RESTn according to APP006 */
	mmio_write_32(CPG_RST_PERI_DDR, 0x00010000);
	while ((mmio_read_32(CPG_RSTMON_PERI_DDR) & 0x00000001) != 0x00000001)
		;
#endif
	/* Assert the reset of DDRTOP */
	mmio_write_32(CPG_RST_DDR, 0x005F0000 | (CPG_RST_DDR_OPT_VALUE << 16));
	mmio_write_32(CPG_OTHERFUNC2_REG, 0x00010000);
	while ((mmio_read_32(CPG_RSTMON_DDR) & 0x0000005F) != 0x0000005F)
		;

	/* Start the clocks of DDRTOP */
	mmio_write_32(CPG_CLKON_DDR, 0x00030003);
	while ((mmio_read_32(CPG_CLKMON_DDR) & 0x00000003) != 0x00000003)
		;

	udelay(1);

#if RZA3M
	/* AXI_PERIDDR.RESTn according to APP006 */
	mmio_write_32(CPG_RST_PERI_DDR, 0x00010001);
	while ((mmio_read_32(CPG_RSTMON_PERI_DDR) & 0x00000001) != 0x00000000)
		;
#endif
	/* De-assert rst_n */
	mmio_write_32(CPG_OTHERFUNC2_REG, 0x00010001);

	udelay(1);

	/* De-assert PRESETN */
	mmio_write_32(CPG_RST_DDR, 0x00020002);
	while ((mmio_read_32(CPG_RSTMON_DDR) & 0x00000002) != 0x00000000)
		;

	udelay(1);

	disable_phy();

	/* De-assert axiY_ARESETn, regARESETn, reset_n */
	mmio_write_32(CPG_RST_DDR, 0x005D005D | (CPG_RST_DDR_OPT_VALUE << 16) |
					   CPG_RST_DDR_OPT_VALUE);
	while ((mmio_read_32(CPG_RSTMON_DDR) & 0x0000005D) != 0x00000000)
		;

	udelay(1);
}

void cpg_reset_ddr_mc(void)
{
#if RZA3M
	/* Assert AXI_PERIDDR.RESTn according to APP006 */
	mmio_write_32(CPG_RST_PERI_DDR, 0x00010000);
	while ((mmio_read_32(CPG_RSTMON_PERI_DDR) & 0x00000001) != 0x00000001)
		;
#endif
	/* Assert rst_n, axiY_ARESETn, regARESETn */
	mmio_write_32(CPG_RST_DDR, 0x005C0000 | (CPG_RST_DDR_OPT_VALUE << 16));
	mmio_write_32(CPG_OTHERFUNC2_REG, 0x00010000);
	while ((mmio_read_32(CPG_RSTMON_DDR) & 0x0000005C) != 0x0000005C)
		;

	udelay(1);

#if RZA3M
	/* AXI_PERIDDR.RESTn according to APP006 */
	mmio_write_32(CPG_RST_PERI_DDR, 0x00010001);
	while ((mmio_read_32(CPG_RSTMON_PERI_DDR) & 0x00000001) != 0x00000000)
		;
#endif
	/* De-assert rst_n */
	mmio_write_32(CPG_OTHERFUNC2_REG, 0x00010001);

	udelay(1);

	/* De-assert axiY_ARESETn, regARESETn */
	mmio_write_32(CPG_RST_DDR, 0x005C005C | (CPG_RST_DDR_OPT_VALUE << 16) |
					   CPG_RST_DDR_OPT_VALUE);
	while ((mmio_read_32(CPG_RSTMON_DDR) & 0x0000005C) != 0x00000000)
		;

	udelay(1);
}

void cpg_early_setup(void)
{
	cpg_ctrl_clkrst(&early_setup_tbl[0], ARRAY_SIZE(early_setup_tbl));
}

void cpg_wdtrst_sel_setup(void)
{
	uint32_t reg;

	reg = mmio_read_32(CPG_WDTRST_SEL);
	reg |= WDTRST_SEL_WDTRSTSEL0 | WDTRST_SEL_WDTRSTSEL0_WEN;

	mmio_write_32(CPG_WDTRST_SEL, reg);
}

void cpu_cpg_setup(void)
{
	while ((mmio_read_32(CPG_CLKSTATUS) & CLKSTATUS_DIVPL1_STS) !=
	       0x00000000)
		;
	mmio_write_32(CPG_PL1_DDIV,
		      PL1_DDIV_DIVPL1_SET_WEN | PL1_DDIV_DIVPL1_SET_1_1);
	while ((mmio_read_32(CPG_CLKSTATUS) & CLKSTATUS_DIVPL1_STS) !=
	       0x00000000)
		;
}

void cpg_setup(void)
{
	cpu_cpg_setup();
	cpg_selector_on_off(CPG_SEL_PLL3_3_ON_OFF, CPG_OFF);
	cpg_div_sel_static_setup();
	cpg_selector_on_off(CPG_SEL_PLL3_3_ON_OFF, CPG_ON);
	cpg_pll_setup();
	cpg_clk_on_setup();
	cpg_reset_setup();
	cpg_div_sel_dynamic_setup();
	cpg_wdtrst_sel_setup();
}

static int cpg_search_spi_clk_table(int frequency)
{
	int tables = ARRAY_SIZE(cpg_xspi_table);

	for (int i = 0; i < tables; i++) {
		if (frequency >= cpg_xspi_table[i].frequency) {
			return i;
		}
	}
	return -1;
}

static int cpg_rsearch_spi_clk_table(uint8_t selector, uint8_t divider)
{
	int tables = ARRAY_SIZE(cpg_xspi_table);

	for (int i = 0; i < tables; i++) {
		if (selector == cpg_xspi_table[i].selector &&
		    divider == cpg_xspi_table[i].divider) {
			return cpg_xspi_table[i].frequency;
		}
	}
	return -1;
}

static void wait_until_32(uintptr_t addr, uint32_t mask, uint32_t test)
{
	while ((mmio_read_32(addr) & mask) != test) {
	};
}

static void cpg_stop_xspi_clock(enum xspi_clock spi)
{
	int onoff_pos;
	uintptr_t clkon_ctrl;
	uintptr_t clkmon_ctrl;

	switch (spi) {
	case XSPI_CLOCK_SPIM:
		onoff_pos = 9;
		clkon_ctrl = CPG_CLKON_SPI_MULTI;
		clkmon_ctrl = CPG_CLKMON_SPI_MULTI;
		break;
	case XSPI_CLOCK_OCTA:
		onoff_pos = 11;
		clkon_ctrl = CPG_CLKON_OCTA;
		clkmon_ctrl = CPG_CLKMON_OCTA;
		break;
	default:
		ERROR("Not expected value %d passed to %s.", (int)spi,
		      __func__);
		return;
	}

	mmio_write_32(clkon_ctrl, 0x00030000);
	mmio_write_32(CPG_CLKON_AXI_MCPU_BUS, 0x10000 << onoff_pos);
	wait_until_32(CPG_CLKMON_AXI_MCPU_BUS, 1 << onoff_pos, 0);
	wait_until_32(clkmon_ctrl, 0x0003, 0);
}

static void cpg_start_xspi_clock(enum xspi_clock spi)
{
	int onoff_pos;
	uintptr_t clkon_ctrl;
	uintptr_t clkmon_ctrl;

	switch (spi) {
	case XSPI_CLOCK_SPIM:
		onoff_pos = 9;
		clkon_ctrl = CPG_CLKON_SPI_MULTI;
		clkmon_ctrl = CPG_CLKMON_SPI_MULTI;
		break;
	case XSPI_CLOCK_OCTA:
		onoff_pos = 11;
		clkon_ctrl = CPG_CLKON_OCTA;
		clkmon_ctrl = CPG_CLKMON_OCTA;
		break;
	default:
		ERROR("Not expected value %d passed to %s.", (int)spi,
		      __func__);
		return;
	}

	mmio_write_32(clkon_ctrl, 0x0003ffff);
	mmio_write_32(CPG_CLKON_AXI_MCPU_BUS, 0x10000 << onoff_pos | 0xffff);
	wait_until_32(CPG_CLKMON_AXI_MCPU_BUS, 1 << onoff_pos, 1 << onoff_pos);
	wait_until_32(clkmon_ctrl, 0x0003, 0x0003);
}

int cpg_set_xspi_clock(enum xspi_clock spi, int frequency_hz)
{
	int seldiv_pos;
	int status_pos;

	switch (spi) {
	case XSPI_CLOCK_SPIM:
		seldiv_pos = 8;
		status_pos = 10;
		break;
	case XSPI_CLOCK_OCTA:
		seldiv_pos = 12;
		status_pos = 12;
		break;
	default:
		ERROR("Not expected value %d passed to %s.", (int)spi,
		      __func__);
		return -1;
	}

	int index = cpg_search_spi_clk_table(frequency_hz);

	if (index == -1)
		ERROR("Not recognized frequency value %u passed to %s.",
		      frequency_hz, __func__);

	int prev_sel = (mmio_read_32(CPG_PL3_SSEL) >> seldiv_pos) & 1;
	int prev_div = (mmio_read_32(CPG_PL3A_DDIV) >> seldiv_pos) & 7;

	if (prev_sel != cpg_xspi_table[index].selector) {
		/* Changing static selector */
		cpg_stop_xspi_clock(spi);
		uint32_t sel = cpg_xspi_table[index].selector << seldiv_pos;

		sel |= 0x10000 << seldiv_pos;
		mmio_write_32(CPG_PL3_SSEL, sel);
		cpg_start_xspi_clock(spi);
	}

	if (prev_div != cpg_xspi_table[index].divider) {
		/* Changing dynamic divider */
		wait_until_32(CPG_CLKSTATUS, 1u << status_pos, 0);
		uint32_t div = cpg_xspi_table[index].divider << seldiv_pos;

		div |= 0x10000 << seldiv_pos;
		mmio_write_32(CPG_PL3A_DDIV, div);
		wait_until_32(CPG_CLKSTATUS, 1u << status_pos, 0);
	}

	return 0;
}

int cpg_get_xspi_clock(enum xspi_clock spi)
{
	uint8_t sel;
	uint8_t div;
	int seldiv_pos;

	switch (spi) {
	case XSPI_CLOCK_SPIM:
		seldiv_pos = 8;
		break;
	case XSPI_CLOCK_OCTA:
		seldiv_pos = 12;
		break;
	default:
		ERROR("Not expected value %d passed to %s.", (int)spi,
		      __func__);
		return -1;
	}

	sel = (uint8_t)((mmio_read_32(CPG_PL3_SSEL) >> seldiv_pos) & 1);
	div = (uint8_t)((mmio_read_32(CPG_PL3A_DDIV) >> seldiv_pos) & 7);

	int frequency = cpg_rsearch_spi_clk_table(sel, div);

	if (frequency == -1)
		ERROR("CPG register value error (sel=%d, div=%d) in %s", sel,
		      div, __func__);

	return frequency;
}

static void cpg_clock_onoff(int clkid, uint32_t mask, uint32_t val)
{
	val = mask * (val & 1);
	mmio_write_32(CPG_CLKON_CA55 + clkid * 4, (mask << 16) + val);
	while ((mmio_read_32(CPG_CLKMON_CA55 + clkid * 4) & mask) != val)
		;
}

static void cpg_reset_onoff(int clkid, uint32_t mask, uint32_t val)
{
	val = mask * (val & 1);
	mmio_write_32(CPG_RST_CA55 + clkid * 4, (mask << 16) + (val ^ 0xffff));
	while ((mmio_read_32(CPG_RSTMON_CA55 + clkid * 4) & mask) != val)
		;
}

void cpg_clock_on(enum clock_id clkid)
{
	switch (clkid) {
	case CPG_CLOCK_SPIM:
		cpg_clock_onoff(CPG_CLOCK_SPIM, 3, 1);
		break;
	case CPG_CLOCK_OCTA:
		cpg_clock_onoff(CPG_CLOCK_OCTA, 3, 1);
		break;
	default:
		break;
	}
}

void cpg_clock_off(enum clock_id clkid)
{
	switch (clkid) {
	case CPG_CLOCK_SPIM:
		cpg_clock_onoff(CPG_CLOCK_SPIM, 3, 0);
		break;
	case CPG_CLOCK_OCTA:
		cpg_clock_onoff(CPG_CLOCK_OCTA, 3, 0);
		break;
	default:
		break;
	}
}

void cpg_reset_on(enum clock_id clkid)
{
	switch (clkid) {
	case CPG_CLOCK_SPIM:
		cpg_reset_onoff(CPG_CLOCK_SPIM, 1, 1);
		break;
	case CPG_CLOCK_OCTA:
		cpg_reset_onoff(CPG_CLOCK_OCTA, 1, 1);
		break;
	default:
		break;
	}
}

void cpg_reset_off(enum clock_id clkid)
{
	switch (clkid) {
	case CPG_CLOCK_SPIM:
		cpg_reset_onoff(CPG_CLOCK_SPIM, 1, 0);
		break;
	case CPG_CLOCK_OCTA:
		cpg_reset_onoff(CPG_CLOCK_OCTA, 1, 0);
		break;
	default:
		break;
	}
}
