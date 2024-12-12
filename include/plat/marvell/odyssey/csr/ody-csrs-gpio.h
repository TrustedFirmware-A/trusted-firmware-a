#ifndef __ODY_CSRS_GPIO_H__
#define __ODY_CSRS_GPIO_H__
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
 * GPIO.
 *
 * This file is auto generated. Do not edit.
 *
 */

/**
 * Enumeration gpio_assigned_pin_e
 *
 * GPIO Assigned Pin Number Enumeration
 * Enumerates GPIO pin numbers which have certain dedicated hardware and boot usage. In
 * general a given GPIO may be used for the purpose listed here, or for any other
 * purpose that is not listed here. For example SPI0_IO0 must use GPIO16 (0x10) if the
 * SPI IO0 function is needed, but if SPI IO0 is not needed GPIO16 is free for use, but
 * GPIO16 could not be used for BOOT_WAIT as BOOT_WAIT is listed here as requiring
 * GPIO10 (0xA).
 */
#define ODY_GPIO_ASSIGNED_PIN_E_BOOT_COMPLETE (0xa)
#define ODY_GPIO_ASSIGNED_PIN_E_BOOT_REQ (9)
#define ODY_GPIO_ASSIGNED_PIN_E_BOOT_WAIT (0xe)
#define ODY_GPIO_ASSIGNED_PIN_E_FAIL_CODE (0xb)
#define ODY_GPIO_ASSIGNED_PIN_E_GSERP_PHY_SIF_JTG_CLK (0x35)
#define ODY_GPIO_ASSIGNED_PIN_E_GSERP_PHY_SIF_JTG_DEN (0x37)
#define ODY_GPIO_ASSIGNED_PIN_E_GSERP_PHY_SIF_JTG_DIN (0x34)
#define ODY_GPIO_ASSIGNED_PIN_E_GSERP_PHY_SIF_JTG_DOUT (0x36)
#define ODY_GPIO_ASSIGNED_PIN_E_I3C3_SCL (0x31)
#define ODY_GPIO_ASSIGNED_PIN_E_I3C3_SDA (0x30)
#define ODY_GPIO_ASSIGNED_PIN_E_I3C4_SCL (0x33)
#define ODY_GPIO_ASSIGNED_PIN_E_I3C4_SDA (0x32)
#define ODY_GPIO_ASSIGNED_PIN_E_MCAST_IRQ_0 (4)
#define ODY_GPIO_ASSIGNED_PIN_E_MCAST_IRQ_1 (5)
#define ODY_GPIO_ASSIGNED_PIN_E_MCAST_IRQ_2 (6)
#define ODY_GPIO_ASSIGNED_PIN_E_MCAST_IRQ_3 (7)
#define ODY_GPIO_ASSIGNED_PIN_E_PLL_LOCK (0x2d)
#define ODY_GPIO_ASSIGNED_PIN_E_SPI0_CLK (0x18)
#define ODY_GPIO_ASSIGNED_PIN_E_SPI0_CS0 (0x1a)
#define ODY_GPIO_ASSIGNED_PIN_E_SPI0_CS1 (0x1b)
#define ODY_GPIO_ASSIGNED_PIN_E_SPI0_CS2 (0x1c)
#define ODY_GPIO_ASSIGNED_PIN_E_SPI0_CS3 (0x1d)
#define ODY_GPIO_ASSIGNED_PIN_E_SPI0_DQS (0x19)
#define ODY_GPIO_ASSIGNED_PIN_E_SPI0_IO0 (0x10)
#define ODY_GPIO_ASSIGNED_PIN_E_SPI0_IO1 (0x11)
#define ODY_GPIO_ASSIGNED_PIN_E_SPI0_IO2 (0x12)
#define ODY_GPIO_ASSIGNED_PIN_E_SPI0_IO3 (0x13)
#define ODY_GPIO_ASSIGNED_PIN_E_SPI0_IO4 (0x14)
#define ODY_GPIO_ASSIGNED_PIN_E_SPI0_IO5 (0x15)
#define ODY_GPIO_ASSIGNED_PIN_E_SPI0_IO6 (0x16)
#define ODY_GPIO_ASSIGNED_PIN_E_SPI0_IO7 (0x17)
#define ODY_GPIO_ASSIGNED_PIN_E_SPI0_RESET (0x2f)
#define ODY_GPIO_ASSIGNED_PIN_E_SPI1_CLK (0x26)
#define ODY_GPIO_ASSIGNED_PIN_E_SPI1_CS0 (0x28)
#define ODY_GPIO_ASSIGNED_PIN_E_SPI1_CS1 (0x29)
#define ODY_GPIO_ASSIGNED_PIN_E_SPI1_CS2 (0x2a)
#define ODY_GPIO_ASSIGNED_PIN_E_SPI1_CS3 (0x2b)
#define ODY_GPIO_ASSIGNED_PIN_E_SPI1_DQS (0x27)
#define ODY_GPIO_ASSIGNED_PIN_E_SPI1_IO0 (0x1e)
#define ODY_GPIO_ASSIGNED_PIN_E_SPI1_IO1 (0x1f)
#define ODY_GPIO_ASSIGNED_PIN_E_SPI1_IO2 (0x20)
#define ODY_GPIO_ASSIGNED_PIN_E_SPI1_IO3 (0x21)
#define ODY_GPIO_ASSIGNED_PIN_E_SPI1_IO4 (0x22)
#define ODY_GPIO_ASSIGNED_PIN_E_SPI1_IO5 (0x23)
#define ODY_GPIO_ASSIGNED_PIN_E_SPI1_IO6 (0x24)
#define ODY_GPIO_ASSIGNED_PIN_E_SPI1_IO7 (0x25)
#define ODY_GPIO_ASSIGNED_PIN_E_SPI1_RESET (0x2c)

/**
 * Enumeration gpio_bar_e
 *
 * GPIO Base Address Register Enumeration
 * Enumerates the base address registers.
 */
#define ODY_GPIO_BAR_E_GPIO_PF_BAR0 (0x803000000000ll)
#define ODY_GPIO_BAR_E_GPIO_PF_BAR0_SIZE 0x10000ull
#define ODY_GPIO_BAR_E_GPIO_PF_BAR4 (0x803000f00000ll)
#define ODY_GPIO_BAR_E_GPIO_PF_BAR4_SIZE 0x100000ull

/**
 * Enumeration gpio_int_vec_e
 *
 * GPIO MSI-X Vector Enumeration
 * Enumerates the MSI-X interrupt vectors.
 */
#define ODY_GPIO_INT_VEC_E_INTR_PINX(a) (0x52 + 2 * (a))
#define ODY_GPIO_INT_VEC_E_INTR_PINX_CLEAR(a) (0x53 + 2 * (a))
#define ODY_GPIO_INT_VEC_E_MC_INTR1_PPX(a) (0x40 + (a))
#define ODY_GPIO_INT_VEC_E_MC_INTR_PPX(a) (0 + (a))

/**
 * Enumeration gpio_pin_sel_e
 *
 * GPIO Pin Select Enumeration
 * Enumerates the GPIO pin function selections for GPIO_BIT_CFG()[PIN_SEL].
 *
 * The GPIO pins can be configured as either input, output or input/output/bidirectional
 * depending on the GPIO_PIN_SEL_E used as described in the value's description.  When
 * a GPIO pin is used as input, the value is provided to the described function, and is
 * also readable via GPIO_RX_DAT.
 *
 * Multiple GPIO pins may not be configured to point to the same input encoding, or
 * the input result is unpredictable (e.g. GPIO_BIT_CFG(1)[PIN_SEL] and
 * GPIO_BIT_CFG(2)[PIN_SEL] cannot both be 0x80).
 *
 * If a given select is not assigned to any pin, then that virtual input receives a
 * logical zero.  E.g. if no GPIO_BIT_CFG()[PIN_SEL] has the value ::TIM_GPIO_CLK,
 * then the GPIO will provide the TIM block's external clock input with the value of
 * zero.
 */
#define ODY_GPIO_PIN_SEL_E_BOOT_REQ (0x3e0)
#define ODY_GPIO_PIN_SEL_E_BOOT_WAIT (0x3e1)
#define ODY_GPIO_PIN_SEL_E_BTS_BFN_CLK (0x506)
#define ODY_GPIO_PIN_SEL_E_BTS_BFN_IN (0x505)
#define ODY_GPIO_PIN_SEL_E_BTS_BFN_OUT (0x510)
#define ODY_GPIO_PIN_SEL_E_BTS_CGBFN_OUT (0x50d)
#define ODY_GPIO_PIN_SEL_E_BTS_CGCLK_OUT (0x50e)
#define ODY_GPIO_PIN_SEL_E_BTS_CGTENMS_OUT (0x50c)
#define ODY_GPIO_PIN_SEL_E_BTS_DAC_CLK (0x511)
#define ODY_GPIO_PIN_SEL_E_BTS_EXTREFX_CLK(a) (0x500 + (a))
#define ODY_GPIO_PIN_SEL_E_BTS_PWM_DOUT (0x513)
#define ODY_GPIO_PIN_SEL_E_BTS_PWM_SCLK (0x512)
#define ODY_GPIO_PIN_SEL_E_BTS_RFP_IN (0x504)
#define ODY_GPIO_PIN_SEL_E_BTS_RFP_OUT (0x50f)
#define ODY_GPIO_PIN_SEL_E_BTS_TPX(a) (0x507 + (a))
#define ODY_GPIO_PIN_SEL_E_CORE_RESET_IN (0x480)
#define ODY_GPIO_PIN_SEL_E_CORE_RESET_OUT (0x481)
#define ODY_GPIO_PIN_SEL_E_GPIO_CLKX(a) (0x260 + (a))
#define ODY_GPIO_PIN_SEL_E_GPIO_CLK_SYNCEX(a) (3 + (a))
#define ODY_GPIO_PIN_SEL_E_GPIO_PTP_CKOUT (1)
#define ODY_GPIO_PIN_SEL_E_GPIO_PTP_PPS (2)
#define ODY_GPIO_PIN_SEL_E_GPIO_PTP_SYSCK (8)
#define ODY_GPIO_PIN_SEL_E_GPIO_SW (0)
#define ODY_GPIO_PIN_SEL_E_GSERPX_DTESTX(a, b) (0x5a0 + 0x10 * (a) + (b))
#define ODY_GPIO_PIN_SEL_E_GSERPX_GPIX(a, b) (0x670 + 8 * (a) + (b))
#define ODY_GPIO_PIN_SEL_E_GSERPX_GPOX(a, b) (0x6e0 + 8 * (a) + (b))
#define ODY_GPIO_PIN_SEL_E_GSERPX_PHY_SIF_INX(a, b) (0x520 + 3 * (a) + (b))
#define ODY_GPIO_PIN_SEL_E_GSERPX_PHY_SIF_OUT(a) (0x580 + (a))
#define ODY_GPIO_PIN_SEL_E_GSERPX_PRAM_SIF_INX(a, b) (0x550 + 3 * (a) + (b))
#define ODY_GPIO_PIN_SEL_E_GSERPX_PRAM_SIF_OUT(a) (0x590 + (a))
#define ODY_GPIO_PIN_SEL_E_GSERPX_UART_RXX(a, b) (0x7a0 + 5 * (a) + (b))
#define ODY_GPIO_PIN_SEL_E_GSERPX_UART_TXX(a, b) (0x750 + 5 * (a) + (b))
#define ODY_GPIO_PIN_SEL_E_I3CX_SCL(a) (0x28d + (a))
#define ODY_GPIO_PIN_SEL_E_I3CX_SDA(a) (0x291 + (a))
#define ODY_GPIO_PIN_SEL_E_MCDX_IN(a) (0x23f + (a))
#define ODY_GPIO_PIN_SEL_E_MCDX_OUT(a) (0x242 + (a))
#define ODY_GPIO_PIN_SEL_E_MCP_RESET_IN (0x482)
#define ODY_GPIO_PIN_SEL_E_MCP_RESET_OUT (0x483)
#define ODY_GPIO_PIN_SEL_E_OCLA_EXT_TRIGGER (0x231)
#define ODY_GPIO_PIN_SEL_E_PBUS_ADX(a) (0xfa + (a))
#define ODY_GPIO_PIN_SEL_E_PBUS_ALEX(a) (0xe8 + (a))
#define ODY_GPIO_PIN_SEL_E_PBUS_CEX(a) (0xec + (a))
#define ODY_GPIO_PIN_SEL_E_PBUS_CLE (0xe0)
#define ODY_GPIO_PIN_SEL_E_PBUS_DIR (0xe4)
#define ODY_GPIO_PIN_SEL_E_PBUS_DMACKX(a) (0xe6 + (a))
#define ODY_GPIO_PIN_SEL_E_PBUS_DMARQX(a) (0x11a + (a))
#define ODY_GPIO_PIN_SEL_E_PBUS_OE (0xe3)
#define ODY_GPIO_PIN_SEL_E_PBUS_WAIT (0xe1)
#define ODY_GPIO_PIN_SEL_E_PBUS_WE (0xe2)
#define ODY_GPIO_PIN_SEL_E_PLL_LOCK (0x131)
#define ODY_GPIO_PIN_SEL_E_PTP_EVTCNT (0x252)
#define ODY_GPIO_PIN_SEL_E_PTP_EXT_CLK (0x250)
#define ODY_GPIO_PIN_SEL_E_PTP_TSTMP (0x251)
#define ODY_GPIO_PIN_SEL_E_SCP_RESET_IN (0x484)
#define ODY_GPIO_PIN_SEL_E_SCP_RESET_OUT (0x485)
#define ODY_GPIO_PIN_SEL_E_SMIX_MDC(a) (0x253 + (a))
#define ODY_GPIO_PIN_SEL_E_SMIX_MDIO(a) (0x255 + (a))
#define ODY_GPIO_PIN_SEL_E_SPI0_CLK (0x274)
#define ODY_GPIO_PIN_SEL_E_SPI0_CSX(a) (0x270 + (a))
#define ODY_GPIO_PIN_SEL_E_SPI0_DQS (0x275)
#define ODY_GPIO_PIN_SEL_E_SPI0_IOX(a) (0x278 + (a))
#define ODY_GPIO_PIN_SEL_E_SPI0_RESET (0x276)
#define ODY_GPIO_PIN_SEL_E_SPI1_CLK (0x280)
#define ODY_GPIO_PIN_SEL_E_SPI1_CSX(a) (0x284 + (a))
#define ODY_GPIO_PIN_SEL_E_SPI1_DQS (0x281)
#define ODY_GPIO_PIN_SEL_E_SPI1_IOX(a) (0x288 + (a))
#define ODY_GPIO_PIN_SEL_E_SPI1_RESET (0x282)
#define ODY_GPIO_PIN_SEL_E_TIMER (0x11c)
#define ODY_GPIO_PIN_SEL_E_TIM_GPIO_CLK (0x230)
#define ODY_GPIO_PIN_SEL_E_TWS_SCLX(a) (0x298 + (a))
#define ODY_GPIO_PIN_SEL_E_TWS_SDAX(a) (0x2a4 + (a))
#define ODY_GPIO_PIN_SEL_E_UARTX_CTS(a) (0x3c0 + (a))
#define ODY_GPIO_PIN_SEL_E_UARTX_DCD(a) (0x3b0 + (a))
#define ODY_GPIO_PIN_SEL_E_UARTX_DSR(a) (0x3b8 + (a))
#define ODY_GPIO_PIN_SEL_E_UARTX_DTR(a) (0x390 + (a))
#define ODY_GPIO_PIN_SEL_E_UARTX_RI(a) (0x3a8 + (a))
#define ODY_GPIO_PIN_SEL_E_UARTX_RTS(a) (0x398 + (a))
#define ODY_GPIO_PIN_SEL_E_UARTX_SIN(a) (0x3c8 + (a))
#define ODY_GPIO_PIN_SEL_E_UARTX_SOUT(a) (0x3a0 + (a))

/**
 * Enumeration gpio_strap_pin_e
 *
 * GPIO Strap Pin Number Enumeration
 * Enumerates GPIO pin numbers with their associated strap functions. The names of
 * these values are used as the documented name of each
 * strap. e.g. GPIO_STRAP_PIN_E::BOOT_METHOD0 describes the GPIO0/BOOT_METHOD0 strap.
 * For strap state, see GPIO_STRAP and GPIO_STRAP1.
 */
#define ODY_GPIO_STRAP_PIN_E_AVS_DISABLE (9)
#define ODY_GPIO_STRAP_PIN_E_BOOT_METHOD0 (0)
#define ODY_GPIO_STRAP_PIN_E_BOOT_METHOD1 (1)
#define ODY_GPIO_STRAP_PIN_E_BOOT_METHOD2 (2)
#define ODY_GPIO_STRAP_PIN_E_BOOT_METHOD3 (3)
#define ODY_GPIO_STRAP_PIN_E_BOOT_METHOD4 (0xc)
#define ODY_GPIO_STRAP_PIN_E_BOOT_METHOD5 (0xd)
#define ODY_GPIO_STRAP_PIN_E_PCIE0_EP_MODE (0xf)
#define ODY_GPIO_STRAP_PIN_E_REF_CLK_TERMINATION (0xb)

/**
 * Register (NCB) gpio_bit_cfg#
 *
 * GPIO Bit Configuration Registers
 * Each register provides configuration information for the corresponding GPIO
 * pin. There may be more indicies in this register than GPIO pins, any such
 * unimplemented indexes should not be reprogrammed.
 *
 * Each index is only accessible to the requestor(s) permitted with GPIO_BIT_PERMIT().
 *
 * When permitted, this register is accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 */
union ody_gpio_bit_cfgx {
	uint64_t u;
	struct ody_gpio_bit_cfgx_s {
		uint64_t tx_oe                       : 1;
		uint64_t pin_xor                     : 1;
		uint64_t int_en                      : 1;
		uint64_t int_type                    : 1;
		uint64_t fil_cnt                     : 4;
		uint64_t fil_sel                     : 4;
		uint64_t tx_od                       : 1;
		uint64_t blink_en                    : 2;
		uint64_t reserved_15                 : 1;
		uint64_t pin_sel                     : 11;
		uint64_t reserved_27_63              : 37;
	} s;
	/* struct ody_gpio_bit_cfgx_s cn; */
};
typedef union ody_gpio_bit_cfgx ody_gpio_bit_cfgx_t;

static inline uint64_t ODY_GPIO_BIT_CFGX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GPIO_BIT_CFGX(uint64_t a)
{
	if (a <= 63)
		return 0x803000000400ll + 8ll * ((a) & 0x3f);
	__ody_csr_fatal("GPIO_BIT_CFGX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GPIO_BIT_CFGX(a) ody_gpio_bit_cfgx_t
#define bustype_ODY_GPIO_BIT_CFGX(a) CSR_TYPE_NCB
#define basename_ODY_GPIO_BIT_CFGX(a) "GPIO_BIT_CFGX"
#define device_bar_ODY_GPIO_BIT_CFGX(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_GPIO_BIT_CFGX(a) (a)
#define arguments_ODY_GPIO_BIT_CFGX(a) (a), -1, -1, -1

/**
 * Register (NCB) gpio_bit_permit#
 *
 * GPIO Bit Permit Register
 * This register determines which requestor(s) are permitted to access which GPIO pins.
 *
 * This register is only accessible to the requestor(s) permitted with GPIO_PERMIT.
 * (That is, only the GPIO_PERMIT permitted agent can change the permission settings of
 * all requestors.)
 *
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 */
union ody_gpio_bit_permitx {
	uint64_t u;
	struct ody_gpio_bit_permitx_s {
		uint64_t permitdis                   : 5;
		uint64_t reserved_5_63               : 59;
	} s;
	/* struct ody_gpio_bit_permitx_s cn; */
};
typedef union ody_gpio_bit_permitx ody_gpio_bit_permitx_t;

static inline uint64_t ODY_GPIO_BIT_PERMITX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GPIO_BIT_PERMITX(uint64_t a)
{
	if (a <= 63)
		return 0x803000002000ll + 8ll * ((a) & 0x3f);
	__ody_csr_fatal("GPIO_BIT_PERMITX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GPIO_BIT_PERMITX(a) ody_gpio_bit_permitx_t
#define bustype_ODY_GPIO_BIT_PERMITX(a) CSR_TYPE_NCB
#define basename_ODY_GPIO_BIT_PERMITX(a) "GPIO_BIT_PERMITX"
#define device_bar_ODY_GPIO_BIT_PERMITX(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_GPIO_BIT_PERMITX(a) (a)
#define arguments_ODY_GPIO_BIT_PERMITX(a) (a), -1, -1, -1

/**
 * Register (NCB) gpio_blink_cfg
 *
 * GPIO Output Blinker Configuration Register
 * This register configures the blink generator.
 *
 * This register is only accessible to the requestor(s) permitted with GPIO_PERMIT.
 *
 * When permitted, this register is accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 */
union ody_gpio_blink_cfg {
	uint64_t u;
	struct ody_gpio_blink_cfg_s {
		uint64_t stretch_on                  : 4;
		uint64_t stretch_off                 : 4;
		uint64_t max_on                      : 4;
		uint64_t force_off                   : 4;
		uint64_t reserved_16_63              : 48;
	} s;
	/* struct ody_gpio_blink_cfg_s cn; */
};
typedef union ody_gpio_blink_cfg ody_gpio_blink_cfg_t;

#define ODY_GPIO_BLINK_CFG ODY_GPIO_BLINK_CFG_FUNC()
static inline uint64_t ODY_GPIO_BLINK_CFG_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GPIO_BLINK_CFG_FUNC(void)
{
	return 0x803000001440ll;
}

#define typedef_ODY_GPIO_BLINK_CFG ody_gpio_blink_cfg_t
#define bustype_ODY_GPIO_BLINK_CFG CSR_TYPE_NCB
#define basename_ODY_GPIO_BLINK_CFG "GPIO_BLINK_CFG"
#define device_bar_ODY_GPIO_BLINK_CFG 0x0 /* PF_BAR0 */
#define busnum_ODY_GPIO_BLINK_CFG 0
#define arguments_ODY_GPIO_BLINK_CFG -1, -1, -1, -1

/**
 * Register (NCB) gpio_blink_freq
 *
 * GPIO Blink Clock Register
 * This register configures the blink generator.
 *
 * This register is only accessible to the requestor(s) permitted with GPIO_PERMIT.
 *
 * When permitted, this register is accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 */
union ody_gpio_blink_freq {
	uint64_t u;
	struct ody_gpio_blink_freq_s {
		uint64_t div                         : 27;
		uint64_t reserved_27_63              : 37;
	} s;
	/* struct ody_gpio_blink_freq_s cn; */
};
typedef union ody_gpio_blink_freq ody_gpio_blink_freq_t;

#define ODY_GPIO_BLINK_FREQ ODY_GPIO_BLINK_FREQ_FUNC()
static inline uint64_t ODY_GPIO_BLINK_FREQ_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GPIO_BLINK_FREQ_FUNC(void)
{
	return 0x803000001448ll;
}

#define typedef_ODY_GPIO_BLINK_FREQ ody_gpio_blink_freq_t
#define bustype_ODY_GPIO_BLINK_FREQ CSR_TYPE_NCB
#define basename_ODY_GPIO_BLINK_FREQ "GPIO_BLINK_FREQ"
#define device_bar_ODY_GPIO_BLINK_FREQ 0x0 /* PF_BAR0 */
#define busnum_ODY_GPIO_BLINK_FREQ 0
#define arguments_ODY_GPIO_BLINK_FREQ -1, -1, -1, -1

/**
 * Register (NCB) gpio_clk_gen#
 *
 * GPIO Clock Generator Registers
 * This register configures the clock generators. The number of generators is
 * discoverable in GPIO_CONST[CLKGEN].
 *
 * This register is only accessible to the requestor(s) permitted with GPIO_PERMIT.
 *
 * When permitted, this register is accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 */
union ody_gpio_clk_genx {
	uint64_t u;
	struct ody_gpio_clk_genx_s {
		uint64_t n                           : 32;
		uint64_t high                        : 32;
	} s;
	/* struct ody_gpio_clk_genx_s cn; */
};
typedef union ody_gpio_clk_genx ody_gpio_clk_genx_t;

static inline uint64_t ODY_GPIO_CLK_GENX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GPIO_CLK_GENX(uint64_t a)
{
	if (a <= 7)
		return 0x803000001800ll + 8ll * ((a) & 0x7);
	__ody_csr_fatal("GPIO_CLK_GENX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GPIO_CLK_GENX(a) ody_gpio_clk_genx_t
#define bustype_ODY_GPIO_CLK_GENX(a) CSR_TYPE_NCB
#define basename_ODY_GPIO_CLK_GENX(a) "GPIO_CLK_GENX"
#define device_bar_ODY_GPIO_CLK_GENX(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_GPIO_CLK_GENX(a) (a)
#define arguments_ODY_GPIO_CLK_GENX(a) (a), -1, -1, -1

/**
 * Register (NCB) gpio_clk_synce#
 *
 * GPIO Clock SyncE Registers
 * Certain SerDes may be configured as a clock source. The GPIO block can support up to two
 * unique clocks to send out any GPIO pin as configured when GPIO_BIT_CFG()[PIN_SEL] =
 * GPIO_PIN_SEL_E::GPIO_CLK_SYNCE(0..1). The clock can be divided by 20, 40, 80 or 160
 * of the selected SerDes clock. Legal values are based on the number of SerDes.
 *
 * This register is only accessible to the requestor(s) permitted with GPIO_PERMIT.
 *
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 */
union ody_gpio_clk_syncex {
	uint64_t u;
	struct ody_gpio_clk_syncex_s {
		uint64_t lane_sel                    : 2;
		uint64_t div                         : 2;
		uint64_t reserved_4_7                : 4;
		uint64_t qlm_sel                     : 4;
		uint64_t reserved_12_63              : 52;
	} s;
	/* struct ody_gpio_clk_syncex_s cn; */
};
typedef union ody_gpio_clk_syncex ody_gpio_clk_syncex_t;

static inline uint64_t ODY_GPIO_CLK_SYNCEX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GPIO_CLK_SYNCEX(uint64_t a)
{
	if (a <= 1)
		return 0x803000000060ll + 8ll * ((a) & 0x1);
	__ody_csr_fatal("GPIO_CLK_SYNCEX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GPIO_CLK_SYNCEX(a) ody_gpio_clk_syncex_t
#define bustype_ODY_GPIO_CLK_SYNCEX(a) CSR_TYPE_NCB
#define basename_ODY_GPIO_CLK_SYNCEX(a) "GPIO_CLK_SYNCEX"
#define device_bar_ODY_GPIO_CLK_SYNCEX(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_GPIO_CLK_SYNCEX(a) (a)
#define arguments_ODY_GPIO_CLK_SYNCEX(a) (a), -1, -1, -1

/**
 * Register (NCB) gpio_const
 *
 * GPIO Constants Register
 * This register contains constants for software discovery.
 *
 * This register is accessible to all requestors (regardless of GPIO_PERMIT).
 *
 * When permitted, this register is accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 */
union ody_gpio_const {
	uint64_t u;
	struct ody_gpio_const_s {
		uint64_t gpios                       : 8;
		uint64_t pp                          : 8;
		uint64_t clkgen                      : 4;
		uint64_t reserved_20_63              : 44;
	} s;
	/* struct ody_gpio_const_s cn; */
};
typedef union ody_gpio_const ody_gpio_const_t;

#define ODY_GPIO_CONST ODY_GPIO_CONST_FUNC()
static inline uint64_t ODY_GPIO_CONST_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GPIO_CONST_FUNC(void)
{
	return 0x803000000090ll;
}

#define typedef_ODY_GPIO_CONST ody_gpio_const_t
#define bustype_ODY_GPIO_CONST CSR_TYPE_NCB
#define basename_ODY_GPIO_CONST "GPIO_CONST"
#define device_bar_ODY_GPIO_CONST 0x0 /* PF_BAR0 */
#define busnum_ODY_GPIO_CONST 0
#define arguments_ODY_GPIO_CONST -1, -1, -1, -1

/**
 * Register (NCB) gpio_intr#
 *
 * GPIO Bit Interrupt Registers
 * Each register provides interrupt information for the corresponding GPIO pin.
 * GPIO_INTR() interrupts can be level or edge interrupts depending on GPIO_BIT_CFG()[INT_TYPE].
 *
 * Each index is only accessible to the requestor(s) permitted with GPIO_BIT_PERMIT().
 *
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 */
union ody_gpio_intrx {
	uint64_t u;
	struct ody_gpio_intrx_s {
		uint64_t intr                        : 1;
		uint64_t intr_w1s                    : 1;
		uint64_t intr_ena_w1c                : 1;
		uint64_t intr_ena_w1s                : 1;
		uint64_t reserved_4_63               : 60;
	} s;
	/* struct ody_gpio_intrx_s cn; */
};
typedef union ody_gpio_intrx ody_gpio_intrx_t;

static inline uint64_t ODY_GPIO_INTRX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GPIO_INTRX(uint64_t a)
{
	if (a <= 63)
		return 0x803000000800ll + 8ll * ((a) & 0x3f);
	__ody_csr_fatal("GPIO_INTRX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GPIO_INTRX(a) ody_gpio_intrx_t
#define bustype_ODY_GPIO_INTRX(a) CSR_TYPE_NCB
#define basename_ODY_GPIO_INTRX(a) "GPIO_INTRX"
#define device_bar_ODY_GPIO_INTRX(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_GPIO_INTRX(a) (a)
#define arguments_ODY_GPIO_INTRX(a) (a), -1, -1, -1

/**
 * Register (NCB) gpio_io_ctl
 *
 * GPIO I/O Control Register
 * This register is only accessible to the requestor(s) permitted with GPIO_PERMIT.
 *
 * When permitted, this register is accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 */
union ody_gpio_io_ctl {
	uint64_t u;
	struct ody_gpio_io_ctl_s {
		uint64_t slew0                       : 2;
		uint64_t drive0                      : 2;
		uint64_t slew1                       : 2;
		uint64_t drive1                      : 2;
		uint64_t slew2                       : 2;
		uint64_t drive2                      : 2;
		uint64_t slew3                       : 2;
		uint64_t drive3                      : 2;
		uint64_t slew4                       : 2;
		uint64_t drive4                      : 2;
		uint64_t slew5                       : 2;
		uint64_t drive5                      : 2;
		uint64_t slew6                       : 2;
		uint64_t drive6                      : 2;
		uint64_t slew7                       : 2;
		uint64_t drive7                      : 2;
		uint64_t reserved_32_63              : 32;
	} s;
	/* struct ody_gpio_io_ctl_s cn; */
};
typedef union ody_gpio_io_ctl ody_gpio_io_ctl_t;

#define ODY_GPIO_IO_CTL ODY_GPIO_IO_CTL_FUNC()
static inline uint64_t ODY_GPIO_IO_CTL_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GPIO_IO_CTL_FUNC(void)
{
	return 0x803000000080ll;
}

#define typedef_ODY_GPIO_IO_CTL ody_gpio_io_ctl_t
#define bustype_ODY_GPIO_IO_CTL CSR_TYPE_NCB
#define basename_ODY_GPIO_IO_CTL "GPIO_IO_CTL"
#define device_bar_ODY_GPIO_IO_CTL 0x0 /* PF_BAR0 */
#define busnum_ODY_GPIO_IO_CTL 0
#define arguments_ODY_GPIO_IO_CTL -1, -1, -1, -1

/**
 * Register (NCB) gpio_mc_intr#
 *
 * GPIO Bit Multicast Interrupt Registers
 * Each register provides interrupt multicasting for GPIO(4..7).
 *
 * This register is only accessible to the requestor(s) permitted with GPIO_PERMIT.
 *
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 */
union ody_gpio_mc_intrx {
	uint64_t u;
	struct ody_gpio_mc_intrx_s {
		uint64_t intr                        : 64;
	} s;
	/* struct ody_gpio_mc_intrx_s cn; */
};
typedef union ody_gpio_mc_intrx ody_gpio_mc_intrx_t;

static inline uint64_t ODY_GPIO_MC_INTRX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GPIO_MC_INTRX(uint64_t a)
{
	if ((a >= 4) && (a <= 7))
		return 0x803000001000ll + 8ll * ((a) & 0x7);
	__ody_csr_fatal("GPIO_MC_INTRX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GPIO_MC_INTRX(a) ody_gpio_mc_intrx_t
#define bustype_ODY_GPIO_MC_INTRX(a) CSR_TYPE_NCB
#define basename_ODY_GPIO_MC_INTRX(a) "GPIO_MC_INTRX"
#define device_bar_ODY_GPIO_MC_INTRX(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_GPIO_MC_INTRX(a) (a)
#define arguments_ODY_GPIO_MC_INTRX(a) (a), -1, -1, -1

/**
 * Register (NCB) gpio_mc_intr#_ena_w1c
 *
 * GPIO Bit Multicast Interrupt Registers
 * This register clears interrupt enable bits.
 */
union ody_gpio_mc_intrx_ena_w1c {
	uint64_t u;
	struct ody_gpio_mc_intrx_ena_w1c_s {
		uint64_t intr                        : 64;
	} s;
	/* struct ody_gpio_mc_intrx_ena_w1c_s cn; */
};
typedef union ody_gpio_mc_intrx_ena_w1c ody_gpio_mc_intrx_ena_w1c_t;

static inline uint64_t ODY_GPIO_MC_INTRX_ENA_W1C(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GPIO_MC_INTRX_ENA_W1C(uint64_t a)
{
	if ((a >= 4) && (a <= 7))
		return 0x803000001200ll + 8ll * ((a) & 0x7);
	__ody_csr_fatal("GPIO_MC_INTRX_ENA_W1C", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GPIO_MC_INTRX_ENA_W1C(a) ody_gpio_mc_intrx_ena_w1c_t
#define bustype_ODY_GPIO_MC_INTRX_ENA_W1C(a) CSR_TYPE_NCB
#define basename_ODY_GPIO_MC_INTRX_ENA_W1C(a) "GPIO_MC_INTRX_ENA_W1C"
#define device_bar_ODY_GPIO_MC_INTRX_ENA_W1C(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_GPIO_MC_INTRX_ENA_W1C(a) (a)
#define arguments_ODY_GPIO_MC_INTRX_ENA_W1C(a) (a), -1, -1, -1

/**
 * Register (NCB) gpio_mc_intr#_ena_w1s
 *
 * GPIO Bit Multicast Interrupt Registers
 * This register sets interrupt enable bits.
 */
union ody_gpio_mc_intrx_ena_w1s {
	uint64_t u;
	struct ody_gpio_mc_intrx_ena_w1s_s {
		uint64_t intr                        : 64;
	} s;
	/* struct ody_gpio_mc_intrx_ena_w1s_s cn; */
};
typedef union ody_gpio_mc_intrx_ena_w1s ody_gpio_mc_intrx_ena_w1s_t;

static inline uint64_t ODY_GPIO_MC_INTRX_ENA_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GPIO_MC_INTRX_ENA_W1S(uint64_t a)
{
	if ((a >= 4) && (a <= 7))
		return 0x803000001300ll + 8ll * ((a) & 0x7);
	__ody_csr_fatal("GPIO_MC_INTRX_ENA_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GPIO_MC_INTRX_ENA_W1S(a) ody_gpio_mc_intrx_ena_w1s_t
#define bustype_ODY_GPIO_MC_INTRX_ENA_W1S(a) CSR_TYPE_NCB
#define basename_ODY_GPIO_MC_INTRX_ENA_W1S(a) "GPIO_MC_INTRX_ENA_W1S"
#define device_bar_ODY_GPIO_MC_INTRX_ENA_W1S(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_GPIO_MC_INTRX_ENA_W1S(a) (a)
#define arguments_ODY_GPIO_MC_INTRX_ENA_W1S(a) (a), -1, -1, -1

/**
 * Register (NCB) gpio_mc_intr#_w1s
 *
 * GPIO Bit Multicast Interrupt Registers
 * This register sets interrupt bits.
 */
union ody_gpio_mc_intrx_w1s {
	uint64_t u;
	struct ody_gpio_mc_intrx_w1s_s {
		uint64_t intr                        : 64;
	} s;
	/* struct ody_gpio_mc_intrx_w1s_s cn; */
};
typedef union ody_gpio_mc_intrx_w1s ody_gpio_mc_intrx_w1s_t;

static inline uint64_t ODY_GPIO_MC_INTRX_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GPIO_MC_INTRX_W1S(uint64_t a)
{
	if ((a >= 4) && (a <= 7))
		return 0x803000001100ll + 8ll * ((a) & 0x7);
	__ody_csr_fatal("GPIO_MC_INTRX_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GPIO_MC_INTRX_W1S(a) ody_gpio_mc_intrx_w1s_t
#define bustype_ODY_GPIO_MC_INTRX_W1S(a) CSR_TYPE_NCB
#define basename_ODY_GPIO_MC_INTRX_W1S(a) "GPIO_MC_INTRX_W1S"
#define device_bar_ODY_GPIO_MC_INTRX_W1S(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_GPIO_MC_INTRX_W1S(a) (a)
#define arguments_ODY_GPIO_MC_INTRX_W1S(a) (a), -1, -1, -1

/**
 * Register (NCB) gpio_mc_intr1#
 *
 * GPIO Bit Multicast Interrupt Registers
 * Each register provides interrupt multicasting for GPIO(4..7).
 *
 * This register is only accessible to the requestor(s) permitted with GPIO_PERMIT.
 *
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 */
union ody_gpio_mc_intr1x {
	uint64_t u;
	struct ody_gpio_mc_intr1x_s {
		uint64_t intr                        : 18;
		uint64_t reserved_18_63              : 46;
	} s;
	/* struct ody_gpio_mc_intr1x_s cn; */
};
typedef union ody_gpio_mc_intr1x ody_gpio_mc_intr1x_t;

static inline uint64_t ODY_GPIO_MC_INTR1X(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GPIO_MC_INTR1X(uint64_t a)
{
	if ((a >= 4) && (a <= 7))
		return 0x803000001040ll + 8ll * ((a) & 0x7);
	__ody_csr_fatal("GPIO_MC_INTR1X", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GPIO_MC_INTR1X(a) ody_gpio_mc_intr1x_t
#define bustype_ODY_GPIO_MC_INTR1X(a) CSR_TYPE_NCB
#define basename_ODY_GPIO_MC_INTR1X(a) "GPIO_MC_INTR1X"
#define device_bar_ODY_GPIO_MC_INTR1X(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_GPIO_MC_INTR1X(a) (a)
#define arguments_ODY_GPIO_MC_INTR1X(a) (a), -1, -1, -1

/**
 * Register (NCB) gpio_mc_intr1#_ena_w1c
 *
 * GPIO Bit Multicast Interrupt Registers
 * This register clears interrupt enable bits.
 */
union ody_gpio_mc_intr1x_ena_w1c {
	uint64_t u;
	struct ody_gpio_mc_intr1x_ena_w1c_s {
		uint64_t intr                        : 18;
		uint64_t reserved_18_63              : 46;
	} s;
	/* struct ody_gpio_mc_intr1x_ena_w1c_s cn; */
};
typedef union ody_gpio_mc_intr1x_ena_w1c ody_gpio_mc_intr1x_ena_w1c_t;

static inline uint64_t ODY_GPIO_MC_INTR1X_ENA_W1C(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GPIO_MC_INTR1X_ENA_W1C(uint64_t a)
{
	if ((a >= 4) && (a <= 7))
		return 0x803000001240ll + 8ll * ((a) & 0x7);
	__ody_csr_fatal("GPIO_MC_INTR1X_ENA_W1C", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GPIO_MC_INTR1X_ENA_W1C(a) ody_gpio_mc_intr1x_ena_w1c_t
#define bustype_ODY_GPIO_MC_INTR1X_ENA_W1C(a) CSR_TYPE_NCB
#define basename_ODY_GPIO_MC_INTR1X_ENA_W1C(a) "GPIO_MC_INTR1X_ENA_W1C"
#define device_bar_ODY_GPIO_MC_INTR1X_ENA_W1C(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_GPIO_MC_INTR1X_ENA_W1C(a) (a)
#define arguments_ODY_GPIO_MC_INTR1X_ENA_W1C(a) (a), -1, -1, -1

/**
 * Register (NCB) gpio_mc_intr1#_ena_w1s
 *
 * GPIO Bit Multicast Interrupt Registers
 * This register sets interrupt enable bits.
 */
union ody_gpio_mc_intr1x_ena_w1s {
	uint64_t u;
	struct ody_gpio_mc_intr1x_ena_w1s_s {
		uint64_t intr                        : 18;
		uint64_t reserved_18_63              : 46;
	} s;
	/* struct ody_gpio_mc_intr1x_ena_w1s_s cn; */
};
typedef union ody_gpio_mc_intr1x_ena_w1s ody_gpio_mc_intr1x_ena_w1s_t;

static inline uint64_t ODY_GPIO_MC_INTR1X_ENA_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GPIO_MC_INTR1X_ENA_W1S(uint64_t a)
{
	if ((a >= 4) && (a <= 7))
		return 0x803000001340ll + 8ll * ((a) & 0x7);
	__ody_csr_fatal("GPIO_MC_INTR1X_ENA_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GPIO_MC_INTR1X_ENA_W1S(a) ody_gpio_mc_intr1x_ena_w1s_t
#define bustype_ODY_GPIO_MC_INTR1X_ENA_W1S(a) CSR_TYPE_NCB
#define basename_ODY_GPIO_MC_INTR1X_ENA_W1S(a) "GPIO_MC_INTR1X_ENA_W1S"
#define device_bar_ODY_GPIO_MC_INTR1X_ENA_W1S(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_GPIO_MC_INTR1X_ENA_W1S(a) (a)
#define arguments_ODY_GPIO_MC_INTR1X_ENA_W1S(a) (a), -1, -1, -1

/**
 * Register (NCB) gpio_mc_intr1#_w1s
 *
 * GPIO Bit Multicast Interrupt Registers
 * This register sets interrupt bits.
 */
union ody_gpio_mc_intr1x_w1s {
	uint64_t u;
	struct ody_gpio_mc_intr1x_w1s_s {
		uint64_t intr                        : 18;
		uint64_t reserved_18_63              : 46;
	} s;
	/* struct ody_gpio_mc_intr1x_w1s_s cn; */
};
typedef union ody_gpio_mc_intr1x_w1s ody_gpio_mc_intr1x_w1s_t;

static inline uint64_t ODY_GPIO_MC_INTR1X_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GPIO_MC_INTR1X_W1S(uint64_t a)
{
	if ((a >= 4) && (a <= 7))
		return 0x803000001140ll + 8ll * ((a) & 0x7);
	__ody_csr_fatal("GPIO_MC_INTR1X_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GPIO_MC_INTR1X_W1S(a) ody_gpio_mc_intr1x_w1s_t
#define bustype_ODY_GPIO_MC_INTR1X_W1S(a) CSR_TYPE_NCB
#define basename_ODY_GPIO_MC_INTR1X_W1S(a) "GPIO_MC_INTR1X_W1S"
#define device_bar_ODY_GPIO_MC_INTR1X_W1S(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_GPIO_MC_INTR1X_W1S(a) (a)
#define arguments_ODY_GPIO_MC_INTR1X_W1S(a) (a), -1, -1, -1

/**
 * Register (NCB) gpio_misc_strap
 *
 * GPIO Misc Strap Value Register
 * This register contains the miscellaneous strap state.
 *
 * Miscellaneous straps are enumerated by GPIO_MISC_STRAP_PIN_E, where the value 0x0
 * corresponds to bit zero in this register.
 *
 * This register is accessible to all requestors (regardless of GPIO_PERMIT).
 *
 * When permitted, this register is accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 */
union ody_gpio_misc_strap {
	uint64_t u;
	struct ody_gpio_misc_strap_s {
		uint64_t reserved_0_15               : 16;
		uint64_t uart0_rts                   : 1;
		uint64_t uart1_rts                   : 1;
		uint64_t reserved_18_63              : 46;
	} s;
	/* struct ody_gpio_misc_strap_s cn; */
};
typedef union ody_gpio_misc_strap ody_gpio_misc_strap_t;

#define ODY_GPIO_MISC_STRAP ODY_GPIO_MISC_STRAP_FUNC()
static inline uint64_t ODY_GPIO_MISC_STRAP_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GPIO_MISC_STRAP_FUNC(void)
{
	return 0x803000000030ll;
}

#define typedef_ODY_GPIO_MISC_STRAP ody_gpio_misc_strap_t
#define bustype_ODY_GPIO_MISC_STRAP CSR_TYPE_NCB
#define basename_ODY_GPIO_MISC_STRAP "GPIO_MISC_STRAP"
#define device_bar_ODY_GPIO_MISC_STRAP 0x0 /* PF_BAR0 */
#define busnum_ODY_GPIO_MISC_STRAP 0
#define arguments_ODY_GPIO_MISC_STRAP -1, -1, -1, -1

/**
 * Register (NCB) gpio_misc_supply
 *
 * GPIO Misc Supply Value Register
 * This register contains the state of the GPIO power supplies.
 *
 * This register is accessible to all requestors (regardless of GPIO_PERMIT).
 *
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 */
union ody_gpio_misc_supply {
	uint64_t u;
	struct ody_gpio_misc_supply_s {
		uint64_t reserved_0_63               : 64;
	} s;
	/* struct ody_gpio_misc_supply_s cn; */
};
typedef union ody_gpio_misc_supply ody_gpio_misc_supply_t;

#define ODY_GPIO_MISC_SUPPLY ODY_GPIO_MISC_SUPPLY_FUNC()
static inline uint64_t ODY_GPIO_MISC_SUPPLY_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GPIO_MISC_SUPPLY_FUNC(void)
{
	return 0x803000000038ll;
}

#define typedef_ODY_GPIO_MISC_SUPPLY ody_gpio_misc_supply_t
#define bustype_ODY_GPIO_MISC_SUPPLY CSR_TYPE_NCB
#define basename_ODY_GPIO_MISC_SUPPLY "GPIO_MISC_SUPPLY"
#define device_bar_ODY_GPIO_MISC_SUPPLY 0x0 /* PF_BAR0 */
#define busnum_ODY_GPIO_MISC_SUPPLY 0
#define arguments_ODY_GPIO_MISC_SUPPLY -1, -1, -1, -1

/**
 * Register (NCB) gpio_msix_pba#
 *
 * GPIO MSI-X Pending Bit Array Registers
 * This register is the MSI-X PBA table; the bit number is indexed by the GPIO_INT_VEC_E enumeration.
 *
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 */
union ody_gpio_msix_pbax {
	uint64_t u;
	struct ody_gpio_msix_pbax_s {
		uint64_t pend                        : 64;
	} s;
	/* struct ody_gpio_msix_pbax_s cn; */
};
typedef union ody_gpio_msix_pbax ody_gpio_msix_pbax_t;

static inline uint64_t ODY_GPIO_MSIX_PBAX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GPIO_MSIX_PBAX(uint64_t a)
{
	if (a <= 3)
		return 0x803000ff0000ll + 8ll * ((a) & 0x3);
	__ody_csr_fatal("GPIO_MSIX_PBAX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GPIO_MSIX_PBAX(a) ody_gpio_msix_pbax_t
#define bustype_ODY_GPIO_MSIX_PBAX(a) CSR_TYPE_NCB
#define basename_ODY_GPIO_MSIX_PBAX(a) "GPIO_MSIX_PBAX"
#define device_bar_ODY_GPIO_MSIX_PBAX(a) 0x4 /* PF_BAR4 */
#define busnum_ODY_GPIO_MSIX_PBAX(a) (a)
#define arguments_ODY_GPIO_MSIX_PBAX(a) (a), -1, -1, -1

/**
 * Register (NCB) gpio_msix_vec#_addr
 *
 * GPIO MSI-X Vector-Table Address Register
 * This register is the MSI-X vector table, indexed by the GPIO_INT_VEC_E enumeration.
 *
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 */
union ody_gpio_msix_vecx_addr {
	uint64_t u;
	struct ody_gpio_msix_vecx_addr_s {
		uint64_t secvec                      : 1;
		uint64_t reserved_1                  : 1;
		uint64_t addr                        : 51;
		uint64_t reserved_53_63              : 11;
	} s;
	/* struct ody_gpio_msix_vecx_addr_s cn; */
};
typedef union ody_gpio_msix_vecx_addr ody_gpio_msix_vecx_addr_t;

static inline uint64_t ODY_GPIO_MSIX_VECX_ADDR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GPIO_MSIX_VECX_ADDR(uint64_t a)
{
	if (a <= 209)
		return 0x803000f00000ll + 0x10ll * ((a) & 0xff);
	__ody_csr_fatal("GPIO_MSIX_VECX_ADDR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GPIO_MSIX_VECX_ADDR(a) ody_gpio_msix_vecx_addr_t
#define bustype_ODY_GPIO_MSIX_VECX_ADDR(a) CSR_TYPE_NCB
#define basename_ODY_GPIO_MSIX_VECX_ADDR(a) "GPIO_MSIX_VECX_ADDR"
#define device_bar_ODY_GPIO_MSIX_VECX_ADDR(a) 0x4 /* PF_BAR4 */
#define busnum_ODY_GPIO_MSIX_VECX_ADDR(a) (a)
#define arguments_ODY_GPIO_MSIX_VECX_ADDR(a) (a), -1, -1, -1

/**
 * Register (NCB) gpio_msix_vec#_ctl
 *
 * GPIO MSI-X Vector-Table Control and Data Register
 * This register is the MSI-X vector table, indexed by the GPIO_INT_VEC_E enumeration.
 *
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 */
union ody_gpio_msix_vecx_ctl {
	uint64_t u;
	struct ody_gpio_msix_vecx_ctl_s {
		uint64_t data                        : 32;
		uint64_t mask                        : 1;
		uint64_t reserved_33_63              : 31;
	} s;
	/* struct ody_gpio_msix_vecx_ctl_s cn; */
};
typedef union ody_gpio_msix_vecx_ctl ody_gpio_msix_vecx_ctl_t;

static inline uint64_t ODY_GPIO_MSIX_VECX_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GPIO_MSIX_VECX_CTL(uint64_t a)
{
	if (a <= 209)
		return 0x803000f00008ll + 0x10ll * ((a) & 0xff);
	__ody_csr_fatal("GPIO_MSIX_VECX_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GPIO_MSIX_VECX_CTL(a) ody_gpio_msix_vecx_ctl_t
#define bustype_ODY_GPIO_MSIX_VECX_CTL(a) CSR_TYPE_NCB
#define basename_ODY_GPIO_MSIX_VECX_CTL(a) "GPIO_MSIX_VECX_CTL"
#define device_bar_ODY_GPIO_MSIX_VECX_CTL(a) 0x4 /* PF_BAR4 */
#define busnum_ODY_GPIO_MSIX_VECX_CTL(a) (a)
#define arguments_ODY_GPIO_MSIX_VECX_CTL(a) (a), -1, -1, -1

/**
 * Register (NCB) gpio_multi_cast
 *
 * GPIO Multicast Register
 * This register enables multicast GPIO interrupts.
 *
 * This register is only accessible to the requestor(s) permitted with GPIO_PERMIT.
 *
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 */
union ody_gpio_multi_cast {
	uint64_t u;
	struct ody_gpio_multi_cast_s {
		uint64_t en                          : 1;
		uint64_t reserved_1_63               : 63;
	} s;
	/* struct ody_gpio_multi_cast_s cn; */
};
typedef union ody_gpio_multi_cast ody_gpio_multi_cast_t;

#define ODY_GPIO_MULTI_CAST ODY_GPIO_MULTI_CAST_FUNC()
static inline uint64_t ODY_GPIO_MULTI_CAST_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GPIO_MULTI_CAST_FUNC(void)
{
	return 0x803000000018ll;
}

#define typedef_ODY_GPIO_MULTI_CAST ody_gpio_multi_cast_t
#define bustype_ODY_GPIO_MULTI_CAST CSR_TYPE_NCB
#define basename_ODY_GPIO_MULTI_CAST "GPIO_MULTI_CAST"
#define device_bar_ODY_GPIO_MULTI_CAST 0x0 /* PF_BAR0 */
#define busnum_ODY_GPIO_MULTI_CAST 0
#define arguments_ODY_GPIO_MULTI_CAST -1, -1, -1, -1

/**
 * Register (NCB) gpio_permit
 *
 * GPIO Permit Register
 * This register determines which requestor(s) are permitted to access which GPIO global
 * registers.
 *
 * This register is only accessible to the requestor(s) permitted with GPIO_PERMIT.
 * (That is, only the GPIO_PERMIT permitted agent can change the permission settings of
 * all requestors.)
 *
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 */
union ody_gpio_permit {
	uint64_t u;
	struct ody_gpio_permit_s {
		uint64_t permitdis                   : 5;
		uint64_t reserved_5_63               : 59;
	} s;
	/* struct ody_gpio_permit_s cn; */
};
typedef union ody_gpio_permit ody_gpio_permit_t;

#define ODY_GPIO_PERMIT ODY_GPIO_PERMIT_FUNC()
static inline uint64_t ODY_GPIO_PERMIT_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GPIO_PERMIT_FUNC(void)
{
	return 0x803000001500ll;
}

#define typedef_ODY_GPIO_PERMIT ody_gpio_permit_t
#define bustype_ODY_GPIO_PERMIT CSR_TYPE_NCB
#define basename_ODY_GPIO_PERMIT "GPIO_PERMIT"
#define device_bar_ODY_GPIO_PERMIT 0x0 /* PF_BAR0 */
#define busnum_ODY_GPIO_PERMIT 0
#define arguments_ODY_GPIO_PERMIT -1, -1, -1, -1

/**
 * Register (NCB) gpio_pkg_ver
 *
 * Chip Package Version Register
 * This register reads the package version.
 */
union ody_gpio_pkg_ver {
	uint64_t u;
	struct ody_gpio_pkg_ver_s {
		uint64_t pkg_ver                     : 4;
		uint64_t reserved_4_63               : 60;
	} s;
	/* struct ody_gpio_pkg_ver_s cn; */
};
typedef union ody_gpio_pkg_ver ody_gpio_pkg_ver_t;

#define ODY_GPIO_PKG_VER ODY_GPIO_PKG_VER_FUNC()
static inline uint64_t ODY_GPIO_PKG_VER_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GPIO_PKG_VER_FUNC(void)
{
	return 0x803000001610ll;
}

#define typedef_ODY_GPIO_PKG_VER ody_gpio_pkg_ver_t
#define bustype_ODY_GPIO_PKG_VER CSR_TYPE_NCB
#define basename_ODY_GPIO_PKG_VER "GPIO_PKG_VER"
#define device_bar_ODY_GPIO_PKG_VER 0x0 /* PF_BAR0 */
#define busnum_ODY_GPIO_PKG_VER 0
#define arguments_ODY_GPIO_PKG_VER -1, -1, -1, -1

/**
 * Register (NCB) gpio_pull_down#
 *
 * GPIO control for Pull-down Register
 * This register controls the pull-down for GPIOs. Each bit of this register corresponds
 * to a GPIO IO. These pull-downs are not replacement for proper board pull-downs.
 */
union ody_gpio_pull_downx {
	uint64_t u;
	struct ody_gpio_pull_downx_s {
		uint64_t pull_down                   : 64;
	} s;
	/* struct ody_gpio_pull_downx_s cn; */
};
typedef union ody_gpio_pull_downx ody_gpio_pull_downx_t;

static inline uint64_t ODY_GPIO_PULL_DOWNX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GPIO_PULL_DOWNX(uint64_t a)
{
	if (a <= 1)
		return 0x803000001630ll + 8ll * ((a) & 0x1);
	__ody_csr_fatal("GPIO_PULL_DOWNX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GPIO_PULL_DOWNX(a) ody_gpio_pull_downx_t
#define bustype_ODY_GPIO_PULL_DOWNX(a) CSR_TYPE_NCB
#define basename_ODY_GPIO_PULL_DOWNX(a) "GPIO_PULL_DOWNX"
#define device_bar_ODY_GPIO_PULL_DOWNX(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_GPIO_PULL_DOWNX(a) (a)
#define arguments_ODY_GPIO_PULL_DOWNX(a) (a), -1, -1, -1

/**
 * Register (NCB) gpio_pull_up#
 *
 * GPIO control for Pull-up Register
 * This register controls the pull-up for GPIOs. Each bit of this register corresponds
 * to a GPIO IO. These pull-ups are not replacement for proper board pull-ups.
 */
union ody_gpio_pull_upx {
	uint64_t u;
	struct ody_gpio_pull_upx_s {
		uint64_t pull_up                     : 64;
	} s;
	/* struct ody_gpio_pull_upx_s cn; */
};
typedef union ody_gpio_pull_upx ody_gpio_pull_upx_t;

static inline uint64_t ODY_GPIO_PULL_UPX(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GPIO_PULL_UPX(uint64_t a)
{
	if (a <= 1)
		return 0x803000001620ll + 8ll * ((a) & 0x1);
	__ody_csr_fatal("GPIO_PULL_UPX", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_GPIO_PULL_UPX(a) ody_gpio_pull_upx_t
#define bustype_ODY_GPIO_PULL_UPX(a) CSR_TYPE_NCB
#define basename_ODY_GPIO_PULL_UPX(a) "GPIO_PULL_UPX"
#define device_bar_ODY_GPIO_PULL_UPX(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_GPIO_PULL_UPX(a) (a)
#define arguments_ODY_GPIO_PULL_UPX(a) (a), -1, -1, -1

/**
 * Register (NCB) gpio_rx_dat
 *
 * GPIO Receive Data Register
 * This register contains the state of the GPIO pins, which is after glitch filter and XOR
 * inverter (GPIO_BIT_CFG()[PIN_XOR]). GPIO inputs always report to GPIO_RX_DAT despite of
 * the value of GPIO_BIT_CFG()[PIN_SEL].
 * GPIO_RX_DAT reads GPIO input data for the first 64 GPIOs, and GPIO_RX1_DAT the remainder.
 *
 * Each bit in this register is only accessible to the requestor(s) permitted with
 * GPIO_BIT_PERMIT(), but error will not be reported when there are bits are not
 * permitted by GPIO_BIT_PERMIT().
 *
 * When permitted, this register is accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 */
union ody_gpio_rx_dat {
	uint64_t u;
	struct ody_gpio_rx_dat_s {
		uint64_t dat                         : 64;
	} s;
	/* struct ody_gpio_rx_dat_s cn; */
};
typedef union ody_gpio_rx_dat ody_gpio_rx_dat_t;

#define ODY_GPIO_RX_DAT ODY_GPIO_RX_DAT_FUNC()
static inline uint64_t ODY_GPIO_RX_DAT_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GPIO_RX_DAT_FUNC(void)
{
	return 0x803000000000ll;
}

#define typedef_ODY_GPIO_RX_DAT ody_gpio_rx_dat_t
#define bustype_ODY_GPIO_RX_DAT CSR_TYPE_NCB
#define basename_ODY_GPIO_RX_DAT "GPIO_RX_DAT"
#define device_bar_ODY_GPIO_RX_DAT 0x0 /* PF_BAR0 */
#define busnum_ODY_GPIO_RX_DAT 0
#define arguments_ODY_GPIO_RX_DAT -1, -1, -1, -1

/**
 * Register (NCB) gpio_strap
 *
 * GPIO Strap Value Register
 * This register contains the first 64 GPIO strap data captured at the rising edge of DC_OK.
 * GPIO_STRAP1 contains the remaining GPIOs.
 *
 * Straps are enumerated by GPIO_STRAP_PIN_E.
 *
 * This register is accessible to all requestors (regardless of GPIO_PERMIT).
 *
 * When permitted, this register is accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 */
union ody_gpio_strap {
	uint64_t u;
	struct ody_gpio_strap_s {
		uint64_t strap                       : 64;
	} s;
	/* struct ody_gpio_strap_s cn; */
};
typedef union ody_gpio_strap ody_gpio_strap_t;

#define ODY_GPIO_STRAP ODY_GPIO_STRAP_FUNC()
static inline uint64_t ODY_GPIO_STRAP_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GPIO_STRAP_FUNC(void)
{
	return 0x803000000028ll;
}

#define typedef_ODY_GPIO_STRAP ody_gpio_strap_t
#define bustype_ODY_GPIO_STRAP CSR_TYPE_NCB
#define basename_ODY_GPIO_STRAP "GPIO_STRAP"
#define device_bar_ODY_GPIO_STRAP 0x0 /* PF_BAR0 */
#define busnum_ODY_GPIO_STRAP 0
#define arguments_ODY_GPIO_STRAP -1, -1, -1, -1

/**
 * Register (NCB) gpio_thermal_hot
 *
 * Chip Thermal Hot Register
 * This register reads and drives the thermal hot pin (THERMAL_HOT_L).
 *
 * This register is only accessible to the requestor(s) permitted with GPIO_PERMIT.
 *
 * This register is not accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 */
union ody_gpio_thermal_hot {
	uint64_t u;
	struct ody_gpio_thermal_hot_s {
		uint64_t pin                         : 1;
		uint64_t drv                         : 1;
		uint64_t reserved_2_63               : 62;
	} s;
	/* struct ody_gpio_thermal_hot_s cn; */
};
typedef union ody_gpio_thermal_hot ody_gpio_thermal_hot_t;

#define ODY_GPIO_THERMAL_HOT ODY_GPIO_THERMAL_HOT_FUNC()
static inline uint64_t ODY_GPIO_THERMAL_HOT_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GPIO_THERMAL_HOT_FUNC(void)
{
	return 0x803000001618ll;
}

#define typedef_ODY_GPIO_THERMAL_HOT ody_gpio_thermal_hot_t
#define bustype_ODY_GPIO_THERMAL_HOT CSR_TYPE_NCB
#define basename_ODY_GPIO_THERMAL_HOT "GPIO_THERMAL_HOT"
#define device_bar_ODY_GPIO_THERMAL_HOT 0x0 /* PF_BAR0 */
#define busnum_ODY_GPIO_THERMAL_HOT 0
#define arguments_ODY_GPIO_THERMAL_HOT -1, -1, -1, -1

/**
 * Register (NCB) gpio_tx_clr
 *
 * GPIO Transmit Clear Mask Register
 * This register clears GPIO output data for the first 64 GPIOs, and GPIO_TX1_CLR the
 * remainder.
 *
 * Each bit in this register is only accessible to the requestor(s) permitted with
 * GPIO_BIT_PERMIT(), but error will not be reported when there are bits are not
 * permitted by GPIO_BIT_PERMIT().
 *
 * When permitted, this register is accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 */
union ody_gpio_tx_clr {
	uint64_t u;
	struct ody_gpio_tx_clr_s {
		uint64_t clr                         : 64;
	} s;
	/* struct ody_gpio_tx_clr_s cn; */
};
typedef union ody_gpio_tx_clr ody_gpio_tx_clr_t;

#define ODY_GPIO_TX_CLR ODY_GPIO_TX_CLR_FUNC()
static inline uint64_t ODY_GPIO_TX_CLR_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GPIO_TX_CLR_FUNC(void)
{
	return 0x803000000010ll;
}

#define typedef_ODY_GPIO_TX_CLR ody_gpio_tx_clr_t
#define bustype_ODY_GPIO_TX_CLR CSR_TYPE_NCB
#define basename_ODY_GPIO_TX_CLR "GPIO_TX_CLR"
#define device_bar_ODY_GPIO_TX_CLR 0x0 /* PF_BAR0 */
#define busnum_ODY_GPIO_TX_CLR 0
#define arguments_ODY_GPIO_TX_CLR -1, -1, -1, -1

/**
 * Register (NCB) gpio_tx_set
 *
 * GPIO Transmit Set Mask Register
 * This register sets GPIO output data. GPIO_TX_SET sets the first 64 GPIOs, and
 * GPIO_TX1_SET the remainder.
 *
 * Each bit in this register is only accessible to the requestor(s) permitted with
 * GPIO_BIT_PERMIT(), but error will not be reported when there are bits are not
 * permitted by GPIO_BIT_PERMIT().
 *
 * When permitted, this register is accessible through ROM scripts; see SCR_WRITE32_S[ADDR].
 */
union ody_gpio_tx_set {
	uint64_t u;
	struct ody_gpio_tx_set_s {
		uint64_t set                         : 64;
	} s;
	/* struct ody_gpio_tx_set_s cn; */
};
typedef union ody_gpio_tx_set ody_gpio_tx_set_t;

#define ODY_GPIO_TX_SET ODY_GPIO_TX_SET_FUNC()
static inline uint64_t ODY_GPIO_TX_SET_FUNC(void) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_GPIO_TX_SET_FUNC(void)
{
	return 0x803000000008ll;
}

#define typedef_ODY_GPIO_TX_SET ody_gpio_tx_set_t
#define bustype_ODY_GPIO_TX_SET CSR_TYPE_NCB
#define basename_ODY_GPIO_TX_SET "GPIO_TX_SET"
#define device_bar_ODY_GPIO_TX_SET 0x0 /* PF_BAR0 */
#define busnum_ODY_GPIO_TX_SET 0
#define arguments_ODY_GPIO_TX_SET -1, -1, -1, -1

#endif /* __ODY_CSRS_GPIO_H__ */
