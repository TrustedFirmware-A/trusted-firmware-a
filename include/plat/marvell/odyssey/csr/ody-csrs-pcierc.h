#ifndef __ODY_CSRS_PCIERC_H__
#define __ODY_CSRS_PCIERC_H__
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
 * PCIERC.
 *
 * This file is auto generated. Do not edit.
 *
 */

/**
 * Register (PCICONFIGRC) pcierc#_ack_freq
 *
 * PCIe RC Ack Frequency Register
 */
union ody_pciercx_ack_freq {
	uint32_t u;
	struct ody_pciercx_ack_freq_s {
		uint32_t ack_freq                    : 8;
		uint32_t n_fts                       : 8;
		uint32_t n_fts_cc                    : 8;
		uint32_t l0el                        : 3;
		uint32_t l1el                        : 3;
		uint32_t easpml1                     : 1;
		uint32_t aspm_timer_en               : 1;
	} s;
	/* struct ody_pciercx_ack_freq_s cn; */
};
typedef union ody_pciercx_ack_freq ody_pciercx_ack_freq_t;

static inline uint64_t ODY_PCIERCX_ACK_FREQ(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_ACK_FREQ(uint64_t a)
{
	if (a <= 15)
		return 0x70c;
	__ody_csr_fatal("PCIERCX_ACK_FREQ", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_ACK_FREQ(a) ody_pciercx_ack_freq_t
#define bustype_ODY_PCIERCX_ACK_FREQ(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_ACK_FREQ(a) "PCIERCX_ACK_FREQ"
#define busnum_ODY_PCIERCX_ACK_FREQ(a) (a)
#define arguments_ODY_PCIERCX_ACK_FREQ(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_ack_timer
 *
 * PCIe RC Ack Latency Timer/Replay Timer Register
 */
union ody_pciercx_ack_timer {
	uint32_t u;
	struct ody_pciercx_ack_timer_s {
		uint32_t rtltl                       : 16;
		uint32_t rtl                         : 16;
	} s;
	/* struct ody_pciercx_ack_timer_s cn; */
};
typedef union ody_pciercx_ack_timer ody_pciercx_ack_timer_t;

static inline uint64_t ODY_PCIERCX_ACK_TIMER(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_ACK_TIMER(uint64_t a)
{
	if (a <= 15)
		return 0x700;
	__ody_csr_fatal("PCIERCX_ACK_TIMER", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_ACK_TIMER(a) ody_pciercx_ack_timer_t
#define bustype_ODY_PCIERCX_ACK_TIMER(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_ACK_TIMER(a) "PCIERCX_ACK_TIMER"
#define busnum_ODY_PCIERCX_ACK_TIMER(a) (a)
#define arguments_ODY_PCIERCX_ACK_TIMER(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_acs_cap_ctl
 *
 * PCIe RC ACS Capability and Control Register
 */
union ody_pciercx_acs_cap_ctl {
	uint32_t u;
	struct ody_pciercx_acs_cap_ctl_s {
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
	/* struct ody_pciercx_acs_cap_ctl_s cn; */
};
typedef union ody_pciercx_acs_cap_ctl ody_pciercx_acs_cap_ctl_t;

static inline uint64_t ODY_PCIERCX_ACS_CAP_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_ACS_CAP_CTL(uint64_t a)
{
	if (a <= 15)
		return 0x254;
	__ody_csr_fatal("PCIERCX_ACS_CAP_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_ACS_CAP_CTL(a) ody_pciercx_acs_cap_ctl_t
#define bustype_ODY_PCIERCX_ACS_CAP_CTL(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_ACS_CAP_CTL(a) "PCIERCX_ACS_CAP_CTL"
#define busnum_ODY_PCIERCX_ACS_CAP_CTL(a) (a)
#define arguments_ODY_PCIERCX_ACS_CAP_CTL(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_acs_cap_hdr
 *
 * PCIe RC PCI Express ACS Extended Capability Header Register
 */
union ody_pciercx_acs_cap_hdr {
	uint32_t u;
	struct ody_pciercx_acs_cap_hdr_s {
		uint32_t pcieec                      : 16;
		uint32_t cv                          : 4;
		uint32_t nco                         : 12;
	} s;
	/* struct ody_pciercx_acs_cap_hdr_s cn; */
};
typedef union ody_pciercx_acs_cap_hdr ody_pciercx_acs_cap_hdr_t;

static inline uint64_t ODY_PCIERCX_ACS_CAP_HDR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_ACS_CAP_HDR(uint64_t a)
{
	if (a <= 15)
		return 0x250;
	__ody_csr_fatal("PCIERCX_ACS_CAP_HDR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_ACS_CAP_HDR(a) ody_pciercx_acs_cap_hdr_t
#define bustype_ODY_PCIERCX_ACS_CAP_HDR(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_ACS_CAP_HDR(a) "PCIERCX_ACS_CAP_HDR"
#define busnum_ODY_PCIERCX_ACS_CAP_HDR(a) (a)
#define arguments_ODY_PCIERCX_ACS_CAP_HDR(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_acs_egr_ctl_vec
 *
 * PCIe RC Egress Control Vector Register
 */
union ody_pciercx_acs_egr_ctl_vec {
	uint32_t u;
	struct ody_pciercx_acs_egr_ctl_vec_s {
		uint32_t ecv                         : 3;
		uint32_t unused                      : 29;
	} s;
	/* struct ody_pciercx_acs_egr_ctl_vec_s cn; */
};
typedef union ody_pciercx_acs_egr_ctl_vec ody_pciercx_acs_egr_ctl_vec_t;

static inline uint64_t ODY_PCIERCX_ACS_EGR_CTL_VEC(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_ACS_EGR_CTL_VEC(uint64_t a)
{
	if (a <= 15)
		return 0x258;
	__ody_csr_fatal("PCIERCX_ACS_EGR_CTL_VEC", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_ACS_EGR_CTL_VEC(a) ody_pciercx_acs_egr_ctl_vec_t
#define bustype_ODY_PCIERCX_ACS_EGR_CTL_VEC(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_ACS_EGR_CTL_VEC(a) "PCIERCX_ACS_EGR_CTL_VEC"
#define busnum_ODY_PCIERCX_ACS_EGR_CTL_VEC(a) (a)
#define arguments_ODY_PCIERCX_ACS_EGR_CTL_VEC(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_adv_err_cap_cntrl
 *
 * PCIe RC Advanced Capabilities and Control Register
 */
union ody_pciercx_adv_err_cap_cntrl {
	uint32_t u;
	struct ody_pciercx_adv_err_cap_cntrl_s {
		uint32_t fep                         : 5;
		uint32_t gc                          : 1;
		uint32_t ge                          : 1;
		uint32_t cc                          : 1;
		uint32_t ce                          : 1;
		uint32_t mult_hdr_cap                : 1;
		uint32_t mult_hdr_en                 : 1;
		uint32_t tlp_plp                     : 1;
		uint32_t reserved_12_31              : 20;
	} s;
	/* struct ody_pciercx_adv_err_cap_cntrl_s cn; */
};
typedef union ody_pciercx_adv_err_cap_cntrl ody_pciercx_adv_err_cap_cntrl_t;

static inline uint64_t ODY_PCIERCX_ADV_ERR_CAP_CNTRL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_ADV_ERR_CAP_CNTRL(uint64_t a)
{
	if (a <= 15)
		return 0x118;
	__ody_csr_fatal("PCIERCX_ADV_ERR_CAP_CNTRL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_ADV_ERR_CAP_CNTRL(a) ody_pciercx_adv_err_cap_cntrl_t
#define bustype_ODY_PCIERCX_ADV_ERR_CAP_CNTRL(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_ADV_ERR_CAP_CNTRL(a) "PCIERCX_ADV_ERR_CAP_CNTRL"
#define busnum_ODY_PCIERCX_ADV_ERR_CAP_CNTRL(a) (a)
#define arguments_ODY_PCIERCX_ADV_ERR_CAP_CNTRL(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_ats_cap_ctl
 *
 * PCIe RC PCI Express ATS Extended Capability And Control Register
 */
union ody_pciercx_ats_cap_ctl {
	uint32_t u;
	struct ody_pciercx_ats_cap_ctl_s {
		uint32_t iqd                         : 5;
		uint32_t par                         : 1;
		uint32_t gis                         : 1;
		uint32_t ros                         : 1;
		uint32_t reserved_8_15               : 8;
		uint32_t stu                         : 5;
		uint32_t reserved_21_30              : 10;
		uint32_t en                          : 1;
	} s;
	/* struct ody_pciercx_ats_cap_ctl_s cn; */
};
typedef union ody_pciercx_ats_cap_ctl ody_pciercx_ats_cap_ctl_t;

static inline uint64_t ODY_PCIERCX_ATS_CAP_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_ATS_CAP_CTL(uint64_t a)
{
	if (a <= 15)
		return 0x244;
	__ody_csr_fatal("PCIERCX_ATS_CAP_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_ATS_CAP_CTL(a) ody_pciercx_ats_cap_ctl_t
#define bustype_ODY_PCIERCX_ATS_CAP_CTL(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_ATS_CAP_CTL(a) "PCIERCX_ATS_CAP_CTL"
#define busnum_ODY_PCIERCX_ATS_CAP_CTL(a) (a)
#define arguments_ODY_PCIERCX_ATS_CAP_CTL(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_ats_cap_hdr
 *
 * PCIe RC PCI Express ATS Extended Capability Header Register
 */
union ody_pciercx_ats_cap_hdr {
	uint32_t u;
	struct ody_pciercx_ats_cap_hdr_s {
		uint32_t pcieec                      : 16;
		uint32_t cv                          : 4;
		uint32_t nco                         : 12;
	} s;
	/* struct ody_pciercx_ats_cap_hdr_s cn; */
};
typedef union ody_pciercx_ats_cap_hdr ody_pciercx_ats_cap_hdr_t;

static inline uint64_t ODY_PCIERCX_ATS_CAP_HDR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_ATS_CAP_HDR(uint64_t a)
{
	if (a <= 15)
		return 0x240;
	__ody_csr_fatal("PCIERCX_ATS_CAP_HDR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_ATS_CAP_HDR(a) ody_pciercx_ats_cap_hdr_t
#define bustype_ODY_PCIERCX_ATS_CAP_HDR(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_ATS_CAP_HDR(a) "PCIERCX_ATS_CAP_HDR"
#define busnum_ODY_PCIERCX_ATS_CAP_HDR(a) (a)
#define arguments_ODY_PCIERCX_ATS_CAP_HDR(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_aux_clk_freq
 *
 * PCIe RC Auxiliary Clock Frequency Control Register
 */
union ody_pciercx_aux_clk_freq {
	uint32_t u;
	struct ody_pciercx_aux_clk_freq_s {
		uint32_t upc_supp                    : 10;
		uint32_t reserved_10_31              : 22;
	} s;
	/* struct ody_pciercx_aux_clk_freq_s cn; */
};
typedef union ody_pciercx_aux_clk_freq ody_pciercx_aux_clk_freq_t;

static inline uint64_t ODY_PCIERCX_AUX_CLK_FREQ(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_AUX_CLK_FREQ(uint64_t a)
{
	if (a <= 15)
		return 0xb40;
	__ody_csr_fatal("PCIERCX_AUX_CLK_FREQ", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_AUX_CLK_FREQ(a) ody_pciercx_aux_clk_freq_t
#define bustype_ODY_PCIERCX_AUX_CLK_FREQ(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_AUX_CLK_FREQ(a) "PCIERCX_AUX_CLK_FREQ"
#define busnum_ODY_PCIERCX_AUX_CLK_FREQ(a) (a)
#define arguments_ODY_PCIERCX_AUX_CLK_FREQ(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_bar0l
 *
 * PCIe RC Base Address 0 Low Register
 */
union ody_pciercx_bar0l {
	uint32_t u;
	struct ody_pciercx_bar0l_s {
		uint32_t reserved_0_31               : 32;
	} s;
	/* struct ody_pciercx_bar0l_s cn; */
};
typedef union ody_pciercx_bar0l ody_pciercx_bar0l_t;

static inline uint64_t ODY_PCIERCX_BAR0L(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_BAR0L(uint64_t a)
{
	if (a <= 15)
		return 0x10;
	__ody_csr_fatal("PCIERCX_BAR0L", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_BAR0L(a) ody_pciercx_bar0l_t
#define bustype_ODY_PCIERCX_BAR0L(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_BAR0L(a) "PCIERCX_BAR0L"
#define busnum_ODY_PCIERCX_BAR0L(a) (a)
#define arguments_ODY_PCIERCX_BAR0L(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_bar0u
 *
 * PCIe RC Base Address 0 High Register
 */
union ody_pciercx_bar0u {
	uint32_t u;
	struct ody_pciercx_bar0u_s {
		uint32_t reserved_0_31               : 32;
	} s;
	/* struct ody_pciercx_bar0u_s cn; */
};
typedef union ody_pciercx_bar0u ody_pciercx_bar0u_t;

static inline uint64_t ODY_PCIERCX_BAR0U(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_BAR0U(uint64_t a)
{
	if (a <= 15)
		return 0x14;
	__ody_csr_fatal("PCIERCX_BAR0U", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_BAR0U(a) ody_pciercx_bar0u_t
#define bustype_ODY_PCIERCX_BAR0U(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_BAR0U(a) "PCIERCX_BAR0U"
#define busnum_ODY_PCIERCX_BAR0U(a) (a)
#define arguments_ODY_PCIERCX_BAR0U(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_bnum
 *
 * PCIe RC Bus Number Register
 */
union ody_pciercx_bnum {
	uint32_t u;
	struct ody_pciercx_bnum_s {
		uint32_t pbnum                       : 8;
		uint32_t sbnum                       : 8;
		uint32_t subbnum                     : 8;
		uint32_t slt                         : 8;
	} s;
	/* struct ody_pciercx_bnum_s cn; */
};
typedef union ody_pciercx_bnum ody_pciercx_bnum_t;

static inline uint64_t ODY_PCIERCX_BNUM(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_BNUM(uint64_t a)
{
	if (a <= 15)
		return 0x18;
	__ody_csr_fatal("PCIERCX_BNUM", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_BNUM(a) ody_pciercx_bnum_t
#define bustype_ODY_PCIERCX_BNUM(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_BNUM(a) "PCIERCX_BNUM"
#define busnum_ODY_PCIERCX_BNUM(a) (a)
#define arguments_ODY_PCIERCX_BNUM(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_c_rcv_credit
 *
 * PCIe RC VC0 Completion Receive Queue Control Register
 */
union ody_pciercx_c_rcv_credit {
	uint32_t u;
	struct ody_pciercx_c_rcv_credit_s {
		uint32_t data_credits                : 12;
		uint32_t header_credits              : 8;
		uint32_t reserved_20                 : 1;
		uint32_t queue_mode                  : 3;
		uint32_t hdr_sc                      : 2;
		uint32_t data_sc                     : 2;
		uint32_t reserved_28_31              : 4;
	} s;
	/* struct ody_pciercx_c_rcv_credit_s cn; */
};
typedef union ody_pciercx_c_rcv_credit ody_pciercx_c_rcv_credit_t;

static inline uint64_t ODY_PCIERCX_C_RCV_CREDIT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_C_RCV_CREDIT(uint64_t a)
{
	if (a <= 15)
		return 0x750;
	__ody_csr_fatal("PCIERCX_C_RCV_CREDIT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_C_RCV_CREDIT(a) ody_pciercx_c_rcv_credit_t
#define bustype_ODY_PCIERCX_C_RCV_CREDIT(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_C_RCV_CREDIT(a) "PCIERCX_C_RCV_CREDIT"
#define busnum_ODY_PCIERCX_C_RCV_CREDIT(a) (a)
#define arguments_ODY_PCIERCX_C_RCV_CREDIT(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_c_xmit_credit
 *
 * PCIe RC Transmit Completion FC Credit Status Register
 */
union ody_pciercx_c_xmit_credit {
	uint32_t u;
	struct ody_pciercx_c_xmit_credit_s {
		uint32_t tcdfcc                      : 16;
		uint32_t tchfcc                      : 12;
		uint32_t reserved_28_31              : 4;
	} s;
	/* struct ody_pciercx_c_xmit_credit_s cn; */
};
typedef union ody_pciercx_c_xmit_credit ody_pciercx_c_xmit_credit_t;

static inline uint64_t ODY_PCIERCX_C_XMIT_CREDIT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_C_XMIT_CREDIT(uint64_t a)
{
	if (a <= 15)
		return 0x738;
	__ody_csr_fatal("PCIERCX_C_XMIT_CREDIT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_C_XMIT_CREDIT(a) ody_pciercx_c_xmit_credit_t
#define bustype_ODY_PCIERCX_C_XMIT_CREDIT(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_C_XMIT_CREDIT(a) "PCIERCX_C_XMIT_CREDIT"
#define busnum_ODY_PCIERCX_C_XMIT_CREDIT(a) (a)
#define arguments_ODY_PCIERCX_C_XMIT_CREDIT(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_cap_ptr
 *
 * PCIe RC Capability Pointer Register
 */
union ody_pciercx_cap_ptr {
	uint32_t u;
	struct ody_pciercx_cap_ptr_s {
		uint32_t cp                          : 8;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_pciercx_cap_ptr_s cn; */
};
typedef union ody_pciercx_cap_ptr ody_pciercx_cap_ptr_t;

static inline uint64_t ODY_PCIERCX_CAP_PTR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_CAP_PTR(uint64_t a)
{
	if (a <= 15)
		return 0x34;
	__ody_csr_fatal("PCIERCX_CAP_PTR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_CAP_PTR(a) ody_pciercx_cap_ptr_t
#define bustype_ODY_PCIERCX_CAP_PTR(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_CAP_PTR(a) "PCIERCX_CAP_PTR"
#define busnum_ODY_PCIERCX_CAP_PTR(a) (a)
#define arguments_ODY_PCIERCX_CAP_PTR(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_clk_gating_ctl
 *
 * PCIe RC RADM Clock Gating Enable Control Register
 */
union ody_pciercx_clk_gating_ctl {
	uint32_t u;
	struct ody_pciercx_clk_gating_ctl_s {
		uint32_t radm_clk_gating_en          : 1;
		uint32_t reserved_1_31               : 31;
	} s;
	/* struct ody_pciercx_clk_gating_ctl_s cn; */
};
typedef union ody_pciercx_clk_gating_ctl ody_pciercx_clk_gating_ctl_t;

static inline uint64_t ODY_PCIERCX_CLK_GATING_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_CLK_GATING_CTL(uint64_t a)
{
	if (a <= 15)
		return 0x88c;
	__ody_csr_fatal("PCIERCX_CLK_GATING_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_CLK_GATING_CTL(a) ody_pciercx_clk_gating_ctl_t
#define bustype_ODY_PCIERCX_CLK_GATING_CTL(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_CLK_GATING_CTL(a) "PCIERCX_CLK_GATING_CTL"
#define busnum_ODY_PCIERCX_CLK_GATING_CTL(a) (a)
#define arguments_ODY_PCIERCX_CLK_GATING_CTL(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_clsize
 *
 * PCIe RC BIST, Header Type, Master Latency Timer, Cache Line Size Register
 */
union ody_pciercx_clsize {
	uint32_t u;
	struct ody_pciercx_clsize_s {
		uint32_t cls                         : 8;
		uint32_t lt                          : 8;
		uint32_t chf                         : 7;
		uint32_t mfd                         : 1;
		uint32_t bist                        : 8;
	} s;
	/* struct ody_pciercx_clsize_s cn; */
};
typedef union ody_pciercx_clsize ody_pciercx_clsize_t;

static inline uint64_t ODY_PCIERCX_CLSIZE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_CLSIZE(uint64_t a)
{
	if (a <= 15)
		return 0xc;
	__ody_csr_fatal("PCIERCX_CLSIZE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_CLSIZE(a) ody_pciercx_clsize_t
#define bustype_ODY_PCIERCX_CLSIZE(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_CLSIZE(a) "PCIERCX_CLSIZE"
#define busnum_ODY_PCIERCX_CLSIZE(a) (a)
#define arguments_ODY_PCIERCX_CLSIZE(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_cmd
 *
 * PCIe RC Command/Status Register
 */
union ody_pciercx_cmd {
	uint32_t u;
	struct ody_pciercx_cmd_s {
		uint32_t isae                        : 1;
		uint32_t msae                        : 1;
		uint32_t me                          : 1;
		uint32_t scse                        : 1;
		uint32_t mwice                       : 1;
		uint32_t vps                         : 1;
		uint32_t per                         : 1;
		uint32_t ids_wcc                     : 1;
		uint32_t see                         : 1;
		uint32_t fbbe                        : 1;
		uint32_t i_dis                       : 1;
		uint32_t reserved_11_18              : 8;
		uint32_t i_stat                      : 1;
		uint32_t cl                          : 1;
		uint32_t m66                         : 1;
		uint32_t reserved_22                 : 1;
		uint32_t fbb                         : 1;
		uint32_t mdpe                        : 1;
		uint32_t devt                        : 2;
		uint32_t sta                         : 1;
		uint32_t rta                         : 1;
		uint32_t rma                         : 1;
		uint32_t sse                         : 1;
		uint32_t dpe                         : 1;
	} s;
	/* struct ody_pciercx_cmd_s cn; */
};
typedef union ody_pciercx_cmd ody_pciercx_cmd_t;

static inline uint64_t ODY_PCIERCX_CMD(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_CMD(uint64_t a)
{
	if (a <= 15)
		return 4;
	__ody_csr_fatal("PCIERCX_CMD", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_CMD(a) ody_pciercx_cmd_t
#define bustype_ODY_PCIERCX_CMD(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_CMD(a) "PCIERCX_CMD"
#define busnum_ODY_PCIERCX_CMD(a) (a)
#define arguments_ODY_PCIERCX_CMD(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_cor_err_msk
 *
 * PCIe RC Correctable Error Mask Register
 */
union ody_pciercx_cor_err_msk {
	uint32_t u;
	struct ody_pciercx_cor_err_msk_s {
		uint32_t rem                         : 1;
		uint32_t reserved_1_5                : 5;
		uint32_t btlpm                       : 1;
		uint32_t bdllpm                      : 1;
		uint32_t rnrm                        : 1;
		uint32_t reserved_9_11               : 3;
		uint32_t rttm                        : 1;
		uint32_t anfem                       : 1;
		uint32_t ciem                        : 1;
		uint32_t chlom                       : 1;
		uint32_t reserved_16_31              : 16;
	} s;
	/* struct ody_pciercx_cor_err_msk_s cn; */
};
typedef union ody_pciercx_cor_err_msk ody_pciercx_cor_err_msk_t;

static inline uint64_t ODY_PCIERCX_COR_ERR_MSK(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_COR_ERR_MSK(uint64_t a)
{
	if (a <= 15)
		return 0x114;
	__ody_csr_fatal("PCIERCX_COR_ERR_MSK", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_COR_ERR_MSK(a) ody_pciercx_cor_err_msk_t
#define bustype_ODY_PCIERCX_COR_ERR_MSK(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_COR_ERR_MSK(a) "PCIERCX_COR_ERR_MSK"
#define busnum_ODY_PCIERCX_COR_ERR_MSK(a) (a)
#define arguments_ODY_PCIERCX_COR_ERR_MSK(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_cor_err_stat
 *
 * PCIe RC Correctable Error Status Register
 */
union ody_pciercx_cor_err_stat {
	uint32_t u;
	struct ody_pciercx_cor_err_stat_s {
		uint32_t res                         : 1;
		uint32_t reserved_1_5                : 5;
		uint32_t btlps                       : 1;
		uint32_t bdllps                      : 1;
		uint32_t rnrs                        : 1;
		uint32_t reserved_9_11               : 3;
		uint32_t rtts                        : 1;
		uint32_t anfes                       : 1;
		uint32_t cies                        : 1;
		uint32_t chlo                        : 1;
		uint32_t reserved_16_31              : 16;
	} s;
	/* struct ody_pciercx_cor_err_stat_s cn; */
};
typedef union ody_pciercx_cor_err_stat ody_pciercx_cor_err_stat_t;

static inline uint64_t ODY_PCIERCX_COR_ERR_STAT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_COR_ERR_STAT(uint64_t a)
{
	if (a <= 15)
		return 0x110;
	__ody_csr_fatal("PCIERCX_COR_ERR_STAT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_COR_ERR_STAT(a) ody_pciercx_cor_err_stat_t
#define bustype_ODY_PCIERCX_COR_ERR_STAT(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_COR_ERR_STAT(a) "PCIERCX_COR_ERR_STAT"
#define busnum_ODY_PCIERCX_COR_ERR_STAT(a) (a)
#define arguments_ODY_PCIERCX_COR_ERR_STAT(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_dbg0
 *
 * PCIe RC Debug Register 0
 */
union ody_pciercx_dbg0 {
	uint32_t u;
	struct ody_pciercx_dbg0_s {
		uint32_t dbg_info_l32                : 32;
	} s;
	/* struct ody_pciercx_dbg0_s cn; */
};
typedef union ody_pciercx_dbg0 ody_pciercx_dbg0_t;

static inline uint64_t ODY_PCIERCX_DBG0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_DBG0(uint64_t a)
{
	if (a <= 15)
		return 0x728;
	__ody_csr_fatal("PCIERCX_DBG0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_DBG0(a) ody_pciercx_dbg0_t
#define bustype_ODY_PCIERCX_DBG0(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_DBG0(a) "PCIERCX_DBG0"
#define busnum_ODY_PCIERCX_DBG0(a) (a)
#define arguments_ODY_PCIERCX_DBG0(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_dbg1
 *
 * PCIe RC Debug Register 1
 */
union ody_pciercx_dbg1 {
	uint32_t u;
	struct ody_pciercx_dbg1_s {
		uint32_t dbg_info_u32                : 32;
	} s;
	/* struct ody_pciercx_dbg1_s cn; */
};
typedef union ody_pciercx_dbg1 ody_pciercx_dbg1_t;

static inline uint64_t ODY_PCIERCX_DBG1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_DBG1(uint64_t a)
{
	if (a <= 15)
		return 0x72c;
	__ody_csr_fatal("PCIERCX_DBG1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_DBG1(a) ody_pciercx_dbg1_t
#define bustype_ODY_PCIERCX_DBG1(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_DBG1(a) "PCIERCX_DBG1"
#define busnum_ODY_PCIERCX_DBG1(a) (a)
#define arguments_ODY_PCIERCX_DBG1(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_dev_cap
 *
 * PCIe RC Device Capabilities Register
 */
union ody_pciercx_dev_cap {
	uint32_t u;
	struct ody_pciercx_dev_cap_s {
		uint32_t mpss                        : 3;
		uint32_t pfs                         : 2;
		uint32_t etfs                        : 1;
		uint32_t el0al                       : 3;
		uint32_t el1al                       : 3;
		uint32_t reserved_12_14              : 3;
		uint32_t rber                        : 1;
		uint32_t reserved_16_17              : 2;
		uint32_t csplv                       : 8;
		uint32_t cspls                       : 2;
		uint32_t flr_cap                     : 1;
		uint32_t reserved_29_31              : 3;
	} s;
	struct ody_pciercx_dev_cap_cn {
		uint32_t mpss                        : 3;
		uint32_t pfs                         : 2;
		uint32_t etfs                        : 1;
		uint32_t el0al                       : 3;
		uint32_t el1al                       : 3;
		uint32_t reserved_12                 : 1;
		uint32_t reserved_13                 : 1;
		uint32_t reserved_14                 : 1;
		uint32_t rber                        : 1;
		uint32_t reserved_16_17              : 2;
		uint32_t csplv                       : 8;
		uint32_t cspls                       : 2;
		uint32_t flr_cap                     : 1;
		uint32_t reserved_29_31              : 3;
	} cn;
};
typedef union ody_pciercx_dev_cap ody_pciercx_dev_cap_t;

static inline uint64_t ODY_PCIERCX_DEV_CAP(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_DEV_CAP(uint64_t a)
{
	if (a <= 15)
		return 0x74;
	__ody_csr_fatal("PCIERCX_DEV_CAP", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_DEV_CAP(a) ody_pciercx_dev_cap_t
#define bustype_ODY_PCIERCX_DEV_CAP(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_DEV_CAP(a) "PCIERCX_DEV_CAP"
#define busnum_ODY_PCIERCX_DEV_CAP(a) (a)
#define arguments_ODY_PCIERCX_DEV_CAP(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_dev_cap2
 *
 * PCIe RC Device Capabilities 2 Register
 */
union ody_pciercx_dev_cap2 {
	uint32_t u;
	struct ody_pciercx_dev_cap2_s {
		uint32_t ctrs                        : 4;
		uint32_t ctds                        : 1;
		uint32_t ari_fw                      : 1;
		uint32_t atom_ops                    : 1;
		uint32_t atom32s                     : 1;
		uint32_t atom64s                     : 1;
		uint32_t atom128s                    : 1;
		uint32_t noroprpr                    : 1;
		uint32_t ltrs                        : 1;
		uint32_t tph                         : 2;
		uint32_t ln_sys_cls                  : 2;
		uint32_t tag10b_cpl_supp             : 1;
		uint32_t tag10b_req_supp             : 1;
		uint32_t obffs                       : 2;
		uint32_t effs                        : 1;
		uint32_t eetps                       : 1;
		uint32_t meetp                       : 2;
		uint32_t eprs                        : 2;
		uint32_t eprir                       : 1;
		uint32_t reserved_27                 : 1;
		uint32_t dwrr_cpl_sup                : 1;
		uint32_t dwrr_len_sup                : 2;
		uint32_t frs_sup                     : 1;
	} s;
	/* struct ody_pciercx_dev_cap2_s cn; */
};
typedef union ody_pciercx_dev_cap2 ody_pciercx_dev_cap2_t;

static inline uint64_t ODY_PCIERCX_DEV_CAP2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_DEV_CAP2(uint64_t a)
{
	if (a <= 15)
		return 0x94;
	__ody_csr_fatal("PCIERCX_DEV_CAP2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_DEV_CAP2(a) ody_pciercx_dev_cap2_t
#define bustype_ODY_PCIERCX_DEV_CAP2(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_DEV_CAP2(a) "PCIERCX_DEV_CAP2"
#define busnum_ODY_PCIERCX_DEV_CAP2(a) (a)
#define arguments_ODY_PCIERCX_DEV_CAP2(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_dev_ctl
 *
 * PCIe RC Device Control/Device Status Register
 */
union ody_pciercx_dev_ctl {
	uint32_t u;
	struct ody_pciercx_dev_ctl_s {
		uint32_t ce_en                       : 1;
		uint32_t nfe_en                      : 1;
		uint32_t fe_en                       : 1;
		uint32_t ur_en                       : 1;
		uint32_t ro_en                       : 1;
		uint32_t mps                         : 3;
		uint32_t etf_en                      : 1;
		uint32_t pf_en                       : 1;
		uint32_t ap_en                       : 1;
		uint32_t ns_en                       : 1;
		uint32_t mrrs                        : 3;
		uint32_t reserved_15                 : 1;
		uint32_t ce_d                        : 1;
		uint32_t nfe_d                       : 1;
		uint32_t fe_d                        : 1;
		uint32_t ur_d                        : 1;
		uint32_t ap_d                        : 1;
		uint32_t tp                          : 1;
		uint32_t reserved_22_31              : 10;
	} s;
	/* struct ody_pciercx_dev_ctl_s cn; */
};
typedef union ody_pciercx_dev_ctl ody_pciercx_dev_ctl_t;

static inline uint64_t ODY_PCIERCX_DEV_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_DEV_CTL(uint64_t a)
{
	if (a <= 15)
		return 0x78;
	__ody_csr_fatal("PCIERCX_DEV_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_DEV_CTL(a) ody_pciercx_dev_ctl_t
#define bustype_ODY_PCIERCX_DEV_CTL(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_DEV_CTL(a) "PCIERCX_DEV_CTL"
#define busnum_ODY_PCIERCX_DEV_CTL(a) (a)
#define arguments_ODY_PCIERCX_DEV_CTL(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_dev_ctl2
 *
 * PCIe RC Device Control 2 Register/Device Status 2 Register
 */
union ody_pciercx_dev_ctl2 {
	uint32_t u;
	struct ody_pciercx_dev_ctl2_s {
		uint32_t ctv                         : 4;
		uint32_t ctd                         : 1;
		uint32_t ari                         : 1;
		uint32_t atom_op                     : 1;
		uint32_t atom_op_eb                  : 1;
		uint32_t id0_rq                      : 1;
		uint32_t id0_cp                      : 1;
		uint32_t ltre                        : 1;
		uint32_t reserved_11                 : 1;
		uint32_t tag10b_req_en               : 1;
		uint32_t obffe                       : 2;
		uint32_t eetpb                       : 1;
		uint32_t reserved_16_31              : 16;
	} s;
	/* struct ody_pciercx_dev_ctl2_s cn; */
};
typedef union ody_pciercx_dev_ctl2 ody_pciercx_dev_ctl2_t;

static inline uint64_t ODY_PCIERCX_DEV_CTL2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_DEV_CTL2(uint64_t a)
{
	if (a <= 15)
		return 0x98;
	__ody_csr_fatal("PCIERCX_DEV_CTL2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_DEV_CTL2(a) ody_pciercx_dev_ctl2_t
#define bustype_ODY_PCIERCX_DEV_CTL2(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_DEV_CTL2(a) "PCIERCX_DEV_CTL2"
#define busnum_ODY_PCIERCX_DEV_CTL2(a) (a)
#define arguments_ODY_PCIERCX_DEV_CTL2(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_dl_feature_cap
 *
 * PCIe RC Data Link Feature Capabilities Register
 */
union ody_pciercx_dl_feature_cap {
	uint32_t u;
	struct ody_pciercx_dl_feature_cap_s {
		uint32_t lsfcs                       : 1;
		uint32_t lfdlfs                      : 22;
		uint32_t reserved_23_30              : 8;
		uint32_t dl_fex_en                   : 1;
	} s;
	/* struct ody_pciercx_dl_feature_cap_s cn; */
};
typedef union ody_pciercx_dl_feature_cap ody_pciercx_dl_feature_cap_t;

static inline uint64_t ODY_PCIERCX_DL_FEATURE_CAP(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_DL_FEATURE_CAP(uint64_t a)
{
	if (a <= 15)
		return 0x3a8;
	__ody_csr_fatal("PCIERCX_DL_FEATURE_CAP", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_DL_FEATURE_CAP(a) ody_pciercx_dl_feature_cap_t
#define bustype_ODY_PCIERCX_DL_FEATURE_CAP(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_DL_FEATURE_CAP(a) "PCIERCX_DL_FEATURE_CAP"
#define busnum_ODY_PCIERCX_DL_FEATURE_CAP(a) (a)
#define arguments_ODY_PCIERCX_DL_FEATURE_CAP(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_dl_feature_ext_hdr
 *
 * PCIe RC Data Link Feature Extended Capability Header Register
 */
union ody_pciercx_dl_feature_ext_hdr {
	uint32_t u;
	struct ody_pciercx_dl_feature_ext_hdr_s {
		uint32_t pcieec                      : 16;
		uint32_t cv                          : 4;
		uint32_t nco                         : 12;
	} s;
	/* struct ody_pciercx_dl_feature_ext_hdr_s cn; */
};
typedef union ody_pciercx_dl_feature_ext_hdr ody_pciercx_dl_feature_ext_hdr_t;

static inline uint64_t ODY_PCIERCX_DL_FEATURE_EXT_HDR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_DL_FEATURE_EXT_HDR(uint64_t a)
{
	if (a <= 15)
		return 0x3a4;
	__ody_csr_fatal("PCIERCX_DL_FEATURE_EXT_HDR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_DL_FEATURE_EXT_HDR(a) ody_pciercx_dl_feature_ext_hdr_t
#define bustype_ODY_PCIERCX_DL_FEATURE_EXT_HDR(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_DL_FEATURE_EXT_HDR(a) "PCIERCX_DL_FEATURE_EXT_HDR"
#define busnum_ODY_PCIERCX_DL_FEATURE_EXT_HDR(a) (a)
#define arguments_ODY_PCIERCX_DL_FEATURE_EXT_HDR(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_dl_feature_status
 *
 * PCIe RC Data Link Feature Status Register
 */
union ody_pciercx_dl_feature_status {
	uint32_t u;
	struct ody_pciercx_dl_feature_status_s {
		uint32_t rdlfs                       : 23;
		uint32_t reserved_23_30              : 8;
		uint32_t dlfsv                       : 1;
	} s;
	/* struct ody_pciercx_dl_feature_status_s cn; */
};
typedef union ody_pciercx_dl_feature_status ody_pciercx_dl_feature_status_t;

static inline uint64_t ODY_PCIERCX_DL_FEATURE_STATUS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_DL_FEATURE_STATUS(uint64_t a)
{
	if (a <= 15)
		return 0x3ac;
	__ody_csr_fatal("PCIERCX_DL_FEATURE_STATUS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_DL_FEATURE_STATUS(a) ody_pciercx_dl_feature_status_t
#define bustype_ODY_PCIERCX_DL_FEATURE_STATUS(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_DL_FEATURE_STATUS(a) "PCIERCX_DL_FEATURE_STATUS"
#define busnum_ODY_PCIERCX_DL_FEATURE_STATUS(a) (a)
#define arguments_ODY_PCIERCX_DL_FEATURE_STATUS(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_e_cap_list
 *
 * PCIe RC PCIe Capabilities/PCIe Capabilities List Register
 */
union ody_pciercx_e_cap_list {
	uint32_t u;
	struct ody_pciercx_e_cap_list_s {
		uint32_t pcieid                      : 8;
		uint32_t ncp                         : 8;
		uint32_t pciecv                      : 4;
		uint32_t dpt                         : 4;
		uint32_t si                          : 1;
		uint32_t imn                         : 5;
		uint32_t reserved_30_31              : 2;
	} s;
	/* struct ody_pciercx_e_cap_list_s cn; */
};
typedef union ody_pciercx_e_cap_list ody_pciercx_e_cap_list_t;

static inline uint64_t ODY_PCIERCX_E_CAP_LIST(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_E_CAP_LIST(uint64_t a)
{
	if (a <= 15)
		return 0x70;
	__ody_csr_fatal("PCIERCX_E_CAP_LIST", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_E_CAP_LIST(a) ody_pciercx_e_cap_list_t
#define bustype_ODY_PCIERCX_E_CAP_LIST(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_E_CAP_LIST(a) "PCIERCX_E_CAP_LIST"
#define busnum_ODY_PCIERCX_E_CAP_LIST(a) (a)
#define arguments_ODY_PCIERCX_E_CAP_LIST(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_ea_cap_hdr
 *
 * PCIe RC Enhanced Allocation Capability ID Register
 */
union ody_pciercx_ea_cap_hdr {
	uint32_t u;
	struct ody_pciercx_ea_cap_hdr_s {
		uint32_t eacid                       : 8;
		uint32_t ncp                         : 8;
		uint32_t num_entries                 : 6;
		uint32_t ea_rsvd                     : 10;
	} s;
	/* struct ody_pciercx_ea_cap_hdr_s cn; */
};
typedef union ody_pciercx_ea_cap_hdr ody_pciercx_ea_cap_hdr_t;

static inline uint64_t ODY_PCIERCX_EA_CAP_HDR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_EA_CAP_HDR(uint64_t a)
{
	if (a <= 15)
		return 0x50;
	__ody_csr_fatal("PCIERCX_EA_CAP_HDR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_EA_CAP_HDR(a) ody_pciercx_ea_cap_hdr_t
#define bustype_ODY_PCIERCX_EA_CAP_HDR(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_EA_CAP_HDR(a) "PCIERCX_EA_CAP_HDR"
#define busnum_ODY_PCIERCX_EA_CAP_HDR(a) (a)
#define arguments_ODY_PCIERCX_EA_CAP_HDR(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_ea_entry0
 *
 * PCIe RC Enhanced Allocation Capability Second DW Register
 */
union ody_pciercx_ea_entry0 {
	uint32_t u;
	struct ody_pciercx_ea_entry0_s {
		uint32_t fixed_secnum                : 8;
		uint32_t fixed_subnum                : 8;
		uint32_t ea_rsvd                     : 16;
	} s;
	/* struct ody_pciercx_ea_entry0_s cn; */
};
typedef union ody_pciercx_ea_entry0 ody_pciercx_ea_entry0_t;

static inline uint64_t ODY_PCIERCX_EA_ENTRY0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_EA_ENTRY0(uint64_t a)
{
	if (a <= 15)
		return 0x54;
	__ody_csr_fatal("PCIERCX_EA_ENTRY0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_EA_ENTRY0(a) ody_pciercx_ea_entry0_t
#define bustype_ODY_PCIERCX_EA_ENTRY0(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_EA_ENTRY0(a) "PCIERCX_EA_ENTRY0"
#define busnum_ODY_PCIERCX_EA_ENTRY0(a) (a)
#define arguments_ODY_PCIERCX_EA_ENTRY0(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_ea_entry1
 *
 * PCIe RC Enhanced Allocation Entry 0 First DW Register
 */
union ody_pciercx_ea_entry1 {
	uint32_t u;
	struct ody_pciercx_ea_entry1_s {
		uint32_t esize                       : 3;
		uint32_t ea_rsvd_0                   : 1;
		uint32_t bei                         : 4;
		uint32_t pprop                       : 8;
		uint32_t sprop                       : 8;
		uint32_t ea_rsvd_1                   : 6;
		uint32_t wr                          : 1;
		uint32_t ena                         : 1;
	} s;
	/* struct ody_pciercx_ea_entry1_s cn; */
};
typedef union ody_pciercx_ea_entry1 ody_pciercx_ea_entry1_t;

static inline uint64_t ODY_PCIERCX_EA_ENTRY1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_EA_ENTRY1(uint64_t a)
{
	if (a <= 15)
		return 0x58;
	__ody_csr_fatal("PCIERCX_EA_ENTRY1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_EA_ENTRY1(a) ody_pciercx_ea_entry1_t
#define bustype_ODY_PCIERCX_EA_ENTRY1(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_EA_ENTRY1(a) "PCIERCX_EA_ENTRY1"
#define busnum_ODY_PCIERCX_EA_ENTRY1(a) (a)
#define arguments_ODY_PCIERCX_EA_ENTRY1(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_ea_entry2
 *
 * PCIe RC Enhanced Allocation Entry 0 Lower Base Register
 */
union ody_pciercx_ea_entry2 {
	uint32_t u;
	struct ody_pciercx_ea_entry2_s {
		uint32_t ea_rsvd                     : 1;
		uint32_t size                        : 1;
		uint32_t lbase                       : 30;
	} s;
	/* struct ody_pciercx_ea_entry2_s cn; */
};
typedef union ody_pciercx_ea_entry2 ody_pciercx_ea_entry2_t;

static inline uint64_t ODY_PCIERCX_EA_ENTRY2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_EA_ENTRY2(uint64_t a)
{
	if (a <= 15)
		return 0x5c;
	__ody_csr_fatal("PCIERCX_EA_ENTRY2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_EA_ENTRY2(a) ody_pciercx_ea_entry2_t
#define bustype_ODY_PCIERCX_EA_ENTRY2(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_EA_ENTRY2(a) "PCIERCX_EA_ENTRY2"
#define busnum_ODY_PCIERCX_EA_ENTRY2(a) (a)
#define arguments_ODY_PCIERCX_EA_ENTRY2(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_ea_entry3
 *
 * PCIe RC Enhanced Allocation Entry 0 Max Offset Register
 */
union ody_pciercx_ea_entry3 {
	uint32_t u;
	struct ody_pciercx_ea_entry3_s {
		uint32_t ea_rsvd                     : 1;
		uint32_t size                        : 1;
		uint32_t moffs                       : 30;
	} s;
	/* struct ody_pciercx_ea_entry3_s cn; */
};
typedef union ody_pciercx_ea_entry3 ody_pciercx_ea_entry3_t;

static inline uint64_t ODY_PCIERCX_EA_ENTRY3(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_EA_ENTRY3(uint64_t a)
{
	if (a <= 15)
		return 0x60;
	__ody_csr_fatal("PCIERCX_EA_ENTRY3", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_EA_ENTRY3(a) ody_pciercx_ea_entry3_t
#define bustype_ODY_PCIERCX_EA_ENTRY3(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_EA_ENTRY3(a) "PCIERCX_EA_ENTRY3"
#define busnum_ODY_PCIERCX_EA_ENTRY3(a) (a)
#define arguments_ODY_PCIERCX_EA_ENTRY3(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_ea_entry4
 *
 * PCIe RC Enhanced Allocation Entry 0 Upper Base Register
 */
union ody_pciercx_ea_entry4 {
	uint32_t u;
	struct ody_pciercx_ea_entry4_s {
		uint32_t ubase                       : 32;
	} s;
	/* struct ody_pciercx_ea_entry4_s cn; */
};
typedef union ody_pciercx_ea_entry4 ody_pciercx_ea_entry4_t;

static inline uint64_t ODY_PCIERCX_EA_ENTRY4(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_EA_ENTRY4(uint64_t a)
{
	if (a <= 15)
		return 0x64;
	__ody_csr_fatal("PCIERCX_EA_ENTRY4", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_EA_ENTRY4(a) ody_pciercx_ea_entry4_t
#define bustype_ODY_PCIERCX_EA_ENTRY4(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_EA_ENTRY4(a) "PCIERCX_EA_ENTRY4"
#define busnum_ODY_PCIERCX_EA_ENTRY4(a) (a)
#define arguments_ODY_PCIERCX_EA_ENTRY4(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_ebar
 *
 * PCIe RC Expansion ROM Base Address Register
 */
union ody_pciercx_ebar {
	uint32_t u;
	struct ody_pciercx_ebar_s {
		uint32_t unused                      : 32;
	} s;
	/* struct ody_pciercx_ebar_s cn; */
};
typedef union ody_pciercx_ebar ody_pciercx_ebar_t;

static inline uint64_t ODY_PCIERCX_EBAR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_EBAR(uint64_t a)
{
	if (a <= 15)
		return 0x38;
	__ody_csr_fatal("PCIERCX_EBAR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_EBAR(a) ody_pciercx_ebar_t
#define bustype_ODY_PCIERCX_EBAR(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_EBAR(a) "PCIERCX_EBAR"
#define busnum_ODY_PCIERCX_EBAR(a) (a)
#define arguments_ODY_PCIERCX_EBAR(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_eq_ctl01
 *
 * PCIe RC Equalization Control Lane 0/1 Register
 * The Equalization Control register consists of control fields required for per-Lane
 * 16.0 GT/s equalization.
 *
 * Equalization as an RC:
 *   \<pre\>
 *   - On speed change from GEN1-\>GEN3, advertise the transmitter preset hint per lane
 *     to the EP device in the TS2s exchanged. This value comes from the per lane
 *     upstream port transmitter preset (L*UTP).
 *   - Upon exit from Recovery Speed, the RC will enter EQ PHASE1 and the RC's
 *     transmitter will use the per lane downstream port transmitter preset field (L*DTP).
 *   - While in EQ PHASE 1, the EP & RC device exchange NO presets. They do advertise
 *     their LF & FS which are needed for the fine tuning stages to follow.
 *   - For the RC, while in EQ PHASE 2, the EP device makes tuning requests of the RC.
 *     The RC adjusts its transmitter settings as directed by the EP. The requests are
 *     communicated via TS1s.
 *   - Once the EP is satisfied with the tuning, equalization moves to PHASE 3 where
 *     the RC tunes the EP's remote transmitter.
 *     Again, the settings are communicated via TS1s but the feedback is provided by
 *     the RC phy's FOM or direction change indications.
 *     \</pre\>
 */
union ody_pciercx_eq_ctl01 {
	uint32_t u;
	struct ody_pciercx_eq_ctl01_s {
		uint32_t l0dtp                       : 4;
		uint32_t l0drph                      : 3;
		uint32_t reserved_7                  : 1;
		uint32_t l0utp                       : 4;
		uint32_t l0urph                      : 3;
		uint32_t reserved_15                 : 1;
		uint32_t l1dtp                       : 4;
		uint32_t l1drph                      : 3;
		uint32_t reserved_23                 : 1;
		uint32_t l1utp                       : 4;
		uint32_t l1urph                      : 3;
		uint32_t reserved_31                 : 1;
	} s;
	/* struct ody_pciercx_eq_ctl01_s cn; */
};
typedef union ody_pciercx_eq_ctl01 ody_pciercx_eq_ctl01_t;

static inline uint64_t ODY_PCIERCX_EQ_CTL01(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_EQ_CTL01(uint64_t a)
{
	if (a <= 15)
		return 0x174;
	__ody_csr_fatal("PCIERCX_EQ_CTL01", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_EQ_CTL01(a) ody_pciercx_eq_ctl01_t
#define bustype_ODY_PCIERCX_EQ_CTL01(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_EQ_CTL01(a) "PCIERCX_EQ_CTL01"
#define busnum_ODY_PCIERCX_EQ_CTL01(a) (a)
#define arguments_ODY_PCIERCX_EQ_CTL01(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_eq_ctl1011
 *
 * PCIe RC Equalization Control Lane 10/11 Register
 * Not supported in QPEM/HPEM.
 *
 * The Equalization Control register consists of control fields required for per-Lane
 * 16.0 GT/s equalization.
 *
 * Equalization as an RC:
 *   \<pre\>
 *   - On speed change from GEN1-\>GEN3, advertise the transmitter preset hint per lane
 *     to the EP device in the TS2s exchanged. This value comes from the per lane
 *     upstream port transmitter preset (L*UTP).
 *   - Upon exit from Recovery Speed, the RC will enter EQ PHASE1 and the RC's
 *     transmitter will use the per lane downstream port transmitter preset field (L*DTP).
 *   - While in EQ PHASE 1, the EP & RC device exchange NO presets. They do advertise
 *     their LF & FS which are needed for the fine tuning stages to follow.
 *   - For the RC, while in EQ PHASE 2, the EP device makes tuning requests of the RC.
 *     The RC adjusts its transmitter settings as directed by the EP. The requests are
 *     communicated via TS1s.
 *   - Once the EP is satisfied with the tuning, equalization moves to PHASE 3 where
 *     the RC tunes the EP's remote transmitter.
 *     Again, the settings are communicated via TS1s but the feedback is provided by
 *     the RC phy's FOM or direction change indications.
 *     \</pre\>
 */
union ody_pciercx_eq_ctl1011 {
	uint32_t u;
	struct ody_pciercx_eq_ctl1011_s {
		uint32_t l10dtp                      : 4;
		uint32_t l10drph                     : 3;
		uint32_t reserved_7                  : 1;
		uint32_t l10utp                      : 4;
		uint32_t l10urph                     : 3;
		uint32_t reserved_15                 : 1;
		uint32_t l11dtp                      : 4;
		uint32_t l11drph                     : 3;
		uint32_t reserved_23                 : 1;
		uint32_t l11utp                      : 4;
		uint32_t l11urph                     : 3;
		uint32_t reserved_31                 : 1;
	} s;
	/* struct ody_pciercx_eq_ctl1011_s cn; */
};
typedef union ody_pciercx_eq_ctl1011 ody_pciercx_eq_ctl1011_t;

static inline uint64_t ODY_PCIERCX_EQ_CTL1011(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_EQ_CTL1011(uint64_t a)
{
	if (a <= 15)
		return 0x188;
	__ody_csr_fatal("PCIERCX_EQ_CTL1011", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_EQ_CTL1011(a) ody_pciercx_eq_ctl1011_t
#define bustype_ODY_PCIERCX_EQ_CTL1011(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_EQ_CTL1011(a) "PCIERCX_EQ_CTL1011"
#define busnum_ODY_PCIERCX_EQ_CTL1011(a) (a)
#define arguments_ODY_PCIERCX_EQ_CTL1011(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_eq_ctl1213
 *
 * PCIe RC Equalization Control Lane 12/13 Register
 * Not supported in QPEM/HPEM.
 *
 * The Equalization Control register consists of control fields required for per-Lane
 * 16.0 GT/s equalization.
 *
 * Equalization as an RC:
 *   \<pre\>
 *   - On speed change from GEN1-\>GEN3, advertise the transmitter preset hint per lane
 *     to the EP device in the TS2s exchanged. This value comes from the per lane
 *     upstream port transmitter preset (L*UTP).
 *   - Upon exit from Recovery Speed, the RC will enter EQ PHASE1 and the RC's
 *     transmitter will use the per lane downstream port transmitter preset field (L*DTP).
 *   - While in EQ PHASE 1, the EP & RC device exchange NO presets. They do advertise
 *     their LF & FS which are needed for the fine tuning stages to follow.
 *   - For the RC, while in EQ PHASE 2, the EP device makes tuning requests of the RC.
 *     The RC adjusts its transmitter settings as directed by the EP. The requests are
 *     communicated via TS1s.
 *   - Once the EP is satisfied with the tuning, equalization moves to PHASE 3 where
 *     the RC tunes the EP's remote transmitter.
 *     Again, the settings are communicated via TS1s but the feedback is provided by
 *     the RC phy's FOM or direction change indications.
 *     \</pre\>
 */
union ody_pciercx_eq_ctl1213 {
	uint32_t u;
	struct ody_pciercx_eq_ctl1213_s {
		uint32_t l12dtp                      : 4;
		uint32_t l12drph                     : 3;
		uint32_t reserved_7                  : 1;
		uint32_t l12utp                      : 4;
		uint32_t l12urph                     : 3;
		uint32_t reserved_15                 : 1;
		uint32_t l13dtp                      : 4;
		uint32_t l13drph                     : 3;
		uint32_t reserved_23                 : 1;
		uint32_t l13utp                      : 4;
		uint32_t l13urph                     : 3;
		uint32_t reserved_31                 : 1;
	} s;
	/* struct ody_pciercx_eq_ctl1213_s cn; */
};
typedef union ody_pciercx_eq_ctl1213 ody_pciercx_eq_ctl1213_t;

static inline uint64_t ODY_PCIERCX_EQ_CTL1213(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_EQ_CTL1213(uint64_t a)
{
	if (a <= 15)
		return 0x18c;
	__ody_csr_fatal("PCIERCX_EQ_CTL1213", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_EQ_CTL1213(a) ody_pciercx_eq_ctl1213_t
#define bustype_ODY_PCIERCX_EQ_CTL1213(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_EQ_CTL1213(a) "PCIERCX_EQ_CTL1213"
#define busnum_ODY_PCIERCX_EQ_CTL1213(a) (a)
#define arguments_ODY_PCIERCX_EQ_CTL1213(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_eq_ctl1415
 *
 * PCIe RC Equalization Control Lane 14/15 Register
 * Not supported in QPEM/HPEM.
 *
 * The Equalization Control register consists of control fields required for per-Lane
 * 16.0 GT/s equalization.
 *
 * Equalization as an RC:
 *   \<pre\>
 *   - On speed change from GEN1-\>GEN3, advertise the transmitter preset hint per lane
 *     to the EP device in the TS2s exchanged. This value comes from the per lane
 *     upstream port transmitter preset (L*UTP).
 *   - Upon exit from Recovery Speed, the RC will enter EQ PHASE1 and the RC's
 *     transmitter will use the per lane downstream port transmitter preset field (L*DTP).
 *   - While in EQ PHASE 1, the EP & RC device exchange NO presets. They do advertise
 *     their LF & FS which are needed for the fine tuning stages to follow.
 *   - For the RC, while in EQ PHASE 2, the EP device makes tuning requests of the RC.
 *     The RC adjusts its transmitter settings as directed by the EP. The requests are
 *     communicated via TS1s.
 *   - Once the EP is satisfied with the tuning, equalization moves to PHASE 3 where
 *     the RC tunes the EP's remote transmitter.
 *     Again, the settings are communicated via TS1s but the feedback is provided by
 *     the RC phy's FOM or direction change indications.
 *     \</pre\>
 */
union ody_pciercx_eq_ctl1415 {
	uint32_t u;
	struct ody_pciercx_eq_ctl1415_s {
		uint32_t l14dtp                      : 4;
		uint32_t l14drph                     : 3;
		uint32_t reserved_7                  : 1;
		uint32_t l14utp                      : 4;
		uint32_t l14urph                     : 3;
		uint32_t reserved_15                 : 1;
		uint32_t l15dtp                      : 4;
		uint32_t l15drph                     : 3;
		uint32_t reserved_23                 : 1;
		uint32_t l15utp                      : 4;
		uint32_t l15urph                     : 3;
		uint32_t reserved_31                 : 1;
	} s;
	/* struct ody_pciercx_eq_ctl1415_s cn; */
};
typedef union ody_pciercx_eq_ctl1415 ody_pciercx_eq_ctl1415_t;

static inline uint64_t ODY_PCIERCX_EQ_CTL1415(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_EQ_CTL1415(uint64_t a)
{
	if (a <= 15)
		return 0x190;
	__ody_csr_fatal("PCIERCX_EQ_CTL1415", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_EQ_CTL1415(a) ody_pciercx_eq_ctl1415_t
#define bustype_ODY_PCIERCX_EQ_CTL1415(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_EQ_CTL1415(a) "PCIERCX_EQ_CTL1415"
#define busnum_ODY_PCIERCX_EQ_CTL1415(a) (a)
#define arguments_ODY_PCIERCX_EQ_CTL1415(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_eq_ctl23
 *
 * PCIe RC Equalization Control Lane 2/3 Register
 * The Equalization Control register consists of control fields required for per-Lane
 * 16.0 GT/s equalization.
 *
 * Equalization as an RC:
 *   \<pre\>
 *   - On speed change from GEN1-\>GEN3, advertise the transmitter preset hint per lane
 *     to the EP device in the TS2s exchanged. This value comes from the per lane
 *     upstream port transmitter preset (L*UTP).
 *   - Upon exit from Recovery Speed, the RC will enter EQ PHASE1 and the RC's
 *     transmitter will use the per lane downstream port transmitter preset field (L*DTP).
 *   - While in EQ PHASE 1, the EP & RC device exchange NO presets. They do advertise
 *     their LF & FS which are needed for the fine tuning stages to follow.
 *   - For the RC, while in EQ PHASE 2, the EP device makes tuning requests of the RC.
 *     The RC adjusts its transmitter settings as directed by the EP. The requests are
 *     communicated via TS1s.
 *   - Once the EP is satisfied with the tuning, equalization moves to PHASE 3 where
 *     the RC tunes the EP's remote transmitter.
 *     Again, the settings are communicated via TS1s but the feedback is provided by
 *     the RC phy's FOM or direction change indications.
 *     \</pre\>
 */
union ody_pciercx_eq_ctl23 {
	uint32_t u;
	struct ody_pciercx_eq_ctl23_s {
		uint32_t l2dtp                       : 4;
		uint32_t l2drph                      : 3;
		uint32_t reserved_7                  : 1;
		uint32_t l2utp                       : 4;
		uint32_t l2urph                      : 3;
		uint32_t reserved_15                 : 1;
		uint32_t l3dtp                       : 4;
		uint32_t l3drph                      : 3;
		uint32_t reserved_23                 : 1;
		uint32_t l3utp                       : 4;
		uint32_t l3urph                      : 3;
		uint32_t reserved_31                 : 1;
	} s;
	/* struct ody_pciercx_eq_ctl23_s cn; */
};
typedef union ody_pciercx_eq_ctl23 ody_pciercx_eq_ctl23_t;

static inline uint64_t ODY_PCIERCX_EQ_CTL23(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_EQ_CTL23(uint64_t a)
{
	if (a <= 15)
		return 0x178;
	__ody_csr_fatal("PCIERCX_EQ_CTL23", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_EQ_CTL23(a) ody_pciercx_eq_ctl23_t
#define bustype_ODY_PCIERCX_EQ_CTL23(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_EQ_CTL23(a) "PCIERCX_EQ_CTL23"
#define busnum_ODY_PCIERCX_EQ_CTL23(a) (a)
#define arguments_ODY_PCIERCX_EQ_CTL23(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_eq_ctl45
 *
 * PCIe RC Equalization Control Lane 2/3 Register
 * Not supported in QPEM.
 *
 * The Equalization Control register consists of control fields required for per-Lane
 * 16.0 GT/s equalization.
 *
 * Equalization as an RC:
 *   \<pre\>
 *   - On speed change from GEN1-\>GEN3, advertise the transmitter preset hint per lane
 *     to the EP device in the TS2s exchanged. This value comes from the per lane
 *     upstream port transmitter preset (L*UTP).
 *   - Upon exit from Recovery Speed, the RC will enter EQ PHASE1 and the RC's
 *     transmitter will use the per lane downstream port transmitter preset field (L*DTP).
 *   - While in EQ PHASE 1, the EP & RC device exchange NO presets. They do advertise
 *     their LF & FS which are needed for the fine tuning stages to follow.
 *   - For the RC, while in EQ PHASE 2, the EP device makes tuning requests of the RC.
 *     The RC adjusts its transmitter settings as directed by the EP. The requests are
 *     communicated via TS1s.
 *   - Once the EP is satisfied with the tuning, equalization moves to PHASE 3 where
 *     the RC tunes the EP's remote transmitter.
 *     Again, the settings are communicated via TS1s but the feedback is provided by
 *     the RC phy's FOM or direction change indications.
 *     \</pre\>
 */
union ody_pciercx_eq_ctl45 {
	uint32_t u;
	struct ody_pciercx_eq_ctl45_s {
		uint32_t l4dtp                       : 4;
		uint32_t l4drph                      : 3;
		uint32_t reserved_7                  : 1;
		uint32_t l4utp                       : 4;
		uint32_t l4urph                      : 3;
		uint32_t reserved_15                 : 1;
		uint32_t l5dtp                       : 4;
		uint32_t l5drph                      : 3;
		uint32_t reserved_23                 : 1;
		uint32_t l5utp                       : 4;
		uint32_t l5urph                      : 3;
		uint32_t reserved_31                 : 1;
	} s;
	/* struct ody_pciercx_eq_ctl45_s cn; */
};
typedef union ody_pciercx_eq_ctl45 ody_pciercx_eq_ctl45_t;

static inline uint64_t ODY_PCIERCX_EQ_CTL45(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_EQ_CTL45(uint64_t a)
{
	if (a <= 15)
		return 0x17c;
	__ody_csr_fatal("PCIERCX_EQ_CTL45", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_EQ_CTL45(a) ody_pciercx_eq_ctl45_t
#define bustype_ODY_PCIERCX_EQ_CTL45(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_EQ_CTL45(a) "PCIERCX_EQ_CTL45"
#define busnum_ODY_PCIERCX_EQ_CTL45(a) (a)
#define arguments_ODY_PCIERCX_EQ_CTL45(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_eq_ctl67
 *
 * PCIe RC Equalization Control Lane 6/7 Register
 * Not supported in QPEM.
 *
 * The Equalization Control register consists of control fields required for per-Lane
 * 16.0 GT/s equalization.
 *
 * Equalization as an RC:
 *   \<pre\>
 *   - On speed change from GEN1-\>GEN3, advertise the transmitter preset hint per lane
 *     to the EP device in the TS2s exchanged. This value comes from the per lane
 *     upstream port transmitter preset (L*UTP).
 *   - Upon exit from Recovery Speed, the RC will enter EQ PHASE1 and the RC's
 *     transmitter will use the per lane downstream port transmitter preset field (L*DTP).
 *   - While in EQ PHASE 1, the EP & RC device exchange NO presets. They do advertise
 *     their LF & FS which are needed for the fine tuning stages to follow.
 *   - For the RC, while in EQ PHASE 2, the EP device makes tuning requests of the RC.
 *     The RC adjusts its transmitter settings as directed by the EP. The requests are
 *     communicated via TS1s.
 *   - Once the EP is satisfied with the tuning, equalization moves to PHASE 3 where
 *     the RC tunes the EP's remote transmitter.
 *     Again, the settings are communicated via TS1s but the feedback is provided by
 *     the RC phy's FOM or direction change indications.
 *     \</pre\>
 */
union ody_pciercx_eq_ctl67 {
	uint32_t u;
	struct ody_pciercx_eq_ctl67_s {
		uint32_t l6dtp                       : 4;
		uint32_t l6drph                      : 3;
		uint32_t reserved_7                  : 1;
		uint32_t l6utp                       : 4;
		uint32_t l6urph                      : 3;
		uint32_t reserved_15                 : 1;
		uint32_t l7dtp                       : 4;
		uint32_t l7drph                      : 3;
		uint32_t reserved_23                 : 1;
		uint32_t l7utp                       : 4;
		uint32_t l7urph                      : 3;
		uint32_t reserved_31                 : 1;
	} s;
	/* struct ody_pciercx_eq_ctl67_s cn; */
};
typedef union ody_pciercx_eq_ctl67 ody_pciercx_eq_ctl67_t;

static inline uint64_t ODY_PCIERCX_EQ_CTL67(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_EQ_CTL67(uint64_t a)
{
	if (a <= 15)
		return 0x180;
	__ody_csr_fatal("PCIERCX_EQ_CTL67", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_EQ_CTL67(a) ody_pciercx_eq_ctl67_t
#define bustype_ODY_PCIERCX_EQ_CTL67(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_EQ_CTL67(a) "PCIERCX_EQ_CTL67"
#define busnum_ODY_PCIERCX_EQ_CTL67(a) (a)
#define arguments_ODY_PCIERCX_EQ_CTL67(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_eq_ctl89
 *
 * PCIe RC Equalization Control Lane 8/9 Register
 * Not supported in QPEM/HPEM.
 *
 * The Equalization Control register consists of control fields required for per-Lane
 * 16.0 GT/s equalization.
 *
 * Equalization as an RC:
 *   \<pre\>
 *   - On speed change from GEN1-\>GEN3, advertise the transmitter preset hint per lane
 *     to the EP device in the TS2s exchanged. This value comes from the per lane
 *     upstream port transmitter preset (L*UTP).
 *   - Upon exit from Recovery Speed, the RC will enter EQ PHASE1 and the RC's
 *     transmitter will use the per lane downstream port transmitter preset field (L*DTP).
 *   - While in EQ PHASE 1, the EP & RC device exchange NO presets. They do advertise
 *     their LF & FS which are needed for the fine tuning stages to follow.
 *   - For the RC, while in EQ PHASE 2, the EP device makes tuning requests of the RC.
 *     The RC adjusts its transmitter settings as directed by the EP. The requests are
 *     communicated via TS1s.
 *   - Once the EP is satisfied with the tuning, equalization moves to PHASE 3 where
 *     the RC tunes the EP's remote transmitter.
 *     Again, the settings are communicated via TS1s but the feedback is provided by
 *     the RC phy's FOM or direction change indications.
 *     \</pre\>
 */
union ody_pciercx_eq_ctl89 {
	uint32_t u;
	struct ody_pciercx_eq_ctl89_s {
		uint32_t l8dtp                       : 4;
		uint32_t l8drph                      : 3;
		uint32_t reserved_7                  : 1;
		uint32_t l8utp                       : 4;
		uint32_t l8urph                      : 3;
		uint32_t reserved_15                 : 1;
		uint32_t l9dtp                       : 4;
		uint32_t l9drph                      : 3;
		uint32_t reserved_23                 : 1;
		uint32_t l9utp                       : 4;
		uint32_t l9urph                      : 3;
		uint32_t reserved_31                 : 1;
	} s;
	/* struct ody_pciercx_eq_ctl89_s cn; */
};
typedef union ody_pciercx_eq_ctl89 ody_pciercx_eq_ctl89_t;

static inline uint64_t ODY_PCIERCX_EQ_CTL89(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_EQ_CTL89(uint64_t a)
{
	if (a <= 15)
		return 0x184;
	__ody_csr_fatal("PCIERCX_EQ_CTL89", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_EQ_CTL89(a) ody_pciercx_eq_ctl89_t
#define bustype_ODY_PCIERCX_EQ_CTL89(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_EQ_CTL89(a) "PCIERCX_EQ_CTL89"
#define busnum_ODY_PCIERCX_EQ_CTL89(a) (a)
#define arguments_ODY_PCIERCX_EQ_CTL89(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_err_source
 *
 * PCIe RC Error Source Identification Register
 */
union ody_pciercx_err_source {
	uint32_t u;
	struct ody_pciercx_err_source_s {
		uint32_t ecsi                        : 16;
		uint32_t efnfsi                      : 16;
	} s;
	/* struct ody_pciercx_err_source_s cn; */
};
typedef union ody_pciercx_err_source ody_pciercx_err_source_t;

static inline uint64_t ODY_PCIERCX_ERR_SOURCE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_ERR_SOURCE(uint64_t a)
{
	if (a <= 15)
		return 0x134;
	__ody_csr_fatal("PCIERCX_ERR_SOURCE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_ERR_SOURCE(a) ody_pciercx_err_source_t
#define bustype_ODY_PCIERCX_ERR_SOURCE(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_ERR_SOURCE(a) "PCIERCX_ERR_SOURCE"
#define busnum_ODY_PCIERCX_ERR_SOURCE(a) (a)
#define arguments_ODY_PCIERCX_ERR_SOURCE(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_ext_cap
 *
 * PCIe RC PCI Express Extended Capability Header Register
 */
union ody_pciercx_ext_cap {
	uint32_t u;
	struct ody_pciercx_ext_cap_s {
		uint32_t pcieec                      : 16;
		uint32_t cv                          : 4;
		uint32_t nco                         : 12;
	} s;
	/* struct ody_pciercx_ext_cap_s cn; */
};
typedef union ody_pciercx_ext_cap ody_pciercx_ext_cap_t;

static inline uint64_t ODY_PCIERCX_EXT_CAP(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_EXT_CAP(uint64_t a)
{
	if (a <= 15)
		return 0x100;
	__ody_csr_fatal("PCIERCX_EXT_CAP", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_EXT_CAP(a) ody_pciercx_ext_cap_t
#define bustype_ODY_PCIERCX_EXT_CAP(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_EXT_CAP(a) "PCIERCX_EXT_CAP"
#define busnum_ODY_PCIERCX_EXT_CAP(a) (a)
#define arguments_ODY_PCIERCX_EXT_CAP(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_filt_msk2
 *
 * PCIe RC Filter Mask Register 2
 */
union ody_pciercx_filt_msk2 {
	uint32_t u;
	struct ody_pciercx_filt_msk2_s {
		uint32_t m_vend0_drp                 : 1;
		uint32_t m_vend1_drp                 : 1;
		uint32_t m_dabort_4ucpl              : 1;
		uint32_t m_handle_flush              : 1;
		uint32_t m_ln_vend1_drop             : 1;
		uint32_t m_unmask_ur_pois            : 1;
		uint32_t m_unmask_td                 : 1;
		uint32_t m_prs                       : 1;
		uint32_t m_pois_rpt                  : 1;
		uint32_t m_cpl_lut_chk               : 1;
		uint32_t m_umsk_ats_rules            : 1;
		uint32_t m_umsk_atomic_rules         : 1;
		uint32_t reserved_12_31              : 20;
	} s;
	/* struct ody_pciercx_filt_msk2_s cn; */
};
typedef union ody_pciercx_filt_msk2 ody_pciercx_filt_msk2_t;

static inline uint64_t ODY_PCIERCX_FILT_MSK2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_FILT_MSK2(uint64_t a)
{
	if (a <= 15)
		return 0x720;
	__ody_csr_fatal("PCIERCX_FILT_MSK2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_FILT_MSK2(a) ody_pciercx_filt_msk2_t
#define bustype_ODY_PCIERCX_FILT_MSK2(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_FILT_MSK2(a) "PCIERCX_FILT_MSK2"
#define busnum_ODY_PCIERCX_FILT_MSK2(a) (a)
#define arguments_ODY_PCIERCX_FILT_MSK2(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_gen2_port
 *
 * PCIe RC Gen2 Port Logic Register
 */
union ody_pciercx_gen2_port {
	uint32_t u;
	struct ody_pciercx_gen2_port_s {
		uint32_t n_fts                       : 8;
		uint32_t nlanes                      : 5;
		uint32_t pdetlane                    : 3;
		uint32_t alaneflip                   : 1;
		uint32_t dsc                         : 1;
		uint32_t cpyts                       : 1;
		uint32_t ctcrb                       : 1;
		uint32_t s_d_e                       : 1;
		uint32_t gen1_ei_inf                 : 1;
		uint32_t sel_deemph_var              : 1;
		uint32_t sel_deemph_bit              : 1;
		uint32_t lane_utest                  : 4;
		uint32_t eq_for_lpbk                 : 1;
		uint32_t tx_mcmpl_pat_for_lpbk       : 1;
		uint32_t force_lflip                 : 1;
		uint32_t mod_ts_en                   : 1;
	} s;
	/* struct ody_pciercx_gen2_port_s cn; */
};
typedef union ody_pciercx_gen2_port ody_pciercx_gen2_port_t;

static inline uint64_t ODY_PCIERCX_GEN2_PORT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_GEN2_PORT(uint64_t a)
{
	if (a <= 15)
		return 0x80c;
	__ody_csr_fatal("PCIERCX_GEN2_PORT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_GEN2_PORT(a) ody_pciercx_gen2_port_t
#define bustype_ODY_PCIERCX_GEN2_PORT(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_GEN2_PORT(a) "PCIERCX_GEN2_PORT"
#define busnum_ODY_PCIERCX_GEN2_PORT(a) (a)
#define arguments_ODY_PCIERCX_GEN2_PORT(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_gen3_eq_ctl
 *
 * PCIe RC Gen3 EQ Control Register
 */
union ody_pciercx_gen3_eq_ctl {
	uint32_t u;
	struct ody_pciercx_gen3_eq_ctl_s {
		uint32_t fm                          : 4;
		uint32_t bt                          : 1;
		uint32_t p23td                       : 1;
		uint32_t eq_redo_en                  : 1;
		uint32_t reserved_7                  : 1;
		uint32_t prv                         : 16;
		uint32_t iif                         : 1;
		uint32_t eq_pset_req                 : 1;
		uint32_t scefpm                      : 1;
		uint32_t eq_req_num                  : 3;
		uint32_t fin_eq_req                  : 1;
		uint32_t reserved_31                 : 1;
	} s;
	/* struct ody_pciercx_gen3_eq_ctl_s cn; */
};
typedef union ody_pciercx_gen3_eq_ctl ody_pciercx_gen3_eq_ctl_t;

static inline uint64_t ODY_PCIERCX_GEN3_EQ_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_GEN3_EQ_CTL(uint64_t a)
{
	if (a <= 15)
		return 0x8a8;
	__ody_csr_fatal("PCIERCX_GEN3_EQ_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_GEN3_EQ_CTL(a) ody_pciercx_gen3_eq_ctl_t
#define bustype_ODY_PCIERCX_GEN3_EQ_CTL(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_GEN3_EQ_CTL(a) "PCIERCX_GEN3_EQ_CTL"
#define busnum_ODY_PCIERCX_GEN3_EQ_CTL(a) (a)
#define arguments_ODY_PCIERCX_GEN3_EQ_CTL(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_gen3_pipe_lb
 *
 * PCIe RC Gen3 PIPE Loopback Register
 */
union ody_pciercx_gen3_pipe_lb {
	uint32_t u;
	struct ody_pciercx_gen3_pipe_lb_s {
		uint32_t lpbk_rxvalid                : 16;
		uint32_t rxstat_ln                   : 6;
		uint32_t reserved_22_23              : 2;
		uint32_t rx_stat                     : 3;
		uint32_t reserved_27_30              : 4;
		uint32_t ple                         : 1;
	} s;
	/* struct ody_pciercx_gen3_pipe_lb_s cn; */
};
typedef union ody_pciercx_gen3_pipe_lb ody_pciercx_gen3_pipe_lb_t;

static inline uint64_t ODY_PCIERCX_GEN3_PIPE_LB(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_GEN3_PIPE_LB(uint64_t a)
{
	if (a <= 15)
		return 0x8b8;
	__ody_csr_fatal("PCIERCX_GEN3_PIPE_LB", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_GEN3_PIPE_LB(a) ody_pciercx_gen3_pipe_lb_t
#define bustype_ODY_PCIERCX_GEN3_PIPE_LB(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_GEN3_PIPE_LB(a) "PCIERCX_GEN3_PIPE_LB"
#define busnum_ODY_PCIERCX_GEN3_PIPE_LB(a) (a)
#define arguments_ODY_PCIERCX_GEN3_PIPE_LB(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_gen4_lane_margining_1
 *
 * PCIe RC Gen4 Lane Margining Register 1
 */
union ody_pciercx_gen4_lane_margining_1 {
	uint32_t u;
	struct ody_pciercx_gen4_lane_margining_1_s {
		uint32_t nts                         : 6;
		uint32_t reserved_6_7                : 2;
		uint32_t mto                         : 6;
		uint32_t reserved_14_15              : 2;
		uint32_t nvs                         : 7;
		uint32_t reserved_23                 : 1;
		uint32_t mvo                         : 6;
		uint32_t reserved_30_31              : 2;
	} s;
	/* struct ody_pciercx_gen4_lane_margining_1_s cn; */
};
typedef union ody_pciercx_gen4_lane_margining_1 ody_pciercx_gen4_lane_margining_1_t;

static inline uint64_t ODY_PCIERCX_GEN4_LANE_MARGINING_1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_GEN4_LANE_MARGINING_1(uint64_t a)
{
	if (a <= 15)
		return 0xb80;
	__ody_csr_fatal("PCIERCX_GEN4_LANE_MARGINING_1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_GEN4_LANE_MARGINING_1(a) ody_pciercx_gen4_lane_margining_1_t
#define bustype_ODY_PCIERCX_GEN4_LANE_MARGINING_1(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_GEN4_LANE_MARGINING_1(a) "PCIERCX_GEN4_LANE_MARGINING_1"
#define busnum_ODY_PCIERCX_GEN4_LANE_MARGINING_1(a) (a)
#define arguments_ODY_PCIERCX_GEN4_LANE_MARGINING_1(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_gen4_lane_margining_2
 *
 * PCIe RC Gen4 Lane Margining Register 2
 */
union ody_pciercx_gen4_lane_margining_2 {
	uint32_t u;
	struct ody_pciercx_gen4_lane_margining_2_s {
		uint32_t srv                         : 6;
		uint32_t reserved_6_7                : 2;
		uint32_t srt                         : 6;
		uint32_t reserved_14_15              : 2;
		uint32_t max_lanes                   : 5;
		uint32_t reserved_21_23              : 3;
		uint32_t volt_sup                    : 1;
		uint32_t iudv                        : 1;
		uint32_t ilrt                        : 1;
		uint32_t srm                         : 1;
		uint32_t ies                         : 1;
		uint32_t reserved_29_31              : 3;
	} s;
	/* struct ody_pciercx_gen4_lane_margining_2_s cn; */
};
typedef union ody_pciercx_gen4_lane_margining_2 ody_pciercx_gen4_lane_margining_2_t;

static inline uint64_t ODY_PCIERCX_GEN4_LANE_MARGINING_2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_GEN4_LANE_MARGINING_2(uint64_t a)
{
	if (a <= 15)
		return 0xb84;
	__ody_csr_fatal("PCIERCX_GEN4_LANE_MARGINING_2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_GEN4_LANE_MARGINING_2(a) ody_pciercx_gen4_lane_margining_2_t
#define bustype_ODY_PCIERCX_GEN4_LANE_MARGINING_2(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_GEN4_LANE_MARGINING_2(a) "PCIERCX_GEN4_LANE_MARGINING_2"
#define busnum_ODY_PCIERCX_GEN4_LANE_MARGINING_2(a) (a)
#define arguments_ODY_PCIERCX_GEN4_LANE_MARGINING_2(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_gen5_lane_margining_1
 *
 * PCIe RC Gen5 Lane Margining Register 1
 */
union ody_pciercx_gen5_lane_margining_1 {
	uint32_t u;
	struct ody_pciercx_gen5_lane_margining_1_s {
		uint32_t nts                         : 6;
		uint32_t reserved_6_7                : 2;
		uint32_t mto                         : 6;
		uint32_t reserved_14_15              : 2;
		uint32_t nvs                         : 7;
		uint32_t reserved_23                 : 1;
		uint32_t mvo                         : 6;
		uint32_t reserved_30_31              : 2;
	} s;
	/* struct ody_pciercx_gen5_lane_margining_1_s cn; */
};
typedef union ody_pciercx_gen5_lane_margining_1 ody_pciercx_gen5_lane_margining_1_t;

static inline uint64_t ODY_PCIERCX_GEN5_LANE_MARGINING_1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_GEN5_LANE_MARGINING_1(uint64_t a)
{
	if (a <= 15)
		return 0xb88;
	__ody_csr_fatal("PCIERCX_GEN5_LANE_MARGINING_1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_GEN5_LANE_MARGINING_1(a) ody_pciercx_gen5_lane_margining_1_t
#define bustype_ODY_PCIERCX_GEN5_LANE_MARGINING_1(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_GEN5_LANE_MARGINING_1(a) "PCIERCX_GEN5_LANE_MARGINING_1"
#define busnum_ODY_PCIERCX_GEN5_LANE_MARGINING_1(a) (a)
#define arguments_ODY_PCIERCX_GEN5_LANE_MARGINING_1(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_gen5_lane_margining_2
 *
 * PCIe RC Gen5 Lane Margining Register 2
 */
union ody_pciercx_gen5_lane_margining_2 {
	uint32_t u;
	struct ody_pciercx_gen5_lane_margining_2_s {
		uint32_t srv                         : 6;
		uint32_t reserved_6_7                : 2;
		uint32_t srt                         : 6;
		uint32_t reserved_14_15              : 2;
		uint32_t max_lanes                   : 5;
		uint32_t reserved_21_23              : 3;
		uint32_t volt_sup                    : 1;
		uint32_t iudv                        : 1;
		uint32_t ilrt                        : 1;
		uint32_t srm                         : 1;
		uint32_t ies                         : 1;
		uint32_t reserved_29_31              : 3;
	} s;
	/* struct ody_pciercx_gen5_lane_margining_2_s cn; */
};
typedef union ody_pciercx_gen5_lane_margining_2 ody_pciercx_gen5_lane_margining_2_t;

static inline uint64_t ODY_PCIERCX_GEN5_LANE_MARGINING_2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_GEN5_LANE_MARGINING_2(uint64_t a)
{
	if (a <= 15)
		return 0xb8c;
	__ody_csr_fatal("PCIERCX_GEN5_LANE_MARGINING_2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_GEN5_LANE_MARGINING_2(a) ody_pciercx_gen5_lane_margining_2_t
#define bustype_ODY_PCIERCX_GEN5_LANE_MARGINING_2(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_GEN5_LANE_MARGINING_2(a) "PCIERCX_GEN5_LANE_MARGINING_2"
#define busnum_ODY_PCIERCX_GEN5_LANE_MARGINING_2(a) (a)
#define arguments_ODY_PCIERCX_GEN5_LANE_MARGINING_2(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_hdr_log1
 *
 * PCIe RC Header Log Register 1
 * The header log registers collect the header for the TLP corresponding to a detected error.
 */
union ody_pciercx_hdr_log1 {
	uint32_t u;
	struct ody_pciercx_hdr_log1_s {
		uint32_t dword1                      : 32;
	} s;
	/* struct ody_pciercx_hdr_log1_s cn; */
};
typedef union ody_pciercx_hdr_log1 ody_pciercx_hdr_log1_t;

static inline uint64_t ODY_PCIERCX_HDR_LOG1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_HDR_LOG1(uint64_t a)
{
	if (a <= 15)
		return 0x11c;
	__ody_csr_fatal("PCIERCX_HDR_LOG1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_HDR_LOG1(a) ody_pciercx_hdr_log1_t
#define bustype_ODY_PCIERCX_HDR_LOG1(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_HDR_LOG1(a) "PCIERCX_HDR_LOG1"
#define busnum_ODY_PCIERCX_HDR_LOG1(a) (a)
#define arguments_ODY_PCIERCX_HDR_LOG1(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_hdr_log2
 *
 * PCIe RC Header Log Register 2
 * The header log registers collect the header for the TLP corresponding to a detected error.
 */
union ody_pciercx_hdr_log2 {
	uint32_t u;
	struct ody_pciercx_hdr_log2_s {
		uint32_t dword2                      : 32;
	} s;
	/* struct ody_pciercx_hdr_log2_s cn; */
};
typedef union ody_pciercx_hdr_log2 ody_pciercx_hdr_log2_t;

static inline uint64_t ODY_PCIERCX_HDR_LOG2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_HDR_LOG2(uint64_t a)
{
	if (a <= 15)
		return 0x120;
	__ody_csr_fatal("PCIERCX_HDR_LOG2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_HDR_LOG2(a) ody_pciercx_hdr_log2_t
#define bustype_ODY_PCIERCX_HDR_LOG2(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_HDR_LOG2(a) "PCIERCX_HDR_LOG2"
#define busnum_ODY_PCIERCX_HDR_LOG2(a) (a)
#define arguments_ODY_PCIERCX_HDR_LOG2(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_hdr_log3
 *
 * PCIe RC Header Log Register 3
 * The header log registers collect the header for the TLP corresponding to a detected error.
 */
union ody_pciercx_hdr_log3 {
	uint32_t u;
	struct ody_pciercx_hdr_log3_s {
		uint32_t dword3                      : 32;
	} s;
	/* struct ody_pciercx_hdr_log3_s cn; */
};
typedef union ody_pciercx_hdr_log3 ody_pciercx_hdr_log3_t;

static inline uint64_t ODY_PCIERCX_HDR_LOG3(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_HDR_LOG3(uint64_t a)
{
	if (a <= 15)
		return 0x124;
	__ody_csr_fatal("PCIERCX_HDR_LOG3", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_HDR_LOG3(a) ody_pciercx_hdr_log3_t
#define bustype_ODY_PCIERCX_HDR_LOG3(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_HDR_LOG3(a) "PCIERCX_HDR_LOG3"
#define busnum_ODY_PCIERCX_HDR_LOG3(a) (a)
#define arguments_ODY_PCIERCX_HDR_LOG3(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_hdr_log4
 *
 * PCIe RC Header Log Register 4
 * The header log registers collect the header for the TLP corresponding to a detected error.
 */
union ody_pciercx_hdr_log4 {
	uint32_t u;
	struct ody_pciercx_hdr_log4_s {
		uint32_t dword4                      : 32;
	} s;
	/* struct ody_pciercx_hdr_log4_s cn; */
};
typedef union ody_pciercx_hdr_log4 ody_pciercx_hdr_log4_t;

static inline uint64_t ODY_PCIERCX_HDR_LOG4(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_HDR_LOG4(uint64_t a)
{
	if (a <= 15)
		return 0x128;
	__ody_csr_fatal("PCIERCX_HDR_LOG4", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_HDR_LOG4(a) ody_pciercx_hdr_log4_t
#define bustype_ODY_PCIERCX_HDR_LOG4(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_HDR_LOG4(a) "PCIERCX_HDR_LOG4"
#define busnum_ODY_PCIERCX_HDR_LOG4(a) (a)
#define arguments_ODY_PCIERCX_HDR_LOG4(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_id
 *
 * PCIe RC Device ID and Vendor ID Register
 */
union ody_pciercx_id {
	uint32_t u;
	struct ody_pciercx_id_s {
		uint32_t vendid                      : 16;
		uint32_t devid                       : 16;
	} s;
	/* struct ody_pciercx_id_s cn; */
};
typedef union ody_pciercx_id ody_pciercx_id_t;

static inline uint64_t ODY_PCIERCX_ID(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_ID(uint64_t a)
{
	if (a <= 15)
		return 0;
	__ody_csr_fatal("PCIERCX_ID", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_ID(a) ody_pciercx_id_t
#define bustype_ODY_PCIERCX_ID(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_ID(a) "PCIERCX_ID"
#define busnum_ODY_PCIERCX_ID(a) (a)
#define arguments_ODY_PCIERCX_ID(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_ide_cap
 *
 * PCIe IDE Capability Register
 * This register provides access to the PCIe extended capability
 * register in the IDE encryption block.  This register
 * is used in PEM configurations which support PCIe IDE encryption.
 */
union ody_pciercx_ide_cap {
	uint32_t u;
	struct ody_pciercx_ide_cap_s {
		uint32_t liss                        : 1;
		uint32_t siss                        : 1;
		uint32_t fiss                        : 1;
		uint32_t reserved_3                  : 1;
		uint32_t agg_sup                     : 1;
		uint32_t pcrc_sup                    : 1;
		uint32_t ikps                        : 1;
		uint32_t sicrs                       : 1;
		uint32_t sup_alg                     : 5;
		uint32_t nts                         : 3;
		uint32_t reserved_16_31              : 16;
	} s;
	/* struct ody_pciercx_ide_cap_s cn; */
};
typedef union ody_pciercx_ide_cap ody_pciercx_ide_cap_t;

static inline uint64_t ODY_PCIERCX_IDE_CAP(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_IDE_CAP(uint64_t a)
{
	if (a <= 15)
		return 0x428;
	__ody_csr_fatal("PCIERCX_IDE_CAP", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_IDE_CAP(a) ody_pciercx_ide_cap_t
#define bustype_ODY_PCIERCX_IDE_CAP(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_IDE_CAP(a) "PCIERCX_IDE_CAP"
#define busnum_ODY_PCIERCX_IDE_CAP(a) (a)
#define arguments_ODY_PCIERCX_IDE_CAP(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_ide_ctrl
 *
 * PCIe IDE Control Register
 * This register provides access to the PCIe IDE control register
 * in the IDE encryption block.  This register is used in
 * PEM configurations which support PCIe IDE encryption.
 */
union ody_pciercx_ide_ctrl {
	uint32_t u;
	struct ody_pciercx_ide_ctrl_s {
		uint32_t reserved_0_1                : 2;
		uint32_t fis_en                      : 1;
		uint32_t reserved_3_31               : 29;
	} s;
	/* struct ody_pciercx_ide_ctrl_s cn; */
};
typedef union ody_pciercx_ide_ctrl ody_pciercx_ide_ctrl_t;

static inline uint64_t ODY_PCIERCX_IDE_CTRL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_IDE_CTRL(uint64_t a)
{
	if (a <= 15)
		return 0x42c;
	__ody_csr_fatal("PCIERCX_IDE_CTRL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_IDE_CTRL(a) ody_pciercx_ide_ctrl_t
#define bustype_ODY_PCIERCX_IDE_CTRL(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_IDE_CTRL(a) "PCIERCX_IDE_CTRL"
#define busnum_ODY_PCIERCX_IDE_CTRL(a) (a)
#define arguments_ODY_PCIERCX_IDE_CTRL(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_ide_ext_cap_hdr
 *
 * PCIe IDE Extended Capability Header Register
 * This register provides access to the PCIe extended capability
 * header register in the IDE encryption block.  This register
 * is used in PEM configurations which support PCIe IDE encryption.
 */
union ody_pciercx_ide_ext_cap_hdr {
	uint32_t u;
	struct ody_pciercx_ide_ext_cap_hdr_s {
		uint32_t pcieec                      : 16;
		uint32_t cv                          : 4;
		uint32_t nco                         : 12;
	} s;
	/* struct ody_pciercx_ide_ext_cap_hdr_s cn; */
};
typedef union ody_pciercx_ide_ext_cap_hdr ody_pciercx_ide_ext_cap_hdr_t;

static inline uint64_t ODY_PCIERCX_IDE_EXT_CAP_HDR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_IDE_EXT_CAP_HDR(uint64_t a)
{
	if (a <= 15)
		return 0x424;
	__ody_csr_fatal("PCIERCX_IDE_EXT_CAP_HDR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_IDE_EXT_CAP_HDR(a) ody_pciercx_ide_ext_cap_hdr_t
#define bustype_ODY_PCIERCX_IDE_EXT_CAP_HDR(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_IDE_EXT_CAP_HDR(a) "PCIERCX_IDE_EXT_CAP_HDR"
#define busnum_ODY_PCIERCX_IDE_EXT_CAP_HDR(a) (a)
#define arguments_ODY_PCIERCX_IDE_EXT_CAP_HDR(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_ide_link_ctrl_0
 *
 * PCIe IDE Link Stream 0 Control Register
 * This register provides access to the PCIe IDE link stream 0 control
 * register in the IDE encryption block.  This register is used
 * in PEM configurations which support PCIe IDE encryption.
 */
union ody_pciercx_ide_link_ctrl_0 {
	uint32_t u;
	struct ody_pciercx_ide_link_ctrl_0_s {
		uint32_t lis_en                      : 1;
		uint32_t reserved_1_7                : 7;
		uint32_t pcrc_en                     : 1;
		uint32_t reserved_9_13               : 5;
		uint32_t sel_alg                     : 5;
		uint32_t tc                          : 3;
		uint32_t reserved_22_23              : 2;
		uint32_t strm_id                     : 8;
	} s;
	/* struct ody_pciercx_ide_link_ctrl_0_s cn; */
};
typedef union ody_pciercx_ide_link_ctrl_0 ody_pciercx_ide_link_ctrl_0_t;

static inline uint64_t ODY_PCIERCX_IDE_LINK_CTRL_0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_IDE_LINK_CTRL_0(uint64_t a)
{
	if (a <= 15)
		return 0x430;
	__ody_csr_fatal("PCIERCX_IDE_LINK_CTRL_0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_IDE_LINK_CTRL_0(a) ody_pciercx_ide_link_ctrl_0_t
#define bustype_ODY_PCIERCX_IDE_LINK_CTRL_0(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_IDE_LINK_CTRL_0(a) "PCIERCX_IDE_LINK_CTRL_0"
#define busnum_ODY_PCIERCX_IDE_LINK_CTRL_0(a) (a)
#define arguments_ODY_PCIERCX_IDE_LINK_CTRL_0(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_ide_link_status_0
 *
 * PCIe IDE Link Stream 0 Status Register
 * This register provides access to the PCIe IDE link stream 0
 * status register in the IDE encryption block.  This register is
 * used in PEM configurations which support PCIe IDE encryption.
 */
union ody_pciercx_ide_link_status_0 {
	uint32_t u;
	struct ody_pciercx_ide_link_status_0_s {
		uint32_t liss                        : 4;
		uint32_t reserved_4_30               : 27;
		uint32_t ricfm                       : 1;
	} s;
	/* struct ody_pciercx_ide_link_status_0_s cn; */
};
typedef union ody_pciercx_ide_link_status_0 ody_pciercx_ide_link_status_0_t;

static inline uint64_t ODY_PCIERCX_IDE_LINK_STATUS_0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_IDE_LINK_STATUS_0(uint64_t a)
{
	if (a <= 15)
		return 0x434;
	__ody_csr_fatal("PCIERCX_IDE_LINK_STATUS_0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_IDE_LINK_STATUS_0(a) ody_pciercx_ide_link_status_0_t
#define bustype_ODY_PCIERCX_IDE_LINK_STATUS_0(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_IDE_LINK_STATUS_0(a) "PCIERCX_IDE_LINK_STATUS_0"
#define busnum_ODY_PCIERCX_IDE_LINK_STATUS_0(a) (a)
#define arguments_ODY_PCIERCX_IDE_LINK_STATUS_0(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_int
 *
 * PCIe RC Interrupt Line Register/Interrupt Pin/Bridge Control Register
 */
union ody_pciercx_int {
	uint32_t u;
	struct ody_pciercx_int_s {
		uint32_t il                          : 8;
		uint32_t inta                        : 8;
		uint32_t pere                        : 1;
		uint32_t see                         : 1;
		uint32_t isae                        : 1;
		uint32_t vgae                        : 1;
		uint32_t vga16d                      : 1;
		uint32_t mam                         : 1;
		uint32_t sbrst                       : 1;
		uint32_t fbbe                        : 1;
		uint32_t pdt                         : 1;
		uint32_t sdt                         : 1;
		uint32_t dts                         : 1;
		uint32_t dtsees                      : 1;
		uint32_t reserved_28_31              : 4;
	} s;
	/* struct ody_pciercx_int_s cn; */
};
typedef union ody_pciercx_int ody_pciercx_int_t;

static inline uint64_t ODY_PCIERCX_INT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_INT(uint64_t a)
{
	if (a <= 15)
		return 0x3c;
	__ody_csr_fatal("PCIERCX_INT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_INT(a) ody_pciercx_int_t
#define bustype_ODY_PCIERCX_INT(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_INT(a) "PCIERCX_INT"
#define busnum_ODY_PCIERCX_INT(a) (a)
#define arguments_ODY_PCIERCX_INT(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_iobasel
 *
 * PCIe RC I/O Base and I/O Limit/Secondary Status Register
 */
union ody_pciercx_iobasel {
	uint32_t u;
	struct ody_pciercx_iobasel_s {
		uint32_t io32a                       : 1;
		uint32_t reserved_1_3                : 3;
		uint32_t lio_base                    : 4;
		uint32_t io32b                       : 1;
		uint32_t reserved_9_11               : 3;
		uint32_t lio_limi                    : 4;
		uint32_t reserved_16_20              : 5;
		uint32_t m66                         : 1;
		uint32_t reserved_22                 : 1;
		uint32_t fbb                         : 1;
		uint32_t mdpe                        : 1;
		uint32_t devt                        : 2;
		uint32_t sta                         : 1;
		uint32_t rta                         : 1;
		uint32_t rma                         : 1;
		uint32_t sse                         : 1;
		uint32_t dpe                         : 1;
	} s;
	/* struct ody_pciercx_iobasel_s cn; */
};
typedef union ody_pciercx_iobasel ody_pciercx_iobasel_t;

static inline uint64_t ODY_PCIERCX_IOBASEL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_IOBASEL(uint64_t a)
{
	if (a <= 15)
		return 0x1c;
	__ody_csr_fatal("PCIERCX_IOBASEL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_IOBASEL(a) ody_pciercx_iobasel_t
#define bustype_ODY_PCIERCX_IOBASEL(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_IOBASEL(a) "PCIERCX_IOBASEL"
#define busnum_ODY_PCIERCX_IOBASEL(a) (a)
#define arguments_ODY_PCIERCX_IOBASEL(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_iobaseu
 *
 * PCIe RC I/O Base and Limit Upper 16 Bits Register
 */
union ody_pciercx_iobaseu {
	uint32_t u;
	struct ody_pciercx_iobaseu_s {
		uint32_t uio_base                    : 16;
		uint32_t uio_limit                   : 16;
	} s;
	/* struct ody_pciercx_iobaseu_s cn; */
};
typedef union ody_pciercx_iobaseu ody_pciercx_iobaseu_t;

static inline uint64_t ODY_PCIERCX_IOBASEU(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_IOBASEU(uint64_t a)
{
	if (a <= 15)
		return 0x30;
	__ody_csr_fatal("PCIERCX_IOBASEU", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_IOBASEU(a) ody_pciercx_iobaseu_t
#define bustype_ODY_PCIERCX_IOBASEU(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_IOBASEU(a) "PCIERCX_IOBASEU"
#define busnum_ODY_PCIERCX_IOBASEU(a) (a)
#define arguments_ODY_PCIERCX_IOBASEU(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_lane_err
 *
 * Lane Error Status Register
 */
union ody_pciercx_lane_err {
	uint32_t u;
	struct ody_pciercx_lane_err_s {
		uint32_t les                         : 4;
		uint32_t reserved_4_31               : 28;
	} s;
	/* struct ody_pciercx_lane_err_s cn; */
};
typedef union ody_pciercx_lane_err ody_pciercx_lane_err_t;

static inline uint64_t ODY_PCIERCX_LANE_ERR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_LANE_ERR(uint64_t a)
{
	if (a <= 15)
		return 0x170;
	__ody_csr_fatal("PCIERCX_LANE_ERR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_LANE_ERR(a) ody_pciercx_lane_err_t
#define bustype_ODY_PCIERCX_LANE_ERR(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_LANE_ERR(a) "PCIERCX_LANE_ERR"
#define busnum_ODY_PCIERCX_LANE_ERR(a) (a)
#define arguments_ODY_PCIERCX_LANE_ERR(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_lane_skew
 *
 * PCIe RC Lane Skew Register
 */
union ody_pciercx_lane_skew {
	uint32_t u;
	struct ody_pciercx_lane_skew_s {
		uint32_t ilst                        : 24;
		uint32_t fcd                         : 1;
		uint32_t ack_nak                     : 1;
		uint32_t ebm                         : 1;
		uint32_t inuml                       : 4;
		uint32_t dlld                        : 1;
	} s;
	/* struct ody_pciercx_lane_skew_s cn; */
};
typedef union ody_pciercx_lane_skew ody_pciercx_lane_skew_t;

static inline uint64_t ODY_PCIERCX_LANE_SKEW(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_LANE_SKEW(uint64_t a)
{
	if (a <= 15)
		return 0x714;
	__ody_csr_fatal("PCIERCX_LANE_SKEW", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_LANE_SKEW(a) ody_pciercx_lane_skew_t
#define bustype_ODY_PCIERCX_LANE_SKEW(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_LANE_SKEW(a) "PCIERCX_LANE_SKEW"
#define busnum_ODY_PCIERCX_LANE_SKEW(a) (a)
#define arguments_ODY_PCIERCX_LANE_SKEW(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_link_cap
 *
 * PCIe RC Link Capabilities Register
 */
union ody_pciercx_link_cap {
	uint32_t u;
	struct ody_pciercx_link_cap_s {
		uint32_t mls                         : 4;
		uint32_t mlw                         : 6;
		uint32_t aslpms                      : 2;
		uint32_t l0el                        : 3;
		uint32_t l1el                        : 3;
		uint32_t cpm                         : 1;
		uint32_t sderc                       : 1;
		uint32_t dllarc                      : 1;
		uint32_t lbnc                        : 1;
		uint32_t aspm                        : 1;
		uint32_t reserved_23                 : 1;
		uint32_t pnum                        : 8;
	} s;
	/* struct ody_pciercx_link_cap_s cn; */
};
typedef union ody_pciercx_link_cap ody_pciercx_link_cap_t;

static inline uint64_t ODY_PCIERCX_LINK_CAP(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_LINK_CAP(uint64_t a)
{
	if (a <= 15)
		return 0x7c;
	__ody_csr_fatal("PCIERCX_LINK_CAP", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_LINK_CAP(a) ody_pciercx_link_cap_t
#define bustype_ODY_PCIERCX_LINK_CAP(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_LINK_CAP(a) "PCIERCX_LINK_CAP"
#define busnum_ODY_PCIERCX_LINK_CAP(a) (a)
#define arguments_ODY_PCIERCX_LINK_CAP(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_link_cap2
 *
 * PCIe RC Link Capabilities 2 Register
 */
union ody_pciercx_link_cap2 {
	uint32_t u;
	struct ody_pciercx_link_cap2_s {
		uint32_t reserved_0                  : 1;
		uint32_t slsv                        : 7;
		uint32_t cls                         : 1;
		uint32_t reserved_9_22               : 14;
		uint32_t rtds                        : 1;
		uint32_t trtds                       : 1;
		uint32_t reserved_25_31              : 7;
	} s;
	/* struct ody_pciercx_link_cap2_s cn; */
};
typedef union ody_pciercx_link_cap2 ody_pciercx_link_cap2_t;

static inline uint64_t ODY_PCIERCX_LINK_CAP2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_LINK_CAP2(uint64_t a)
{
	if (a <= 15)
		return 0x9c;
	__ody_csr_fatal("PCIERCX_LINK_CAP2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_LINK_CAP2(a) ody_pciercx_link_cap2_t
#define bustype_ODY_PCIERCX_LINK_CAP2(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_LINK_CAP2(a) "PCIERCX_LINK_CAP2"
#define busnum_ODY_PCIERCX_LINK_CAP2(a) (a)
#define arguments_ODY_PCIERCX_LINK_CAP2(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_link_ctl
 *
 * PCIe RC Link Control/Link Status Register
 */
union ody_pciercx_link_ctl {
	uint32_t u;
	struct ody_pciercx_link_ctl_s {
		uint32_t aslpc                       : 2;
		uint32_t reserved_2                  : 1;
		uint32_t rcb                         : 1;
		uint32_t ld                          : 1;
		uint32_t rl                          : 1;
		uint32_t ccc                         : 1;
		uint32_t es                          : 1;
		uint32_t ecpm                        : 1;
		uint32_t hawd                        : 1;
		uint32_t lbm_int_enb                 : 1;
		uint32_t lab_int_enb                 : 1;
		uint32_t reserved_12_13              : 2;
		uint32_t drs_ctl                     : 2;
		uint32_t ls                          : 4;
		uint32_t nlw                         : 6;
		uint32_t reserved_26                 : 1;
		uint32_t lt                          : 1;
		uint32_t scc                         : 1;
		uint32_t dlla                        : 1;
		uint32_t lbm                         : 1;
		uint32_t lab                         : 1;
	} s;
	/* struct ody_pciercx_link_ctl_s cn; */
};
typedef union ody_pciercx_link_ctl ody_pciercx_link_ctl_t;

static inline uint64_t ODY_PCIERCX_LINK_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_LINK_CTL(uint64_t a)
{
	if (a <= 15)
		return 0x80;
	__ody_csr_fatal("PCIERCX_LINK_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_LINK_CTL(a) ody_pciercx_link_ctl_t
#define bustype_ODY_PCIERCX_LINK_CTL(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_LINK_CTL(a) "PCIERCX_LINK_CTL"
#define busnum_ODY_PCIERCX_LINK_CTL(a) (a)
#define arguments_ODY_PCIERCX_LINK_CTL(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_link_ctl2
 *
 * PCIe RC Link Control 2 Register/Link Status 2 Register
 */
union ody_pciercx_link_ctl2 {
	uint32_t u;
	struct ody_pciercx_link_ctl2_s {
		uint32_t tls                         : 4;
		uint32_t ec                          : 1;
		uint32_t hasd                        : 1;
		uint32_t sde                         : 1;
		uint32_t tm                          : 3;
		uint32_t emc                         : 1;
		uint32_t csos                        : 1;
		uint32_t cde                         : 4;
		uint32_t cdl                         : 1;
		uint32_t eqc                         : 1;
		uint32_t ep1s                        : 1;
		uint32_t ep2s                        : 1;
		uint32_t ep3s                        : 1;
		uint32_t ler                         : 1;
		uint32_t rtd                         : 1;
		uint32_t trtd                        : 1;
		uint32_t crossl                      : 2;
		uint32_t reserved_26_27              : 2;
		uint32_t dcp                         : 3;
		uint32_t drs_mr                      : 1;
	} s;
	/* struct ody_pciercx_link_ctl2_s cn; */
};
typedef union ody_pciercx_link_ctl2 ody_pciercx_link_ctl2_t;

static inline uint64_t ODY_PCIERCX_LINK_CTL2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_LINK_CTL2(uint64_t a)
{
	if (a <= 15)
		return 0xa0;
	__ody_csr_fatal("PCIERCX_LINK_CTL2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_LINK_CTL2(a) ody_pciercx_link_ctl2_t
#define bustype_ODY_PCIERCX_LINK_CTL2(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_LINK_CTL2(a) "PCIERCX_LINK_CTL2"
#define busnum_ODY_PCIERCX_LINK_CTL2(a) (a)
#define arguments_ODY_PCIERCX_LINK_CTL2(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_link_ctl3
 *
 * PCIe RC Link Control 3 Register
 */
union ody_pciercx_link_ctl3 {
	uint32_t u;
	struct ody_pciercx_link_ctl3_s {
		uint32_t pe                          : 1;
		uint32_t ler                         : 1;
		uint32_t reserved_2_31               : 30;
	} s;
	/* struct ody_pciercx_link_ctl3_s cn; */
};
typedef union ody_pciercx_link_ctl3 ody_pciercx_link_ctl3_t;

static inline uint64_t ODY_PCIERCX_LINK_CTL3(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_LINK_CTL3(uint64_t a)
{
	if (a <= 15)
		return 0x16c;
	__ody_csr_fatal("PCIERCX_LINK_CTL3", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_LINK_CTL3(a) ody_pciercx_link_ctl3_t
#define bustype_ODY_PCIERCX_LINK_CTL3(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_LINK_CTL3(a) "PCIERCX_LINK_CTL3"
#define busnum_ODY_PCIERCX_LINK_CTL3(a) (a)
#define arguments_ODY_PCIERCX_LINK_CTL3(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_margin_ext_cap_hdr
 *
 * PCIe RC Margining Extended Capability Header Register
 */
union ody_pciercx_margin_ext_cap_hdr {
	uint32_t u;
	struct ody_pciercx_margin_ext_cap_hdr_s {
		uint32_t pcieec                      : 16;
		uint32_t cv                          : 4;
		uint32_t nco                         : 12;
	} s;
	/* struct ody_pciercx_margin_ext_cap_hdr_s cn; */
};
typedef union ody_pciercx_margin_ext_cap_hdr ody_pciercx_margin_ext_cap_hdr_t;

static inline uint64_t ODY_PCIERCX_MARGIN_EXT_CAP_HDR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_MARGIN_EXT_CAP_HDR(uint64_t a)
{
	if (a <= 15)
		return 0x1c8;
	__ody_csr_fatal("PCIERCX_MARGIN_EXT_CAP_HDR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_MARGIN_EXT_CAP_HDR(a) ody_pciercx_margin_ext_cap_hdr_t
#define bustype_ODY_PCIERCX_MARGIN_EXT_CAP_HDR(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_MARGIN_EXT_CAP_HDR(a) "PCIERCX_MARGIN_EXT_CAP_HDR"
#define busnum_ODY_PCIERCX_MARGIN_EXT_CAP_HDR(a) (a)
#define arguments_ODY_PCIERCX_MARGIN_EXT_CAP_HDR(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_mem
 *
 * PCIe RC Memory Base and Memory Limit Register
 */
union ody_pciercx_mem {
	uint32_t u;
	struct ody_pciercx_mem_s {
		uint32_t reserved_0_3                : 4;
		uint32_t mb_addr                     : 12;
		uint32_t reserved_16_19              : 4;
		uint32_t ml_addr                     : 12;
	} s;
	/* struct ody_pciercx_mem_s cn; */
};
typedef union ody_pciercx_mem ody_pciercx_mem_t;

static inline uint64_t ODY_PCIERCX_MEM(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_MEM(uint64_t a)
{
	if (a <= 15)
		return 0x20;
	__ody_csr_fatal("PCIERCX_MEM", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_MEM(a) ody_pciercx_mem_t
#define bustype_ODY_PCIERCX_MEM(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_MEM(a) "PCIERCX_MEM"
#define busnum_ODY_PCIERCX_MEM(a) (a)
#define arguments_ODY_PCIERCX_MEM(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_misc_ctl1
 *
 * PCIe RC Miscellaneous Control 1 Register
 */
union ody_pciercx_misc_ctl1 {
	uint32_t u;
	struct ody_pciercx_misc_ctl1_s {
		uint32_t dbi_ro_wr_en                : 1;
		uint32_t def_target                  : 1;
		uint32_t ur_c4_mask_4_trgt1          : 1;
		uint32_t simp_replay_timer           : 1;
		uint32_t dis_auto_ltr_clr            : 1;
		uint32_t ari_devn                    : 1;
		uint32_t cplq_mng_en                 : 1;
		uint32_t cfg_tlp_byp_en              : 1;
		uint32_t cfg_limit                   : 10;
		uint32_t trgt_above_cfg_limit        : 2;
		uint32_t p2p_track_cpl               : 1;
		uint32_t p2p_err_rpt                 : 1;
		uint32_t port_logic_wr_dis           : 1;
		uint32_t ras_reg_pf0_only            : 1;
		uint32_t rasdes_reg_pf0_only         : 1;
		uint32_t err_inj_wr_dis              : 1;
		uint32_t reserved_26_31              : 6;
	} s;
	/* struct ody_pciercx_misc_ctl1_s cn; */
};
typedef union ody_pciercx_misc_ctl1 ody_pciercx_misc_ctl1_t;

static inline uint64_t ODY_PCIERCX_MISC_CTL1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_MISC_CTL1(uint64_t a)
{
	if (a <= 15)
		return 0x8bc;
	__ody_csr_fatal("PCIERCX_MISC_CTL1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_MISC_CTL1(a) ody_pciercx_misc_ctl1_t
#define bustype_ODY_PCIERCX_MISC_CTL1(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_MISC_CTL1(a) "PCIERCX_MISC_CTL1"
#define busnum_ODY_PCIERCX_MISC_CTL1(a) (a)
#define arguments_ODY_PCIERCX_MISC_CTL1(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_mrg_lane_ctl_stat0
 *
 * PCIe RC Margining Lane Control and Status Register 0
 */
union ody_pciercx_mrg_lane_ctl_stat0 {
	uint32_t u;
	struct ody_pciercx_mrg_lane_ctl_stat0_s {
		uint32_t rnum                        : 3;
		uint32_t mt                          : 3;
		uint32_t um                          : 1;
		uint32_t reserved_7                  : 1;
		uint32_t mpl                         : 8;
		uint32_t rnum_stat                   : 3;
		uint32_t mt_stat                     : 3;
		uint32_t um_stat                     : 1;
		uint32_t reserved_23                 : 1;
		uint32_t pl_stat                     : 8;
	} s;
	/* struct ody_pciercx_mrg_lane_ctl_stat0_s cn; */
};
typedef union ody_pciercx_mrg_lane_ctl_stat0 ody_pciercx_mrg_lane_ctl_stat0_t;

static inline uint64_t ODY_PCIERCX_MRG_LANE_CTL_STAT0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_MRG_LANE_CTL_STAT0(uint64_t a)
{
	if (a <= 15)
		return 0x1d0;
	__ody_csr_fatal("PCIERCX_MRG_LANE_CTL_STAT0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_MRG_LANE_CTL_STAT0(a) ody_pciercx_mrg_lane_ctl_stat0_t
#define bustype_ODY_PCIERCX_MRG_LANE_CTL_STAT0(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_MRG_LANE_CTL_STAT0(a) "PCIERCX_MRG_LANE_CTL_STAT0"
#define busnum_ODY_PCIERCX_MRG_LANE_CTL_STAT0(a) (a)
#define arguments_ODY_PCIERCX_MRG_LANE_CTL_STAT0(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_mrg_lane_ctl_stat1
 *
 * PCIe RC Margining Lane Control and Status Register 1
 */
union ody_pciercx_mrg_lane_ctl_stat1 {
	uint32_t u;
	struct ody_pciercx_mrg_lane_ctl_stat1_s {
		uint32_t rnum                        : 3;
		uint32_t mt                          : 3;
		uint32_t um                          : 1;
		uint32_t reserved_7                  : 1;
		uint32_t mpl                         : 8;
		uint32_t rnum_stat                   : 3;
		uint32_t mt_stat                     : 3;
		uint32_t um_stat                     : 1;
		uint32_t reserved_23                 : 1;
		uint32_t pl_stat                     : 8;
	} s;
	/* struct ody_pciercx_mrg_lane_ctl_stat1_s cn; */
};
typedef union ody_pciercx_mrg_lane_ctl_stat1 ody_pciercx_mrg_lane_ctl_stat1_t;

static inline uint64_t ODY_PCIERCX_MRG_LANE_CTL_STAT1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_MRG_LANE_CTL_STAT1(uint64_t a)
{
	if (a <= 15)
		return 0x1d4;
	__ody_csr_fatal("PCIERCX_MRG_LANE_CTL_STAT1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_MRG_LANE_CTL_STAT1(a) ody_pciercx_mrg_lane_ctl_stat1_t
#define bustype_ODY_PCIERCX_MRG_LANE_CTL_STAT1(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_MRG_LANE_CTL_STAT1(a) "PCIERCX_MRG_LANE_CTL_STAT1"
#define busnum_ODY_PCIERCX_MRG_LANE_CTL_STAT1(a) (a)
#define arguments_ODY_PCIERCX_MRG_LANE_CTL_STAT1(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_mrg_lane_ctl_stat10
 *
 * PCIe RC Margining Lane Control and Status Register 10
 */
union ody_pciercx_mrg_lane_ctl_stat10 {
	uint32_t u;
	struct ody_pciercx_mrg_lane_ctl_stat10_s {
		uint32_t rnum                        : 3;
		uint32_t mt                          : 3;
		uint32_t um                          : 1;
		uint32_t reserved_7                  : 1;
		uint32_t mpl                         : 8;
		uint32_t rnum_stat                   : 3;
		uint32_t mt_stat                     : 3;
		uint32_t um_stat                     : 1;
		uint32_t reserved_23                 : 1;
		uint32_t pl_stat                     : 8;
	} s;
	/* struct ody_pciercx_mrg_lane_ctl_stat10_s cn; */
};
typedef union ody_pciercx_mrg_lane_ctl_stat10 ody_pciercx_mrg_lane_ctl_stat10_t;

static inline uint64_t ODY_PCIERCX_MRG_LANE_CTL_STAT10(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_MRG_LANE_CTL_STAT10(uint64_t a)
{
	if (a <= 15)
		return 0x1f8;
	__ody_csr_fatal("PCIERCX_MRG_LANE_CTL_STAT10", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_MRG_LANE_CTL_STAT10(a) ody_pciercx_mrg_lane_ctl_stat10_t
#define bustype_ODY_PCIERCX_MRG_LANE_CTL_STAT10(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_MRG_LANE_CTL_STAT10(a) "PCIERCX_MRG_LANE_CTL_STAT10"
#define busnum_ODY_PCIERCX_MRG_LANE_CTL_STAT10(a) (a)
#define arguments_ODY_PCIERCX_MRG_LANE_CTL_STAT10(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_mrg_lane_ctl_stat11
 *
 * PCIe RC Margining Lane Control and Status Register 11
 */
union ody_pciercx_mrg_lane_ctl_stat11 {
	uint32_t u;
	struct ody_pciercx_mrg_lane_ctl_stat11_s {
		uint32_t rnum                        : 3;
		uint32_t mt                          : 3;
		uint32_t um                          : 1;
		uint32_t reserved_7                  : 1;
		uint32_t mpl                         : 8;
		uint32_t rnum_stat                   : 3;
		uint32_t mt_stat                     : 3;
		uint32_t um_stat                     : 1;
		uint32_t reserved_23                 : 1;
		uint32_t pl_stat                     : 8;
	} s;
	/* struct ody_pciercx_mrg_lane_ctl_stat11_s cn; */
};
typedef union ody_pciercx_mrg_lane_ctl_stat11 ody_pciercx_mrg_lane_ctl_stat11_t;

static inline uint64_t ODY_PCIERCX_MRG_LANE_CTL_STAT11(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_MRG_LANE_CTL_STAT11(uint64_t a)
{
	if (a <= 15)
		return 0x1fc;
	__ody_csr_fatal("PCIERCX_MRG_LANE_CTL_STAT11", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_MRG_LANE_CTL_STAT11(a) ody_pciercx_mrg_lane_ctl_stat11_t
#define bustype_ODY_PCIERCX_MRG_LANE_CTL_STAT11(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_MRG_LANE_CTL_STAT11(a) "PCIERCX_MRG_LANE_CTL_STAT11"
#define busnum_ODY_PCIERCX_MRG_LANE_CTL_STAT11(a) (a)
#define arguments_ODY_PCIERCX_MRG_LANE_CTL_STAT11(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_mrg_lane_ctl_stat12
 *
 * PCIe RC Margining Lane Control and Status Register 12
 */
union ody_pciercx_mrg_lane_ctl_stat12 {
	uint32_t u;
	struct ody_pciercx_mrg_lane_ctl_stat12_s {
		uint32_t rnum                        : 3;
		uint32_t mt                          : 3;
		uint32_t um                          : 1;
		uint32_t reserved_7                  : 1;
		uint32_t mpl                         : 8;
		uint32_t rnum_stat                   : 3;
		uint32_t mt_stat                     : 3;
		uint32_t um_stat                     : 1;
		uint32_t reserved_23                 : 1;
		uint32_t pl_stat                     : 8;
	} s;
	/* struct ody_pciercx_mrg_lane_ctl_stat12_s cn; */
};
typedef union ody_pciercx_mrg_lane_ctl_stat12 ody_pciercx_mrg_lane_ctl_stat12_t;

static inline uint64_t ODY_PCIERCX_MRG_LANE_CTL_STAT12(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_MRG_LANE_CTL_STAT12(uint64_t a)
{
	if (a <= 15)
		return 0x200;
	__ody_csr_fatal("PCIERCX_MRG_LANE_CTL_STAT12", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_MRG_LANE_CTL_STAT12(a) ody_pciercx_mrg_lane_ctl_stat12_t
#define bustype_ODY_PCIERCX_MRG_LANE_CTL_STAT12(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_MRG_LANE_CTL_STAT12(a) "PCIERCX_MRG_LANE_CTL_STAT12"
#define busnum_ODY_PCIERCX_MRG_LANE_CTL_STAT12(a) (a)
#define arguments_ODY_PCIERCX_MRG_LANE_CTL_STAT12(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_mrg_lane_ctl_stat13
 *
 * PCIe RC Margining Lane Control and Status Register 13
 */
union ody_pciercx_mrg_lane_ctl_stat13 {
	uint32_t u;
	struct ody_pciercx_mrg_lane_ctl_stat13_s {
		uint32_t rnum                        : 3;
		uint32_t mt                          : 3;
		uint32_t um                          : 1;
		uint32_t reserved_7                  : 1;
		uint32_t mpl                         : 8;
		uint32_t rnum_stat                   : 3;
		uint32_t mt_stat                     : 3;
		uint32_t um_stat                     : 1;
		uint32_t reserved_23                 : 1;
		uint32_t pl_stat                     : 8;
	} s;
	/* struct ody_pciercx_mrg_lane_ctl_stat13_s cn; */
};
typedef union ody_pciercx_mrg_lane_ctl_stat13 ody_pciercx_mrg_lane_ctl_stat13_t;

static inline uint64_t ODY_PCIERCX_MRG_LANE_CTL_STAT13(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_MRG_LANE_CTL_STAT13(uint64_t a)
{
	if (a <= 15)
		return 0x204;
	__ody_csr_fatal("PCIERCX_MRG_LANE_CTL_STAT13", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_MRG_LANE_CTL_STAT13(a) ody_pciercx_mrg_lane_ctl_stat13_t
#define bustype_ODY_PCIERCX_MRG_LANE_CTL_STAT13(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_MRG_LANE_CTL_STAT13(a) "PCIERCX_MRG_LANE_CTL_STAT13"
#define busnum_ODY_PCIERCX_MRG_LANE_CTL_STAT13(a) (a)
#define arguments_ODY_PCIERCX_MRG_LANE_CTL_STAT13(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_mrg_lane_ctl_stat14
 *
 * PCIe RC Margining Lane Control and Status Register 14
 */
union ody_pciercx_mrg_lane_ctl_stat14 {
	uint32_t u;
	struct ody_pciercx_mrg_lane_ctl_stat14_s {
		uint32_t rnum                        : 3;
		uint32_t mt                          : 3;
		uint32_t um                          : 1;
		uint32_t reserved_7                  : 1;
		uint32_t mpl                         : 8;
		uint32_t rnum_stat                   : 3;
		uint32_t mt_stat                     : 3;
		uint32_t um_stat                     : 1;
		uint32_t reserved_23                 : 1;
		uint32_t pl_stat                     : 8;
	} s;
	/* struct ody_pciercx_mrg_lane_ctl_stat14_s cn; */
};
typedef union ody_pciercx_mrg_lane_ctl_stat14 ody_pciercx_mrg_lane_ctl_stat14_t;

static inline uint64_t ODY_PCIERCX_MRG_LANE_CTL_STAT14(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_MRG_LANE_CTL_STAT14(uint64_t a)
{
	if (a <= 15)
		return 0x208;
	__ody_csr_fatal("PCIERCX_MRG_LANE_CTL_STAT14", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_MRG_LANE_CTL_STAT14(a) ody_pciercx_mrg_lane_ctl_stat14_t
#define bustype_ODY_PCIERCX_MRG_LANE_CTL_STAT14(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_MRG_LANE_CTL_STAT14(a) "PCIERCX_MRG_LANE_CTL_STAT14"
#define busnum_ODY_PCIERCX_MRG_LANE_CTL_STAT14(a) (a)
#define arguments_ODY_PCIERCX_MRG_LANE_CTL_STAT14(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_mrg_lane_ctl_stat15
 *
 * PCIe RC Margining Lane Control and Status Register 15
 */
union ody_pciercx_mrg_lane_ctl_stat15 {
	uint32_t u;
	struct ody_pciercx_mrg_lane_ctl_stat15_s {
		uint32_t rnum                        : 3;
		uint32_t mt                          : 3;
		uint32_t um                          : 1;
		uint32_t reserved_7                  : 1;
		uint32_t mpl                         : 8;
		uint32_t rnum_stat                   : 3;
		uint32_t mt_stat                     : 3;
		uint32_t um_stat                     : 1;
		uint32_t reserved_23                 : 1;
		uint32_t pl_stat                     : 8;
	} s;
	/* struct ody_pciercx_mrg_lane_ctl_stat15_s cn; */
};
typedef union ody_pciercx_mrg_lane_ctl_stat15 ody_pciercx_mrg_lane_ctl_stat15_t;

static inline uint64_t ODY_PCIERCX_MRG_LANE_CTL_STAT15(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_MRG_LANE_CTL_STAT15(uint64_t a)
{
	if (a <= 15)
		return 0x20c;
	__ody_csr_fatal("PCIERCX_MRG_LANE_CTL_STAT15", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_MRG_LANE_CTL_STAT15(a) ody_pciercx_mrg_lane_ctl_stat15_t
#define bustype_ODY_PCIERCX_MRG_LANE_CTL_STAT15(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_MRG_LANE_CTL_STAT15(a) "PCIERCX_MRG_LANE_CTL_STAT15"
#define busnum_ODY_PCIERCX_MRG_LANE_CTL_STAT15(a) (a)
#define arguments_ODY_PCIERCX_MRG_LANE_CTL_STAT15(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_mrg_lane_ctl_stat2
 *
 * PCIe RC Margining Lane Control and Status Register 2
 */
union ody_pciercx_mrg_lane_ctl_stat2 {
	uint32_t u;
	struct ody_pciercx_mrg_lane_ctl_stat2_s {
		uint32_t rnum                        : 3;
		uint32_t mt                          : 3;
		uint32_t um                          : 1;
		uint32_t reserved_7                  : 1;
		uint32_t mpl                         : 8;
		uint32_t rnum_stat                   : 3;
		uint32_t mt_stat                     : 3;
		uint32_t um_stat                     : 1;
		uint32_t reserved_23                 : 1;
		uint32_t pl_stat                     : 8;
	} s;
	/* struct ody_pciercx_mrg_lane_ctl_stat2_s cn; */
};
typedef union ody_pciercx_mrg_lane_ctl_stat2 ody_pciercx_mrg_lane_ctl_stat2_t;

static inline uint64_t ODY_PCIERCX_MRG_LANE_CTL_STAT2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_MRG_LANE_CTL_STAT2(uint64_t a)
{
	if (a <= 15)
		return 0x1d8;
	__ody_csr_fatal("PCIERCX_MRG_LANE_CTL_STAT2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_MRG_LANE_CTL_STAT2(a) ody_pciercx_mrg_lane_ctl_stat2_t
#define bustype_ODY_PCIERCX_MRG_LANE_CTL_STAT2(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_MRG_LANE_CTL_STAT2(a) "PCIERCX_MRG_LANE_CTL_STAT2"
#define busnum_ODY_PCIERCX_MRG_LANE_CTL_STAT2(a) (a)
#define arguments_ODY_PCIERCX_MRG_LANE_CTL_STAT2(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_mrg_lane_ctl_stat3
 *
 * PCIe RC Margining Lane Control and Status Register 3
 */
union ody_pciercx_mrg_lane_ctl_stat3 {
	uint32_t u;
	struct ody_pciercx_mrg_lane_ctl_stat3_s {
		uint32_t rnum                        : 3;
		uint32_t mt                          : 3;
		uint32_t um                          : 1;
		uint32_t reserved_7                  : 1;
		uint32_t mpl                         : 8;
		uint32_t rnum_stat                   : 3;
		uint32_t mt_stat                     : 3;
		uint32_t um_stat                     : 1;
		uint32_t reserved_23                 : 1;
		uint32_t pl_stat                     : 8;
	} s;
	/* struct ody_pciercx_mrg_lane_ctl_stat3_s cn; */
};
typedef union ody_pciercx_mrg_lane_ctl_stat3 ody_pciercx_mrg_lane_ctl_stat3_t;

static inline uint64_t ODY_PCIERCX_MRG_LANE_CTL_STAT3(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_MRG_LANE_CTL_STAT3(uint64_t a)
{
	if (a <= 15)
		return 0x1dc;
	__ody_csr_fatal("PCIERCX_MRG_LANE_CTL_STAT3", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_MRG_LANE_CTL_STAT3(a) ody_pciercx_mrg_lane_ctl_stat3_t
#define bustype_ODY_PCIERCX_MRG_LANE_CTL_STAT3(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_MRG_LANE_CTL_STAT3(a) "PCIERCX_MRG_LANE_CTL_STAT3"
#define busnum_ODY_PCIERCX_MRG_LANE_CTL_STAT3(a) (a)
#define arguments_ODY_PCIERCX_MRG_LANE_CTL_STAT3(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_mrg_lane_ctl_stat4
 *
 * PCIe RC Margining Lane Control and Status Register 4
 */
union ody_pciercx_mrg_lane_ctl_stat4 {
	uint32_t u;
	struct ody_pciercx_mrg_lane_ctl_stat4_s {
		uint32_t rnum                        : 3;
		uint32_t mt                          : 3;
		uint32_t um                          : 1;
		uint32_t reserved_7                  : 1;
		uint32_t mpl                         : 8;
		uint32_t rnum_stat                   : 3;
		uint32_t mt_stat                     : 3;
		uint32_t um_stat                     : 1;
		uint32_t reserved_23                 : 1;
		uint32_t pl_stat                     : 8;
	} s;
	/* struct ody_pciercx_mrg_lane_ctl_stat4_s cn; */
};
typedef union ody_pciercx_mrg_lane_ctl_stat4 ody_pciercx_mrg_lane_ctl_stat4_t;

static inline uint64_t ODY_PCIERCX_MRG_LANE_CTL_STAT4(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_MRG_LANE_CTL_STAT4(uint64_t a)
{
	if (a <= 15)
		return 0x1e0;
	__ody_csr_fatal("PCIERCX_MRG_LANE_CTL_STAT4", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_MRG_LANE_CTL_STAT4(a) ody_pciercx_mrg_lane_ctl_stat4_t
#define bustype_ODY_PCIERCX_MRG_LANE_CTL_STAT4(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_MRG_LANE_CTL_STAT4(a) "PCIERCX_MRG_LANE_CTL_STAT4"
#define busnum_ODY_PCIERCX_MRG_LANE_CTL_STAT4(a) (a)
#define arguments_ODY_PCIERCX_MRG_LANE_CTL_STAT4(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_mrg_lane_ctl_stat5
 *
 * PCIe RC Margining Lane Control and Status Register 5
 */
union ody_pciercx_mrg_lane_ctl_stat5 {
	uint32_t u;
	struct ody_pciercx_mrg_lane_ctl_stat5_s {
		uint32_t rnum                        : 3;
		uint32_t mt                          : 3;
		uint32_t um                          : 1;
		uint32_t reserved_7                  : 1;
		uint32_t mpl                         : 8;
		uint32_t rnum_stat                   : 3;
		uint32_t mt_stat                     : 3;
		uint32_t um_stat                     : 1;
		uint32_t reserved_23                 : 1;
		uint32_t pl_stat                     : 8;
	} s;
	/* struct ody_pciercx_mrg_lane_ctl_stat5_s cn; */
};
typedef union ody_pciercx_mrg_lane_ctl_stat5 ody_pciercx_mrg_lane_ctl_stat5_t;

static inline uint64_t ODY_PCIERCX_MRG_LANE_CTL_STAT5(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_MRG_LANE_CTL_STAT5(uint64_t a)
{
	if (a <= 15)
		return 0x1e4;
	__ody_csr_fatal("PCIERCX_MRG_LANE_CTL_STAT5", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_MRG_LANE_CTL_STAT5(a) ody_pciercx_mrg_lane_ctl_stat5_t
#define bustype_ODY_PCIERCX_MRG_LANE_CTL_STAT5(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_MRG_LANE_CTL_STAT5(a) "PCIERCX_MRG_LANE_CTL_STAT5"
#define busnum_ODY_PCIERCX_MRG_LANE_CTL_STAT5(a) (a)
#define arguments_ODY_PCIERCX_MRG_LANE_CTL_STAT5(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_mrg_lane_ctl_stat6
 *
 * PCIe RC Margining Lane Control and Status Register 6
 */
union ody_pciercx_mrg_lane_ctl_stat6 {
	uint32_t u;
	struct ody_pciercx_mrg_lane_ctl_stat6_s {
		uint32_t rnum                        : 3;
		uint32_t mt                          : 3;
		uint32_t um                          : 1;
		uint32_t reserved_7                  : 1;
		uint32_t mpl                         : 8;
		uint32_t rnum_stat                   : 3;
		uint32_t mt_stat                     : 3;
		uint32_t um_stat                     : 1;
		uint32_t reserved_23                 : 1;
		uint32_t pl_stat                     : 8;
	} s;
	/* struct ody_pciercx_mrg_lane_ctl_stat6_s cn; */
};
typedef union ody_pciercx_mrg_lane_ctl_stat6 ody_pciercx_mrg_lane_ctl_stat6_t;

static inline uint64_t ODY_PCIERCX_MRG_LANE_CTL_STAT6(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_MRG_LANE_CTL_STAT6(uint64_t a)
{
	if (a <= 15)
		return 0x1e8;
	__ody_csr_fatal("PCIERCX_MRG_LANE_CTL_STAT6", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_MRG_LANE_CTL_STAT6(a) ody_pciercx_mrg_lane_ctl_stat6_t
#define bustype_ODY_PCIERCX_MRG_LANE_CTL_STAT6(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_MRG_LANE_CTL_STAT6(a) "PCIERCX_MRG_LANE_CTL_STAT6"
#define busnum_ODY_PCIERCX_MRG_LANE_CTL_STAT6(a) (a)
#define arguments_ODY_PCIERCX_MRG_LANE_CTL_STAT6(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_mrg_lane_ctl_stat7
 *
 * PCIe RC Margining Lane Control and Status Register 7
 */
union ody_pciercx_mrg_lane_ctl_stat7 {
	uint32_t u;
	struct ody_pciercx_mrg_lane_ctl_stat7_s {
		uint32_t rnum                        : 3;
		uint32_t mt                          : 3;
		uint32_t um                          : 1;
		uint32_t reserved_7                  : 1;
		uint32_t mpl                         : 8;
		uint32_t rnum_stat                   : 3;
		uint32_t mt_stat                     : 3;
		uint32_t um_stat                     : 1;
		uint32_t reserved_23                 : 1;
		uint32_t pl_stat                     : 8;
	} s;
	/* struct ody_pciercx_mrg_lane_ctl_stat7_s cn; */
};
typedef union ody_pciercx_mrg_lane_ctl_stat7 ody_pciercx_mrg_lane_ctl_stat7_t;

static inline uint64_t ODY_PCIERCX_MRG_LANE_CTL_STAT7(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_MRG_LANE_CTL_STAT7(uint64_t a)
{
	if (a <= 15)
		return 0x1ec;
	__ody_csr_fatal("PCIERCX_MRG_LANE_CTL_STAT7", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_MRG_LANE_CTL_STAT7(a) ody_pciercx_mrg_lane_ctl_stat7_t
#define bustype_ODY_PCIERCX_MRG_LANE_CTL_STAT7(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_MRG_LANE_CTL_STAT7(a) "PCIERCX_MRG_LANE_CTL_STAT7"
#define busnum_ODY_PCIERCX_MRG_LANE_CTL_STAT7(a) (a)
#define arguments_ODY_PCIERCX_MRG_LANE_CTL_STAT7(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_mrg_lane_ctl_stat8
 *
 * PCIe RC Margining Lane Control and Status Register 8
 */
union ody_pciercx_mrg_lane_ctl_stat8 {
	uint32_t u;
	struct ody_pciercx_mrg_lane_ctl_stat8_s {
		uint32_t rnum                        : 3;
		uint32_t mt                          : 3;
		uint32_t um                          : 1;
		uint32_t reserved_7                  : 1;
		uint32_t mpl                         : 8;
		uint32_t rnum_stat                   : 3;
		uint32_t mt_stat                     : 3;
		uint32_t um_stat                     : 1;
		uint32_t reserved_23                 : 1;
		uint32_t pl_stat                     : 8;
	} s;
	/* struct ody_pciercx_mrg_lane_ctl_stat8_s cn; */
};
typedef union ody_pciercx_mrg_lane_ctl_stat8 ody_pciercx_mrg_lane_ctl_stat8_t;

static inline uint64_t ODY_PCIERCX_MRG_LANE_CTL_STAT8(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_MRG_LANE_CTL_STAT8(uint64_t a)
{
	if (a <= 15)
		return 0x1f0;
	__ody_csr_fatal("PCIERCX_MRG_LANE_CTL_STAT8", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_MRG_LANE_CTL_STAT8(a) ody_pciercx_mrg_lane_ctl_stat8_t
#define bustype_ODY_PCIERCX_MRG_LANE_CTL_STAT8(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_MRG_LANE_CTL_STAT8(a) "PCIERCX_MRG_LANE_CTL_STAT8"
#define busnum_ODY_PCIERCX_MRG_LANE_CTL_STAT8(a) (a)
#define arguments_ODY_PCIERCX_MRG_LANE_CTL_STAT8(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_mrg_lane_ctl_stat9
 *
 * PCIe RC Margining Lane Control and Status Register 9
 */
union ody_pciercx_mrg_lane_ctl_stat9 {
	uint32_t u;
	struct ody_pciercx_mrg_lane_ctl_stat9_s {
		uint32_t rnum                        : 3;
		uint32_t mt                          : 3;
		uint32_t um                          : 1;
		uint32_t reserved_7                  : 1;
		uint32_t mpl                         : 8;
		uint32_t rnum_stat                   : 3;
		uint32_t mt_stat                     : 3;
		uint32_t um_stat                     : 1;
		uint32_t reserved_23                 : 1;
		uint32_t pl_stat                     : 8;
	} s;
	/* struct ody_pciercx_mrg_lane_ctl_stat9_s cn; */
};
typedef union ody_pciercx_mrg_lane_ctl_stat9 ody_pciercx_mrg_lane_ctl_stat9_t;

static inline uint64_t ODY_PCIERCX_MRG_LANE_CTL_STAT9(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_MRG_LANE_CTL_STAT9(uint64_t a)
{
	if (a <= 15)
		return 0x1f4;
	__ody_csr_fatal("PCIERCX_MRG_LANE_CTL_STAT9", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_MRG_LANE_CTL_STAT9(a) ody_pciercx_mrg_lane_ctl_stat9_t
#define bustype_ODY_PCIERCX_MRG_LANE_CTL_STAT9(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_MRG_LANE_CTL_STAT9(a) "PCIERCX_MRG_LANE_CTL_STAT9"
#define busnum_ODY_PCIERCX_MRG_LANE_CTL_STAT9(a) (a)
#define arguments_ODY_PCIERCX_MRG_LANE_CTL_STAT9(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_mrg_port_cap_stat
 *
 * PCIe RC Margining Port Capabilities and Status Register
 */
union ody_pciercx_mrg_port_cap_stat {
	uint32_t u;
	struct ody_pciercx_mrg_port_cap_stat_s {
		uint32_t m_drv                       : 1;
		uint32_t reserved_1_15               : 15;
		uint32_t m_rdy                       : 1;
		uint32_t m_swrdy                     : 1;
		uint32_t reserved_18_31              : 14;
	} s;
	/* struct ody_pciercx_mrg_port_cap_stat_s cn; */
};
typedef union ody_pciercx_mrg_port_cap_stat ody_pciercx_mrg_port_cap_stat_t;

static inline uint64_t ODY_PCIERCX_MRG_PORT_CAP_STAT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_MRG_PORT_CAP_STAT(uint64_t a)
{
	if (a <= 15)
		return 0x1cc;
	__ody_csr_fatal("PCIERCX_MRG_PORT_CAP_STAT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_MRG_PORT_CAP_STAT(a) ody_pciercx_mrg_port_cap_stat_t
#define bustype_ODY_PCIERCX_MRG_PORT_CAP_STAT(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_MRG_PORT_CAP_STAT(a) "PCIERCX_MRG_PORT_CAP_STAT"
#define busnum_ODY_PCIERCX_MRG_PORT_CAP_STAT(a) (a)
#define arguments_ODY_PCIERCX_MRG_PORT_CAP_STAT(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_msix_cap_cntrl
 *
 * PCIe RC PCI Express MSI-X Capability ID/MSI-X Next Item Pointer/MSI-X Control Register
 */
union ody_pciercx_msix_cap_cntrl {
	uint32_t u;
	struct ody_pciercx_msix_cap_cntrl_s {
		uint32_t msixcid                     : 8;
		uint32_t ncp                         : 8;
		uint32_t msixts                      : 11;
		uint32_t reserved_27_29              : 3;
		uint32_t funm                        : 1;
		uint32_t msixen                      : 1;
	} s;
	/* struct ody_pciercx_msix_cap_cntrl_s cn; */
};
typedef union ody_pciercx_msix_cap_cntrl ody_pciercx_msix_cap_cntrl_t;

static inline uint64_t ODY_PCIERCX_MSIX_CAP_CNTRL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_MSIX_CAP_CNTRL(uint64_t a)
{
	if (a <= 15)
		return 0xb0;
	__ody_csr_fatal("PCIERCX_MSIX_CAP_CNTRL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_MSIX_CAP_CNTRL(a) ody_pciercx_msix_cap_cntrl_t
#define bustype_ODY_PCIERCX_MSIX_CAP_CNTRL(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_MSIX_CAP_CNTRL(a) "PCIERCX_MSIX_CAP_CNTRL"
#define busnum_ODY_PCIERCX_MSIX_CAP_CNTRL(a) (a)
#define arguments_ODY_PCIERCX_MSIX_CAP_CNTRL(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_msix_pba
 *
 * PCIe RC PCI Express MSI-X PBA Offset and BIR Register
 */
union ody_pciercx_msix_pba {
	uint32_t u;
	struct ody_pciercx_msix_pba_s {
		uint32_t msixpbir                    : 3;
		uint32_t msixpoffs                   : 29;
	} s;
	/* struct ody_pciercx_msix_pba_s cn; */
};
typedef union ody_pciercx_msix_pba ody_pciercx_msix_pba_t;

static inline uint64_t ODY_PCIERCX_MSIX_PBA(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_MSIX_PBA(uint64_t a)
{
	if (a <= 15)
		return 0xb8;
	__ody_csr_fatal("PCIERCX_MSIX_PBA", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_MSIX_PBA(a) ody_pciercx_msix_pba_t
#define bustype_ODY_PCIERCX_MSIX_PBA(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_MSIX_PBA(a) "PCIERCX_MSIX_PBA"
#define busnum_ODY_PCIERCX_MSIX_PBA(a) (a)
#define arguments_ODY_PCIERCX_MSIX_PBA(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_msix_table
 *
 * PCIe RC PCI Express MSI-X Table Offset and BIR Register
 */
union ody_pciercx_msix_table {
	uint32_t u;
	struct ody_pciercx_msix_table_s {
		uint32_t msixtbir                    : 3;
		uint32_t msixtoffs                   : 29;
	} s;
	/* struct ody_pciercx_msix_table_s cn; */
};
typedef union ody_pciercx_msix_table ody_pciercx_msix_table_t;

static inline uint64_t ODY_PCIERCX_MSIX_TABLE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_MSIX_TABLE(uint64_t a)
{
	if (a <= 15)
		return 0xb4;
	__ody_csr_fatal("PCIERCX_MSIX_TABLE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_MSIX_TABLE(a) ody_pciercx_msix_table_t
#define bustype_ODY_PCIERCX_MSIX_TABLE(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_MSIX_TABLE(a) "PCIERCX_MSIX_TABLE"
#define busnum_ODY_PCIERCX_MSIX_TABLE(a) (a)
#define arguments_ODY_PCIERCX_MSIX_TABLE(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_np_rcv_credit
 *
 * PCIe RC VC0 Nonposted Receive Queue Control Register
 */
union ody_pciercx_np_rcv_credit {
	uint32_t u;
	struct ody_pciercx_np_rcv_credit_s {
		uint32_t data_credits                : 12;
		uint32_t header_credits              : 8;
		uint32_t reserved_20                 : 1;
		uint32_t queue_mode                  : 3;
		uint32_t hdr_sc                      : 2;
		uint32_t data_sc                     : 2;
		uint32_t reserved_28_31              : 4;
	} s;
	/* struct ody_pciercx_np_rcv_credit_s cn; */
};
typedef union ody_pciercx_np_rcv_credit ody_pciercx_np_rcv_credit_t;

static inline uint64_t ODY_PCIERCX_NP_RCV_CREDIT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_NP_RCV_CREDIT(uint64_t a)
{
	if (a <= 15)
		return 0x74c;
	__ody_csr_fatal("PCIERCX_NP_RCV_CREDIT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_NP_RCV_CREDIT(a) ody_pciercx_np_rcv_credit_t
#define bustype_ODY_PCIERCX_NP_RCV_CREDIT(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_NP_RCV_CREDIT(a) "PCIERCX_NP_RCV_CREDIT"
#define busnum_ODY_PCIERCX_NP_RCV_CREDIT(a) (a)
#define arguments_ODY_PCIERCX_NP_RCV_CREDIT(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_np_xmit_credit
 *
 * PCIe RC Transmit Nonposted FC Credit Status Register
 */
union ody_pciercx_np_xmit_credit {
	uint32_t u;
	struct ody_pciercx_np_xmit_credit_s {
		uint32_t tcdfcc                      : 16;
		uint32_t tchfcc                      : 12;
		uint32_t reserved_28_31              : 4;
	} s;
	/* struct ody_pciercx_np_xmit_credit_s cn; */
};
typedef union ody_pciercx_np_xmit_credit ody_pciercx_np_xmit_credit_t;

static inline uint64_t ODY_PCIERCX_NP_XMIT_CREDIT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_NP_XMIT_CREDIT(uint64_t a)
{
	if (a <= 15)
		return 0x734;
	__ody_csr_fatal("PCIERCX_NP_XMIT_CREDIT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_NP_XMIT_CREDIT(a) ody_pciercx_np_xmit_credit_t
#define bustype_ODY_PCIERCX_NP_XMIT_CREDIT(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_NP_XMIT_CREDIT(a) "PCIERCX_NP_XMIT_CREDIT"
#define busnum_ODY_PCIERCX_NP_XMIT_CREDIT(a) (a)
#define arguments_ODY_PCIERCX_NP_XMIT_CREDIT(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_omsg_ptr
 *
 * PCIe RC Other Message Register
 */
union ody_pciercx_omsg_ptr {
	uint32_t u;
	struct ody_pciercx_omsg_ptr_s {
		uint32_t omr                         : 32;
	} s;
	/* struct ody_pciercx_omsg_ptr_s cn; */
};
typedef union ody_pciercx_omsg_ptr ody_pciercx_omsg_ptr_t;

static inline uint64_t ODY_PCIERCX_OMSG_PTR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_OMSG_PTR(uint64_t a)
{
	if (a <= 15)
		return 0x704;
	__ody_csr_fatal("PCIERCX_OMSG_PTR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_OMSG_PTR(a) ody_pciercx_omsg_ptr_t
#define bustype_ODY_PCIERCX_OMSG_PTR(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_OMSG_PTR(a) "PCIERCX_OMSG_PTR"
#define busnum_ODY_PCIERCX_OMSG_PTR(a) (a)
#define arguments_ODY_PCIERCX_OMSG_PTR(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_ord_rule_ctrl
 *
 * PCIe RC Order Rule Control Register
 */
union ody_pciercx_ord_rule_ctrl {
	uint32_t u;
	struct ody_pciercx_ord_rule_ctrl_s {
		uint32_t np_pass_p                   : 8;
		uint32_t cpl_pass_p                  : 8;
		uint32_t reserved_16_31              : 16;
	} s;
	/* struct ody_pciercx_ord_rule_ctrl_s cn; */
};
typedef union ody_pciercx_ord_rule_ctrl ody_pciercx_ord_rule_ctrl_t;

static inline uint64_t ODY_PCIERCX_ORD_RULE_CTRL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_ORD_RULE_CTRL(uint64_t a)
{
	if (a <= 15)
		return 0x8b4;
	__ody_csr_fatal("PCIERCX_ORD_RULE_CTRL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_ORD_RULE_CTRL(a) ody_pciercx_ord_rule_ctrl_t
#define bustype_ODY_PCIERCX_ORD_RULE_CTRL(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_ORD_RULE_CTRL(a) "PCIERCX_ORD_RULE_CTRL"
#define busnum_ODY_PCIERCX_ORD_RULE_CTRL(a) (a)
#define arguments_ODY_PCIERCX_ORD_RULE_CTRL(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_p_rcv_credit
 *
 * PCIe RC VC0 Posted Receive Queue Control Register
 */
union ody_pciercx_p_rcv_credit {
	uint32_t u;
	struct ody_pciercx_p_rcv_credit_s {
		uint32_t data_credits                : 12;
		uint32_t header_credits              : 8;
		uint32_t reserved_20                 : 1;
		uint32_t queue_mode                  : 3;
		uint32_t hdr_sc                      : 2;
		uint32_t data_sc                     : 2;
		uint32_t reserved_28_29              : 2;
		uint32_t type_ordering               : 1;
		uint32_t rx_queue_order              : 1;
	} s;
	/* struct ody_pciercx_p_rcv_credit_s cn; */
};
typedef union ody_pciercx_p_rcv_credit ody_pciercx_p_rcv_credit_t;

static inline uint64_t ODY_PCIERCX_P_RCV_CREDIT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_P_RCV_CREDIT(uint64_t a)
{
	if (a <= 15)
		return 0x748;
	__ody_csr_fatal("PCIERCX_P_RCV_CREDIT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_P_RCV_CREDIT(a) ody_pciercx_p_rcv_credit_t
#define bustype_ODY_PCIERCX_P_RCV_CREDIT(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_P_RCV_CREDIT(a) "PCIERCX_P_RCV_CREDIT"
#define busnum_ODY_PCIERCX_P_RCV_CREDIT(a) (a)
#define arguments_ODY_PCIERCX_P_RCV_CREDIT(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_p_xmit_credit
 *
 * PCIe RC Transmit Posted FC Credit Status Register
 */
union ody_pciercx_p_xmit_credit {
	uint32_t u;
	struct ody_pciercx_p_xmit_credit_s {
		uint32_t tpdfcc                      : 16;
		uint32_t tphfcc                      : 12;
		uint32_t reserved_28_31              : 4;
	} s;
	/* struct ody_pciercx_p_xmit_credit_s cn; */
};
typedef union ody_pciercx_p_xmit_credit ody_pciercx_p_xmit_credit_t;

static inline uint64_t ODY_PCIERCX_P_XMIT_CREDIT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_P_XMIT_CREDIT(uint64_t a)
{
	if (a <= 15)
		return 0x730;
	__ody_csr_fatal("PCIERCX_P_XMIT_CREDIT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_P_XMIT_CREDIT(a) ody_pciercx_p_xmit_credit_t
#define bustype_ODY_PCIERCX_P_XMIT_CREDIT(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_P_XMIT_CREDIT(a) "PCIERCX_P_XMIT_CREDIT"
#define busnum_ODY_PCIERCX_P_XMIT_CREDIT(a) (a)
#define arguments_ODY_PCIERCX_P_XMIT_CREDIT(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_pb_base
 *
 * PCIe RC Power Budgeting Extended Capability Header Register
 */
union ody_pciercx_pb_base {
	uint32_t u;
	struct ody_pciercx_pb_base_s {
		uint32_t pcieec                      : 16;
		uint32_t cv                          : 4;
		uint32_t nco                         : 12;
	} s;
	/* struct ody_pciercx_pb_base_s cn; */
};
typedef union ody_pciercx_pb_base ody_pciercx_pb_base_t;

static inline uint64_t ODY_PCIERCX_PB_BASE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_PB_BASE(uint64_t a)
{
	if (a <= 15)
		return 0x158;
	__ody_csr_fatal("PCIERCX_PB_BASE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_PB_BASE(a) ody_pciercx_pb_base_t
#define bustype_ODY_PCIERCX_PB_BASE(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_PB_BASE(a) "PCIERCX_PB_BASE"
#define busnum_ODY_PCIERCX_PB_BASE(a) (a)
#define arguments_ODY_PCIERCX_PB_BASE(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_pb_cap
 *
 * PCIe RC Power Budgeting Capability Register
 */
union ody_pciercx_pb_cap {
	uint32_t u;
	struct ody_pciercx_pb_cap_s {
		uint32_t sys_alloc                   : 1;
		uint32_t ext_pwr_budget_sup          : 1;
		uint32_t pwr_budget_det_sup          : 1;
		uint32_t pwr_lim_sup                 : 1;
		uint32_t pwr_loss_dis_sup            : 2;
		uint32_t pwr_loss_notif_sup          : 2;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_pciercx_pb_cap_s cn; */
};
typedef union ody_pciercx_pb_cap ody_pciercx_pb_cap_t;

static inline uint64_t ODY_PCIERCX_PB_CAP(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_PB_CAP(uint64_t a)
{
	if (a <= 15)
		return 0x164;
	__ody_csr_fatal("PCIERCX_PB_CAP", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_PB_CAP(a) ody_pciercx_pb_cap_t
#define bustype_ODY_PCIERCX_PB_CAP(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_PB_CAP(a) "PCIERCX_PB_CAP"
#define busnum_ODY_PCIERCX_PB_CAP(a) (a)
#define arguments_ODY_PCIERCX_PB_CAP(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_pb_data_reg
 *
 * PCIe RC Power Budgeting Data Register
 */
union ody_pciercx_pb_data_reg {
	uint32_t u;
	struct ody_pciercx_pb_data_reg_s {
		uint32_t pb_data_reg                 : 32;
	} s;
	/* struct ody_pciercx_pb_data_reg_s cn; */
};
typedef union ody_pciercx_pb_data_reg ody_pciercx_pb_data_reg_t;

static inline uint64_t ODY_PCIERCX_PB_DATA_REG(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_PB_DATA_REG(uint64_t a)
{
	if (a <= 15)
		return 0x160;
	__ody_csr_fatal("PCIERCX_PB_DATA_REG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_PB_DATA_REG(a) ody_pciercx_pb_data_reg_t
#define bustype_ODY_PCIERCX_PB_DATA_REG(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_PB_DATA_REG(a) "PCIERCX_PB_DATA_REG"
#define busnum_ODY_PCIERCX_PB_DATA_REG(a) (a)
#define arguments_ODY_PCIERCX_PB_DATA_REG(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_pb_data_sel
 *
 * PCIe RC Power Budgeting Data Select Register
 */
union ody_pciercx_pb_data_sel {
	uint32_t u;
	struct ody_pciercx_pb_data_sel_s {
		uint32_t pb_data_sel                 : 8;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_pciercx_pb_data_sel_s cn; */
};
typedef union ody_pciercx_pb_data_sel ody_pciercx_pb_data_sel_t;

static inline uint64_t ODY_PCIERCX_PB_DATA_SEL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_PB_DATA_SEL(uint64_t a)
{
	if (a <= 15)
		return 0x15c;
	__ody_csr_fatal("PCIERCX_PB_DATA_SEL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_PB_DATA_SEL(a) ody_pciercx_pb_data_sel_t
#define bustype_ODY_PCIERCX_PB_DATA_SEL(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_PB_DATA_SEL(a) "PCIERCX_PB_DATA_SEL"
#define busnum_ODY_PCIERCX_PB_DATA_SEL(a) (a)
#define arguments_ODY_PCIERCX_PB_DATA_SEL(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_phy_ctl
 *
 * PCIe RC PHY Control Register
 */
union ody_pciercx_phy_ctl {
	uint32_t u;
	struct ody_pciercx_phy_ctl_s {
		uint32_t phy_ctrl                    : 32;
	} s;
	/* struct ody_pciercx_phy_ctl_s cn; */
};
typedef union ody_pciercx_phy_ctl ody_pciercx_phy_ctl_t;

static inline uint64_t ODY_PCIERCX_PHY_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_PHY_CTL(uint64_t a)
{
	if (a <= 15)
		return 0x814;
	__ody_csr_fatal("PCIERCX_PHY_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_PHY_CTL(a) ody_pciercx_phy_ctl_t
#define bustype_ODY_PCIERCX_PHY_CTL(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_PHY_CTL(a) "PCIERCX_PHY_CTL"
#define busnum_ODY_PCIERCX_PHY_CTL(a) (a)
#define arguments_ODY_PCIERCX_PHY_CTL(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_phy_gen3_ctl
 *
 * PCIe RC Gen3 Control Register
 */
union ody_pciercx_phy_gen3_ctl {
	uint32_t u;
	struct ody_pciercx_phy_gen3_ctl_s {
		uint32_t grizdnc                     : 1;
		uint32_t no_seed_value_change        : 1;
		uint32_t reserved_2_7                : 6;
		uint32_t dsg3                        : 1;
		uint32_t ep2p3d                      : 1;
		uint32_t ecrd                        : 1;
		uint32_t erd                         : 1;
		uint32_t rxeq_ph01_en                : 1;
		uint32_t rxeq_rgrdless_rsts          : 1;
		uint32_t reserved_14_15              : 2;
		uint32_t ed                          : 1;
		uint32_t dtdd                        : 1;
		uint32_t dcbd                        : 1;
		uint32_t reserved_19_20              : 2;
		uint32_t aed                         : 1;
		uint32_t us8etd                      : 1;
		uint32_t eiedd                       : 1;
		uint32_t rss                         : 2;
		uint32_t reserved_26_31              : 6;
	} s;
	/* struct ody_pciercx_phy_gen3_ctl_s cn; */
};
typedef union ody_pciercx_phy_gen3_ctl ody_pciercx_phy_gen3_ctl_t;

static inline uint64_t ODY_PCIERCX_PHY_GEN3_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_PHY_GEN3_CTL(uint64_t a)
{
	if (a <= 15)
		return 0x890;
	__ody_csr_fatal("PCIERCX_PHY_GEN3_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_PHY_GEN3_CTL(a) ody_pciercx_phy_gen3_ctl_t
#define bustype_ODY_PCIERCX_PHY_GEN3_CTL(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_PHY_GEN3_CTL(a) "PCIERCX_PHY_GEN3_CTL"
#define busnum_ODY_PCIERCX_PHY_GEN3_CTL(a) (a)
#define arguments_ODY_PCIERCX_PHY_GEN3_CTL(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_phy_intop_ctl
 *
 * PCIe RC PHY Interoperability Control Register
 */
union ody_pciercx_phy_intop_ctl {
	uint32_t u;
	struct ody_pciercx_phy_intop_ctl_s {
		uint32_t rxstby_ctl                  : 7;
		uint32_t reserved_7_8                : 2;
		uint32_t l1_nowait_p1                : 1;
		uint32_t l1_clk_sel                  : 1;
		uint32_t p2nobeacon_en               : 1;
		uint32_t phy_rst_timer               : 18;
		uint32_t phy_perst_on_warm_r         : 1;
		uint32_t pipe_opt_pclkchg_hs         : 1;
	} s;
	/* struct ody_pciercx_phy_intop_ctl_s cn; */
};
typedef union ody_pciercx_phy_intop_ctl ody_pciercx_phy_intop_ctl_t;

static inline uint64_t ODY_PCIERCX_PHY_INTOP_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_PHY_INTOP_CTL(uint64_t a)
{
	if (a <= 15)
		return 0x8c4;
	__ody_csr_fatal("PCIERCX_PHY_INTOP_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_PHY_INTOP_CTL(a) ody_pciercx_phy_intop_ctl_t
#define bustype_ODY_PCIERCX_PHY_INTOP_CTL(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_PHY_INTOP_CTL(a) "PCIERCX_PHY_INTOP_CTL"
#define busnum_ODY_PCIERCX_PHY_INTOP_CTL(a) (a)
#define arguments_ODY_PCIERCX_PHY_INTOP_CTL(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_phy_status
 *
 * PCIe RC PHY Status Register
 */
union ody_pciercx_phy_status {
	uint32_t u;
	struct ody_pciercx_phy_status_s {
		uint32_t phy_stat                    : 32;
	} s;
	/* struct ody_pciercx_phy_status_s cn; */
};
typedef union ody_pciercx_phy_status ody_pciercx_phy_status_t;

static inline uint64_t ODY_PCIERCX_PHY_STATUS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_PHY_STATUS(uint64_t a)
{
	if (a <= 15)
		return 0x810;
	__ody_csr_fatal("PCIERCX_PHY_STATUS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_PHY_STATUS(a) ody_pciercx_phy_status_t
#define bustype_ODY_PCIERCX_PHY_STATUS(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_PHY_STATUS(a) "PCIERCX_PHY_STATUS"
#define busnum_ODY_PCIERCX_PHY_STATUS(a) (a)
#define arguments_ODY_PCIERCX_PHY_STATUS(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_pipe_rel
 *
 * PCIe RC Pipe Related Register
 */
union ody_pciercx_pipe_rel {
	uint32_t u;
	struct ody_pciercx_pipe_rel_s {
		uint32_t rx_msg_wbuf_depth           : 4;
		uint32_t tx_msg_wbuf_depth           : 4;
		uint32_t pipe_garbage_dm             : 1;
		uint32_t reserved_9_31               : 23;
	} s;
	/* struct ody_pciercx_pipe_rel_s cn; */
};
typedef union ody_pciercx_pipe_rel ody_pciercx_pipe_rel_t;

static inline uint64_t ODY_PCIERCX_PIPE_REL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_PIPE_REL(uint64_t a)
{
	if (a <= 15)
		return 0xb90;
	__ody_csr_fatal("PCIERCX_PIPE_REL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_PIPE_REL(a) ody_pciercx_pipe_rel_t
#define bustype_ODY_PCIERCX_PIPE_REL(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_PIPE_REL(a) "PCIERCX_PIPE_REL"
#define busnum_ODY_PCIERCX_PIPE_REL(a) (a)
#define arguments_ODY_PCIERCX_PIPE_REL(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_pl16g_cap
 *
 * PCIe RC 16.0 GT/s Capabilities Register
 */
union ody_pciercx_pl16g_cap {
	uint32_t u;
	struct ody_pciercx_pl16g_cap_s {
		uint32_t reserved_0_31               : 32;
	} s;
	/* struct ody_pciercx_pl16g_cap_s cn; */
};
typedef union ody_pciercx_pl16g_cap ody_pciercx_pl16g_cap_t;

static inline uint64_t ODY_PCIERCX_PL16G_CAP(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_PL16G_CAP(uint64_t a)
{
	if (a <= 15)
		return 0x19c;
	__ody_csr_fatal("PCIERCX_PL16G_CAP", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_PL16G_CAP(a) ody_pciercx_pl16g_cap_t
#define bustype_ODY_PCIERCX_PL16G_CAP(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_PL16G_CAP(a) "PCIERCX_PL16G_CAP"
#define busnum_ODY_PCIERCX_PL16G_CAP(a) (a)
#define arguments_ODY_PCIERCX_PL16G_CAP(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_pl16g_ctl
 *
 * PCIe RC 16.0 GT/s Control Register
 */
union ody_pciercx_pl16g_ctl {
	uint32_t u;
	struct ody_pciercx_pl16g_ctl_s {
		uint32_t reserved_0_31               : 32;
	} s;
	/* struct ody_pciercx_pl16g_ctl_s cn; */
};
typedef union ody_pciercx_pl16g_ctl ody_pciercx_pl16g_ctl_t;

static inline uint64_t ODY_PCIERCX_PL16G_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_PL16G_CTL(uint64_t a)
{
	if (a <= 15)
		return 0x1a0;
	__ody_csr_fatal("PCIERCX_PL16G_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_PL16G_CTL(a) ody_pciercx_pl16g_ctl_t
#define bustype_ODY_PCIERCX_PL16G_CTL(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_PL16G_CTL(a) "PCIERCX_PL16G_CTL"
#define busnum_ODY_PCIERCX_PL16G_CTL(a) (a)
#define arguments_ODY_PCIERCX_PL16G_CTL(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_pl16g_eq_ctl0123
 *
 * PCIe RC 16.0 GT/s Lane Equalization Control for Lane 0-3 Register
 * The Equalization Control register consists of control fields required for per-Lane
 * 16.0 GT/s equalization.
 *
 * Equalization as an RC:
 *   \<pre\>
 *   - On speed change from GEN1-\>GEN3, advertise the transmitter preset hint per lane
 *     to the EP device in the TS2s exchanged. This value comes from the per lane
 *     upstream port transmitter preset (L*UTP).
 *   - Upon exit from Recovery Speed, the RC will enter EQ PHASE1 and the RC's
 *     transmitter will use the per lane downstream port transmitter preset field (L*DTP).
 *   - While in EQ PHASE 1, the EP & RC device exchange NO presets. They do advertise
 *     their LF & FS which are needed for the fine tuning stages to follow.
 *   - For the RC, while in EQ PHASE 2, the EP device makes tuning requests of the RC.
 *     The RC adjusts its transmitter settings as directed by the EP. The requests are
 *     communicated via TS1s.
 *   - Once the EP is satisfied with the tuning, equalization moves to PHASE 3 where
 *     the RC tunes the EP's remote transmitter.
 *     Again, the settings are communicated via TS1s but the feedback is provided by
 *     the RC phy's FOM or direction change indications.
 *     \</pre\>
 */
union ody_pciercx_pl16g_eq_ctl0123 {
	uint32_t u;
	struct ody_pciercx_pl16g_eq_ctl0123_s {
		uint32_t l0dtp                       : 4;
		uint32_t l0utp                       : 4;
		uint32_t l1dtp                       : 4;
		uint32_t l1utp                       : 4;
		uint32_t l2dtp                       : 4;
		uint32_t l2utp                       : 4;
		uint32_t l3dtp                       : 4;
		uint32_t l3utp                       : 4;
	} s;
	/* struct ody_pciercx_pl16g_eq_ctl0123_s cn; */
};
typedef union ody_pciercx_pl16g_eq_ctl0123 ody_pciercx_pl16g_eq_ctl0123_t;

static inline uint64_t ODY_PCIERCX_PL16G_EQ_CTL0123(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_PL16G_EQ_CTL0123(uint64_t a)
{
	if (a <= 15)
		return 0x1b8;
	__ody_csr_fatal("PCIERCX_PL16G_EQ_CTL0123", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_PL16G_EQ_CTL0123(a) ody_pciercx_pl16g_eq_ctl0123_t
#define bustype_ODY_PCIERCX_PL16G_EQ_CTL0123(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_PL16G_EQ_CTL0123(a) "PCIERCX_PL16G_EQ_CTL0123"
#define busnum_ODY_PCIERCX_PL16G_EQ_CTL0123(a) (a)
#define arguments_ODY_PCIERCX_PL16G_EQ_CTL0123(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_pl16g_eq_ctl12131415
 *
 * PCIe RC 16.0 GT/s Lane Equalization Control for Lane 12-15 Register
 * Not supported in QPEM/HPEM.
 *
 * The Equalization Control register consists of control fields required for per-Lane
 * 16.0 GT/s equalization.
 *
 * Equalization as an RC:
 *   \<pre\>
 *   - On speed change from GEN1-\>GEN3, advertise the transmitter preset hint per lane
 *     to the EP device in the TS2s exchanged. This value comes from the per lane
 *     upstream port transmitter preset (L*UTP).
 *   - Upon exit from Recovery Speed, the RC will enter EQ PHASE1 and the RC's
 *     transmitter will use the per lane downstream port transmitter preset field (L*DTP).
 *   - While in EQ PHASE 1, the EP & RC device exchange NO presets. They do advertise
 *     their LF & FS which are needed for the fine tuning stages to follow.
 *   - For the RC, while in EQ PHASE 2, the EP device makes tuning requests of the RC.
 *     The RC adjusts its transmitter settings as directed by the EP. The requests are
 *     communicated via TS1s.
 *   - Once the EP is satisfied with the tuning, equalization moves to PHASE 3 where
 *     the RC tunes the EP's remote transmitter.
 *     Again, the settings are communicated via TS1s but the feedback is provided by
 *     the RC phy's FOM or direction change indications.
 *     \</pre\>
 */
union ody_pciercx_pl16g_eq_ctl12131415 {
	uint32_t u;
	struct ody_pciercx_pl16g_eq_ctl12131415_s {
		uint32_t l12dtp                      : 4;
		uint32_t l12utp                      : 4;
		uint32_t l13dtp                      : 4;
		uint32_t l13utp                      : 4;
		uint32_t l14dtp                      : 4;
		uint32_t l14utp                      : 4;
		uint32_t l15dtp                      : 4;
		uint32_t l15utp                      : 4;
	} s;
	/* struct ody_pciercx_pl16g_eq_ctl12131415_s cn; */
};
typedef union ody_pciercx_pl16g_eq_ctl12131415 ody_pciercx_pl16g_eq_ctl12131415_t;

static inline uint64_t ODY_PCIERCX_PL16G_EQ_CTL12131415(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_PL16G_EQ_CTL12131415(uint64_t a)
{
	if (a <= 15)
		return 0x1c4;
	__ody_csr_fatal("PCIERCX_PL16G_EQ_CTL12131415", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_PL16G_EQ_CTL12131415(a) ody_pciercx_pl16g_eq_ctl12131415_t
#define bustype_ODY_PCIERCX_PL16G_EQ_CTL12131415(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_PL16G_EQ_CTL12131415(a) "PCIERCX_PL16G_EQ_CTL12131415"
#define busnum_ODY_PCIERCX_PL16G_EQ_CTL12131415(a) (a)
#define arguments_ODY_PCIERCX_PL16G_EQ_CTL12131415(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_pl16g_eq_ctl4567
 *
 * PCIe RC 16.0 GT/s Lane Equalization Control for Lane 4-7 Register
 * Not supported in QPEM.
 *
 * The Equalization Control register consists of control fields required for per-Lane
 * 16.0 GT/s equalization.
 *
 * Equalization as an RC:
 *   \<pre\>
 *   - On speed change from GEN1-\>GEN3, advertise the transmitter preset hint per lane
 *     to the EP device in the TS2s exchanged. This value comes from the per lane
 *     upstream port transmitter preset (L*UTP).
 *   - Upon exit from Recovery Speed, the RC will enter EQ PHASE1 and the RC's
 *     transmitter will use the per lane downstream port transmitter preset field (L*DTP).
 *   - While in EQ PHASE 1, the EP & RC device exchange NO presets. They do advertise
 *     their LF & FS which are needed for the fine tuning stages to follow.
 *   - For the RC, while in EQ PHASE 2, the EP device makes tuning requests of the RC.
 *     The RC adjusts its transmitter settings as directed by the EP. The requests are
 *     communicated via TS1s.
 *   - Once the EP is satisfied with the tuning, equalization moves to PHASE 3 where
 *     the RC tunes the EP's remote transmitter.
 *     Again, the settings are communicated via TS1s but the feedback is provided by
 *     the RC phy's FOM or direction change indications.
 *     \</pre\>
 */
union ody_pciercx_pl16g_eq_ctl4567 {
	uint32_t u;
	struct ody_pciercx_pl16g_eq_ctl4567_s {
		uint32_t l4dtp                       : 4;
		uint32_t l4utp                       : 4;
		uint32_t l5dtp                       : 4;
		uint32_t l5utp                       : 4;
		uint32_t l6dtp                       : 4;
		uint32_t l6utp                       : 4;
		uint32_t l7dtp                       : 4;
		uint32_t l7utp                       : 4;
	} s;
	/* struct ody_pciercx_pl16g_eq_ctl4567_s cn; */
};
typedef union ody_pciercx_pl16g_eq_ctl4567 ody_pciercx_pl16g_eq_ctl4567_t;

static inline uint64_t ODY_PCIERCX_PL16G_EQ_CTL4567(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_PL16G_EQ_CTL4567(uint64_t a)
{
	if (a <= 15)
		return 0x1bc;
	__ody_csr_fatal("PCIERCX_PL16G_EQ_CTL4567", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_PL16G_EQ_CTL4567(a) ody_pciercx_pl16g_eq_ctl4567_t
#define bustype_ODY_PCIERCX_PL16G_EQ_CTL4567(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_PL16G_EQ_CTL4567(a) "PCIERCX_PL16G_EQ_CTL4567"
#define busnum_ODY_PCIERCX_PL16G_EQ_CTL4567(a) (a)
#define arguments_ODY_PCIERCX_PL16G_EQ_CTL4567(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_pl16g_eq_ctl891011
 *
 * PCIe RC 16.0 GT/s Lane Equalization Control for Lane 8-11 Register
 * Not supported in QPEM/HPEM.
 *
 * The Equalization Control register consists of control fields required for per-Lane
 * 16.0 GT/s equalization.
 *
 * Equalization as an RC:
 *   \<pre\>
 *   - On speed change from GEN1-\>GEN3, advertise the transmitter preset hint per lane
 *     to the EP device in the TS2s exchanged. This value comes from the per lane
 *     upstream port transmitter preset (L*UTP).
 *   - Upon exit from Recovery Speed, the RC will enter EQ PHASE1 and the RC's
 *     transmitter will use the per lane downstream port transmitter preset field (L*DTP).
 *   - While in EQ PHASE 1, the EP & RC device exchange NO presets. They do advertise
 *     their LF & FS which are needed for the fine tuning stages to follow.
 *   - For the RC, while in EQ PHASE 2, the EP device makes tuning requests of the RC.
 *     The RC adjusts its transmitter settings as directed by the EP. The requests are
 *     communicated via TS1s.
 *   - Once the EP is satisfied with the tuning, equalization moves to PHASE 3 where
 *     the RC tunes the EP's remote transmitter.
 *     Again, the settings are communicated via TS1s but the feedback is provided by
 *     the RC phy's FOM or direction change indications.
 *     \</pre\>
 */
union ody_pciercx_pl16g_eq_ctl891011 {
	uint32_t u;
	struct ody_pciercx_pl16g_eq_ctl891011_s {
		uint32_t l8dtp                       : 4;
		uint32_t l8utp                       : 4;
		uint32_t l9dtp                       : 4;
		uint32_t l9utp                       : 4;
		uint32_t l10dtp                      : 4;
		uint32_t l10utp                      : 4;
		uint32_t l11dtp                      : 4;
		uint32_t l11utp                      : 4;
	} s;
	/* struct ody_pciercx_pl16g_eq_ctl891011_s cn; */
};
typedef union ody_pciercx_pl16g_eq_ctl891011 ody_pciercx_pl16g_eq_ctl891011_t;

static inline uint64_t ODY_PCIERCX_PL16G_EQ_CTL891011(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_PL16G_EQ_CTL891011(uint64_t a)
{
	if (a <= 15)
		return 0x1c0;
	__ody_csr_fatal("PCIERCX_PL16G_EQ_CTL891011", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_PL16G_EQ_CTL891011(a) ody_pciercx_pl16g_eq_ctl891011_t
#define bustype_ODY_PCIERCX_PL16G_EQ_CTL891011(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_PL16G_EQ_CTL891011(a) "PCIERCX_PL16G_EQ_CTL891011"
#define busnum_ODY_PCIERCX_PL16G_EQ_CTL891011(a) (a)
#define arguments_ODY_PCIERCX_PL16G_EQ_CTL891011(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_pl16g_ext_cap_hdr
 *
 * PCIe RC Pysical Layer 16.0 GT/s Extended Capability Header Register
 */
union ody_pciercx_pl16g_ext_cap_hdr {
	uint32_t u;
	struct ody_pciercx_pl16g_ext_cap_hdr_s {
		uint32_t pcieec                      : 16;
		uint32_t cv                          : 4;
		uint32_t nco                         : 12;
	} s;
	/* struct ody_pciercx_pl16g_ext_cap_hdr_s cn; */
};
typedef union ody_pciercx_pl16g_ext_cap_hdr ody_pciercx_pl16g_ext_cap_hdr_t;

static inline uint64_t ODY_PCIERCX_PL16G_EXT_CAP_HDR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_PL16G_EXT_CAP_HDR(uint64_t a)
{
	if (a <= 15)
		return 0x198;
	__ody_csr_fatal("PCIERCX_PL16G_EXT_CAP_HDR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_PL16G_EXT_CAP_HDR(a) ody_pciercx_pl16g_ext_cap_hdr_t
#define bustype_ODY_PCIERCX_PL16G_EXT_CAP_HDR(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_PL16G_EXT_CAP_HDR(a) "PCIERCX_PL16G_EXT_CAP_HDR"
#define busnum_ODY_PCIERCX_PL16G_EXT_CAP_HDR(a) (a)
#define arguments_ODY_PCIERCX_PL16G_EXT_CAP_HDR(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_pl16g_fret_dpar_stat
 *
 * PCIe RC 16.0 GT/s First Retimer Data Parity Mismatch Status Register
 */
union ody_pciercx_pl16g_fret_dpar_stat {
	uint32_t u;
	struct ody_pciercx_pl16g_fret_dpar_stat_s {
		uint32_t frt_dp_status               : 16;
		uint32_t reserved_16_31              : 16;
	} s;
	/* struct ody_pciercx_pl16g_fret_dpar_stat_s cn; */
};
typedef union ody_pciercx_pl16g_fret_dpar_stat ody_pciercx_pl16g_fret_dpar_stat_t;

static inline uint64_t ODY_PCIERCX_PL16G_FRET_DPAR_STAT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_PL16G_FRET_DPAR_STAT(uint64_t a)
{
	if (a <= 15)
		return 0x1ac;
	__ody_csr_fatal("PCIERCX_PL16G_FRET_DPAR_STAT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_PL16G_FRET_DPAR_STAT(a) ody_pciercx_pl16g_fret_dpar_stat_t
#define bustype_ODY_PCIERCX_PL16G_FRET_DPAR_STAT(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_PL16G_FRET_DPAR_STAT(a) "PCIERCX_PL16G_FRET_DPAR_STAT"
#define busnum_ODY_PCIERCX_PL16G_FRET_DPAR_STAT(a) (a)
#define arguments_ODY_PCIERCX_PL16G_FRET_DPAR_STAT(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_pl16g_lc_dpar_stat
 *
 * PCIe RC 16.0 GT/s Local Data Parity Mismatch Status Register
 */
union ody_pciercx_pl16g_lc_dpar_stat {
	uint32_t u;
	struct ody_pciercx_pl16g_lc_dpar_stat_s {
		uint32_t ldp_status                  : 16;
		uint32_t reserved_16_31              : 16;
	} s;
	/* struct ody_pciercx_pl16g_lc_dpar_stat_s cn; */
};
typedef union ody_pciercx_pl16g_lc_dpar_stat ody_pciercx_pl16g_lc_dpar_stat_t;

static inline uint64_t ODY_PCIERCX_PL16G_LC_DPAR_STAT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_PL16G_LC_DPAR_STAT(uint64_t a)
{
	if (a <= 15)
		return 0x1a8;
	__ody_csr_fatal("PCIERCX_PL16G_LC_DPAR_STAT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_PL16G_LC_DPAR_STAT(a) ody_pciercx_pl16g_lc_dpar_stat_t
#define bustype_ODY_PCIERCX_PL16G_LC_DPAR_STAT(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_PL16G_LC_DPAR_STAT(a) "PCIERCX_PL16G_LC_DPAR_STAT"
#define busnum_ODY_PCIERCX_PL16G_LC_DPAR_STAT(a) (a)
#define arguments_ODY_PCIERCX_PL16G_LC_DPAR_STAT(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_pl16g_sret_dpar_stat
 *
 * PCIe RC 16.0 GT/s Second Retimer Data Parity Mismatch Status Register
 */
union ody_pciercx_pl16g_sret_dpar_stat {
	uint32_t u;
	struct ody_pciercx_pl16g_sret_dpar_stat_s {
		uint32_t srt_dp_status               : 16;
		uint32_t reserved_16_31              : 16;
	} s;
	/* struct ody_pciercx_pl16g_sret_dpar_stat_s cn; */
};
typedef union ody_pciercx_pl16g_sret_dpar_stat ody_pciercx_pl16g_sret_dpar_stat_t;

static inline uint64_t ODY_PCIERCX_PL16G_SRET_DPAR_STAT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_PL16G_SRET_DPAR_STAT(uint64_t a)
{
	if (a <= 15)
		return 0x1b0;
	__ody_csr_fatal("PCIERCX_PL16G_SRET_DPAR_STAT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_PL16G_SRET_DPAR_STAT(a) ody_pciercx_pl16g_sret_dpar_stat_t
#define bustype_ODY_PCIERCX_PL16G_SRET_DPAR_STAT(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_PL16G_SRET_DPAR_STAT(a) "PCIERCX_PL16G_SRET_DPAR_STAT"
#define busnum_ODY_PCIERCX_PL16G_SRET_DPAR_STAT(a) (a)
#define arguments_ODY_PCIERCX_PL16G_SRET_DPAR_STAT(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_pl16g_status
 *
 * PCIe RC 16.0 GT/s Status Register
 */
union ody_pciercx_pl16g_status {
	uint32_t u;
	struct ody_pciercx_pl16g_status_s {
		uint32_t eq_cpl                      : 1;
		uint32_t eq_cpl_p1                   : 1;
		uint32_t eq_cpl_p2                   : 1;
		uint32_t eq_cpl_p3                   : 1;
		uint32_t leq_req                     : 1;
		uint32_t reserved_5_31               : 27;
	} s;
	/* struct ody_pciercx_pl16g_status_s cn; */
};
typedef union ody_pciercx_pl16g_status ody_pciercx_pl16g_status_t;

static inline uint64_t ODY_PCIERCX_PL16G_STATUS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_PL16G_STATUS(uint64_t a)
{
	if (a <= 15)
		return 0x1a4;
	__ody_csr_fatal("PCIERCX_PL16G_STATUS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_PL16G_STATUS(a) ody_pciercx_pl16g_status_t
#define bustype_ODY_PCIERCX_PL16G_STATUS(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_PL16G_STATUS(a) "PCIERCX_PL16G_STATUS"
#define busnum_ODY_PCIERCX_PL16G_STATUS(a) (a)
#define arguments_ODY_PCIERCX_PL16G_STATUS(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_pl32g_cap
 *
 * PCIe RC 32.0 GT/s Capabilities Register
 */
union ody_pciercx_pl32g_cap {
	uint32_t u;
	struct ody_pciercx_pl32g_cap_s {
		uint32_t eq_byp_hirate               : 1;
		uint32_t no_eq_need_supp             : 1;
		uint32_t reserved_2_7                : 6;
		uint32_t mod_ts_pcie_supp            : 1;
		uint32_t mod_ts_tset_msg_supp        : 1;
		uint32_t mod_ts_alt_prot_supp        : 1;
		uint32_t mod_ts_rsvd_use_supp        : 5;
		uint32_t reserved_16_31              : 16;
	} s;
	/* struct ody_pciercx_pl32g_cap_s cn; */
};
typedef union ody_pciercx_pl32g_cap ody_pciercx_pl32g_cap_t;

static inline uint64_t ODY_PCIERCX_PL32G_CAP(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_PL32G_CAP(uint64_t a)
{
	if (a <= 15)
		return 0x214;
	__ody_csr_fatal("PCIERCX_PL32G_CAP", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_PL32G_CAP(a) ody_pciercx_pl32g_cap_t
#define bustype_ODY_PCIERCX_PL32G_CAP(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_PL32G_CAP(a) "PCIERCX_PL32G_CAP"
#define busnum_ODY_PCIERCX_PL32G_CAP(a) (a)
#define arguments_ODY_PCIERCX_PL32G_CAP(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_pl32g_ctl
 *
 * PCIe RC 32.0 GT/s Control Register
 */
union ody_pciercx_pl32g_ctl {
	uint32_t u;
	struct ody_pciercx_pl32g_ctl_s {
		uint32_t eq_byp_hirate_dis           : 1;
		uint32_t no_eq_need_dis              : 1;
		uint32_t reserved_2_7                : 6;
		uint32_t mod_ts_use_mode_sel         : 3;
		uint32_t reserved_11_31              : 21;
	} s;
	/* struct ody_pciercx_pl32g_ctl_s cn; */
};
typedef union ody_pciercx_pl32g_ctl ody_pciercx_pl32g_ctl_t;

static inline uint64_t ODY_PCIERCX_PL32G_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_PL32G_CTL(uint64_t a)
{
	if (a <= 15)
		return 0x218;
	__ody_csr_fatal("PCIERCX_PL32G_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_PL32G_CTL(a) ody_pciercx_pl32g_ctl_t
#define bustype_ODY_PCIERCX_PL32G_CTL(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_PL32G_CTL(a) "PCIERCX_PL32G_CTL"
#define busnum_ODY_PCIERCX_PL32G_CTL(a) (a)
#define arguments_ODY_PCIERCX_PL32G_CTL(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_pl32g_eq_ctl0123
 *
 * PCIe RC 32.0 GT/s Equalization Control Lane 0/1/2/3 Register
 * The Equalization Control register consists of control fields required for per-Lane
 * 32.0 GT/s equalization.
 *
 * Equalization as an RC:
 *   \<pre\>
 *   - On speed change from GEN1-\>GEN3, advertise the transmitter preset hint per lane
 *     to the EP device in the TS2s exchanged. This value comes from the per lane
 *     upstream port transmitter preset (L*UTP).
 *   - Upon exit from Recovery Speed, the RC will enter EQ PHASE1 and the RC's
 *     transmitter will use the per lane downstream port transmitter preset field (L*DTP).
 *   - While in EQ PHASE 1, the EP & RC device exchange NO presets. They do advertise
 *     their LF & FS which are needed for the fine tuning stages to follow.
 *   - For the RC, while in EQ PHASE 2, the EP device makes tuning requests of the RC.
 *     The RC adjusts its transmitter settings as directed by the EP. The requests are
 *     communicated via TS1s.
 *   - Once the EP is satisfied with the tuning, equalization moves to PHASE 3 where
 *     the RC tunes the EP's remote transmitter.
 *     Again, the settings are communicated via TS1s but the feedback is provided by
 *     the RC phy's FOM or direction change indications.
 *     \</pre\>
 */
union ody_pciercx_pl32g_eq_ctl0123 {
	uint32_t u;
	struct ody_pciercx_pl32g_eq_ctl0123_s {
		uint32_t l0dtp                       : 4;
		uint32_t l0utp                       : 4;
		uint32_t l1dtp                       : 4;
		uint32_t l1utp                       : 4;
		uint32_t l2dtp                       : 4;
		uint32_t l2utp                       : 4;
		uint32_t l3dtp                       : 4;
		uint32_t l3utp                       : 4;
	} s;
	/* struct ody_pciercx_pl32g_eq_ctl0123_s cn; */
};
typedef union ody_pciercx_pl32g_eq_ctl0123 ody_pciercx_pl32g_eq_ctl0123_t;

static inline uint64_t ODY_PCIERCX_PL32G_EQ_CTL0123(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_PL32G_EQ_CTL0123(uint64_t a)
{
	if (a <= 15)
		return 0x230;
	__ody_csr_fatal("PCIERCX_PL32G_EQ_CTL0123", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_PL32G_EQ_CTL0123(a) ody_pciercx_pl32g_eq_ctl0123_t
#define bustype_ODY_PCIERCX_PL32G_EQ_CTL0123(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_PL32G_EQ_CTL0123(a) "PCIERCX_PL32G_EQ_CTL0123"
#define busnum_ODY_PCIERCX_PL32G_EQ_CTL0123(a) (a)
#define arguments_ODY_PCIERCX_PL32G_EQ_CTL0123(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_pl32g_eq_ctl12131415
 *
 * PCIe RC 32.0 GT/s Equalization Control Lane 12/13/14/15 Register
 * Not supported in QPEM/HPEM.
 *
 * The Equalization Control register consists of control fields required for per-Lane
 * 32.0 GT/s equalization.
 *
 * Equalization as an RC:
 *   \<pre\>
 *   - On speed change from GEN1-\>GEN3, advertise the transmitter preset hint per lane
 *     to the EP device in the TS2s exchanged. This value comes from the per lane
 *     upstream port transmitter preset (L*UTP).
 *   - Upon exit from Recovery Speed, the RC will enter EQ PHASE1 and the RC's
 *     transmitter will use the per lane downstream port transmitter preset field (L*DTP).
 *   - While in EQ PHASE 1, the EP & RC device exchange NO presets. They do advertise
 *     their LF & FS which are needed for the fine tuning stages to follow.
 *   - For the RC, while in EQ PHASE 2, the EP device makes tuning requests of the RC.
 *     The RC adjusts its transmitter settings as directed by the EP. The requests are
 *     communicated via TS1s.
 *   - Once the EP is satisfied with the tuning, equalization moves to PHASE 3 where
 *     the RC tunes the EP's remote transmitter.
 *     Again, the settings are communicated via TS1s but the feedback is provided by
 *     the RC phy's FOM or direction change indications.
 *     \</pre\>
 */
union ody_pciercx_pl32g_eq_ctl12131415 {
	uint32_t u;
	struct ody_pciercx_pl32g_eq_ctl12131415_s {
		uint32_t l12dtp                      : 4;
		uint32_t l12utp                      : 4;
		uint32_t l13dtp                      : 4;
		uint32_t l13utp                      : 4;
		uint32_t l14dtp                      : 4;
		uint32_t l14utp                      : 4;
		uint32_t l15dtp                      : 4;
		uint32_t l15utp                      : 4;
	} s;
	/* struct ody_pciercx_pl32g_eq_ctl12131415_s cn; */
};
typedef union ody_pciercx_pl32g_eq_ctl12131415 ody_pciercx_pl32g_eq_ctl12131415_t;

static inline uint64_t ODY_PCIERCX_PL32G_EQ_CTL12131415(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_PL32G_EQ_CTL12131415(uint64_t a)
{
	if (a <= 15)
		return 0x23c;
	__ody_csr_fatal("PCIERCX_PL32G_EQ_CTL12131415", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_PL32G_EQ_CTL12131415(a) ody_pciercx_pl32g_eq_ctl12131415_t
#define bustype_ODY_PCIERCX_PL32G_EQ_CTL12131415(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_PL32G_EQ_CTL12131415(a) "PCIERCX_PL32G_EQ_CTL12131415"
#define busnum_ODY_PCIERCX_PL32G_EQ_CTL12131415(a) (a)
#define arguments_ODY_PCIERCX_PL32G_EQ_CTL12131415(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_pl32g_eq_ctl4567
 *
 * PCIe RC 32.0 GT/s Equalization Control Lane 4/5/6/7 Register
 * Not supported in QPEM.
 *
 * The Equalization Control register consists of control fields required for per-Lane
 * 32.0 GT/s equalization.
 *
 * Equalization as an RC:
 *   \<pre\>
 *   - On speed change from GEN1-\>GEN3, advertise the transmitter preset hint per lane
 *     to the EP device in the TS2s exchanged. This value comes from the per lane
 *     upstream port transmitter preset (L*UTP).
 *   - Upon exit from Recovery Speed, the RC will enter EQ PHASE1 and the RC's
 *     transmitter will use the per lane downstream port transmitter preset field (L*DTP).
 *   - While in EQ PHASE 1, the EP & RC device exchange NO presets. They do advertise
 *     their LF & FS which are needed for the fine tuning stages to follow.
 *   - For the RC, while in EQ PHASE 2, the EP device makes tuning requests of the RC.
 *     The RC adjusts its transmitter settings as directed by the EP. The requests are
 *     communicated via TS1s.
 *   - Once the EP is satisfied with the tuning, equalization moves to PHASE 3 where
 *     the RC tunes the EP's remote transmitter.
 *     Again, the settings are communicated via TS1s but the feedback is provided by
 *     the RC phy's FOM or direction change indications.
 *     \</pre\>
 */
union ody_pciercx_pl32g_eq_ctl4567 {
	uint32_t u;
	struct ody_pciercx_pl32g_eq_ctl4567_s {
		uint32_t l4dtp                       : 4;
		uint32_t l4utp                       : 4;
		uint32_t l5dtp                       : 4;
		uint32_t l5utp                       : 4;
		uint32_t l6dtp                       : 4;
		uint32_t l6utp                       : 4;
		uint32_t l7dtp                       : 4;
		uint32_t l7utp                       : 4;
	} s;
	/* struct ody_pciercx_pl32g_eq_ctl4567_s cn; */
};
typedef union ody_pciercx_pl32g_eq_ctl4567 ody_pciercx_pl32g_eq_ctl4567_t;

static inline uint64_t ODY_PCIERCX_PL32G_EQ_CTL4567(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_PL32G_EQ_CTL4567(uint64_t a)
{
	if (a <= 15)
		return 0x234;
	__ody_csr_fatal("PCIERCX_PL32G_EQ_CTL4567", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_PL32G_EQ_CTL4567(a) ody_pciercx_pl32g_eq_ctl4567_t
#define bustype_ODY_PCIERCX_PL32G_EQ_CTL4567(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_PL32G_EQ_CTL4567(a) "PCIERCX_PL32G_EQ_CTL4567"
#define busnum_ODY_PCIERCX_PL32G_EQ_CTL4567(a) (a)
#define arguments_ODY_PCIERCX_PL32G_EQ_CTL4567(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_pl32g_eq_ctl891011
 *
 * PCIe RC 32.0 GT/s Equalization Control Lane 8/9/1011 Register
 * Not supported in QPEM/HPEM.
 *
 * The Equalization Control register consists of control fields required for per-Lane
 * 32.0 GT/s equalization.
 *
 * Equalization as an RC:
 *   \<pre\>
 *   - On speed change from GEN1-\>GEN3, advertise the transmitter preset hint per lane
 *     to the EP device in the TS2s exchanged. This value comes from the per lane
 *     upstream port transmitter preset (L*UTP).
 *   - Upon exit from Recovery Speed, the RC will enter EQ PHASE1 and the RC's
 *     transmitter will use the per lane downstream port transmitter preset field (L*DTP).
 *   - While in EQ PHASE 1, the EP & RC device exchange NO presets. They do advertise
 *     their LF & FS which are needed for the fine tuning stages to follow.
 *   - For the RC, while in EQ PHASE 2, the EP device makes tuning requests of the RC.
 *     The RC adjusts its transmitter settings as directed by the EP. The requests are
 *     communicated via TS1s.
 *   - Once the EP is satisfied with the tuning, equalization moves to PHASE 3 where
 *     the RC tunes the EP's remote transmitter.
 *     Again, the settings are communicated via TS1s but the feedback is provided by
 *     the RC phy's FOM or direction change indications.
 *     \</pre\>
 */
union ody_pciercx_pl32g_eq_ctl891011 {
	uint32_t u;
	struct ody_pciercx_pl32g_eq_ctl891011_s {
		uint32_t l8dtp                       : 4;
		uint32_t l8utp                       : 4;
		uint32_t l9dtp                       : 4;
		uint32_t l9utp                       : 4;
		uint32_t l10dtp                      : 4;
		uint32_t l10utp                      : 4;
		uint32_t l11dtp                      : 4;
		uint32_t l11utp                      : 4;
	} s;
	/* struct ody_pciercx_pl32g_eq_ctl891011_s cn; */
};
typedef union ody_pciercx_pl32g_eq_ctl891011 ody_pciercx_pl32g_eq_ctl891011_t;

static inline uint64_t ODY_PCIERCX_PL32G_EQ_CTL891011(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_PL32G_EQ_CTL891011(uint64_t a)
{
	if (a <= 15)
		return 0x238;
	__ody_csr_fatal("PCIERCX_PL32G_EQ_CTL891011", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_PL32G_EQ_CTL891011(a) ody_pciercx_pl32g_eq_ctl891011_t
#define bustype_ODY_PCIERCX_PL32G_EQ_CTL891011(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_PL32G_EQ_CTL891011(a) "PCIERCX_PL32G_EQ_CTL891011"
#define busnum_ODY_PCIERCX_PL32G_EQ_CTL891011(a) (a)
#define arguments_ODY_PCIERCX_PL32G_EQ_CTL891011(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_pl32g_ext_cap_hdr
 *
 * PCIe RC Pysical Layer 32.0 GT/s Extended Capability Header Register
 */
union ody_pciercx_pl32g_ext_cap_hdr {
	uint32_t u;
	struct ody_pciercx_pl32g_ext_cap_hdr_s {
		uint32_t pcieec                      : 16;
		uint32_t cv                          : 4;
		uint32_t nco                         : 12;
	} s;
	/* struct ody_pciercx_pl32g_ext_cap_hdr_s cn; */
};
typedef union ody_pciercx_pl32g_ext_cap_hdr ody_pciercx_pl32g_ext_cap_hdr_t;

static inline uint64_t ODY_PCIERCX_PL32G_EXT_CAP_HDR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_PL32G_EXT_CAP_HDR(uint64_t a)
{
	if (a <= 15)
		return 0x210;
	__ody_csr_fatal("PCIERCX_PL32G_EXT_CAP_HDR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_PL32G_EXT_CAP_HDR(a) ody_pciercx_pl32g_ext_cap_hdr_t
#define bustype_ODY_PCIERCX_PL32G_EXT_CAP_HDR(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_PL32G_EXT_CAP_HDR(a) "PCIERCX_PL32G_EXT_CAP_HDR"
#define busnum_ODY_PCIERCX_PL32G_EXT_CAP_HDR(a) (a)
#define arguments_ODY_PCIERCX_PL32G_EXT_CAP_HDR(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_pl32g_rmod_ts_data1
 *
 * PCIe RC 32.0 GT/s Received Modified TS Data 1 Register
 */
union ody_pciercx_pl32g_rmod_ts_data1 {
	uint32_t u;
	struct ody_pciercx_pl32g_rmod_ts_data1_s {
		uint32_t rcvd_mod_ts_use_mode        : 3;
		uint32_t rcvd_mod_ts_info1           : 13;
		uint32_t rcvd_mod_ts_vend_id         : 16;
	} s;
	/* struct ody_pciercx_pl32g_rmod_ts_data1_s cn; */
};
typedef union ody_pciercx_pl32g_rmod_ts_data1 ody_pciercx_pl32g_rmod_ts_data1_t;

static inline uint64_t ODY_PCIERCX_PL32G_RMOD_TS_DATA1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_PL32G_RMOD_TS_DATA1(uint64_t a)
{
	if (a <= 15)
		return 0x220;
	__ody_csr_fatal("PCIERCX_PL32G_RMOD_TS_DATA1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_PL32G_RMOD_TS_DATA1(a) ody_pciercx_pl32g_rmod_ts_data1_t
#define bustype_ODY_PCIERCX_PL32G_RMOD_TS_DATA1(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_PL32G_RMOD_TS_DATA1(a) "PCIERCX_PL32G_RMOD_TS_DATA1"
#define busnum_ODY_PCIERCX_PL32G_RMOD_TS_DATA1(a) (a)
#define arguments_ODY_PCIERCX_PL32G_RMOD_TS_DATA1(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_pl32g_rmod_ts_data2
 *
 * PCIe RC 32.0 GT/s Received Modified TS Data 2 Register
 */
union ody_pciercx_pl32g_rmod_ts_data2 {
	uint32_t u;
	struct ody_pciercx_pl32g_rmod_ts_data2_s {
		uint32_t rcvd_mod_ts_info2           : 24;
		uint32_t rcvd_alt_prot_neg_stat      : 2;
		uint32_t reserved_26_31              : 6;
	} s;
	/* struct ody_pciercx_pl32g_rmod_ts_data2_s cn; */
};
typedef union ody_pciercx_pl32g_rmod_ts_data2 ody_pciercx_pl32g_rmod_ts_data2_t;

static inline uint64_t ODY_PCIERCX_PL32G_RMOD_TS_DATA2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_PL32G_RMOD_TS_DATA2(uint64_t a)
{
	if (a <= 15)
		return 0x224;
	__ody_csr_fatal("PCIERCX_PL32G_RMOD_TS_DATA2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_PL32G_RMOD_TS_DATA2(a) ody_pciercx_pl32g_rmod_ts_data2_t
#define bustype_ODY_PCIERCX_PL32G_RMOD_TS_DATA2(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_PL32G_RMOD_TS_DATA2(a) "PCIERCX_PL32G_RMOD_TS_DATA2"
#define busnum_ODY_PCIERCX_PL32G_RMOD_TS_DATA2(a) (a)
#define arguments_ODY_PCIERCX_PL32G_RMOD_TS_DATA2(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_pl32g_status
 *
 * PCIe RC 32.0 GT/s Status Register
 */
union ody_pciercx_pl32g_status {
	uint32_t u;
	struct ody_pciercx_pl32g_status_s {
		uint32_t eq_32g_cpl                  : 1;
		uint32_t eq_32g_cpl_p1               : 1;
		uint32_t eq_32g_cpl_p2               : 1;
		uint32_t eq_32g_cpl_p3               : 1;
		uint32_t leq_32g_req                 : 1;
		uint32_t mod_ts_rcvd                 : 1;
		uint32_t rcvd_elbc                   : 2;
		uint32_t tx_precode_on               : 1;
		uint32_t tx_precode_req              : 1;
		uint32_t no_eq_needed_rcvd           : 1;
		uint32_t reserved_11_31              : 21;
	} s;
	/* struct ody_pciercx_pl32g_status_s cn; */
};
typedef union ody_pciercx_pl32g_status ody_pciercx_pl32g_status_t;

static inline uint64_t ODY_PCIERCX_PL32G_STATUS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_PL32G_STATUS(uint64_t a)
{
	if (a <= 15)
		return 0x21c;
	__ody_csr_fatal("PCIERCX_PL32G_STATUS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_PL32G_STATUS(a) ody_pciercx_pl32g_status_t
#define bustype_ODY_PCIERCX_PL32G_STATUS(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_PL32G_STATUS(a) "PCIERCX_PL32G_STATUS"
#define busnum_ODY_PCIERCX_PL32G_STATUS(a) (a)
#define arguments_ODY_PCIERCX_PL32G_STATUS(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_pl32g_tmod_ts_data1
 *
 * PCIe RC 32.0 GT/s Transmitted Modified TS Data 1 Register
 */
union ody_pciercx_pl32g_tmod_ts_data1 {
	uint32_t u;
	struct ody_pciercx_pl32g_tmod_ts_data1_s {
		uint32_t tx_mod_ts_use_mode          : 3;
		uint32_t tx_mod_ts_info1             : 13;
		uint32_t tx_mod_ts_vend_id           : 16;
	} s;
	/* struct ody_pciercx_pl32g_tmod_ts_data1_s cn; */
};
typedef union ody_pciercx_pl32g_tmod_ts_data1 ody_pciercx_pl32g_tmod_ts_data1_t;

static inline uint64_t ODY_PCIERCX_PL32G_TMOD_TS_DATA1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_PL32G_TMOD_TS_DATA1(uint64_t a)
{
	if (a <= 15)
		return 0x228;
	__ody_csr_fatal("PCIERCX_PL32G_TMOD_TS_DATA1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_PL32G_TMOD_TS_DATA1(a) ody_pciercx_pl32g_tmod_ts_data1_t
#define bustype_ODY_PCIERCX_PL32G_TMOD_TS_DATA1(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_PL32G_TMOD_TS_DATA1(a) "PCIERCX_PL32G_TMOD_TS_DATA1"
#define busnum_ODY_PCIERCX_PL32G_TMOD_TS_DATA1(a) (a)
#define arguments_ODY_PCIERCX_PL32G_TMOD_TS_DATA1(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_pl32g_tmod_ts_data2
 *
 * PCIe RC 32.0 GT/s Transmitted Modified TS Data 2 Register
 */
union ody_pciercx_pl32g_tmod_ts_data2 {
	uint32_t u;
	struct ody_pciercx_pl32g_tmod_ts_data2_s {
		uint32_t tx_mod_ts_info2             : 24;
		uint32_t tx_alt_prot_neg_stat        : 2;
		uint32_t reserved_26_31              : 6;
	} s;
	/* struct ody_pciercx_pl32g_tmod_ts_data2_s cn; */
};
typedef union ody_pciercx_pl32g_tmod_ts_data2 ody_pciercx_pl32g_tmod_ts_data2_t;

static inline uint64_t ODY_PCIERCX_PL32G_TMOD_TS_DATA2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_PL32G_TMOD_TS_DATA2(uint64_t a)
{
	if (a <= 15)
		return 0x22c;
	__ody_csr_fatal("PCIERCX_PL32G_TMOD_TS_DATA2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_PL32G_TMOD_TS_DATA2(a) ody_pciercx_pl32g_tmod_ts_data2_t
#define bustype_ODY_PCIERCX_PL32G_TMOD_TS_DATA2(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_PL32G_TMOD_TS_DATA2(a) "PCIERCX_PL32G_TMOD_TS_DATA2"
#define busnum_ODY_PCIERCX_PL32G_TMOD_TS_DATA2(a) (a)
#define arguments_ODY_PCIERCX_PL32G_TMOD_TS_DATA2(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_pm_cap_id
 *
 * PCIe RC Power Management Capability ID Register
 */
union ody_pciercx_pm_cap_id {
	uint32_t u;
	struct ody_pciercx_pm_cap_id_s {
		uint32_t pmcid                       : 8;
		uint32_t ncp                         : 8;
		uint32_t pmsv                        : 3;
		uint32_t pme_clock                   : 1;
		uint32_t reserved_20                 : 1;
		uint32_t dsi                         : 1;
		uint32_t auxc                        : 3;
		uint32_t d1s                         : 1;
		uint32_t d2s                         : 1;
		uint32_t pmes                        : 5;
	} s;
	/* struct ody_pciercx_pm_cap_id_s cn; */
};
typedef union ody_pciercx_pm_cap_id ody_pciercx_pm_cap_id_t;

static inline uint64_t ODY_PCIERCX_PM_CAP_ID(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_PM_CAP_ID(uint64_t a)
{
	if (a <= 15)
		return 0x40;
	__ody_csr_fatal("PCIERCX_PM_CAP_ID", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_PM_CAP_ID(a) ody_pciercx_pm_cap_id_t
#define bustype_ODY_PCIERCX_PM_CAP_ID(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_PM_CAP_ID(a) "PCIERCX_PM_CAP_ID"
#define busnum_ODY_PCIERCX_PM_CAP_ID(a) (a)
#define arguments_ODY_PCIERCX_PM_CAP_ID(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_pm_ctl
 *
 * PCIe RC Power Management Control and Status Register
 */
union ody_pciercx_pm_ctl {
	uint32_t u;
	struct ody_pciercx_pm_ctl_s {
		uint32_t ps                          : 2;
		uint32_t reserved_2                  : 1;
		uint32_t nsr                         : 1;
		uint32_t reserved_4_7                : 4;
		uint32_t pmeens                      : 1;
		uint32_t pmds                        : 4;
		uint32_t pmedsia                     : 2;
		uint32_t pmess                       : 1;
		uint32_t reserved_16_21              : 6;
		uint32_t bd3h                        : 1;
		uint32_t bpccee                      : 1;
		uint32_t pmdia                       : 8;
	} s;
	/* struct ody_pciercx_pm_ctl_s cn; */
};
typedef union ody_pciercx_pm_ctl ody_pciercx_pm_ctl_t;

static inline uint64_t ODY_PCIERCX_PM_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_PM_CTL(uint64_t a)
{
	if (a <= 15)
		return 0x44;
	__ody_csr_fatal("PCIERCX_PM_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_PM_CTL(a) ody_pciercx_pm_ctl_t
#define bustype_ODY_PCIERCX_PM_CTL(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_PM_CTL(a) "PCIERCX_PM_CTL"
#define busnum_ODY_PCIERCX_PM_CTL(a) (a)
#define arguments_ODY_PCIERCX_PM_CTL(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_pmem
 *
 * PCIe RC Prefetchable Memory and Limit Register
 */
union ody_pciercx_pmem {
	uint32_t u;
	struct ody_pciercx_pmem_s {
		uint32_t mem64a                      : 1;
		uint32_t reserved_1_3                : 3;
		uint32_t lmem_base                   : 12;
		uint32_t mem64b                      : 1;
		uint32_t reserved_17_19              : 3;
		uint32_t lmem_limit                  : 12;
	} s;
	/* struct ody_pciercx_pmem_s cn; */
};
typedef union ody_pciercx_pmem ody_pciercx_pmem_t;

static inline uint64_t ODY_PCIERCX_PMEM(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_PMEM(uint64_t a)
{
	if (a <= 15)
		return 0x24;
	__ody_csr_fatal("PCIERCX_PMEM", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_PMEM(a) ody_pciercx_pmem_t
#define bustype_ODY_PCIERCX_PMEM(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_PMEM(a) "PCIERCX_PMEM"
#define busnum_ODY_PCIERCX_PMEM(a) (a)
#define arguments_ODY_PCIERCX_PMEM(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_port_ctl
 *
 * PCIe RC Port Link Control Register
 */
union ody_pciercx_port_ctl {
	uint32_t u;
	struct ody_pciercx_port_ctl_s {
		uint32_t omr                         : 1;
		uint32_t sd                          : 1;
		uint32_t le                          : 1;
		uint32_t ra                          : 1;
		uint32_t reserved_4                  : 1;
		uint32_t dllle                       : 1;
		uint32_t ldis                        : 1;
		uint32_t flm                         : 1;
		uint32_t link_rate                   : 4;
		uint32_t reserved_12_15              : 4;
		uint32_t lme                         : 6;
		uint32_t cle                         : 2;
		uint32_t beacon_en                   : 1;
		uint32_t clcrc_en                    : 1;
		uint32_t ex_synch                    : 1;
		uint32_t xlr_en                      : 1;
		uint32_t reserved_28_31              : 4;
	} s;
	/* struct ody_pciercx_port_ctl_s cn; */
};
typedef union ody_pciercx_port_ctl ody_pciercx_port_ctl_t;

static inline uint64_t ODY_PCIERCX_PORT_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_PORT_CTL(uint64_t a)
{
	if (a <= 15)
		return 0x710;
	__ody_csr_fatal("PCIERCX_PORT_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_PORT_CTL(a) ody_pciercx_port_ctl_t
#define bustype_ODY_PCIERCX_PORT_CTL(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_PORT_CTL(a) "PCIERCX_PORT_CTL"
#define busnum_ODY_PCIERCX_PORT_CTL(a) (a)
#define arguments_ODY_PCIERCX_PORT_CTL(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_port_flink
 *
 * PCIe RC Port Force Link Register
 */
union ody_pciercx_port_flink {
	uint32_t u;
	struct ody_pciercx_port_flink_s {
		uint32_t link_num                    : 8;
		uint32_t forced_ltssm                : 4;
		uint32_t reserved_12_14              : 3;
		uint32_t force_link                  : 1;
		uint32_t link_state                  : 6;
		uint32_t supp_planes_rxei_exit       : 1;
		uint32_t deskew_for_sris             : 1;
		uint32_t reserved_24_31              : 8;
	} s;
	/* struct ody_pciercx_port_flink_s cn; */
};
typedef union ody_pciercx_port_flink ody_pciercx_port_flink_t;

static inline uint64_t ODY_PCIERCX_PORT_FLINK(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_PORT_FLINK(uint64_t a)
{
	if (a <= 15)
		return 0x708;
	__ody_csr_fatal("PCIERCX_PORT_FLINK", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_PORT_FLINK(a) ody_pciercx_port_flink_t
#define bustype_ODY_PCIERCX_PORT_FLINK(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_PORT_FLINK(a) "PCIERCX_PORT_FLINK"
#define busnum_ODY_PCIERCX_PORT_FLINK(a) (a)
#define arguments_ODY_PCIERCX_PORT_FLINK(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_pre_base
 *
 * PCIe RC Prefetchable Base Upper 32 Bits Register
 */
union ody_pciercx_pre_base {
	uint32_t u;
	struct ody_pciercx_pre_base_s {
		uint32_t umem_base                   : 32;
	} s;
	/* struct ody_pciercx_pre_base_s cn; */
};
typedef union ody_pciercx_pre_base ody_pciercx_pre_base_t;

static inline uint64_t ODY_PCIERCX_PRE_BASE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_PRE_BASE(uint64_t a)
{
	if (a <= 15)
		return 0x28;
	__ody_csr_fatal("PCIERCX_PRE_BASE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_PRE_BASE(a) ody_pciercx_pre_base_t
#define bustype_ODY_PCIERCX_PRE_BASE(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_PRE_BASE(a) "PCIERCX_PRE_BASE"
#define busnum_ODY_PCIERCX_PRE_BASE(a) (a)
#define arguments_ODY_PCIERCX_PRE_BASE(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_pre_limit
 *
 * PCIe RC Prefetchable Limit Upper 32 Bits Register
 */
union ody_pciercx_pre_limit {
	uint32_t u;
	struct ody_pciercx_pre_limit_s {
		uint32_t umem_limit                  : 32;
	} s;
	/* struct ody_pciercx_pre_limit_s cn; */
};
typedef union ody_pciercx_pre_limit ody_pciercx_pre_limit_t;

static inline uint64_t ODY_PCIERCX_PRE_LIMIT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_PRE_LIMIT(uint64_t a)
{
	if (a <= 15)
		return 0x2c;
	__ody_csr_fatal("PCIERCX_PRE_LIMIT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_PRE_LIMIT(a) ody_pciercx_pre_limit_t
#define bustype_ODY_PCIERCX_PRE_LIMIT(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_PRE_LIMIT(a) "PCIERCX_PRE_LIMIT"
#define busnum_ODY_PCIERCX_PRE_LIMIT(a) (a)
#define arguments_ODY_PCIERCX_PRE_LIMIT(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_ptm_cap
 *
 * PCIe RC Precision Time Measurement Capabilities Register
 */
union ody_pciercx_ptm_cap {
	uint32_t u;
	struct ody_pciercx_ptm_cap_s {
		uint32_t rqc                         : 1;
		uint32_t rsc                         : 1;
		uint32_t rtc                         : 1;
		uint32_t eptm                        : 1;
		uint32_t reserved_4_7                : 4;
		uint32_t clkg                        : 8;
		uint32_t reserved_16_31              : 16;
	} s;
	/* struct ody_pciercx_ptm_cap_s cn; */
};
typedef union ody_pciercx_ptm_cap ody_pciercx_ptm_cap_t;

static inline uint64_t ODY_PCIERCX_PTM_CAP(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_PTM_CAP(uint64_t a)
{
	if (a <= 15)
		return 0x3b4;
	__ody_csr_fatal("PCIERCX_PTM_CAP", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_PTM_CAP(a) ody_pciercx_ptm_cap_t
#define bustype_ODY_PCIERCX_PTM_CAP(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_PTM_CAP(a) "PCIERCX_PTM_CAP"
#define busnum_ODY_PCIERCX_PTM_CAP(a) (a)
#define arguments_ODY_PCIERCX_PTM_CAP(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_ptm_ctl
 *
 * PCIe RC Precision Time Measurement Control Register
 */
union ody_pciercx_ptm_ctl {
	uint32_t u;
	struct ody_pciercx_ptm_ctl_s {
		uint32_t en                          : 1;
		uint32_t rt_sel                      : 1;
		uint32_t reserved_2_7                : 6;
		uint32_t eff_gran                    : 8;
		uint32_t reserved_16_31              : 16;
	} s;
	/* struct ody_pciercx_ptm_ctl_s cn; */
};
typedef union ody_pciercx_ptm_ctl ody_pciercx_ptm_ctl_t;

static inline uint64_t ODY_PCIERCX_PTM_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_PTM_CTL(uint64_t a)
{
	if (a <= 15)
		return 0x3b8;
	__ody_csr_fatal("PCIERCX_PTM_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_PTM_CTL(a) ody_pciercx_ptm_ctl_t
#define bustype_ODY_PCIERCX_PTM_CTL(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_PTM_CTL(a) "PCIERCX_PTM_CTL"
#define busnum_ODY_PCIERCX_PTM_CTL(a) (a)
#define arguments_ODY_PCIERCX_PTM_CTL(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_ptm_ext_cap_hdr
 *
 * PCIe RC Precision Time Measurement Capability Header Register
 */
union ody_pciercx_ptm_ext_cap_hdr {
	uint32_t u;
	struct ody_pciercx_ptm_ext_cap_hdr_s {
		uint32_t pcieec                      : 16;
		uint32_t cv                          : 4;
		uint32_t nco                         : 12;
	} s;
	/* struct ody_pciercx_ptm_ext_cap_hdr_s cn; */
};
typedef union ody_pciercx_ptm_ext_cap_hdr ody_pciercx_ptm_ext_cap_hdr_t;

static inline uint64_t ODY_PCIERCX_PTM_EXT_CAP_HDR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_PTM_EXT_CAP_HDR(uint64_t a)
{
	if (a <= 15)
		return 0x3b0;
	__ody_csr_fatal("PCIERCX_PTM_EXT_CAP_HDR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_PTM_EXT_CAP_HDR(a) ody_pciercx_ptm_ext_cap_hdr_t
#define bustype_ODY_PCIERCX_PTM_EXT_CAP_HDR(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_PTM_EXT_CAP_HDR(a) "PCIERCX_PTM_EXT_CAP_HDR"
#define busnum_ODY_PCIERCX_PTM_EXT_CAP_HDR(a) (a)
#define arguments_ODY_PCIERCX_PTM_EXT_CAP_HDR(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_ptm_res_cap_hdr
 *
 * PCIe RC Precision Time Measurement Responder Capability Header Register
 */
union ody_pciercx_ptm_res_cap_hdr {
	uint32_t u;
	struct ody_pciercx_ptm_res_cap_hdr_s {
		uint32_t pcieec                      : 16;
		uint32_t cv                          : 4;
		uint32_t nco                         : 12;
	} s;
	/* struct ody_pciercx_ptm_res_cap_hdr_s cn; */
};
typedef union ody_pciercx_ptm_res_cap_hdr ody_pciercx_ptm_res_cap_hdr_t;

static inline uint64_t ODY_PCIERCX_PTM_RES_CAP_HDR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_PTM_RES_CAP_HDR(uint64_t a)
{
	if (a <= 15)
		return 0x3bc;
	__ody_csr_fatal("PCIERCX_PTM_RES_CAP_HDR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_PTM_RES_CAP_HDR(a) ody_pciercx_ptm_res_cap_hdr_t
#define bustype_ODY_PCIERCX_PTM_RES_CAP_HDR(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_PTM_RES_CAP_HDR(a) "PCIERCX_PTM_RES_CAP_HDR"
#define busnum_ODY_PCIERCX_PTM_RES_CAP_HDR(a) (a)
#define arguments_ODY_PCIERCX_PTM_RES_CAP_HDR(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_ptm_res_ctl
 *
 * PCIe RC Precision Time Measurement Responder Control Register
 */
union ody_pciercx_ptm_res_ctl {
	uint32_t u;
	struct ody_pciercx_ptm_res_ctl_s {
		uint32_t pres_ctx_vld                : 1;
		uint32_t pd_byterev                  : 1;
		uint32_t reserved_2_31               : 30;
	} s;
	/* struct ody_pciercx_ptm_res_ctl_s cn; */
};
typedef union ody_pciercx_ptm_res_ctl ody_pciercx_ptm_res_ctl_t;

static inline uint64_t ODY_PCIERCX_PTM_RES_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_PTM_RES_CTL(uint64_t a)
{
	if (a <= 15)
		return 0x3c4;
	__ody_csr_fatal("PCIERCX_PTM_RES_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_PTM_RES_CTL(a) ody_pciercx_ptm_res_ctl_t
#define bustype_ODY_PCIERCX_PTM_RES_CTL(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_PTM_RES_CTL(a) "PCIERCX_PTM_RES_CTL"
#define busnum_ODY_PCIERCX_PTM_RES_CTL(a) (a)
#define arguments_ODY_PCIERCX_PTM_RES_CTL(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_ptm_res_hdr
 *
 * PCIe RC Precision Time Measurement Responder Vendor Specific Header Register
 */
union ody_pciercx_ptm_res_hdr {
	uint32_t u;
	struct ody_pciercx_ptm_res_hdr_s {
		uint32_t vid                         : 16;
		uint32_t vrev                        : 4;
		uint32_t vlen                        : 12;
	} s;
	/* struct ody_pciercx_ptm_res_hdr_s cn; */
};
typedef union ody_pciercx_ptm_res_hdr ody_pciercx_ptm_res_hdr_t;

static inline uint64_t ODY_PCIERCX_PTM_RES_HDR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_PTM_RES_HDR(uint64_t a)
{
	if (a <= 15)
		return 0x3c0;
	__ody_csr_fatal("PCIERCX_PTM_RES_HDR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_PTM_RES_HDR(a) ody_pciercx_ptm_res_hdr_t
#define bustype_ODY_PCIERCX_PTM_RES_HDR(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_PTM_RES_HDR(a) "PCIERCX_PTM_RES_HDR"
#define busnum_ODY_PCIERCX_PTM_RES_HDR(a) (a)
#define arguments_ODY_PCIERCX_PTM_RES_HDR(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_ptm_res_latency_sel
 *
 * PCIe RC PTM Responder Latency Register Select Register
 */
union ody_pciercx_ptm_res_latency_sel {
	uint32_t u;
	struct ody_pciercx_ptm_res_latency_sel_s {
		uint32_t lat_reg_sel                 : 4;
		uint32_t reserved_4_31               : 28;
	} s;
	/* struct ody_pciercx_ptm_res_latency_sel_s cn; */
};
typedef union ody_pciercx_ptm_res_latency_sel ody_pciercx_ptm_res_latency_sel_t;

static inline uint64_t ODY_PCIERCX_PTM_RES_LATENCY_SEL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_PTM_RES_LATENCY_SEL(uint64_t a)
{
	if (a <= 15)
		return 0x404;
	__ody_csr_fatal("PCIERCX_PTM_RES_LATENCY_SEL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_PTM_RES_LATENCY_SEL(a) ody_pciercx_ptm_res_latency_sel_t
#define bustype_ODY_PCIERCX_PTM_RES_LATENCY_SEL(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_PTM_RES_LATENCY_SEL(a) "PCIERCX_PTM_RES_LATENCY_SEL"
#define busnum_ODY_PCIERCX_PTM_RES_LATENCY_SEL(a) (a)
#define arguments_ODY_PCIERCX_PTM_RES_LATENCY_SEL(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_ptm_res_local_lsb
 *
 * PCIe RC PTM Responder Local Clock LSB Register
 */
union ody_pciercx_ptm_res_local_lsb {
	uint32_t u;
	struct ody_pciercx_ptm_res_local_lsb_s {
		uint32_t clk_lsb                     : 32;
	} s;
	/* struct ody_pciercx_ptm_res_local_lsb_s cn; */
};
typedef union ody_pciercx_ptm_res_local_lsb ody_pciercx_ptm_res_local_lsb_t;

static inline uint64_t ODY_PCIERCX_PTM_RES_LOCAL_LSB(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_PTM_RES_LOCAL_LSB(uint64_t a)
{
	if (a <= 15)
		return 0x3cc;
	__ody_csr_fatal("PCIERCX_PTM_RES_LOCAL_LSB", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_PTM_RES_LOCAL_LSB(a) ody_pciercx_ptm_res_local_lsb_t
#define bustype_ODY_PCIERCX_PTM_RES_LOCAL_LSB(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_PTM_RES_LOCAL_LSB(a) "PCIERCX_PTM_RES_LOCAL_LSB"
#define busnum_ODY_PCIERCX_PTM_RES_LOCAL_LSB(a) (a)
#define arguments_ODY_PCIERCX_PTM_RES_LOCAL_LSB(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_ptm_res_local_msb
 *
 * PCIe RC PTM Responder Local Clock MSB Register
 */
union ody_pciercx_ptm_res_local_msb {
	uint32_t u;
	struct ody_pciercx_ptm_res_local_msb_s {
		uint32_t clk_msb                     : 32;
	} s;
	/* struct ody_pciercx_ptm_res_local_msb_s cn; */
};
typedef union ody_pciercx_ptm_res_local_msb ody_pciercx_ptm_res_local_msb_t;

static inline uint64_t ODY_PCIERCX_PTM_RES_LOCAL_MSB(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_PTM_RES_LOCAL_MSB(uint64_t a)
{
	if (a <= 15)
		return 0x3d0;
	__ody_csr_fatal("PCIERCX_PTM_RES_LOCAL_MSB", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_PTM_RES_LOCAL_MSB(a) ody_pciercx_ptm_res_local_msb_t
#define bustype_ODY_PCIERCX_PTM_RES_LOCAL_MSB(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_PTM_RES_LOCAL_MSB(a) "PCIERCX_PTM_RES_LOCAL_MSB"
#define busnum_ODY_PCIERCX_PTM_RES_LOCAL_MSB(a) (a)
#define arguments_ODY_PCIERCX_PTM_RES_LOCAL_MSB(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_ptm_res_nom_clk_t
 *
 * PCIe RC PTM Responder Nominal Clock Period Register
 */
union ody_pciercx_ptm_res_nom_clk_t {
	uint32_t u;
	struct ody_pciercx_ptm_res_nom_clk_t_s {
		uint32_t clk_t_frac                  : 16;
		uint32_t clk_t_int                   : 8;
		uint32_t reserved_24_31              : 8;
	} s;
	/* struct ody_pciercx_ptm_res_nom_clk_t_s cn; */
};
typedef union ody_pciercx_ptm_res_nom_clk_t ody_pciercx_ptm_res_nom_clk_t_t;

static inline uint64_t ODY_PCIERCX_PTM_RES_NOM_CLK_T(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_PTM_RES_NOM_CLK_T(uint64_t a)
{
	if (a <= 15)
		return 0x3fc;
	__ody_csr_fatal("PCIERCX_PTM_RES_NOM_CLK_T", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_PTM_RES_NOM_CLK_T(a) ody_pciercx_ptm_res_nom_clk_t_t
#define bustype_ODY_PCIERCX_PTM_RES_NOM_CLK_T(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_PTM_RES_NOM_CLK_T(a) "PCIERCX_PTM_RES_NOM_CLK_T"
#define busnum_ODY_PCIERCX_PTM_RES_NOM_CLK_T(a) (a)
#define arguments_ODY_PCIERCX_PTM_RES_NOM_CLK_T(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_ptm_res_rx_latency
 *
 * PCIe RC PTM Responder RX Latency Register
 */
union ody_pciercx_ptm_res_rx_latency {
	uint32_t u;
	struct ody_pciercx_ptm_res_rx_latency_s {
		uint32_t rx_lat                      : 12;
		uint32_t reserved_12_31              : 20;
	} s;
	/* struct ody_pciercx_ptm_res_rx_latency_s cn; */
};
typedef union ody_pciercx_ptm_res_rx_latency ody_pciercx_ptm_res_rx_latency_t;

static inline uint64_t ODY_PCIERCX_PTM_RES_RX_LATENCY(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_PTM_RES_RX_LATENCY(uint64_t a)
{
	if (a <= 15)
		return 0x3f8;
	__ody_csr_fatal("PCIERCX_PTM_RES_RX_LATENCY", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_PTM_RES_RX_LATENCY(a) ody_pciercx_ptm_res_rx_latency_t
#define bustype_ODY_PCIERCX_PTM_RES_RX_LATENCY(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_PTM_RES_RX_LATENCY(a) "PCIERCX_PTM_RES_RX_LATENCY"
#define busnum_ODY_PCIERCX_PTM_RES_RX_LATENCY(a) (a)
#define arguments_ODY_PCIERCX_PTM_RES_RX_LATENCY(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_ptm_res_scaled_clk_t
 *
 * PCIe RC PTM Responder Scaled Clock Period Register
 */
union ody_pciercx_ptm_res_scaled_clk_t {
	uint32_t u;
	struct ody_pciercx_ptm_res_scaled_clk_t_s {
		uint32_t sclk_t_frac                 : 16;
		uint32_t sclk_t_int                  : 8;
		uint32_t reserved_24_30              : 7;
		uint32_t sclk_t_en                   : 1;
	} s;
	/* struct ody_pciercx_ptm_res_scaled_clk_t_s cn; */
};
typedef union ody_pciercx_ptm_res_scaled_clk_t ody_pciercx_ptm_res_scaled_clk_t_t;

static inline uint64_t ODY_PCIERCX_PTM_RES_SCALED_CLK_T(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_PTM_RES_SCALED_CLK_T(uint64_t a)
{
	if (a <= 15)
		return 0x400;
	__ody_csr_fatal("PCIERCX_PTM_RES_SCALED_CLK_T", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_PTM_RES_SCALED_CLK_T(a) ody_pciercx_ptm_res_scaled_clk_t_t
#define bustype_ODY_PCIERCX_PTM_RES_SCALED_CLK_T(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_PTM_RES_SCALED_CLK_T(a) "PCIERCX_PTM_RES_SCALED_CLK_T"
#define busnum_ODY_PCIERCX_PTM_RES_SCALED_CLK_T(a) (a)
#define arguments_ODY_PCIERCX_PTM_RES_SCALED_CLK_T(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_ptm_res_status
 *
 * PCIe RC PTM Responder Status Register
 */
union ody_pciercx_ptm_res_status {
	uint32_t u;
	struct ody_pciercx_ptm_res_status_s {
		uint32_t ctxt_vld                    : 1;
		uint32_t first_req_rcv               : 1;
		uint32_t reserved_2_31               : 30;
	} s;
	/* struct ody_pciercx_ptm_res_status_s cn; */
};
typedef union ody_pciercx_ptm_res_status ody_pciercx_ptm_res_status_t;

static inline uint64_t ODY_PCIERCX_PTM_RES_STATUS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_PTM_RES_STATUS(uint64_t a)
{
	if (a <= 15)
		return 0x3c8;
	__ody_csr_fatal("PCIERCX_PTM_RES_STATUS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_PTM_RES_STATUS(a) ody_pciercx_ptm_res_status_t
#define bustype_ODY_PCIERCX_PTM_RES_STATUS(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_PTM_RES_STATUS(a) "PCIERCX_PTM_RES_STATUS"
#define busnum_ODY_PCIERCX_PTM_RES_STATUS(a) (a)
#define arguments_ODY_PCIERCX_PTM_RES_STATUS(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_ptm_res_t2_lsb
 *
 * PCIe RC PTM Responder T2 Timestamp LSB Register
 */
union ody_pciercx_ptm_res_t2_lsb {
	uint32_t u;
	struct ody_pciercx_ptm_res_t2_lsb_s {
		uint32_t ts_lsb                      : 32;
	} s;
	/* struct ody_pciercx_ptm_res_t2_lsb_s cn; */
};
typedef union ody_pciercx_ptm_res_t2_lsb ody_pciercx_ptm_res_t2_lsb_t;

static inline uint64_t ODY_PCIERCX_PTM_RES_T2_LSB(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_PTM_RES_T2_LSB(uint64_t a)
{
	if (a <= 15)
		return 0x3d4;
	__ody_csr_fatal("PCIERCX_PTM_RES_T2_LSB", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_PTM_RES_T2_LSB(a) ody_pciercx_ptm_res_t2_lsb_t
#define bustype_ODY_PCIERCX_PTM_RES_T2_LSB(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_PTM_RES_T2_LSB(a) "PCIERCX_PTM_RES_T2_LSB"
#define busnum_ODY_PCIERCX_PTM_RES_T2_LSB(a) (a)
#define arguments_ODY_PCIERCX_PTM_RES_T2_LSB(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_ptm_res_t2_msb
 *
 * PCIe RC PTM Responder T2 Timestamp MSB Register
 */
union ody_pciercx_ptm_res_t2_msb {
	uint32_t u;
	struct ody_pciercx_ptm_res_t2_msb_s {
		uint32_t ts_msb                      : 32;
	} s;
	/* struct ody_pciercx_ptm_res_t2_msb_s cn; */
};
typedef union ody_pciercx_ptm_res_t2_msb ody_pciercx_ptm_res_t2_msb_t;

static inline uint64_t ODY_PCIERCX_PTM_RES_T2_MSB(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_PTM_RES_T2_MSB(uint64_t a)
{
	if (a <= 15)
		return 0x3d8;
	__ody_csr_fatal("PCIERCX_PTM_RES_T2_MSB", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_PTM_RES_T2_MSB(a) ody_pciercx_ptm_res_t2_msb_t
#define bustype_ODY_PCIERCX_PTM_RES_T2_MSB(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_PTM_RES_T2_MSB(a) "PCIERCX_PTM_RES_T2_MSB"
#define busnum_ODY_PCIERCX_PTM_RES_T2_MSB(a) (a)
#define arguments_ODY_PCIERCX_PTM_RES_T2_MSB(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_ptm_res_t2p_lsb
 *
 * PCIe RC PTM Responder T2 Previous Timestamp LSB Register
 */
union ody_pciercx_ptm_res_t2p_lsb {
	uint32_t u;
	struct ody_pciercx_ptm_res_t2p_lsb_s {
		uint32_t t2p_lsb                     : 32;
	} s;
	/* struct ody_pciercx_ptm_res_t2p_lsb_s cn; */
};
typedef union ody_pciercx_ptm_res_t2p_lsb ody_pciercx_ptm_res_t2p_lsb_t;

static inline uint64_t ODY_PCIERCX_PTM_RES_T2P_LSB(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_PTM_RES_T2P_LSB(uint64_t a)
{
	if (a <= 15)
		return 0x3dc;
	__ody_csr_fatal("PCIERCX_PTM_RES_T2P_LSB", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_PTM_RES_T2P_LSB(a) ody_pciercx_ptm_res_t2p_lsb_t
#define bustype_ODY_PCIERCX_PTM_RES_T2P_LSB(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_PTM_RES_T2P_LSB(a) "PCIERCX_PTM_RES_T2P_LSB"
#define busnum_ODY_PCIERCX_PTM_RES_T2P_LSB(a) (a)
#define arguments_ODY_PCIERCX_PTM_RES_T2P_LSB(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_ptm_res_t2p_msb
 *
 * PCIe RC PTM Responder T2 Previous Timestamp MSB Register
 */
union ody_pciercx_ptm_res_t2p_msb {
	uint32_t u;
	struct ody_pciercx_ptm_res_t2p_msb_s {
		uint32_t t2p_msb                     : 32;
	} s;
	/* struct ody_pciercx_ptm_res_t2p_msb_s cn; */
};
typedef union ody_pciercx_ptm_res_t2p_msb ody_pciercx_ptm_res_t2p_msb_t;

static inline uint64_t ODY_PCIERCX_PTM_RES_T2P_MSB(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_PTM_RES_T2P_MSB(uint64_t a)
{
	if (a <= 15)
		return 0x3e0;
	__ody_csr_fatal("PCIERCX_PTM_RES_T2P_MSB", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_PTM_RES_T2P_MSB(a) ody_pciercx_ptm_res_t2p_msb_t
#define bustype_ODY_PCIERCX_PTM_RES_T2P_MSB(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_PTM_RES_T2P_MSB(a) "PCIERCX_PTM_RES_T2P_MSB"
#define busnum_ODY_PCIERCX_PTM_RES_T2P_MSB(a) (a)
#define arguments_ODY_PCIERCX_PTM_RES_T2P_MSB(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_ptm_res_t3_lsb
 *
 * PCIe RC PTM Responder T3 Timestamp LSB Register
 */
union ody_pciercx_ptm_res_t3_lsb {
	uint32_t u;
	struct ody_pciercx_ptm_res_t3_lsb_s {
		uint32_t t3_lsb                      : 32;
	} s;
	/* struct ody_pciercx_ptm_res_t3_lsb_s cn; */
};
typedef union ody_pciercx_ptm_res_t3_lsb ody_pciercx_ptm_res_t3_lsb_t;

static inline uint64_t ODY_PCIERCX_PTM_RES_T3_LSB(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_PTM_RES_T3_LSB(uint64_t a)
{
	if (a <= 15)
		return 0x3e4;
	__ody_csr_fatal("PCIERCX_PTM_RES_T3_LSB", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_PTM_RES_T3_LSB(a) ody_pciercx_ptm_res_t3_lsb_t
#define bustype_ODY_PCIERCX_PTM_RES_T3_LSB(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_PTM_RES_T3_LSB(a) "PCIERCX_PTM_RES_T3_LSB"
#define busnum_ODY_PCIERCX_PTM_RES_T3_LSB(a) (a)
#define arguments_ODY_PCIERCX_PTM_RES_T3_LSB(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_ptm_res_t3_msb
 *
 * PCIe RC PTM Responder T3 Timestamp MSB Register
 */
union ody_pciercx_ptm_res_t3_msb {
	uint32_t u;
	struct ody_pciercx_ptm_res_t3_msb_s {
		uint32_t t3                          : 32;
	} s;
	/* struct ody_pciercx_ptm_res_t3_msb_s cn; */
};
typedef union ody_pciercx_ptm_res_t3_msb ody_pciercx_ptm_res_t3_msb_t;

static inline uint64_t ODY_PCIERCX_PTM_RES_T3_MSB(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_PTM_RES_T3_MSB(uint64_t a)
{
	if (a <= 15)
		return 0x3e8;
	__ody_csr_fatal("PCIERCX_PTM_RES_T3_MSB", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_PTM_RES_T3_MSB(a) ody_pciercx_ptm_res_t3_msb_t
#define bustype_ODY_PCIERCX_PTM_RES_T3_MSB(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_PTM_RES_T3_MSB(a) "PCIERCX_PTM_RES_T3_MSB"
#define busnum_ODY_PCIERCX_PTM_RES_T3_MSB(a) (a)
#define arguments_ODY_PCIERCX_PTM_RES_T3_MSB(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_ptm_res_t3p_lsb
 *
 * PCIe RC PTM Responder T3 Previous Timestamp LSB Register
 */
union ody_pciercx_ptm_res_t3p_lsb {
	uint32_t u;
	struct ody_pciercx_ptm_res_t3p_lsb_s {
		uint32_t t3p_lsb                     : 32;
	} s;
	/* struct ody_pciercx_ptm_res_t3p_lsb_s cn; */
};
typedef union ody_pciercx_ptm_res_t3p_lsb ody_pciercx_ptm_res_t3p_lsb_t;

static inline uint64_t ODY_PCIERCX_PTM_RES_T3P_LSB(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_PTM_RES_T3P_LSB(uint64_t a)
{
	if (a <= 15)
		return 0x3ec;
	__ody_csr_fatal("PCIERCX_PTM_RES_T3P_LSB", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_PTM_RES_T3P_LSB(a) ody_pciercx_ptm_res_t3p_lsb_t
#define bustype_ODY_PCIERCX_PTM_RES_T3P_LSB(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_PTM_RES_T3P_LSB(a) "PCIERCX_PTM_RES_T3P_LSB"
#define busnum_ODY_PCIERCX_PTM_RES_T3P_LSB(a) (a)
#define arguments_ODY_PCIERCX_PTM_RES_T3P_LSB(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_ptm_res_t3p_msb
 *
 * PCIe RC PTM Responder T3 Previous Timestamp MSB Register
 */
union ody_pciercx_ptm_res_t3p_msb {
	uint32_t u;
	struct ody_pciercx_ptm_res_t3p_msb_s {
		uint32_t t3p_msb                     : 32;
	} s;
	/* struct ody_pciercx_ptm_res_t3p_msb_s cn; */
};
typedef union ody_pciercx_ptm_res_t3p_msb ody_pciercx_ptm_res_t3p_msb_t;

static inline uint64_t ODY_PCIERCX_PTM_RES_T3P_MSB(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_PTM_RES_T3P_MSB(uint64_t a)
{
	if (a <= 15)
		return 0x3f0;
	__ody_csr_fatal("PCIERCX_PTM_RES_T3P_MSB", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_PTM_RES_T3P_MSB(a) ody_pciercx_ptm_res_t3p_msb_t
#define bustype_ODY_PCIERCX_PTM_RES_T3P_MSB(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_PTM_RES_T3P_MSB(a) "PCIERCX_PTM_RES_T3P_MSB"
#define busnum_ODY_PCIERCX_PTM_RES_T3P_MSB(a) (a)
#define arguments_ODY_PCIERCX_PTM_RES_T3P_MSB(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_ptm_res_tx_latency
 *
 * PCIe RC PTM Responder TX Latency Register
 */
union ody_pciercx_ptm_res_tx_latency {
	uint32_t u;
	struct ody_pciercx_ptm_res_tx_latency_s {
		uint32_t tx_lat                      : 12;
		uint32_t reserved_12_31              : 20;
	} s;
	/* struct ody_pciercx_ptm_res_tx_latency_s cn; */
};
typedef union ody_pciercx_ptm_res_tx_latency ody_pciercx_ptm_res_tx_latency_t;

static inline uint64_t ODY_PCIERCX_PTM_RES_TX_LATENCY(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_PTM_RES_TX_LATENCY(uint64_t a)
{
	if (a <= 15)
		return 0x3f4;
	__ody_csr_fatal("PCIERCX_PTM_RES_TX_LATENCY", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_PTM_RES_TX_LATENCY(a) ody_pciercx_ptm_res_tx_latency_t
#define bustype_ODY_PCIERCX_PTM_RES_TX_LATENCY(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_PTM_RES_TX_LATENCY(a) "PCIERCX_PTM_RES_TX_LATENCY"
#define busnum_ODY_PCIERCX_PTM_RES_TX_LATENCY(a) (a)
#define arguments_ODY_PCIERCX_PTM_RES_TX_LATENCY(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_queue_status
 *
 * PCIe RC Queue Status Register
 */
union ody_pciercx_queue_status {
	uint32_t u;
	struct ody_pciercx_queue_status_s {
		uint32_t rtlpfccnr                   : 1;
		uint32_t trbne                       : 1;
		uint32_t rqne                        : 1;
		uint32_t rqof                        : 1;
		uint32_t reserved_4_12               : 9;
		uint32_t rsqne                       : 1;
		uint32_t rsqwe                       : 1;
		uint32_t rsqre                       : 1;
		uint32_t fcltov                      : 13;
		uint32_t reserved_29_30              : 2;
		uint32_t fcltoe                      : 1;
	} s;
	/* struct ody_pciercx_queue_status_s cn; */
};
typedef union ody_pciercx_queue_status ody_pciercx_queue_status_t;

static inline uint64_t ODY_PCIERCX_QUEUE_STATUS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_QUEUE_STATUS(uint64_t a)
{
	if (a <= 15)
		return 0x73c;
	__ody_csr_fatal("PCIERCX_QUEUE_STATUS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_QUEUE_STATUS(a) ody_pciercx_queue_status_t
#define bustype_ODY_PCIERCX_QUEUE_STATUS(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_QUEUE_STATUS(a) "PCIERCX_QUEUE_STATUS"
#define busnum_ODY_PCIERCX_QUEUE_STATUS(a) (a)
#define arguments_ODY_PCIERCX_QUEUE_STATUS(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_ras_des_cap_hdr
 *
 * PCIe RC Vendor Specific RAS DES Capability Header Register
 */
union ody_pciercx_ras_des_cap_hdr {
	uint32_t u;
	struct ody_pciercx_ras_des_cap_hdr_s {
		uint32_t pcieec                      : 16;
		uint32_t cv                          : 4;
		uint32_t nco                         : 12;
	} s;
	/* struct ody_pciercx_ras_des_cap_hdr_s cn; */
};
typedef union ody_pciercx_ras_des_cap_hdr ody_pciercx_ras_des_cap_hdr_t;

static inline uint64_t ODY_PCIERCX_RAS_DES_CAP_HDR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_RAS_DES_CAP_HDR(uint64_t a)
{
	if (a <= 15)
		return 0x26c;
	__ody_csr_fatal("PCIERCX_RAS_DES_CAP_HDR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_RAS_DES_CAP_HDR(a) ody_pciercx_ras_des_cap_hdr_t
#define bustype_ODY_PCIERCX_RAS_DES_CAP_HDR(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_RAS_DES_CAP_HDR(a) "PCIERCX_RAS_DES_CAP_HDR"
#define busnum_ODY_PCIERCX_RAS_DES_CAP_HDR(a) (a)
#define arguments_ODY_PCIERCX_RAS_DES_CAP_HDR(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_ras_ec_ctl
 *
 * PCIe RC Vendor RAS DES Event Counter Control Register
 */
union ody_pciercx_ras_ec_ctl {
	uint32_t u;
	struct ody_pciercx_ras_ec_ctl_s {
		uint32_t ev_cntr_clr                 : 2;
		uint32_t ev_cntr_en                  : 3;
		uint32_t reserved_5_6                : 2;
		uint32_t ev_cntr_stat                : 1;
		uint32_t ev_cntr_lane_sel            : 4;
		uint32_t reserved_12_15              : 4;
		uint32_t ev_cntr_data_sel            : 12;
		uint32_t reserved_28_31              : 4;
	} s;
	/* struct ody_pciercx_ras_ec_ctl_s cn; */
};
typedef union ody_pciercx_ras_ec_ctl ody_pciercx_ras_ec_ctl_t;

static inline uint64_t ODY_PCIERCX_RAS_EC_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_RAS_EC_CTL(uint64_t a)
{
	if (a <= 15)
		return 0x274;
	__ody_csr_fatal("PCIERCX_RAS_EC_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_RAS_EC_CTL(a) ody_pciercx_ras_ec_ctl_t
#define bustype_ODY_PCIERCX_RAS_EC_CTL(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_RAS_EC_CTL(a) "PCIERCX_RAS_EC_CTL"
#define busnum_ODY_PCIERCX_RAS_EC_CTL(a) (a)
#define arguments_ODY_PCIERCX_RAS_EC_CTL(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_ras_ec_data
 *
 * PCIe RC Vendor RAS DES Data Register
 */
union ody_pciercx_ras_ec_data {
	uint32_t u;
	struct ody_pciercx_ras_ec_data_s {
		uint32_t ev_cntr_data                : 32;
	} s;
	/* struct ody_pciercx_ras_ec_data_s cn; */
};
typedef union ody_pciercx_ras_ec_data ody_pciercx_ras_ec_data_t;

static inline uint64_t ODY_PCIERCX_RAS_EC_DATA(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_RAS_EC_DATA(uint64_t a)
{
	if (a <= 15)
		return 0x278;
	__ody_csr_fatal("PCIERCX_RAS_EC_DATA", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_RAS_EC_DATA(a) ody_pciercx_ras_ec_data_t
#define bustype_ODY_PCIERCX_RAS_EC_DATA(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_RAS_EC_DATA(a) "PCIERCX_RAS_EC_DATA"
#define busnum_ODY_PCIERCX_RAS_EC_DATA(a) (a)
#define arguments_ODY_PCIERCX_RAS_EC_DATA(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_ras_einj_ctl0
 *
 * PCIe RC Vendor RAS DES Error Injection Control 0 (CRC) Register
 */
union ody_pciercx_ras_einj_ctl0 {
	uint32_t u;
	struct ody_pciercx_ras_einj_ctl0_s {
		uint32_t einj0_cnt                   : 8;
		uint32_t einj0_crc_type              : 4;
		uint32_t reserved_12_31              : 20;
	} s;
	/* struct ody_pciercx_ras_einj_ctl0_s cn; */
};
typedef union ody_pciercx_ras_einj_ctl0 ody_pciercx_ras_einj_ctl0_t;

static inline uint64_t ODY_PCIERCX_RAS_EINJ_CTL0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_RAS_EINJ_CTL0(uint64_t a)
{
	if (a <= 15)
		return 0x2a0;
	__ody_csr_fatal("PCIERCX_RAS_EINJ_CTL0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_RAS_EINJ_CTL0(a) ody_pciercx_ras_einj_ctl0_t
#define bustype_ODY_PCIERCX_RAS_EINJ_CTL0(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_RAS_EINJ_CTL0(a) "PCIERCX_RAS_EINJ_CTL0"
#define busnum_ODY_PCIERCX_RAS_EINJ_CTL0(a) (a)
#define arguments_ODY_PCIERCX_RAS_EINJ_CTL0(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_ras_einj_ctl1
 *
 * PCIe RC Vendor RAS DES Error Injection Control 1 (SEQNUM) Register
 */
union ody_pciercx_ras_einj_ctl1 {
	uint32_t u;
	struct ody_pciercx_ras_einj_ctl1_s {
		uint32_t einj1_cnt                   : 8;
		uint32_t einj1_seqnum_type           : 1;
		uint32_t reserved_9_15               : 7;
		uint32_t einj1_bad_seqnum            : 13;
		uint32_t reserved_29_31              : 3;
	} s;
	/* struct ody_pciercx_ras_einj_ctl1_s cn; */
};
typedef union ody_pciercx_ras_einj_ctl1 ody_pciercx_ras_einj_ctl1_t;

static inline uint64_t ODY_PCIERCX_RAS_EINJ_CTL1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_RAS_EINJ_CTL1(uint64_t a)
{
	if (a <= 15)
		return 0x2a4;
	__ody_csr_fatal("PCIERCX_RAS_EINJ_CTL1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_RAS_EINJ_CTL1(a) ody_pciercx_ras_einj_ctl1_t
#define bustype_ODY_PCIERCX_RAS_EINJ_CTL1(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_RAS_EINJ_CTL1(a) "PCIERCX_RAS_EINJ_CTL1"
#define busnum_ODY_PCIERCX_RAS_EINJ_CTL1(a) (a)
#define arguments_ODY_PCIERCX_RAS_EINJ_CTL1(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_ras_einj_ctl2
 *
 * PCIe RC Vendor RAS DES Error Injection Control 2 (DLLP) Register
 */
union ody_pciercx_ras_einj_ctl2 {
	uint32_t u;
	struct ody_pciercx_ras_einj_ctl2_s {
		uint32_t einj2_cnt                   : 8;
		uint32_t einj2_dllp_type             : 2;
		uint32_t reserved_10_31              : 22;
	} s;
	/* struct ody_pciercx_ras_einj_ctl2_s cn; */
};
typedef union ody_pciercx_ras_einj_ctl2 ody_pciercx_ras_einj_ctl2_t;

static inline uint64_t ODY_PCIERCX_RAS_EINJ_CTL2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_RAS_EINJ_CTL2(uint64_t a)
{
	if (a <= 15)
		return 0x2a8;
	__ody_csr_fatal("PCIERCX_RAS_EINJ_CTL2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_RAS_EINJ_CTL2(a) ody_pciercx_ras_einj_ctl2_t
#define bustype_ODY_PCIERCX_RAS_EINJ_CTL2(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_RAS_EINJ_CTL2(a) "PCIERCX_RAS_EINJ_CTL2"
#define busnum_ODY_PCIERCX_RAS_EINJ_CTL2(a) (a)
#define arguments_ODY_PCIERCX_RAS_EINJ_CTL2(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_ras_einj_ctl3
 *
 * PCIe RC Vendor RAS DES Error Injection Control 3 (Symbol) Register
 */
union ody_pciercx_ras_einj_ctl3 {
	uint32_t u;
	struct ody_pciercx_ras_einj_ctl3_s {
		uint32_t einj3_cnt                   : 8;
		uint32_t einj3_symbol_type           : 3;
		uint32_t reserved_11_31              : 21;
	} s;
	/* struct ody_pciercx_ras_einj_ctl3_s cn; */
};
typedef union ody_pciercx_ras_einj_ctl3 ody_pciercx_ras_einj_ctl3_t;

static inline uint64_t ODY_PCIERCX_RAS_EINJ_CTL3(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_RAS_EINJ_CTL3(uint64_t a)
{
	if (a <= 15)
		return 0x2ac;
	__ody_csr_fatal("PCIERCX_RAS_EINJ_CTL3", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_RAS_EINJ_CTL3(a) ody_pciercx_ras_einj_ctl3_t
#define bustype_ODY_PCIERCX_RAS_EINJ_CTL3(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_RAS_EINJ_CTL3(a) "PCIERCX_RAS_EINJ_CTL3"
#define busnum_ODY_PCIERCX_RAS_EINJ_CTL3(a) (a)
#define arguments_ODY_PCIERCX_RAS_EINJ_CTL3(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_ras_einj_ctl4
 *
 * PCIe RC Vendor RAS DES Error Injection Control 4 (FC Credit) Register
 */
union ody_pciercx_ras_einj_ctl4 {
	uint32_t u;
	struct ody_pciercx_ras_einj_ctl4_s {
		uint32_t einj4_cnt                   : 8;
		uint32_t einj4_vc_type               : 3;
		uint32_t reserved_11                 : 1;
		uint32_t einj4_vc_num                : 3;
		uint32_t reserved_15                 : 1;
		uint32_t einj4_bad_updfc_val         : 13;
		uint32_t reserved_29_31              : 3;
	} s;
	/* struct ody_pciercx_ras_einj_ctl4_s cn; */
};
typedef union ody_pciercx_ras_einj_ctl4 ody_pciercx_ras_einj_ctl4_t;

static inline uint64_t ODY_PCIERCX_RAS_EINJ_CTL4(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_RAS_EINJ_CTL4(uint64_t a)
{
	if (a <= 15)
		return 0x2b0;
	__ody_csr_fatal("PCIERCX_RAS_EINJ_CTL4", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_RAS_EINJ_CTL4(a) ody_pciercx_ras_einj_ctl4_t
#define bustype_ODY_PCIERCX_RAS_EINJ_CTL4(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_RAS_EINJ_CTL4(a) "PCIERCX_RAS_EINJ_CTL4"
#define busnum_ODY_PCIERCX_RAS_EINJ_CTL4(a) (a)
#define arguments_ODY_PCIERCX_RAS_EINJ_CTL4(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_ras_einj_ctl5
 *
 * PCIe RC Vendor RAS DES Error Injection Control 5 (Specific TLP) Register
 */
union ody_pciercx_ras_einj_ctl5 {
	uint32_t u;
	struct ody_pciercx_ras_einj_ctl5_s {
		uint32_t einj5_cnt                   : 8;
		uint32_t einj5_sp_tlp                : 1;
		uint32_t reserved_9_31               : 23;
	} s;
	/* struct ody_pciercx_ras_einj_ctl5_s cn; */
};
typedef union ody_pciercx_ras_einj_ctl5 ody_pciercx_ras_einj_ctl5_t;

static inline uint64_t ODY_PCIERCX_RAS_EINJ_CTL5(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_RAS_EINJ_CTL5(uint64_t a)
{
	if (a <= 15)
		return 0x2b4;
	__ody_csr_fatal("PCIERCX_RAS_EINJ_CTL5", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_RAS_EINJ_CTL5(a) ody_pciercx_ras_einj_ctl5_t
#define bustype_ODY_PCIERCX_RAS_EINJ_CTL5(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_RAS_EINJ_CTL5(a) "PCIERCX_RAS_EINJ_CTL5"
#define busnum_ODY_PCIERCX_RAS_EINJ_CTL5(a) (a)
#define arguments_ODY_PCIERCX_RAS_EINJ_CTL5(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_ras_einj_ctl6chgp0
 *
 * PCIe RC Vendor RAS DES Error Injection Control 6 (Change Point H0) Register
 */
union ody_pciercx_ras_einj_ctl6chgp0 {
	uint32_t u;
	struct ody_pciercx_ras_einj_ctl6chgp0_s {
		uint32_t einj6_chg_pt_h0             : 32;
	} s;
	/* struct ody_pciercx_ras_einj_ctl6chgp0_s cn; */
};
typedef union ody_pciercx_ras_einj_ctl6chgp0 ody_pciercx_ras_einj_ctl6chgp0_t;

static inline uint64_t ODY_PCIERCX_RAS_EINJ_CTL6CHGP0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_RAS_EINJ_CTL6CHGP0(uint64_t a)
{
	if (a <= 15)
		return 0x2d8;
	__ody_csr_fatal("PCIERCX_RAS_EINJ_CTL6CHGP0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_RAS_EINJ_CTL6CHGP0(a) ody_pciercx_ras_einj_ctl6chgp0_t
#define bustype_ODY_PCIERCX_RAS_EINJ_CTL6CHGP0(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_RAS_EINJ_CTL6CHGP0(a) "PCIERCX_RAS_EINJ_CTL6CHGP0"
#define busnum_ODY_PCIERCX_RAS_EINJ_CTL6CHGP0(a) (a)
#define arguments_ODY_PCIERCX_RAS_EINJ_CTL6CHGP0(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_ras_einj_ctl6chgp1
 *
 * PCIe RC Vendor RAS DES Error Injection Control 6 (Change Point H1) Register
 */
union ody_pciercx_ras_einj_ctl6chgp1 {
	uint32_t u;
	struct ody_pciercx_ras_einj_ctl6chgp1_s {
		uint32_t einj6_chg_pt_h1             : 32;
	} s;
	/* struct ody_pciercx_ras_einj_ctl6chgp1_s cn; */
};
typedef union ody_pciercx_ras_einj_ctl6chgp1 ody_pciercx_ras_einj_ctl6chgp1_t;

static inline uint64_t ODY_PCIERCX_RAS_EINJ_CTL6CHGP1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_RAS_EINJ_CTL6CHGP1(uint64_t a)
{
	if (a <= 15)
		return 0x2dc;
	__ody_csr_fatal("PCIERCX_RAS_EINJ_CTL6CHGP1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_RAS_EINJ_CTL6CHGP1(a) ody_pciercx_ras_einj_ctl6chgp1_t
#define bustype_ODY_PCIERCX_RAS_EINJ_CTL6CHGP1(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_RAS_EINJ_CTL6CHGP1(a) "PCIERCX_RAS_EINJ_CTL6CHGP1"
#define busnum_ODY_PCIERCX_RAS_EINJ_CTL6CHGP1(a) (a)
#define arguments_ODY_PCIERCX_RAS_EINJ_CTL6CHGP1(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_ras_einj_ctl6chgp2
 *
 * PCIe RC Vendor RAS DES Error Injection Control 6 (Change Point H2) Register
 */
union ody_pciercx_ras_einj_ctl6chgp2 {
	uint32_t u;
	struct ody_pciercx_ras_einj_ctl6chgp2_s {
		uint32_t einj6_chg_pt_h2             : 32;
	} s;
	/* struct ody_pciercx_ras_einj_ctl6chgp2_s cn; */
};
typedef union ody_pciercx_ras_einj_ctl6chgp2 ody_pciercx_ras_einj_ctl6chgp2_t;

static inline uint64_t ODY_PCIERCX_RAS_EINJ_CTL6CHGP2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_RAS_EINJ_CTL6CHGP2(uint64_t a)
{
	if (a <= 15)
		return 0x2e0;
	__ody_csr_fatal("PCIERCX_RAS_EINJ_CTL6CHGP2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_RAS_EINJ_CTL6CHGP2(a) ody_pciercx_ras_einj_ctl6chgp2_t
#define bustype_ODY_PCIERCX_RAS_EINJ_CTL6CHGP2(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_RAS_EINJ_CTL6CHGP2(a) "PCIERCX_RAS_EINJ_CTL6CHGP2"
#define busnum_ODY_PCIERCX_RAS_EINJ_CTL6CHGP2(a) (a)
#define arguments_ODY_PCIERCX_RAS_EINJ_CTL6CHGP2(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_ras_einj_ctl6chgp3
 *
 * PCIe RC Vendor RAS DES Error Injection Control 6 (Change Point H3) Register
 */
union ody_pciercx_ras_einj_ctl6chgp3 {
	uint32_t u;
	struct ody_pciercx_ras_einj_ctl6chgp3_s {
		uint32_t einj6_chg_pt_h3             : 32;
	} s;
	/* struct ody_pciercx_ras_einj_ctl6chgp3_s cn; */
};
typedef union ody_pciercx_ras_einj_ctl6chgp3 ody_pciercx_ras_einj_ctl6chgp3_t;

static inline uint64_t ODY_PCIERCX_RAS_EINJ_CTL6CHGP3(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_RAS_EINJ_CTL6CHGP3(uint64_t a)
{
	if (a <= 15)
		return 0x2e4;
	__ody_csr_fatal("PCIERCX_RAS_EINJ_CTL6CHGP3", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_RAS_EINJ_CTL6CHGP3(a) ody_pciercx_ras_einj_ctl6chgp3_t
#define bustype_ODY_PCIERCX_RAS_EINJ_CTL6CHGP3(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_RAS_EINJ_CTL6CHGP3(a) "PCIERCX_RAS_EINJ_CTL6CHGP3"
#define busnum_ODY_PCIERCX_RAS_EINJ_CTL6CHGP3(a) (a)
#define arguments_ODY_PCIERCX_RAS_EINJ_CTL6CHGP3(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_ras_einj_ctl6chgv0
 *
 * PCIe RC Vendor RAS DES Error Injection Control 6 (Change Value H0) Register
 */
union ody_pciercx_ras_einj_ctl6chgv0 {
	uint32_t u;
	struct ody_pciercx_ras_einj_ctl6chgv0_s {
		uint32_t einj6_chg_val_h0            : 32;
	} s;
	/* struct ody_pciercx_ras_einj_ctl6chgv0_s cn; */
};
typedef union ody_pciercx_ras_einj_ctl6chgv0 ody_pciercx_ras_einj_ctl6chgv0_t;

static inline uint64_t ODY_PCIERCX_RAS_EINJ_CTL6CHGV0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_RAS_EINJ_CTL6CHGV0(uint64_t a)
{
	if (a <= 15)
		return 0x2e8;
	__ody_csr_fatal("PCIERCX_RAS_EINJ_CTL6CHGV0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_RAS_EINJ_CTL6CHGV0(a) ody_pciercx_ras_einj_ctl6chgv0_t
#define bustype_ODY_PCIERCX_RAS_EINJ_CTL6CHGV0(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_RAS_EINJ_CTL6CHGV0(a) "PCIERCX_RAS_EINJ_CTL6CHGV0"
#define busnum_ODY_PCIERCX_RAS_EINJ_CTL6CHGV0(a) (a)
#define arguments_ODY_PCIERCX_RAS_EINJ_CTL6CHGV0(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_ras_einj_ctl6chgv1
 *
 * PCIe RC Vendor RAS DES Error Injection Control 6 (Change Value H1) Register
 */
union ody_pciercx_ras_einj_ctl6chgv1 {
	uint32_t u;
	struct ody_pciercx_ras_einj_ctl6chgv1_s {
		uint32_t einj6_chg_val_h1            : 32;
	} s;
	/* struct ody_pciercx_ras_einj_ctl6chgv1_s cn; */
};
typedef union ody_pciercx_ras_einj_ctl6chgv1 ody_pciercx_ras_einj_ctl6chgv1_t;

static inline uint64_t ODY_PCIERCX_RAS_EINJ_CTL6CHGV1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_RAS_EINJ_CTL6CHGV1(uint64_t a)
{
	if (a <= 15)
		return 0x2ec;
	__ody_csr_fatal("PCIERCX_RAS_EINJ_CTL6CHGV1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_RAS_EINJ_CTL6CHGV1(a) ody_pciercx_ras_einj_ctl6chgv1_t
#define bustype_ODY_PCIERCX_RAS_EINJ_CTL6CHGV1(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_RAS_EINJ_CTL6CHGV1(a) "PCIERCX_RAS_EINJ_CTL6CHGV1"
#define busnum_ODY_PCIERCX_RAS_EINJ_CTL6CHGV1(a) (a)
#define arguments_ODY_PCIERCX_RAS_EINJ_CTL6CHGV1(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_ras_einj_ctl6chgv2
 *
 * PCIe RC Vendor RAS DES Error Injection Control 6 (Change Value H2) Register
 */
union ody_pciercx_ras_einj_ctl6chgv2 {
	uint32_t u;
	struct ody_pciercx_ras_einj_ctl6chgv2_s {
		uint32_t einj6_chg_val_h2            : 32;
	} s;
	/* struct ody_pciercx_ras_einj_ctl6chgv2_s cn; */
};
typedef union ody_pciercx_ras_einj_ctl6chgv2 ody_pciercx_ras_einj_ctl6chgv2_t;

static inline uint64_t ODY_PCIERCX_RAS_EINJ_CTL6CHGV2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_RAS_EINJ_CTL6CHGV2(uint64_t a)
{
	if (a <= 15)
		return 0x2f0;
	__ody_csr_fatal("PCIERCX_RAS_EINJ_CTL6CHGV2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_RAS_EINJ_CTL6CHGV2(a) ody_pciercx_ras_einj_ctl6chgv2_t
#define bustype_ODY_PCIERCX_RAS_EINJ_CTL6CHGV2(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_RAS_EINJ_CTL6CHGV2(a) "PCIERCX_RAS_EINJ_CTL6CHGV2"
#define busnum_ODY_PCIERCX_RAS_EINJ_CTL6CHGV2(a) (a)
#define arguments_ODY_PCIERCX_RAS_EINJ_CTL6CHGV2(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_ras_einj_ctl6chgv3
 *
 * PCIe RC Vendor RAS DES Error Injection Control 6 (Change Value H3) Register
 */
union ody_pciercx_ras_einj_ctl6chgv3 {
	uint32_t u;
	struct ody_pciercx_ras_einj_ctl6chgv3_s {
		uint32_t einj6_chg_val_h3            : 32;
	} s;
	/* struct ody_pciercx_ras_einj_ctl6chgv3_s cn; */
};
typedef union ody_pciercx_ras_einj_ctl6chgv3 ody_pciercx_ras_einj_ctl6chgv3_t;

static inline uint64_t ODY_PCIERCX_RAS_EINJ_CTL6CHGV3(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_RAS_EINJ_CTL6CHGV3(uint64_t a)
{
	if (a <= 15)
		return 0x2f4;
	__ody_csr_fatal("PCIERCX_RAS_EINJ_CTL6CHGV3", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_RAS_EINJ_CTL6CHGV3(a) ody_pciercx_ras_einj_ctl6chgv3_t
#define bustype_ODY_PCIERCX_RAS_EINJ_CTL6CHGV3(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_RAS_EINJ_CTL6CHGV3(a) "PCIERCX_RAS_EINJ_CTL6CHGV3"
#define busnum_ODY_PCIERCX_RAS_EINJ_CTL6CHGV3(a) (a)
#define arguments_ODY_PCIERCX_RAS_EINJ_CTL6CHGV3(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_ras_einj_ctl6cmpp0
 *
 * PCIe RC Vendor RAS DES Error Injection Control 6 (Compare Point H0) Register
 */
union ody_pciercx_ras_einj_ctl6cmpp0 {
	uint32_t u;
	struct ody_pciercx_ras_einj_ctl6cmpp0_s {
		uint32_t einj6_com_pt_h0             : 32;
	} s;
	/* struct ody_pciercx_ras_einj_ctl6cmpp0_s cn; */
};
typedef union ody_pciercx_ras_einj_ctl6cmpp0 ody_pciercx_ras_einj_ctl6cmpp0_t;

static inline uint64_t ODY_PCIERCX_RAS_EINJ_CTL6CMPP0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_RAS_EINJ_CTL6CMPP0(uint64_t a)
{
	if (a <= 15)
		return 0x2b8;
	__ody_csr_fatal("PCIERCX_RAS_EINJ_CTL6CMPP0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_RAS_EINJ_CTL6CMPP0(a) ody_pciercx_ras_einj_ctl6cmpp0_t
#define bustype_ODY_PCIERCX_RAS_EINJ_CTL6CMPP0(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_RAS_EINJ_CTL6CMPP0(a) "PCIERCX_RAS_EINJ_CTL6CMPP0"
#define busnum_ODY_PCIERCX_RAS_EINJ_CTL6CMPP0(a) (a)
#define arguments_ODY_PCIERCX_RAS_EINJ_CTL6CMPP0(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_ras_einj_ctl6cmpp1
 *
 * PCIe RC Vendor RAS DES Error Injection Control 6 (Compare Point H1) Register
 */
union ody_pciercx_ras_einj_ctl6cmpp1 {
	uint32_t u;
	struct ody_pciercx_ras_einj_ctl6cmpp1_s {
		uint32_t einj6_com_pt_h1             : 32;
	} s;
	/* struct ody_pciercx_ras_einj_ctl6cmpp1_s cn; */
};
typedef union ody_pciercx_ras_einj_ctl6cmpp1 ody_pciercx_ras_einj_ctl6cmpp1_t;

static inline uint64_t ODY_PCIERCX_RAS_EINJ_CTL6CMPP1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_RAS_EINJ_CTL6CMPP1(uint64_t a)
{
	if (a <= 15)
		return 0x2bc;
	__ody_csr_fatal("PCIERCX_RAS_EINJ_CTL6CMPP1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_RAS_EINJ_CTL6CMPP1(a) ody_pciercx_ras_einj_ctl6cmpp1_t
#define bustype_ODY_PCIERCX_RAS_EINJ_CTL6CMPP1(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_RAS_EINJ_CTL6CMPP1(a) "PCIERCX_RAS_EINJ_CTL6CMPP1"
#define busnum_ODY_PCIERCX_RAS_EINJ_CTL6CMPP1(a) (a)
#define arguments_ODY_PCIERCX_RAS_EINJ_CTL6CMPP1(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_ras_einj_ctl6cmpp2
 *
 * PCIe RC Vendor RAS DES Error Injection Control 6 (Compare Point H2) Register
 */
union ody_pciercx_ras_einj_ctl6cmpp2 {
	uint32_t u;
	struct ody_pciercx_ras_einj_ctl6cmpp2_s {
		uint32_t einj6_com_pt_h2             : 32;
	} s;
	/* struct ody_pciercx_ras_einj_ctl6cmpp2_s cn; */
};
typedef union ody_pciercx_ras_einj_ctl6cmpp2 ody_pciercx_ras_einj_ctl6cmpp2_t;

static inline uint64_t ODY_PCIERCX_RAS_EINJ_CTL6CMPP2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_RAS_EINJ_CTL6CMPP2(uint64_t a)
{
	if (a <= 15)
		return 0x2c0;
	__ody_csr_fatal("PCIERCX_RAS_EINJ_CTL6CMPP2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_RAS_EINJ_CTL6CMPP2(a) ody_pciercx_ras_einj_ctl6cmpp2_t
#define bustype_ODY_PCIERCX_RAS_EINJ_CTL6CMPP2(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_RAS_EINJ_CTL6CMPP2(a) "PCIERCX_RAS_EINJ_CTL6CMPP2"
#define busnum_ODY_PCIERCX_RAS_EINJ_CTL6CMPP2(a) (a)
#define arguments_ODY_PCIERCX_RAS_EINJ_CTL6CMPP2(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_ras_einj_ctl6cmpp3
 *
 * PCIe RC Vendor RAS DES Error Injection Control 6 (Compare Point H3) Register
 */
union ody_pciercx_ras_einj_ctl6cmpp3 {
	uint32_t u;
	struct ody_pciercx_ras_einj_ctl6cmpp3_s {
		uint32_t einj6_com_pt_h3             : 32;
	} s;
	/* struct ody_pciercx_ras_einj_ctl6cmpp3_s cn; */
};
typedef union ody_pciercx_ras_einj_ctl6cmpp3 ody_pciercx_ras_einj_ctl6cmpp3_t;

static inline uint64_t ODY_PCIERCX_RAS_EINJ_CTL6CMPP3(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_RAS_EINJ_CTL6CMPP3(uint64_t a)
{
	if (a <= 15)
		return 0x2c4;
	__ody_csr_fatal("PCIERCX_RAS_EINJ_CTL6CMPP3", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_RAS_EINJ_CTL6CMPP3(a) ody_pciercx_ras_einj_ctl6cmpp3_t
#define bustype_ODY_PCIERCX_RAS_EINJ_CTL6CMPP3(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_RAS_EINJ_CTL6CMPP3(a) "PCIERCX_RAS_EINJ_CTL6CMPP3"
#define busnum_ODY_PCIERCX_RAS_EINJ_CTL6CMPP3(a) (a)
#define arguments_ODY_PCIERCX_RAS_EINJ_CTL6CMPP3(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_ras_einj_ctl6cmpv0
 *
 * PCIe RC Vendor RAS DES Error Injection Control 6 (Compare Value H0) Register
 */
union ody_pciercx_ras_einj_ctl6cmpv0 {
	uint32_t u;
	struct ody_pciercx_ras_einj_ctl6cmpv0_s {
		uint32_t einj6_com_val_h0            : 32;
	} s;
	/* struct ody_pciercx_ras_einj_ctl6cmpv0_s cn; */
};
typedef union ody_pciercx_ras_einj_ctl6cmpv0 ody_pciercx_ras_einj_ctl6cmpv0_t;

static inline uint64_t ODY_PCIERCX_RAS_EINJ_CTL6CMPV0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_RAS_EINJ_CTL6CMPV0(uint64_t a)
{
	if (a <= 15)
		return 0x2c8;
	__ody_csr_fatal("PCIERCX_RAS_EINJ_CTL6CMPV0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_RAS_EINJ_CTL6CMPV0(a) ody_pciercx_ras_einj_ctl6cmpv0_t
#define bustype_ODY_PCIERCX_RAS_EINJ_CTL6CMPV0(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_RAS_EINJ_CTL6CMPV0(a) "PCIERCX_RAS_EINJ_CTL6CMPV0"
#define busnum_ODY_PCIERCX_RAS_EINJ_CTL6CMPV0(a) (a)
#define arguments_ODY_PCIERCX_RAS_EINJ_CTL6CMPV0(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_ras_einj_ctl6cmpv1
 *
 * PCIe RC Vendor RAS DES Error Injection Control 6 (Compare Value H1) Register
 */
union ody_pciercx_ras_einj_ctl6cmpv1 {
	uint32_t u;
	struct ody_pciercx_ras_einj_ctl6cmpv1_s {
		uint32_t einj6_com_val_h1            : 32;
	} s;
	/* struct ody_pciercx_ras_einj_ctl6cmpv1_s cn; */
};
typedef union ody_pciercx_ras_einj_ctl6cmpv1 ody_pciercx_ras_einj_ctl6cmpv1_t;

static inline uint64_t ODY_PCIERCX_RAS_EINJ_CTL6CMPV1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_RAS_EINJ_CTL6CMPV1(uint64_t a)
{
	if (a <= 15)
		return 0x2cc;
	__ody_csr_fatal("PCIERCX_RAS_EINJ_CTL6CMPV1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_RAS_EINJ_CTL6CMPV1(a) ody_pciercx_ras_einj_ctl6cmpv1_t
#define bustype_ODY_PCIERCX_RAS_EINJ_CTL6CMPV1(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_RAS_EINJ_CTL6CMPV1(a) "PCIERCX_RAS_EINJ_CTL6CMPV1"
#define busnum_ODY_PCIERCX_RAS_EINJ_CTL6CMPV1(a) (a)
#define arguments_ODY_PCIERCX_RAS_EINJ_CTL6CMPV1(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_ras_einj_ctl6cmpv2
 *
 * PCIe RC Vendor RAS DES Error Injection Control 6 (Compare Value H2) Register
 */
union ody_pciercx_ras_einj_ctl6cmpv2 {
	uint32_t u;
	struct ody_pciercx_ras_einj_ctl6cmpv2_s {
		uint32_t einj6_com_val_h2            : 32;
	} s;
	/* struct ody_pciercx_ras_einj_ctl6cmpv2_s cn; */
};
typedef union ody_pciercx_ras_einj_ctl6cmpv2 ody_pciercx_ras_einj_ctl6cmpv2_t;

static inline uint64_t ODY_PCIERCX_RAS_EINJ_CTL6CMPV2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_RAS_EINJ_CTL6CMPV2(uint64_t a)
{
	if (a <= 15)
		return 0x2d0;
	__ody_csr_fatal("PCIERCX_RAS_EINJ_CTL6CMPV2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_RAS_EINJ_CTL6CMPV2(a) ody_pciercx_ras_einj_ctl6cmpv2_t
#define bustype_ODY_PCIERCX_RAS_EINJ_CTL6CMPV2(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_RAS_EINJ_CTL6CMPV2(a) "PCIERCX_RAS_EINJ_CTL6CMPV2"
#define busnum_ODY_PCIERCX_RAS_EINJ_CTL6CMPV2(a) (a)
#define arguments_ODY_PCIERCX_RAS_EINJ_CTL6CMPV2(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_ras_einj_ctl6cmpv3
 *
 * PCIe RC Vendor RAS DES Error Injection Control 6 (Compare Value H3) Register
 */
union ody_pciercx_ras_einj_ctl6cmpv3 {
	uint32_t u;
	struct ody_pciercx_ras_einj_ctl6cmpv3_s {
		uint32_t einj6_com_val_h3            : 32;
	} s;
	/* struct ody_pciercx_ras_einj_ctl6cmpv3_s cn; */
};
typedef union ody_pciercx_ras_einj_ctl6cmpv3 ody_pciercx_ras_einj_ctl6cmpv3_t;

static inline uint64_t ODY_PCIERCX_RAS_EINJ_CTL6CMPV3(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_RAS_EINJ_CTL6CMPV3(uint64_t a)
{
	if (a <= 15)
		return 0x2d4;
	__ody_csr_fatal("PCIERCX_RAS_EINJ_CTL6CMPV3", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_RAS_EINJ_CTL6CMPV3(a) ody_pciercx_ras_einj_ctl6cmpv3_t
#define bustype_ODY_PCIERCX_RAS_EINJ_CTL6CMPV3(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_RAS_EINJ_CTL6CMPV3(a) "PCIERCX_RAS_EINJ_CTL6CMPV3"
#define busnum_ODY_PCIERCX_RAS_EINJ_CTL6CMPV3(a) (a)
#define arguments_ODY_PCIERCX_RAS_EINJ_CTL6CMPV3(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_ras_einj_ctl6pe
 *
 * PCIe RC Vendor RAS DES Error Injection Control 6 (Packet Error) Register
 */
union ody_pciercx_ras_einj_ctl6pe {
	uint32_t u;
	struct ody_pciercx_ras_einj_ctl6pe_s {
		uint32_t einj6_cnt                   : 8;
		uint32_t einj6_inv_cntrl             : 1;
		uint32_t einj6_pkt_typ               : 3;
		uint32_t reserved_12_31              : 20;
	} s;
	/* struct ody_pciercx_ras_einj_ctl6pe_s cn; */
};
typedef union ody_pciercx_ras_einj_ctl6pe ody_pciercx_ras_einj_ctl6pe_t;

static inline uint64_t ODY_PCIERCX_RAS_EINJ_CTL6PE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_RAS_EINJ_CTL6PE(uint64_t a)
{
	if (a <= 15)
		return 0x2f8;
	__ody_csr_fatal("PCIERCX_RAS_EINJ_CTL6PE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_RAS_EINJ_CTL6PE(a) ody_pciercx_ras_einj_ctl6pe_t
#define bustype_ODY_PCIERCX_RAS_EINJ_CTL6PE(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_RAS_EINJ_CTL6PE(a) "PCIERCX_RAS_EINJ_CTL6PE"
#define busnum_ODY_PCIERCX_RAS_EINJ_CTL6PE(a) (a)
#define arguments_ODY_PCIERCX_RAS_EINJ_CTL6PE(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_ras_einj_en
 *
 * PCIe RC Vendor RAS DES Error Injection Enable Register
 */
union ody_pciercx_ras_einj_en {
	uint32_t u;
	struct ody_pciercx_ras_einj_en_s {
		uint32_t einj0_en                    : 1;
		uint32_t einj1_en                    : 1;
		uint32_t einj2_en                    : 1;
		uint32_t einj3_en                    : 1;
		uint32_t einj4_en                    : 1;
		uint32_t einj5_en                    : 1;
		uint32_t einj6_en                    : 1;
		uint32_t reserved_7_31               : 25;
	} s;
	/* struct ody_pciercx_ras_einj_en_s cn; */
};
typedef union ody_pciercx_ras_einj_en ody_pciercx_ras_einj_en_t;

static inline uint64_t ODY_PCIERCX_RAS_EINJ_EN(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_RAS_EINJ_EN(uint64_t a)
{
	if (a <= 15)
		return 0x29c;
	__ody_csr_fatal("PCIERCX_RAS_EINJ_EN", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_RAS_EINJ_EN(a) ody_pciercx_ras_einj_en_t
#define bustype_ODY_PCIERCX_RAS_EINJ_EN(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_RAS_EINJ_EN(a) "PCIERCX_RAS_EINJ_EN"
#define busnum_ODY_PCIERCX_RAS_EINJ_EN(a) (a)
#define arguments_ODY_PCIERCX_RAS_EINJ_EN(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_ras_hdr
 *
 * PCIe RC Vendor RAS DES Header Register
 */
union ody_pciercx_ras_hdr {
	uint32_t u;
	struct ody_pciercx_ras_hdr_s {
		uint32_t vsec_id                     : 16;
		uint32_t vsec_rev                    : 4;
		uint32_t vsec_length                 : 12;
	} s;
	/* struct ody_pciercx_ras_hdr_s cn; */
};
typedef union ody_pciercx_ras_hdr ody_pciercx_ras_hdr_t;

static inline uint64_t ODY_PCIERCX_RAS_HDR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_RAS_HDR(uint64_t a)
{
	if (a <= 15)
		return 0x270;
	__ody_csr_fatal("PCIERCX_RAS_HDR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_RAS_HDR(a) ody_pciercx_ras_hdr_t
#define bustype_ODY_PCIERCX_RAS_HDR(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_RAS_HDR(a) "PCIERCX_RAS_HDR"
#define busnum_ODY_PCIERCX_RAS_HDR(a) (a)
#define arguments_ODY_PCIERCX_RAS_HDR(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_ras_sd_ctl1
 *
 * PCIe RC Vendor RAS DES Silicon Debug Control 1 Register
 */
union ody_pciercx_ras_sd_ctl1 {
	uint32_t u;
	struct ody_pciercx_ras_sd_ctl1_s {
		uint32_t force_detect_lane           : 16;
		uint32_t force_detect_lane_en        : 1;
		uint32_t reserved_17_19              : 3;
		uint32_t tx_eios_num                 : 2;
		uint32_t lp_intv                     : 2;
		uint32_t reserved_24_31              : 8;
	} s;
	/* struct ody_pciercx_ras_sd_ctl1_s cn; */
};
typedef union ody_pciercx_ras_sd_ctl1 ody_pciercx_ras_sd_ctl1_t;

static inline uint64_t ODY_PCIERCX_RAS_SD_CTL1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_RAS_SD_CTL1(uint64_t a)
{
	if (a <= 15)
		return 0x30c;
	__ody_csr_fatal("PCIERCX_RAS_SD_CTL1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_RAS_SD_CTL1(a) ody_pciercx_ras_sd_ctl1_t
#define bustype_ODY_PCIERCX_RAS_SD_CTL1(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_RAS_SD_CTL1(a) "PCIERCX_RAS_SD_CTL1"
#define busnum_ODY_PCIERCX_RAS_SD_CTL1(a) (a)
#define arguments_ODY_PCIERCX_RAS_SD_CTL1(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_ras_sd_ctl2
 *
 * PCIe RC Vendor RAS DES Silicon Debug Control 2 Register
 */
union ody_pciercx_ras_sd_ctl2 {
	uint32_t u;
	struct ody_pciercx_ras_sd_ctl2_s {
		uint32_t hold_ltssm                  : 1;
		uint32_t rcry_req                    : 1;
		uint32_t noack_force_lnkdn           : 1;
		uint32_t reserved_3_7                : 5;
		uint32_t dir_recidle_config          : 1;
		uint32_t dir_polcmp_to_det           : 1;
		uint32_t dir_lpbslv_to_exit          : 1;
		uint32_t reserved_11_15              : 5;
		uint32_t fr_err_rcvy_dis             : 1;
		uint32_t reserved_17_31              : 15;
	} s;
	/* struct ody_pciercx_ras_sd_ctl2_s cn; */
};
typedef union ody_pciercx_ras_sd_ctl2 ody_pciercx_ras_sd_ctl2_t;

static inline uint64_t ODY_PCIERCX_RAS_SD_CTL2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_RAS_SD_CTL2(uint64_t a)
{
	if (a <= 15)
		return 0x310;
	__ody_csr_fatal("PCIERCX_RAS_SD_CTL2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_RAS_SD_CTL2(a) ody_pciercx_ras_sd_ctl2_t
#define bustype_ODY_PCIERCX_RAS_SD_CTL2(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_RAS_SD_CTL2(a) "PCIERCX_RAS_SD_CTL2"
#define busnum_ODY_PCIERCX_RAS_SD_CTL2(a) (a)
#define arguments_ODY_PCIERCX_RAS_SD_CTL2(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_ras_sd_eq_ctl1
 *
 * PCIe RC Vendor RAS DES Silicon Debug EQ Control 1 Register
 */
union ody_pciercx_ras_sd_eq_ctl1 {
	uint32_t u;
	struct ody_pciercx_ras_sd_eq_ctl1_s {
		uint32_t eq_lane_sel                 : 4;
		uint32_t eq_rate_sel                 : 2;
		uint32_t reserved_6_7                : 2;
		uint32_t ext_eq_timeout              : 2;
		uint32_t reserved_10_15              : 6;
		uint32_t eval_interval_time          : 2;
		uint32_t reserved_18_22              : 5;
		uint32_t fom_target_en               : 1;
		uint32_t fom_target                  : 8;
	} s;
	/* struct ody_pciercx_ras_sd_eq_ctl1_s cn; */
};
typedef union ody_pciercx_ras_sd_eq_ctl1 ody_pciercx_ras_sd_eq_ctl1_t;

static inline uint64_t ODY_PCIERCX_RAS_SD_EQ_CTL1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_RAS_SD_EQ_CTL1(uint64_t a)
{
	if (a <= 15)
		return 0x33c;
	__ody_csr_fatal("PCIERCX_RAS_SD_EQ_CTL1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_RAS_SD_EQ_CTL1(a) ody_pciercx_ras_sd_eq_ctl1_t
#define bustype_ODY_PCIERCX_RAS_SD_EQ_CTL1(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_RAS_SD_EQ_CTL1(a) "PCIERCX_RAS_SD_EQ_CTL1"
#define busnum_ODY_PCIERCX_RAS_SD_EQ_CTL1(a) (a)
#define arguments_ODY_PCIERCX_RAS_SD_EQ_CTL1(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_ras_sd_eq_ctl2
 *
 * PCIe RC Vendor RAS DES Silicon Debug EQ Control 2 Register
 */
union ody_pciercx_ras_sd_eq_ctl2 {
	uint32_t u;
	struct ody_pciercx_ras_sd_eq_ctl2_s {
		uint32_t force_loc_txpre_cur         : 6;
		uint32_t force_loc_tx_cur            : 6;
		uint32_t force_loc_txpost_cur        : 6;
		uint32_t force_loc_rxhint            : 3;
		uint32_t reserved_21_23              : 3;
		uint32_t force_loc_txpre             : 4;
		uint32_t force_loc_txcoef_en         : 1;
		uint32_t force_loc_rxhint_en         : 1;
		uint32_t force_loc_txpre_en          : 1;
		uint32_t reserved_31                 : 1;
	} s;
	/* struct ody_pciercx_ras_sd_eq_ctl2_s cn; */
};
typedef union ody_pciercx_ras_sd_eq_ctl2 ody_pciercx_ras_sd_eq_ctl2_t;

static inline uint64_t ODY_PCIERCX_RAS_SD_EQ_CTL2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_RAS_SD_EQ_CTL2(uint64_t a)
{
	if (a <= 15)
		return 0x340;
	__ody_csr_fatal("PCIERCX_RAS_SD_EQ_CTL2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_RAS_SD_EQ_CTL2(a) ody_pciercx_ras_sd_eq_ctl2_t
#define bustype_ODY_PCIERCX_RAS_SD_EQ_CTL2(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_RAS_SD_EQ_CTL2(a) "PCIERCX_RAS_SD_EQ_CTL2"
#define busnum_ODY_PCIERCX_RAS_SD_EQ_CTL2(a) (a)
#define arguments_ODY_PCIERCX_RAS_SD_EQ_CTL2(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_ras_sd_eq_ctl3
 *
 * PCIe RC Vendor RAS DES Silicon Debug EQ Control 3 Register
 */
union ody_pciercx_ras_sd_eq_ctl3 {
	uint32_t u;
	struct ody_pciercx_ras_sd_eq_ctl3_s {
		uint32_t force_rem_txpre_cur         : 6;
		uint32_t force_rem_tx_cur            : 6;
		uint32_t force_rem_txpost_cur        : 6;
		uint32_t reserved_18_27              : 10;
		uint32_t force_rem_txcoef_en         : 1;
		uint32_t reserved_29_31              : 3;
	} s;
	/* struct ody_pciercx_ras_sd_eq_ctl3_s cn; */
};
typedef union ody_pciercx_ras_sd_eq_ctl3 ody_pciercx_ras_sd_eq_ctl3_t;

static inline uint64_t ODY_PCIERCX_RAS_SD_EQ_CTL3(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_RAS_SD_EQ_CTL3(uint64_t a)
{
	if (a <= 15)
		return 0x344;
	__ody_csr_fatal("PCIERCX_RAS_SD_EQ_CTL3", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_RAS_SD_EQ_CTL3(a) ody_pciercx_ras_sd_eq_ctl3_t
#define bustype_ODY_PCIERCX_RAS_SD_EQ_CTL3(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_RAS_SD_EQ_CTL3(a) "PCIERCX_RAS_SD_EQ_CTL3"
#define busnum_ODY_PCIERCX_RAS_SD_EQ_CTL3(a) (a)
#define arguments_ODY_PCIERCX_RAS_SD_EQ_CTL3(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_ras_sd_eq_stat1
 *
 * PCIe RC Vendor RAS DES Silicon Debug EQ Status 1 Register
 */
union ody_pciercx_ras_sd_eq_stat1 {
	uint32_t u;
	struct ody_pciercx_ras_sd_eq_stat1_s {
		uint32_t eq_sequence                 : 1;
		uint32_t eq_conv_info                : 2;
		uint32_t reserved_3                  : 1;
		uint32_t eq_rulea_viol               : 1;
		uint32_t eq_ruleb_viol               : 1;
		uint32_t eq_rulec_viol               : 1;
		uint32_t eq_reject_event             : 1;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_pciercx_ras_sd_eq_stat1_s cn; */
};
typedef union ody_pciercx_ras_sd_eq_stat1 ody_pciercx_ras_sd_eq_stat1_t;

static inline uint64_t ODY_PCIERCX_RAS_SD_EQ_STAT1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_RAS_SD_EQ_STAT1(uint64_t a)
{
	if (a <= 15)
		return 0x34c;
	__ody_csr_fatal("PCIERCX_RAS_SD_EQ_STAT1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_RAS_SD_EQ_STAT1(a) ody_pciercx_ras_sd_eq_stat1_t
#define bustype_ODY_PCIERCX_RAS_SD_EQ_STAT1(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_RAS_SD_EQ_STAT1(a) "PCIERCX_RAS_SD_EQ_STAT1"
#define busnum_ODY_PCIERCX_RAS_SD_EQ_STAT1(a) (a)
#define arguments_ODY_PCIERCX_RAS_SD_EQ_STAT1(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_ras_sd_eq_stat2
 *
 * PCIe RC Vendor RAS DES Silicon Debug EQ Status 2 Register
 */
union ody_pciercx_ras_sd_eq_stat2 {
	uint32_t u;
	struct ody_pciercx_ras_sd_eq_stat2_s {
		uint32_t eq_loc_pre_cur              : 6;
		uint32_t eq_loc_cur                  : 6;
		uint32_t eq_loc_post_cur             : 6;
		uint32_t eq_loc_rxhint               : 3;
		uint32_t reserved_21_23              : 3;
		uint32_t eq_loc_fom_val              : 8;
	} s;
	/* struct ody_pciercx_ras_sd_eq_stat2_s cn; */
};
typedef union ody_pciercx_ras_sd_eq_stat2 ody_pciercx_ras_sd_eq_stat2_t;

static inline uint64_t ODY_PCIERCX_RAS_SD_EQ_STAT2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_RAS_SD_EQ_STAT2(uint64_t a)
{
	if (a <= 15)
		return 0x350;
	__ody_csr_fatal("PCIERCX_RAS_SD_EQ_STAT2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_RAS_SD_EQ_STAT2(a) ody_pciercx_ras_sd_eq_stat2_t
#define bustype_ODY_PCIERCX_RAS_SD_EQ_STAT2(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_RAS_SD_EQ_STAT2(a) "PCIERCX_RAS_SD_EQ_STAT2"
#define busnum_ODY_PCIERCX_RAS_SD_EQ_STAT2(a) (a)
#define arguments_ODY_PCIERCX_RAS_SD_EQ_STAT2(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_ras_sd_eq_stat3
 *
 * PCIe RC Vendor RAS DES Silicon Debug EQ Status 3 Register
 */
union ody_pciercx_ras_sd_eq_stat3 {
	uint32_t u;
	struct ody_pciercx_ras_sd_eq_stat3_s {
		uint32_t eq_rem_pre_cur              : 6;
		uint32_t eq_rem_cur                  : 6;
		uint32_t eq_rem_post_cur             : 6;
		uint32_t eq_rem_lf                   : 6;
		uint32_t eq_rem_fs                   : 6;
		uint32_t reserved_30_31              : 2;
	} s;
	/* struct ody_pciercx_ras_sd_eq_stat3_s cn; */
};
typedef union ody_pciercx_ras_sd_eq_stat3 ody_pciercx_ras_sd_eq_stat3_t;

static inline uint64_t ODY_PCIERCX_RAS_SD_EQ_STAT3(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_RAS_SD_EQ_STAT3(uint64_t a)
{
	if (a <= 15)
		return 0x354;
	__ody_csr_fatal("PCIERCX_RAS_SD_EQ_STAT3", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_RAS_SD_EQ_STAT3(a) ody_pciercx_ras_sd_eq_stat3_t
#define bustype_ODY_PCIERCX_RAS_SD_EQ_STAT3(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_RAS_SD_EQ_STAT3(a) "PCIERCX_RAS_SD_EQ_STAT3"
#define busnum_ODY_PCIERCX_RAS_SD_EQ_STAT3(a) (a)
#define arguments_ODY_PCIERCX_RAS_SD_EQ_STAT3(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_ras_sd_l1lane
 *
 * PCIe RC Vendor RAS DES Silicon Debug Status L1Lane Register
 */
union ody_pciercx_ras_sd_l1lane {
	uint32_t u;
	struct ody_pciercx_ras_sd_l1lane_s {
		uint32_t lane_select                 : 4;
		uint32_t reserved_4_15               : 12;
		uint32_t pipe_rxpol                  : 1;
		uint32_t pipe_det_lane               : 1;
		uint32_t pipe_rxvalid                : 1;
		uint32_t pipe_rxelecidle             : 1;
		uint32_t pipe_txelecidle             : 1;
		uint32_t reserved_21_23              : 3;
		uint32_t deskew_ptr                  : 8;
	} s;
	/* struct ody_pciercx_ras_sd_l1lane_s cn; */
};
typedef union ody_pciercx_ras_sd_l1lane ody_pciercx_ras_sd_l1lane_t;

static inline uint64_t ODY_PCIERCX_RAS_SD_L1LANE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_RAS_SD_L1LANE(uint64_t a)
{
	if (a <= 15)
		return 0x31c;
	__ody_csr_fatal("PCIERCX_RAS_SD_L1LANE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_RAS_SD_L1LANE(a) ody_pciercx_ras_sd_l1lane_t
#define bustype_ODY_PCIERCX_RAS_SD_L1LANE(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_RAS_SD_L1LANE(a) "PCIERCX_RAS_SD_L1LANE"
#define busnum_ODY_PCIERCX_RAS_SD_L1LANE(a) (a)
#define arguments_ODY_PCIERCX_RAS_SD_L1LANE(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_ras_sd_l1ltssm
 *
 * PCIe RC Vendor RAS DES Silicon Debug Status L1LTSSM Register
 */
union ody_pciercx_ras_sd_l1ltssm {
	uint32_t u;
	struct ody_pciercx_ras_sd_l1ltssm_s {
		uint32_t framing_err_ptr             : 7;
		uint32_t framing_err                 : 1;
		uint32_t pipe_pwr_dwn                : 3;
		uint32_t reserved_11_14              : 4;
		uint32_t lane_rev                    : 1;
		uint32_t ltssm_var                   : 16;
	} s;
	/* struct ody_pciercx_ras_sd_l1ltssm_s cn; */
};
typedef union ody_pciercx_ras_sd_l1ltssm ody_pciercx_ras_sd_l1ltssm_t;

static inline uint64_t ODY_PCIERCX_RAS_SD_L1LTSSM(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_RAS_SD_L1LTSSM(uint64_t a)
{
	if (a <= 15)
		return 0x320;
	__ody_csr_fatal("PCIERCX_RAS_SD_L1LTSSM", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_RAS_SD_L1LTSSM(a) ody_pciercx_ras_sd_l1ltssm_t
#define bustype_ODY_PCIERCX_RAS_SD_L1LTSSM(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_RAS_SD_L1LTSSM(a) "PCIERCX_RAS_SD_L1LTSSM"
#define busnum_ODY_PCIERCX_RAS_SD_L1LTSSM(a) (a)
#define arguments_ODY_PCIERCX_RAS_SD_L1LTSSM(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_ras_sd_statusl2
 *
 * PCIe RC Vendor RAS DES Silicon Debug Status L2 Register
 */
union ody_pciercx_ras_sd_statusl2 {
	uint32_t u;
	struct ody_pciercx_ras_sd_statusl2_s {
		uint32_t tx_ack_seq_no               : 12;
		uint32_t rx_ack_seq_no               : 12;
		uint32_t dlcmsm                      : 2;
		uint32_t fc_init1                    : 1;
		uint32_t fc_init2                    : 1;
		uint32_t reserved_28_31              : 4;
	} s;
	/* struct ody_pciercx_ras_sd_statusl2_s cn; */
};
typedef union ody_pciercx_ras_sd_statusl2 ody_pciercx_ras_sd_statusl2_t;

static inline uint64_t ODY_PCIERCX_RAS_SD_STATUSL2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_RAS_SD_STATUSL2(uint64_t a)
{
	if (a <= 15)
		return 0x328;
	__ody_csr_fatal("PCIERCX_RAS_SD_STATUSL2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_RAS_SD_STATUSL2(a) ody_pciercx_ras_sd_statusl2_t
#define bustype_ODY_PCIERCX_RAS_SD_STATUSL2(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_RAS_SD_STATUSL2(a) "PCIERCX_RAS_SD_STATUSL2"
#define busnum_ODY_PCIERCX_RAS_SD_STATUSL2(a) (a)
#define arguments_ODY_PCIERCX_RAS_SD_STATUSL2(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_ras_sd_statusl3
 *
 * PCIe RC Vendor RAS DES Silicon Debug Status L3 Register
 */
union ody_pciercx_ras_sd_statusl3 {
	uint32_t u;
	struct ody_pciercx_ras_sd_statusl3_s {
		uint32_t mftlp_ptr                   : 7;
		uint32_t mftlp_status                : 1;
		uint32_t reserved_8_31               : 24;
	} s;
	/* struct ody_pciercx_ras_sd_statusl3_s cn; */
};
typedef union ody_pciercx_ras_sd_statusl3 ody_pciercx_ras_sd_statusl3_t;

static inline uint64_t ODY_PCIERCX_RAS_SD_STATUSL3(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_RAS_SD_STATUSL3(uint64_t a)
{
	if (a <= 15)
		return 0x330;
	__ody_csr_fatal("PCIERCX_RAS_SD_STATUSL3", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_RAS_SD_STATUSL3(a) ody_pciercx_ras_sd_statusl3_t
#define bustype_ODY_PCIERCX_RAS_SD_STATUSL3(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_RAS_SD_STATUSL3(a) "PCIERCX_RAS_SD_STATUSL3"
#define busnum_ODY_PCIERCX_RAS_SD_STATUSL3(a) (a)
#define arguments_ODY_PCIERCX_RAS_SD_STATUSL3(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_ras_sd_statusl3fc
 *
 * PCIe RC Vendor RAS DES Silicon Debug Status L2 Register
 */
union ody_pciercx_ras_sd_statusl3fc {
	uint32_t u;
	struct ody_pciercx_ras_sd_statusl3fc_s {
		uint32_t credit_sel_vc               : 3;
		uint32_t credit_sel_credit_type      : 1;
		uint32_t credit_sel_tlp_type         : 2;
		uint32_t credit_sel_hd               : 1;
		uint32_t reserved_7                  : 1;
		uint32_t credit_data0                : 12;
		uint32_t credit_data1                : 12;
	} s;
	/* struct ody_pciercx_ras_sd_statusl3fc_s cn; */
};
typedef union ody_pciercx_ras_sd_statusl3fc ody_pciercx_ras_sd_statusl3fc_t;

static inline uint64_t ODY_PCIERCX_RAS_SD_STATUSL3FC(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_RAS_SD_STATUSL3FC(uint64_t a)
{
	if (a <= 15)
		return 0x32c;
	__ody_csr_fatal("PCIERCX_RAS_SD_STATUSL3FC", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_RAS_SD_STATUSL3FC(a) ody_pciercx_ras_sd_statusl3fc_t
#define bustype_ODY_PCIERCX_RAS_SD_STATUSL3FC(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_RAS_SD_STATUSL3FC(a) "PCIERCX_RAS_SD_STATUSL3FC"
#define busnum_ODY_PCIERCX_RAS_SD_STATUSL3FC(a) (a)
#define arguments_ODY_PCIERCX_RAS_SD_STATUSL3FC(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_ras_sd_statuspm
 *
 * PCIe RC Vendor RAS DES Silicon Debug Status PM Register
 */
union ody_pciercx_ras_sd_statuspm {
	uint32_t u;
	struct ody_pciercx_ras_sd_statuspm_s {
		uint32_t int_pm_mstate               : 5;
		uint32_t reserved_5_7                : 3;
		uint32_t int_pm_sstate               : 4;
		uint32_t pme_rsnd_flag               : 1;
		uint32_t l1sub_state                 : 3;
		uint32_t latched_nfts                : 8;
		uint32_t reserved_24_31              : 8;
	} s;
	/* struct ody_pciercx_ras_sd_statuspm_s cn; */
};
typedef union ody_pciercx_ras_sd_statuspm ody_pciercx_ras_sd_statuspm_t;

static inline uint64_t ODY_PCIERCX_RAS_SD_STATUSPM(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_RAS_SD_STATUSPM(uint64_t a)
{
	if (a <= 15)
		return 0x324;
	__ody_csr_fatal("PCIERCX_RAS_SD_STATUSPM", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_RAS_SD_STATUSPM(a) ody_pciercx_ras_sd_statuspm_t
#define bustype_ODY_PCIERCX_RAS_SD_STATUSPM(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_RAS_SD_STATUSPM(a) "PCIERCX_RAS_SD_STATUSPM"
#define busnum_ODY_PCIERCX_RAS_SD_STATUSPM(a) (a)
#define arguments_ODY_PCIERCX_RAS_SD_STATUSPM(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_ras_tba_ctl
 *
 * PCIe RC Vendor RAS DES Time Based Analysis Control Register
 */
union ody_pciercx_ras_tba_ctl {
	uint32_t u;
	struct ody_pciercx_ras_tba_ctl_s {
		uint32_t timer_start                 : 1;
		uint32_t reserved_1_7                : 7;
		uint32_t tbase_dur_sel               : 8;
		uint32_t reserved_16_23              : 8;
		uint32_t tbase_rpt_sel               : 8;
	} s;
	/* struct ody_pciercx_ras_tba_ctl_s cn; */
};
typedef union ody_pciercx_ras_tba_ctl ody_pciercx_ras_tba_ctl_t;

static inline uint64_t ODY_PCIERCX_RAS_TBA_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_RAS_TBA_CTL(uint64_t a)
{
	if (a <= 15)
		return 0x27c;
	__ody_csr_fatal("PCIERCX_RAS_TBA_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_RAS_TBA_CTL(a) ody_pciercx_ras_tba_ctl_t
#define bustype_ODY_PCIERCX_RAS_TBA_CTL(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_RAS_TBA_CTL(a) "PCIERCX_RAS_TBA_CTL"
#define busnum_ODY_PCIERCX_RAS_TBA_CTL(a) (a)
#define arguments_ODY_PCIERCX_RAS_TBA_CTL(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_ras_tba_data
 *
 * PCIe RC Vendor RAS DES Time Based Analysis Data Register
 */
union ody_pciercx_ras_tba_data {
	uint32_t u;
	struct ody_pciercx_ras_tba_data_s {
		uint32_t tbase_data                  : 32;
	} s;
	/* struct ody_pciercx_ras_tba_data_s cn; */
};
typedef union ody_pciercx_ras_tba_data ody_pciercx_ras_tba_data_t;

static inline uint64_t ODY_PCIERCX_RAS_TBA_DATA(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_RAS_TBA_DATA(uint64_t a)
{
	if (a <= 15)
		return 0x280;
	__ody_csr_fatal("PCIERCX_RAS_TBA_DATA", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_RAS_TBA_DATA(a) ody_pciercx_ras_tba_data_t
#define bustype_ODY_PCIERCX_RAS_TBA_DATA(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_RAS_TBA_DATA(a) "PCIERCX_RAS_TBA_DATA"
#define busnum_ODY_PCIERCX_RAS_TBA_DATA(a) (a)
#define arguments_ODY_PCIERCX_RAS_TBA_DATA(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_rasdp_cap_hdr
 *
 * PCIe RC Vendor RAS Data Path Protection Header Register
 */
union ody_pciercx_rasdp_cap_hdr {
	uint32_t u;
	struct ody_pciercx_rasdp_cap_hdr_s {
		uint32_t pcieec                      : 16;
		uint32_t cv                          : 4;
		uint32_t nco                         : 12;
	} s;
	/* struct ody_pciercx_rasdp_cap_hdr_s cn; */
};
typedef union ody_pciercx_rasdp_cap_hdr ody_pciercx_rasdp_cap_hdr_t;

static inline uint64_t ODY_PCIERCX_RASDP_CAP_HDR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_RASDP_CAP_HDR(uint64_t a)
{
	if (a <= 15)
		return 0x36c;
	__ody_csr_fatal("PCIERCX_RASDP_CAP_HDR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_RASDP_CAP_HDR(a) ody_pciercx_rasdp_cap_hdr_t
#define bustype_ODY_PCIERCX_RASDP_CAP_HDR(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_RASDP_CAP_HDR(a) "PCIERCX_RASDP_CAP_HDR"
#define busnum_ODY_PCIERCX_RASDP_CAP_HDR(a) (a)
#define arguments_ODY_PCIERCX_RASDP_CAP_HDR(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_rasdp_ce_ctl
 *
 * PCIe RC RAS Data Path Correctable Error Control Register
 */
union ody_pciercx_rasdp_ce_ctl {
	uint32_t u;
	struct ody_pciercx_rasdp_ce_ctl_s {
		uint32_t ep_dis_l3_rx                : 1;
		uint32_t reserved_1_3                : 3;
		uint32_t corr_en_cntrs               : 1;
		uint32_t reserved_5_19               : 15;
		uint32_t corr_cnt_sel_reg            : 4;
		uint32_t corr_cnt_sel                : 8;
	} s;
	/* struct ody_pciercx_rasdp_ce_ctl_s cn; */
};
typedef union ody_pciercx_rasdp_ce_ctl ody_pciercx_rasdp_ce_ctl_t;

static inline uint64_t ODY_PCIERCX_RASDP_CE_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_RASDP_CE_CTL(uint64_t a)
{
	if (a <= 15)
		return 0x378;
	__ody_csr_fatal("PCIERCX_RASDP_CE_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_RASDP_CE_CTL(a) ody_pciercx_rasdp_ce_ctl_t
#define bustype_ODY_PCIERCX_RASDP_CE_CTL(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_RASDP_CE_CTL(a) "PCIERCX_RASDP_CE_CTL"
#define busnum_ODY_PCIERCX_RASDP_CE_CTL(a) (a)
#define arguments_ODY_PCIERCX_RASDP_CE_CTL(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_rasdp_ce_ictl
 *
 * PCIe RC RAS Data Correctable Error Injection Control Register
 */
union ody_pciercx_rasdp_ce_ictl {
	uint32_t u;
	struct ody_pciercx_rasdp_ce_ictl_s {
		uint32_t err_inj_en                  : 1;
		uint32_t reserved_1_3                : 3;
		uint32_t err_inj_type                : 2;
		uint32_t reserved_6_7                : 2;
		uint32_t err_inj_cnt                 : 8;
		uint32_t err_inj_loc                 : 8;
		uint32_t reserved_24_31              : 8;
	} s;
	/* struct ody_pciercx_rasdp_ce_ictl_s cn; */
};
typedef union ody_pciercx_rasdp_ce_ictl ody_pciercx_rasdp_ce_ictl_t;

static inline uint64_t ODY_PCIERCX_RASDP_CE_ICTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_RASDP_CE_ICTL(uint64_t a)
{
	if (a <= 15)
		return 0x388;
	__ody_csr_fatal("PCIERCX_RASDP_CE_ICTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_RASDP_CE_ICTL(a) ody_pciercx_rasdp_ce_ictl_t
#define bustype_ODY_PCIERCX_RASDP_CE_ICTL(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_RASDP_CE_ICTL(a) "PCIERCX_RASDP_CE_ICTL"
#define busnum_ODY_PCIERCX_RASDP_CE_ICTL(a) (a)
#define arguments_ODY_PCIERCX_RASDP_CE_ICTL(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_rasdp_ce_loc
 *
 * PCIe RC RAS Data Correctable Error Location Register
 */
union ody_pciercx_rasdp_ce_loc {
	uint32_t u;
	struct ody_pciercx_rasdp_ce_loc_s {
		uint32_t reserved_0_3                : 4;
		uint32_t reg_first_corr_err          : 4;
		uint32_t loc_first_corr_err          : 8;
		uint32_t reserved_16_19              : 4;
		uint32_t reg_last_corr_err           : 4;
		uint32_t loc_last_corr_err           : 8;
	} s;
	/* struct ody_pciercx_rasdp_ce_loc_s cn; */
};
typedef union ody_pciercx_rasdp_ce_loc ody_pciercx_rasdp_ce_loc_t;

static inline uint64_t ODY_PCIERCX_RASDP_CE_LOC(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_RASDP_CE_LOC(uint64_t a)
{
	if (a <= 15)
		return 0x38c;
	__ody_csr_fatal("PCIERCX_RASDP_CE_LOC", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_RASDP_CE_LOC(a) ody_pciercx_rasdp_ce_loc_t
#define bustype_ODY_PCIERCX_RASDP_CE_LOC(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_RASDP_CE_LOC(a) "PCIERCX_RASDP_CE_LOC"
#define busnum_ODY_PCIERCX_RASDP_CE_LOC(a) (a)
#define arguments_ODY_PCIERCX_RASDP_CE_LOC(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_rasdp_ce_rp
 *
 * PCIe RC RAS Data Path Correctable Error Report Register
 */
union ody_pciercx_rasdp_ce_rp {
	uint32_t u;
	struct ody_pciercx_rasdp_ce_rp_s {
		uint32_t corr_count                  : 8;
		uint32_t reserved_8_19               : 12;
		uint32_t corr_cnt_sel_reg            : 4;
		uint32_t corr_cnt_sel                : 8;
	} s;
	/* struct ody_pciercx_rasdp_ce_rp_s cn; */
};
typedef union ody_pciercx_rasdp_ce_rp ody_pciercx_rasdp_ce_rp_t;

static inline uint64_t ODY_PCIERCX_RASDP_CE_RP(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_RASDP_CE_RP(uint64_t a)
{
	if (a <= 15)
		return 0x37c;
	__ody_csr_fatal("PCIERCX_RASDP_CE_RP", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_RASDP_CE_RP(a) ody_pciercx_rasdp_ce_rp_t
#define bustype_ODY_PCIERCX_RASDP_CE_RP(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_RASDP_CE_RP(a) "PCIERCX_RASDP_CE_RP"
#define busnum_ODY_PCIERCX_RASDP_CE_RP(a) (a)
#define arguments_ODY_PCIERCX_RASDP_CE_RP(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_rasdp_de_mc
 *
 * PCIe RC RAS Data Error Mode Clear Register
 */
union ody_pciercx_rasdp_de_mc {
	uint32_t u;
	struct ody_pciercx_rasdp_de_mc_s {
		uint32_t err_mode_clr                : 1;
		uint32_t reserved_1_31               : 31;
	} s;
	/* struct ody_pciercx_rasdp_de_mc_s cn; */
};
typedef union ody_pciercx_rasdp_de_mc ody_pciercx_rasdp_de_mc_t;

static inline uint64_t ODY_PCIERCX_RASDP_DE_MC(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_RASDP_DE_MC(uint64_t a)
{
	if (a <= 15)
		return 0x398;
	__ody_csr_fatal("PCIERCX_RASDP_DE_MC", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_RASDP_DE_MC(a) ody_pciercx_rasdp_de_mc_t
#define bustype_ODY_PCIERCX_RASDP_DE_MC(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_RASDP_DE_MC(a) "PCIERCX_RASDP_DE_MC"
#define busnum_ODY_PCIERCX_RASDP_DE_MC(a) (a)
#define arguments_ODY_PCIERCX_RASDP_DE_MC(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_rasdp_de_me
 *
 * PCIe RC RAS Data Error Mode Enable Register
 */
union ody_pciercx_rasdp_de_me {
	uint32_t u;
	struct ody_pciercx_rasdp_de_me_s {
		uint32_t err_mode_en                 : 1;
		uint32_t auto_lnk_dn_en              : 1;
		uint32_t reserved_2_31               : 30;
	} s;
	/* struct ody_pciercx_rasdp_de_me_s cn; */
};
typedef union ody_pciercx_rasdp_de_me ody_pciercx_rasdp_de_me_t;

static inline uint64_t ODY_PCIERCX_RASDP_DE_ME(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_RASDP_DE_ME(uint64_t a)
{
	if (a <= 15)
		return 0x394;
	__ody_csr_fatal("PCIERCX_RASDP_DE_ME", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_RASDP_DE_ME(a) ody_pciercx_rasdp_de_me_t
#define bustype_ODY_PCIERCX_RASDP_DE_ME(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_RASDP_DE_ME(a) "PCIERCX_RASDP_DE_ME"
#define busnum_ODY_PCIERCX_RASDP_DE_ME(a) (a)
#define arguments_ODY_PCIERCX_RASDP_DE_ME(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_rasdp_ep_ctl
 *
 * PCIe RC RAS Data Path Error Protection Control Register
 */
union ody_pciercx_rasdp_ep_ctl {
	uint32_t u;
	struct ody_pciercx_rasdp_ep_ctl_s {
		uint32_t ep_dis_tx                   : 1;
		uint32_t ep_dis_axib_masc            : 1;
		uint32_t ep_dis_axib_outb            : 1;
		uint32_t ep_dis_dma_wr               : 1;
		uint32_t ep_dis_l2_tx                : 1;
		uint32_t ep_dis_l3_tx                : 1;
		uint32_t ep_dis_adm_tx               : 1;
		uint32_t ep_dis_cxs_tx               : 1;
		uint32_t ep_dis_dtim_tx              : 1;
		uint32_t ep_dis_cxl_tx               : 1;
		uint32_t reserved_10_15              : 6;
		uint32_t ep_dis_rx                   : 1;
		uint32_t ep_dis_axib_inbc            : 1;
		uint32_t ep_dis_axib_inbr            : 1;
		uint32_t ep_dis_dma_rd               : 1;
		uint32_t ep_dis_l2_rx                : 1;
		uint32_t ep_dis_l3_rx                : 1;
		uint32_t ep_dis_adm_rx               : 1;
		uint32_t ep_dis_cxs_rx               : 1;
		uint32_t ep_dis_ltim                 : 1;
		uint32_t reserved_25_31              : 7;
	} s;
	/* struct ody_pciercx_rasdp_ep_ctl_s cn; */
};
typedef union ody_pciercx_rasdp_ep_ctl ody_pciercx_rasdp_ep_ctl_t;

static inline uint64_t ODY_PCIERCX_RASDP_EP_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_RASDP_EP_CTL(uint64_t a)
{
	if (a <= 15)
		return 0x374;
	__ody_csr_fatal("PCIERCX_RASDP_EP_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_RASDP_EP_CTL(a) ody_pciercx_rasdp_ep_ctl_t
#define bustype_ODY_PCIERCX_RASDP_EP_CTL(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_RASDP_EP_CTL(a) "PCIERCX_RASDP_EP_CTL"
#define busnum_ODY_PCIERCX_RASDP_EP_CTL(a) (a)
#define arguments_ODY_PCIERCX_RASDP_EP_CTL(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_rasdp_hdr
 *
 * PCIe RC RAS Data Path Extended Capability Register
 */
union ody_pciercx_rasdp_hdr {
	uint32_t u;
	struct ody_pciercx_rasdp_hdr_s {
		uint32_t vsec_id                     : 16;
		uint32_t vsec_rev                    : 4;
		uint32_t vsec_length                 : 12;
	} s;
	/* struct ody_pciercx_rasdp_hdr_s cn; */
};
typedef union ody_pciercx_rasdp_hdr ody_pciercx_rasdp_hdr_t;

static inline uint64_t ODY_PCIERCX_RASDP_HDR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_RASDP_HDR(uint64_t a)
{
	if (a <= 15)
		return 0x370;
	__ody_csr_fatal("PCIERCX_RASDP_HDR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_RASDP_HDR(a) ody_pciercx_rasdp_hdr_t
#define bustype_ODY_PCIERCX_RASDP_HDR(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_RASDP_HDR(a) "PCIERCX_RASDP_HDR"
#define busnum_ODY_PCIERCX_RASDP_HDR(a) (a)
#define arguments_ODY_PCIERCX_RASDP_HDR(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_rasdp_radr_ce
 *
 * PCIe RC RAS RAM Address Corrected Error Register
 */
union ody_pciercx_rasdp_radr_ce {
	uint32_t u;
	struct ody_pciercx_rasdp_radr_ce_s {
		uint32_t ram_addr_corr_err           : 27;
		uint32_t reserved_27                 : 1;
		uint32_t ram_idx_corr_err            : 4;
	} s;
	/* struct ody_pciercx_rasdp_radr_ce_s cn; */
};
typedef union ody_pciercx_rasdp_radr_ce ody_pciercx_rasdp_radr_ce_t;

static inline uint64_t ODY_PCIERCX_RASDP_RADR_CE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_RASDP_RADR_CE(uint64_t a)
{
	if (a <= 15)
		return 0x39c;
	__ody_csr_fatal("PCIERCX_RASDP_RADR_CE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_RASDP_RADR_CE(a) ody_pciercx_rasdp_radr_ce_t
#define bustype_ODY_PCIERCX_RASDP_RADR_CE(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_RASDP_RADR_CE(a) "PCIERCX_RASDP_RADR_CE"
#define busnum_ODY_PCIERCX_RASDP_RADR_CE(a) (a)
#define arguments_ODY_PCIERCX_RASDP_RADR_CE(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_rasdp_radr_uce
 *
 * PCIe RC RAS RAM Address Uncorrected Error Register
 */
union ody_pciercx_rasdp_radr_uce {
	uint32_t u;
	struct ody_pciercx_rasdp_radr_uce_s {
		uint32_t ram_addr_ucorr_err          : 27;
		uint32_t reserved_27                 : 1;
		uint32_t ram_idx_ucorr_err           : 4;
	} s;
	/* struct ody_pciercx_rasdp_radr_uce_s cn; */
};
typedef union ody_pciercx_rasdp_radr_uce ody_pciercx_rasdp_radr_uce_t;

static inline uint64_t ODY_PCIERCX_RASDP_RADR_UCE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_RASDP_RADR_UCE(uint64_t a)
{
	if (a <= 15)
		return 0x3a0;
	__ody_csr_fatal("PCIERCX_RASDP_RADR_UCE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_RASDP_RADR_UCE(a) ody_pciercx_rasdp_radr_uce_t
#define bustype_ODY_PCIERCX_RASDP_RADR_UCE(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_RASDP_RADR_UCE(a) "PCIERCX_RASDP_RADR_UCE"
#define busnum_ODY_PCIERCX_RASDP_RADR_UCE(a) (a)
#define arguments_ODY_PCIERCX_RASDP_RADR_UCE(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_rasdp_uce_ctl
 *
 * PCIe RC RAS Data Path Uncorrectable Error Control Register
 */
union ody_pciercx_rasdp_uce_ctl {
	uint32_t u;
	struct ody_pciercx_rasdp_uce_ctl_s {
		uint32_t ep_dis_l3_rx                : 1;
		uint32_t reserved_1_3                : 3;
		uint32_t ucorr_en_cntrs              : 1;
		uint32_t reserved_5_19               : 15;
		uint32_t ucorr_cnt_sel_reg           : 4;
		uint32_t ucorr_cnt_sel               : 8;
	} s;
	/* struct ody_pciercx_rasdp_uce_ctl_s cn; */
};
typedef union ody_pciercx_rasdp_uce_ctl ody_pciercx_rasdp_uce_ctl_t;

static inline uint64_t ODY_PCIERCX_RASDP_UCE_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_RASDP_UCE_CTL(uint64_t a)
{
	if (a <= 15)
		return 0x380;
	__ody_csr_fatal("PCIERCX_RASDP_UCE_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_RASDP_UCE_CTL(a) ody_pciercx_rasdp_uce_ctl_t
#define bustype_ODY_PCIERCX_RASDP_UCE_CTL(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_RASDP_UCE_CTL(a) "PCIERCX_RASDP_UCE_CTL"
#define busnum_ODY_PCIERCX_RASDP_UCE_CTL(a) (a)
#define arguments_ODY_PCIERCX_RASDP_UCE_CTL(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_rasdp_uce_loc
 *
 * PCIe RC RAS Data Uncorrectable Error Location Register
 */
union ody_pciercx_rasdp_uce_loc {
	uint32_t u;
	struct ody_pciercx_rasdp_uce_loc_s {
		uint32_t reserved_0_3                : 4;
		uint32_t reg_first_ucorr_err         : 4;
		uint32_t loc_first_ucorr_err         : 8;
		uint32_t reserved_16_19              : 4;
		uint32_t reg_last_ucorr_err          : 4;
		uint32_t loc_last_ucorr_err          : 8;
	} s;
	/* struct ody_pciercx_rasdp_uce_loc_s cn; */
};
typedef union ody_pciercx_rasdp_uce_loc ody_pciercx_rasdp_uce_loc_t;

static inline uint64_t ODY_PCIERCX_RASDP_UCE_LOC(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_RASDP_UCE_LOC(uint64_t a)
{
	if (a <= 15)
		return 0x390;
	__ody_csr_fatal("PCIERCX_RASDP_UCE_LOC", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_RASDP_UCE_LOC(a) ody_pciercx_rasdp_uce_loc_t
#define bustype_ODY_PCIERCX_RASDP_UCE_LOC(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_RASDP_UCE_LOC(a) "PCIERCX_RASDP_UCE_LOC"
#define busnum_ODY_PCIERCX_RASDP_UCE_LOC(a) (a)
#define arguments_ODY_PCIERCX_RASDP_UCE_LOC(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_rasdp_uce_rp
 *
 * PCIe RC RAS Data Path Uncorrectable Error Report Register
 */
union ody_pciercx_rasdp_uce_rp {
	uint32_t u;
	struct ody_pciercx_rasdp_uce_rp_s {
		uint32_t ucorr_count                 : 8;
		uint32_t reserved_8_19               : 12;
		uint32_t ucorr_cnt_sel_reg           : 4;
		uint32_t ucorr_cnt_sel               : 8;
	} s;
	/* struct ody_pciercx_rasdp_uce_rp_s cn; */
};
typedef union ody_pciercx_rasdp_uce_rp ody_pciercx_rasdp_uce_rp_t;

static inline uint64_t ODY_PCIERCX_RASDP_UCE_RP(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_RASDP_UCE_RP(uint64_t a)
{
	if (a <= 15)
		return 0x384;
	__ody_csr_fatal("PCIERCX_RASDP_UCE_RP", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_RASDP_UCE_RP(a) ody_pciercx_rasdp_uce_rp_t
#define bustype_ODY_PCIERCX_RASDP_UCE_RP(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_RASDP_UCE_RP(a) "PCIERCX_RASDP_UCE_RP"
#define busnum_ODY_PCIERCX_RASDP_UCE_RP(a) (a)
#define arguments_ODY_PCIERCX_RASDP_UCE_RP(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_rev
 *
 * PCIe RC Class Code/Revision ID Register
 */
union ody_pciercx_rev {
	uint32_t u;
	struct ody_pciercx_rev_s {
		uint32_t rid                         : 8;
		uint32_t pi                          : 8;
		uint32_t sc                          : 8;
		uint32_t bcc                         : 8;
	} s;
	/* struct ody_pciercx_rev_s cn; */
};
typedef union ody_pciercx_rev ody_pciercx_rev_t;

static inline uint64_t ODY_PCIERCX_REV(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_REV(uint64_t a)
{
	if (a <= 15)
		return 8;
	__ody_csr_fatal("PCIERCX_REV", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_REV(a) ody_pciercx_rev_t
#define bustype_ODY_PCIERCX_REV(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_REV(a) "PCIERCX_REV"
#define busnum_ODY_PCIERCX_REV(a) (a)
#define arguments_ODY_PCIERCX_REV(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_root_ctl_cap
 *
 * PCIe RC Root Control/Root Capabilities Register
 */
union ody_pciercx_root_ctl_cap {
	uint32_t u;
	struct ody_pciercx_root_ctl_cap_s {
		uint32_t secee                       : 1;
		uint32_t senfee                      : 1;
		uint32_t sefee                       : 1;
		uint32_t pmeie                       : 1;
		uint32_t crssve                      : 1;
		uint32_t reserved_5_15               : 11;
		uint32_t crssv                       : 1;
		uint32_t reserved_17_31              : 15;
	} s;
	/* struct ody_pciercx_root_ctl_cap_s cn; */
};
typedef union ody_pciercx_root_ctl_cap ody_pciercx_root_ctl_cap_t;

static inline uint64_t ODY_PCIERCX_ROOT_CTL_CAP(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_ROOT_CTL_CAP(uint64_t a)
{
	if (a <= 15)
		return 0x8c;
	__ody_csr_fatal("PCIERCX_ROOT_CTL_CAP", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_ROOT_CTL_CAP(a) ody_pciercx_root_ctl_cap_t
#define bustype_ODY_PCIERCX_ROOT_CTL_CAP(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_ROOT_CTL_CAP(a) "PCIERCX_ROOT_CTL_CAP"
#define busnum_ODY_PCIERCX_ROOT_CTL_CAP(a) (a)
#define arguments_ODY_PCIERCX_ROOT_CTL_CAP(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_root_err_cmd
 *
 * PCIe RC Root Error Command Register
 */
union ody_pciercx_root_err_cmd {
	uint32_t u;
	struct ody_pciercx_root_err_cmd_s {
		uint32_t cere                        : 1;
		uint32_t nfere                       : 1;
		uint32_t fere                        : 1;
		uint32_t reserved_3_31               : 29;
	} s;
	/* struct ody_pciercx_root_err_cmd_s cn; */
};
typedef union ody_pciercx_root_err_cmd ody_pciercx_root_err_cmd_t;

static inline uint64_t ODY_PCIERCX_ROOT_ERR_CMD(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_ROOT_ERR_CMD(uint64_t a)
{
	if (a <= 15)
		return 0x12c;
	__ody_csr_fatal("PCIERCX_ROOT_ERR_CMD", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_ROOT_ERR_CMD(a) ody_pciercx_root_err_cmd_t
#define bustype_ODY_PCIERCX_ROOT_ERR_CMD(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_ROOT_ERR_CMD(a) "PCIERCX_ROOT_ERR_CMD"
#define busnum_ODY_PCIERCX_ROOT_ERR_CMD(a) (a)
#define arguments_ODY_PCIERCX_ROOT_ERR_CMD(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_root_err_stat
 *
 * PCIe RC Root Error Status Register
 */
union ody_pciercx_root_err_stat {
	uint32_t u;
	struct ody_pciercx_root_err_stat_s {
		uint32_t ecr                         : 1;
		uint32_t multi_ecr                   : 1;
		uint32_t efnfr                       : 1;
		uint32_t multi_efnfr                 : 1;
		uint32_t fuf                         : 1;
		uint32_t nfemr                       : 1;
		uint32_t femr                        : 1;
		uint32_t reserved_7_26               : 20;
		uint32_t aeimn                       : 5;
	} s;
	/* struct ody_pciercx_root_err_stat_s cn; */
};
typedef union ody_pciercx_root_err_stat ody_pciercx_root_err_stat_t;

static inline uint64_t ODY_PCIERCX_ROOT_ERR_STAT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_ROOT_ERR_STAT(uint64_t a)
{
	if (a <= 15)
		return 0x130;
	__ody_csr_fatal("PCIERCX_ROOT_ERR_STAT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_ROOT_ERR_STAT(a) ody_pciercx_root_err_stat_t
#define bustype_ODY_PCIERCX_ROOT_ERR_STAT(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_ROOT_ERR_STAT(a) "PCIERCX_ROOT_ERR_STAT"
#define busnum_ODY_PCIERCX_ROOT_ERR_STAT(a) (a)
#define arguments_ODY_PCIERCX_ROOT_ERR_STAT(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_root_stat
 *
 * PCIe RC Root Status Register
 */
union ody_pciercx_root_stat {
	uint32_t u;
	struct ody_pciercx_root_stat_s {
		uint32_t pme_rid                     : 16;
		uint32_t pme_stat                    : 1;
		uint32_t pme_pend                    : 1;
		uint32_t reserved_18_31              : 14;
	} s;
	/* struct ody_pciercx_root_stat_s cn; */
};
typedef union ody_pciercx_root_stat ody_pciercx_root_stat_t;

static inline uint64_t ODY_PCIERCX_ROOT_STAT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_ROOT_STAT(uint64_t a)
{
	if (a <= 15)
		return 0x90;
	__ody_csr_fatal("PCIERCX_ROOT_STAT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_ROOT_STAT(a) ody_pciercx_root_stat_t
#define bustype_ODY_PCIERCX_ROOT_STAT(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_ROOT_STAT(a) "PCIERCX_ROOT_STAT"
#define busnum_ODY_PCIERCX_ROOT_STAT(a) (a)
#define arguments_ODY_PCIERCX_ROOT_STAT(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_scap_hdr
 *
 * PCIe RC PCI Express Secondary Capability (Gen3) Header Register
 */
union ody_pciercx_scap_hdr {
	uint32_t u;
	struct ody_pciercx_scap_hdr_s {
		uint32_t pcieec                      : 16;
		uint32_t cv                          : 4;
		uint32_t nco                         : 12;
	} s;
	/* struct ody_pciercx_scap_hdr_s cn; */
};
typedef union ody_pciercx_scap_hdr ody_pciercx_scap_hdr_t;

static inline uint64_t ODY_PCIERCX_SCAP_HDR(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_SCAP_HDR(uint64_t a)
{
	if (a <= 15)
		return 0x168;
	__ody_csr_fatal("PCIERCX_SCAP_HDR", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_SCAP_HDR(a) ody_pciercx_scap_hdr_t
#define bustype_ODY_PCIERCX_SCAP_HDR(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_SCAP_HDR(a) "PCIERCX_SCAP_HDR"
#define busnum_ODY_PCIERCX_SCAP_HDR(a) (a)
#define arguments_ODY_PCIERCX_SCAP_HDR(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_ser_num_1
 *
 * PCIe RC Serial Number 1 Register
 */
union ody_pciercx_ser_num_1 {
	uint32_t u;
	struct ody_pciercx_ser_num_1_s {
		uint32_t dword1                      : 32;
	} s;
	/* struct ody_pciercx_ser_num_1_s cn; */
};
typedef union ody_pciercx_ser_num_1 ody_pciercx_ser_num_1_t;

static inline uint64_t ODY_PCIERCX_SER_NUM_1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_SER_NUM_1(uint64_t a)
{
	if (a <= 15)
		return 0x14c;
	__ody_csr_fatal("PCIERCX_SER_NUM_1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_SER_NUM_1(a) ody_pciercx_ser_num_1_t
#define bustype_ODY_PCIERCX_SER_NUM_1(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_SER_NUM_1(a) "PCIERCX_SER_NUM_1"
#define busnum_ODY_PCIERCX_SER_NUM_1(a) (a)
#define arguments_ODY_PCIERCX_SER_NUM_1(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_ser_num_2
 *
 * PCIe RC Serial Number 2 Register
 */
union ody_pciercx_ser_num_2 {
	uint32_t u;
	struct ody_pciercx_ser_num_2_s {
		uint32_t dword2                      : 32;
	} s;
	/* struct ody_pciercx_ser_num_2_s cn; */
};
typedef union ody_pciercx_ser_num_2 ody_pciercx_ser_num_2_t;

static inline uint64_t ODY_PCIERCX_SER_NUM_2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_SER_NUM_2(uint64_t a)
{
	if (a <= 15)
		return 0x150;
	__ody_csr_fatal("PCIERCX_SER_NUM_2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_SER_NUM_2(a) ody_pciercx_ser_num_2_t
#define bustype_ODY_PCIERCX_SER_NUM_2(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_SER_NUM_2(a) "PCIERCX_SER_NUM_2"
#define busnum_ODY_PCIERCX_SER_NUM_2(a) (a)
#define arguments_ODY_PCIERCX_SER_NUM_2(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_slot_cap
 *
 * PCIe RC Slot Capabilities Register
 */
union ody_pciercx_slot_cap {
	uint32_t u;
	struct ody_pciercx_slot_cap_s {
		uint32_t abp                         : 1;
		uint32_t pcp                         : 1;
		uint32_t mrlsp                       : 1;
		uint32_t aip                         : 1;
		uint32_t pip                         : 1;
		uint32_t hp_s                        : 1;
		uint32_t hp_c                        : 1;
		uint32_t sp_lv                       : 8;
		uint32_t sp_ls                       : 2;
		uint32_t emip                        : 1;
		uint32_t nccs                        : 1;
		uint32_t ps_num                      : 13;
	} s;
	/* struct ody_pciercx_slot_cap_s cn; */
};
typedef union ody_pciercx_slot_cap ody_pciercx_slot_cap_t;

static inline uint64_t ODY_PCIERCX_SLOT_CAP(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_SLOT_CAP(uint64_t a)
{
	if (a <= 15)
		return 0x84;
	__ody_csr_fatal("PCIERCX_SLOT_CAP", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_SLOT_CAP(a) ody_pciercx_slot_cap_t
#define bustype_ODY_PCIERCX_SLOT_CAP(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_SLOT_CAP(a) "PCIERCX_SLOT_CAP"
#define busnum_ODY_PCIERCX_SLOT_CAP(a) (a)
#define arguments_ODY_PCIERCX_SLOT_CAP(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_slot_cap2
 *
 * PCIe RC Slot Capabilities 2 Register
 */
union ody_pciercx_slot_cap2 {
	uint32_t u;
	struct ody_pciercx_slot_cap2_s {
		uint32_t reserved_0_31               : 32;
	} s;
	/* struct ody_pciercx_slot_cap2_s cn; */
};
typedef union ody_pciercx_slot_cap2 ody_pciercx_slot_cap2_t;

static inline uint64_t ODY_PCIERCX_SLOT_CAP2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_SLOT_CAP2(uint64_t a)
{
	if (a <= 15)
		return 0xa4;
	__ody_csr_fatal("PCIERCX_SLOT_CAP2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_SLOT_CAP2(a) ody_pciercx_slot_cap2_t
#define bustype_ODY_PCIERCX_SLOT_CAP2(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_SLOT_CAP2(a) "PCIERCX_SLOT_CAP2"
#define busnum_ODY_PCIERCX_SLOT_CAP2(a) (a)
#define arguments_ODY_PCIERCX_SLOT_CAP2(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_slot_ctl
 *
 * PCIe RC Slot Control/Slot Status Register
 */
union ody_pciercx_slot_ctl {
	uint32_t u;
	struct ody_pciercx_slot_ctl_s {
		uint32_t abp_en                      : 1;
		uint32_t pf_en                       : 1;
		uint32_t mrls_en                     : 1;
		uint32_t pd_en                       : 1;
		uint32_t ccint_en                    : 1;
		uint32_t hpint_en                    : 1;
		uint32_t aic                         : 2;
		uint32_t pic                         : 2;
		uint32_t pcc                         : 1;
		uint32_t emic                        : 1;
		uint32_t dlls_en                     : 1;
		uint32_t reserved_13_15              : 3;
		uint32_t abp_d                       : 1;
		uint32_t pf_d                        : 1;
		uint32_t mrls_c                      : 1;
		uint32_t pd_c                        : 1;
		uint32_t ccint_d                     : 1;
		uint32_t mrlss                       : 1;
		uint32_t pds                         : 1;
		uint32_t emis                        : 1;
		uint32_t dlls_c                      : 1;
		uint32_t reserved_25_31              : 7;
	} s;
	/* struct ody_pciercx_slot_ctl_s cn; */
};
typedef union ody_pciercx_slot_ctl ody_pciercx_slot_ctl_t;

static inline uint64_t ODY_PCIERCX_SLOT_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_SLOT_CTL(uint64_t a)
{
	if (a <= 15)
		return 0x88;
	__ody_csr_fatal("PCIERCX_SLOT_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_SLOT_CTL(a) ody_pciercx_slot_ctl_t
#define bustype_ODY_PCIERCX_SLOT_CTL(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_SLOT_CTL(a) "PCIERCX_SLOT_CTL"
#define busnum_ODY_PCIERCX_SLOT_CTL(a) (a)
#define arguments_ODY_PCIERCX_SLOT_CTL(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_slot_ctl_stat2
 *
 * PCIe RC Slot Control 2 Register/Slot Status 2 Register
 */
union ody_pciercx_slot_ctl_stat2 {
	uint32_t u;
	struct ody_pciercx_slot_ctl_stat2_s {
		uint32_t reserved_0_31               : 32;
	} s;
	/* struct ody_pciercx_slot_ctl_stat2_s cn; */
};
typedef union ody_pciercx_slot_ctl_stat2 ody_pciercx_slot_ctl_stat2_t;

static inline uint64_t ODY_PCIERCX_SLOT_CTL_STAT2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_SLOT_CTL_STAT2(uint64_t a)
{
	if (a <= 15)
		return 0xa8;
	__ody_csr_fatal("PCIERCX_SLOT_CTL_STAT2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_SLOT_CTL_STAT2(a) ody_pciercx_slot_ctl_stat2_t
#define bustype_ODY_PCIERCX_SLOT_CTL_STAT2(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_SLOT_CTL_STAT2(a) "PCIERCX_SLOT_CTL_STAT2"
#define busnum_ODY_PCIERCX_SLOT_CTL_STAT2(a) (a)
#define arguments_ODY_PCIERCX_SLOT_CTL_STAT2(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_sn_base
 *
 * Device Serial Number Extended Capability Header Register
 */
union ody_pciercx_sn_base {
	uint32_t u;
	struct ody_pciercx_sn_base_s {
		uint32_t pcieec                      : 16;
		uint32_t cv                          : 4;
		uint32_t nco                         : 12;
	} s;
	/* struct ody_pciercx_sn_base_s cn; */
};
typedef union ody_pciercx_sn_base ody_pciercx_sn_base_t;

static inline uint64_t ODY_PCIERCX_SN_BASE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_SN_BASE(uint64_t a)
{
	if (a <= 15)
		return 0x148;
	__ody_csr_fatal("PCIERCX_SN_BASE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_SN_BASE(a) ody_pciercx_sn_base_t
#define bustype_ODY_PCIERCX_SN_BASE(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_SN_BASE(a) "PCIERCX_SN_BASE"
#define busnum_ODY_PCIERCX_SN_BASE(a) (a)
#define arguments_ODY_PCIERCX_SN_BASE(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_symb_timer
 *
 * PCIe RC Symbol Timer/Filter Mask Register 1
 */
union ody_pciercx_symb_timer {
	uint32_t u;
	struct ody_pciercx_symb_timer_s {
		uint32_t skpiv                       : 11;
		uint32_t reserved_11_14              : 4;
		uint32_t dfcwt                       : 1;
		uint32_t m_fun                       : 1;
		uint32_t m_pois_filt                 : 1;
		uint32_t m_bar_match                 : 1;
		uint32_t m_cfg1_filt                 : 1;
		uint32_t m_lk_filt                   : 1;
		uint32_t m_cpl_tag_err               : 1;
		uint32_t m_cpl_rid_err               : 1;
		uint32_t m_cpl_fun_err               : 1;
		uint32_t m_cpl_tc_err                : 1;
		uint32_t m_cpl_attr_err              : 1;
		uint32_t m_cpl_len_err               : 1;
		uint32_t m_ecrc_filt                 : 1;
		uint32_t m_cpl_ecrc_filt             : 1;
		uint32_t msg_ctrl                    : 1;
		uint32_t m_io_filt                   : 1;
		uint32_t m_cfg0_filt                 : 1;
	} s;
	/* struct ody_pciercx_symb_timer_s cn; */
};
typedef union ody_pciercx_symb_timer ody_pciercx_symb_timer_t;

static inline uint64_t ODY_PCIERCX_SYMB_TIMER(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_SYMB_TIMER(uint64_t a)
{
	if (a <= 15)
		return 0x71c;
	__ody_csr_fatal("PCIERCX_SYMB_TIMER", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_SYMB_TIMER(a) ody_pciercx_symb_timer_t
#define bustype_ODY_PCIERCX_SYMB_TIMER(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_SYMB_TIMER(a) "PCIERCX_SYMB_TIMER"
#define busnum_ODY_PCIERCX_SYMB_TIMER(a) (a)
#define arguments_ODY_PCIERCX_SYMB_TIMER(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_timer_ctl
 *
 * PCIe RC PF Timer Control and Max Function Number Register
 */
union ody_pciercx_timer_ctl {
	uint32_t u;
	struct ody_pciercx_timer_ctl_s {
		uint32_t mfuncn                      : 8;
		uint32_t reserved_8_13               : 6;
		uint32_t tmrt                        : 5;
		uint32_t tmanlt                      : 5;
		uint32_t updft                       : 5;
		uint32_t flmsf                       : 2;
		uint32_t reserved_31                 : 1;
	} s;
	/* struct ody_pciercx_timer_ctl_s cn; */
};
typedef union ody_pciercx_timer_ctl ody_pciercx_timer_ctl_t;

static inline uint64_t ODY_PCIERCX_TIMER_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_TIMER_CTL(uint64_t a)
{
	if (a <= 15)
		return 0x718;
	__ody_csr_fatal("PCIERCX_TIMER_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_TIMER_CTL(a) ody_pciercx_timer_ctl_t
#define bustype_ODY_PCIERCX_TIMER_CTL(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_TIMER_CTL(a) "PCIERCX_TIMER_CTL"
#define busnum_ODY_PCIERCX_TIMER_CTL(a) (a)
#define arguments_ODY_PCIERCX_TIMER_CTL(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_tlp_plog1
 *
 * PCIe RC TLP Prefix Log Register 1
 */
union ody_pciercx_tlp_plog1 {
	uint32_t u;
	struct ody_pciercx_tlp_plog1_s {
		uint32_t dword1                      : 32;
	} s;
	/* struct ody_pciercx_tlp_plog1_s cn; */
};
typedef union ody_pciercx_tlp_plog1 ody_pciercx_tlp_plog1_t;

static inline uint64_t ODY_PCIERCX_TLP_PLOG1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_TLP_PLOG1(uint64_t a)
{
	if (a <= 15)
		return 0x138;
	__ody_csr_fatal("PCIERCX_TLP_PLOG1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_TLP_PLOG1(a) ody_pciercx_tlp_plog1_t
#define bustype_ODY_PCIERCX_TLP_PLOG1(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_TLP_PLOG1(a) "PCIERCX_TLP_PLOG1"
#define busnum_ODY_PCIERCX_TLP_PLOG1(a) (a)
#define arguments_ODY_PCIERCX_TLP_PLOG1(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_tlp_plog2
 *
 * PCIe RC TLP Prefix Log Register 2
 */
union ody_pciercx_tlp_plog2 {
	uint32_t u;
	struct ody_pciercx_tlp_plog2_s {
		uint32_t dword2                      : 32;
	} s;
	/* struct ody_pciercx_tlp_plog2_s cn; */
};
typedef union ody_pciercx_tlp_plog2 ody_pciercx_tlp_plog2_t;

static inline uint64_t ODY_PCIERCX_TLP_PLOG2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_TLP_PLOG2(uint64_t a)
{
	if (a <= 15)
		return 0x13c;
	__ody_csr_fatal("PCIERCX_TLP_PLOG2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_TLP_PLOG2(a) ody_pciercx_tlp_plog2_t
#define bustype_ODY_PCIERCX_TLP_PLOG2(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_TLP_PLOG2(a) "PCIERCX_TLP_PLOG2"
#define busnum_ODY_PCIERCX_TLP_PLOG2(a) (a)
#define arguments_ODY_PCIERCX_TLP_PLOG2(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_tlp_plog3
 *
 * PCIe RC TLP Prefix Log Register 3
 */
union ody_pciercx_tlp_plog3 {
	uint32_t u;
	struct ody_pciercx_tlp_plog3_s {
		uint32_t dword3                      : 32;
	} s;
	/* struct ody_pciercx_tlp_plog3_s cn; */
};
typedef union ody_pciercx_tlp_plog3 ody_pciercx_tlp_plog3_t;

static inline uint64_t ODY_PCIERCX_TLP_PLOG3(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_TLP_PLOG3(uint64_t a)
{
	if (a <= 15)
		return 0x140;
	__ody_csr_fatal("PCIERCX_TLP_PLOG3", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_TLP_PLOG3(a) ody_pciercx_tlp_plog3_t
#define bustype_ODY_PCIERCX_TLP_PLOG3(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_TLP_PLOG3(a) "PCIERCX_TLP_PLOG3"
#define busnum_ODY_PCIERCX_TLP_PLOG3(a) (a)
#define arguments_ODY_PCIERCX_TLP_PLOG3(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_tlp_plog4
 *
 * PCIe RC TLP Prefix Log Register 4
 */
union ody_pciercx_tlp_plog4 {
	uint32_t u;
	struct ody_pciercx_tlp_plog4_s {
		uint32_t dword4                      : 32;
	} s;
	/* struct ody_pciercx_tlp_plog4_s cn; */
};
typedef union ody_pciercx_tlp_plog4 ody_pciercx_tlp_plog4_t;

static inline uint64_t ODY_PCIERCX_TLP_PLOG4(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_TLP_PLOG4(uint64_t a)
{
	if (a <= 15)
		return 0x144;
	__ody_csr_fatal("PCIERCX_TLP_PLOG4", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_TLP_PLOG4(a) ody_pciercx_tlp_plog4_t
#define bustype_ODY_PCIERCX_TLP_PLOG4(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_TLP_PLOG4(a) "PCIERCX_TLP_PLOG4"
#define busnum_ODY_PCIERCX_TLP_PLOG4(a) (a)
#define arguments_ODY_PCIERCX_TLP_PLOG4(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_trgt_cpl_lut_del_ent
 *
 * PCIe RC TRGT_CPL_LUT Delete Entry Control Register
 */
union ody_pciercx_trgt_cpl_lut_del_ent {
	uint32_t u;
	struct ody_pciercx_trgt_cpl_lut_del_ent_s {
		uint32_t lkup_id                     : 31;
		uint32_t del_en                      : 1;
	} s;
	/* struct ody_pciercx_trgt_cpl_lut_del_ent_s cn; */
};
typedef union ody_pciercx_trgt_cpl_lut_del_ent ody_pciercx_trgt_cpl_lut_del_ent_t;

static inline uint64_t ODY_PCIERCX_TRGT_CPL_LUT_DEL_ENT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_TRGT_CPL_LUT_DEL_ENT(uint64_t a)
{
	if (a <= 15)
		return 0x8c8;
	__ody_csr_fatal("PCIERCX_TRGT_CPL_LUT_DEL_ENT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_TRGT_CPL_LUT_DEL_ENT(a) ody_pciercx_trgt_cpl_lut_del_ent_t
#define bustype_ODY_PCIERCX_TRGT_CPL_LUT_DEL_ENT(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_TRGT_CPL_LUT_DEL_ENT(a) "PCIERCX_TRGT_CPL_LUT_DEL_ENT"
#define busnum_ODY_PCIERCX_TRGT_CPL_LUT_DEL_ENT(a) (a)
#define arguments_ODY_PCIERCX_TRGT_CPL_LUT_DEL_ENT(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_trgt_map_ctl
 *
 * PCIe RC Programmable Target Map Control Register
 */
union ody_pciercx_trgt_map_ctl {
	uint32_t u;
	struct ody_pciercx_trgt_map_ctl_s {
		uint32_t map_pf                      : 6;
		uint32_t map_rom                     : 1;
		uint32_t map_vf                      : 6;
		uint32_t reserved_13_15              : 3;
		uint32_t map_idx                     : 5;
		uint32_t reserved_21_31              : 11;
	} s;
	/* struct ody_pciercx_trgt_map_ctl_s cn; */
};
typedef union ody_pciercx_trgt_map_ctl ody_pciercx_trgt_map_ctl_t;

static inline uint64_t ODY_PCIERCX_TRGT_MAP_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_TRGT_MAP_CTL(uint64_t a)
{
	if (a <= 15)
		return 0x81c;
	__ody_csr_fatal("PCIERCX_TRGT_MAP_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_TRGT_MAP_CTL(a) ody_pciercx_trgt_map_ctl_t
#define bustype_ODY_PCIERCX_TRGT_MAP_CTL(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_TRGT_MAP_CTL(a) "PCIERCX_TRGT_MAP_CTL"
#define busnum_ODY_PCIERCX_TRGT_MAP_CTL(a) (a)
#define arguments_ODY_PCIERCX_TRGT_MAP_CTL(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_ucor_err_msk
 *
 * PCIe RC Uncorrectable Error Mask Register
 */
union ody_pciercx_ucor_err_msk {
	uint32_t u;
	struct ody_pciercx_ucor_err_msk_s {
		uint32_t reserved_0_3                : 4;
		uint32_t dlpem                       : 1;
		uint32_t sdem                        : 1;
		uint32_t reserved_6_11               : 6;
		uint32_t ptlpm                       : 1;
		uint32_t fcpem                       : 1;
		uint32_t ctm                         : 1;
		uint32_t cam                         : 1;
		uint32_t ucm                         : 1;
		uint32_t rom                         : 1;
		uint32_t mtlpm                       : 1;
		uint32_t ecrcem                      : 1;
		uint32_t urem                        : 1;
		uint32_t avm                         : 1;
		uint32_t uciem                       : 1;
		uint32_t reserved_23                 : 1;
		uint32_t uatombm                     : 1;
		uint32_t tpbem                       : 1;
		uint32_t tebem                       : 1;
		uint32_t debem                       : 1;
		uint32_t icfm                        : 1;
		uint32_t mitm                        : 1;
		uint32_t pcfm                        : 1;
		uint32_t reserved_31                 : 1;
	} s;
	struct ody_pciercx_ucor_err_msk_cn {
		uint32_t reserved_0                  : 1;
		uint32_t reserved_1_3                : 3;
		uint32_t dlpem                       : 1;
		uint32_t sdem                        : 1;
		uint32_t reserved_6_11               : 6;
		uint32_t ptlpm                       : 1;
		uint32_t fcpem                       : 1;
		uint32_t ctm                         : 1;
		uint32_t cam                         : 1;
		uint32_t ucm                         : 1;
		uint32_t rom                         : 1;
		uint32_t mtlpm                       : 1;
		uint32_t ecrcem                      : 1;
		uint32_t urem                        : 1;
		uint32_t avm                         : 1;
		uint32_t uciem                       : 1;
		uint32_t reserved_23                 : 1;
		uint32_t uatombm                     : 1;
		uint32_t tpbem                       : 1;
		uint32_t tebem                       : 1;
		uint32_t debem                       : 1;
		uint32_t icfm                        : 1;
		uint32_t mitm                        : 1;
		uint32_t pcfm                        : 1;
		uint32_t reserved_31                 : 1;
	} cn;
};
typedef union ody_pciercx_ucor_err_msk ody_pciercx_ucor_err_msk_t;

static inline uint64_t ODY_PCIERCX_UCOR_ERR_MSK(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_UCOR_ERR_MSK(uint64_t a)
{
	if (a <= 15)
		return 0x108;
	__ody_csr_fatal("PCIERCX_UCOR_ERR_MSK", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_UCOR_ERR_MSK(a) ody_pciercx_ucor_err_msk_t
#define bustype_ODY_PCIERCX_UCOR_ERR_MSK(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_UCOR_ERR_MSK(a) "PCIERCX_UCOR_ERR_MSK"
#define busnum_ODY_PCIERCX_UCOR_ERR_MSK(a) (a)
#define arguments_ODY_PCIERCX_UCOR_ERR_MSK(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_ucor_err_sev
 *
 * PCIe RC Uncorrectable Error Severity Register
 */
union ody_pciercx_ucor_err_sev {
	uint32_t u;
	struct ody_pciercx_ucor_err_sev_s {
		uint32_t reserved_0_3                : 4;
		uint32_t dlpes                       : 1;
		uint32_t sdes                        : 1;
		uint32_t reserved_6_11               : 6;
		uint32_t ptlps                       : 1;
		uint32_t fcpes                       : 1;
		uint32_t cts                         : 1;
		uint32_t cas                         : 1;
		uint32_t ucs                         : 1;
		uint32_t ros                         : 1;
		uint32_t mtlps                       : 1;
		uint32_t ecrces                      : 1;
		uint32_t ures                        : 1;
		uint32_t avs                         : 1;
		uint32_t ies                         : 1;
		uint32_t reserved_23                 : 1;
		uint32_t uatombs                     : 1;
		uint32_t tpbes                       : 1;
		uint32_t ptebes                      : 1;
		uint32_t debes                       : 1;
		uint32_t icfs                        : 1;
		uint32_t mits                        : 1;
		uint32_t pcfs                        : 1;
		uint32_t reserved_31                 : 1;
	} s;
	struct ody_pciercx_ucor_err_sev_cn {
		uint32_t reserved_0                  : 1;
		uint32_t reserved_1_3                : 3;
		uint32_t dlpes                       : 1;
		uint32_t sdes                        : 1;
		uint32_t reserved_6_11               : 6;
		uint32_t ptlps                       : 1;
		uint32_t fcpes                       : 1;
		uint32_t cts                         : 1;
		uint32_t cas                         : 1;
		uint32_t ucs                         : 1;
		uint32_t ros                         : 1;
		uint32_t mtlps                       : 1;
		uint32_t ecrces                      : 1;
		uint32_t ures                        : 1;
		uint32_t avs                         : 1;
		uint32_t ies                         : 1;
		uint32_t reserved_23                 : 1;
		uint32_t uatombs                     : 1;
		uint32_t tpbes                       : 1;
		uint32_t ptebes                      : 1;
		uint32_t debes                       : 1;
		uint32_t icfs                        : 1;
		uint32_t mits                        : 1;
		uint32_t pcfs                        : 1;
		uint32_t reserved_31                 : 1;
	} cn;
};
typedef union ody_pciercx_ucor_err_sev ody_pciercx_ucor_err_sev_t;

static inline uint64_t ODY_PCIERCX_UCOR_ERR_SEV(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_UCOR_ERR_SEV(uint64_t a)
{
	if (a <= 15)
		return 0x10c;
	__ody_csr_fatal("PCIERCX_UCOR_ERR_SEV", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_UCOR_ERR_SEV(a) ody_pciercx_ucor_err_sev_t
#define bustype_ODY_PCIERCX_UCOR_ERR_SEV(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_UCOR_ERR_SEV(a) "PCIERCX_UCOR_ERR_SEV"
#define busnum_ODY_PCIERCX_UCOR_ERR_SEV(a) (a)
#define arguments_ODY_PCIERCX_UCOR_ERR_SEV(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_ucor_err_stat
 *
 * PCIe RC Uncorrectable Error Status Register
 */
union ody_pciercx_ucor_err_stat {
	uint32_t u;
	struct ody_pciercx_ucor_err_stat_s {
		uint32_t reserved_0_3                : 4;
		uint32_t dlpes                       : 1;
		uint32_t sdes                        : 1;
		uint32_t reserved_6_11               : 6;
		uint32_t ptlps                       : 1;
		uint32_t fcpes                       : 1;
		uint32_t cts                         : 1;
		uint32_t cas                         : 1;
		uint32_t ucs                         : 1;
		uint32_t ros                         : 1;
		uint32_t mtlps                       : 1;
		uint32_t ecrces                      : 1;
		uint32_t ures                        : 1;
		uint32_t avs                         : 1;
		uint32_t ucies                       : 1;
		uint32_t reserved_23                 : 1;
		uint32_t uatombs                     : 1;
		uint32_t tpbes                       : 1;
		uint32_t ptebes                      : 1;
		uint32_t debes                       : 1;
		uint32_t icfst                       : 1;
		uint32_t mitst                       : 1;
		uint32_t pcfst                       : 1;
		uint32_t reserved_31                 : 1;
	} s;
	struct ody_pciercx_ucor_err_stat_cn {
		uint32_t reserved_0                  : 1;
		uint32_t reserved_1_3                : 3;
		uint32_t dlpes                       : 1;
		uint32_t sdes                        : 1;
		uint32_t reserved_6_11               : 6;
		uint32_t ptlps                       : 1;
		uint32_t fcpes                       : 1;
		uint32_t cts                         : 1;
		uint32_t cas                         : 1;
		uint32_t ucs                         : 1;
		uint32_t ros                         : 1;
		uint32_t mtlps                       : 1;
		uint32_t ecrces                      : 1;
		uint32_t ures                        : 1;
		uint32_t avs                         : 1;
		uint32_t ucies                       : 1;
		uint32_t reserved_23                 : 1;
		uint32_t uatombs                     : 1;
		uint32_t tpbes                       : 1;
		uint32_t ptebes                      : 1;
		uint32_t debes                       : 1;
		uint32_t icfst                       : 1;
		uint32_t mitst                       : 1;
		uint32_t pcfst                       : 1;
		uint32_t reserved_31                 : 1;
	} cn;
};
typedef union ody_pciercx_ucor_err_stat ody_pciercx_ucor_err_stat_t;

static inline uint64_t ODY_PCIERCX_UCOR_ERR_STAT(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_UCOR_ERR_STAT(uint64_t a)
{
	if (a <= 15)
		return 0x104;
	__ody_csr_fatal("PCIERCX_UCOR_ERR_STAT", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_UCOR_ERR_STAT(a) ody_pciercx_ucor_err_stat_t
#define bustype_ODY_PCIERCX_UCOR_ERR_STAT(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_UCOR_ERR_STAT(a) "PCIERCX_UCOR_ERR_STAT"
#define busnum_ODY_PCIERCX_UCOR_ERR_STAT(a) (a)
#define arguments_ODY_PCIERCX_UCOR_ERR_STAT(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_unused_cap0
 *
 * PCIe RC Unused Capability Registers
 */
union ody_pciercx_unused_cap0 {
	uint32_t u;
	struct ody_pciercx_unused_cap0_s {
		uint32_t sw_hdr                      : 32;
	} s;
	/* struct ody_pciercx_unused_cap0_s cn; */
};
typedef union ody_pciercx_unused_cap0 ody_pciercx_unused_cap0_t;

static inline uint64_t ODY_PCIERCX_UNUSED_CAP0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_UNUSED_CAP0(uint64_t a)
{
	if (a <= 15)
		return 0xbc;
	__ody_csr_fatal("PCIERCX_UNUSED_CAP0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_UNUSED_CAP0(a) ody_pciercx_unused_cap0_t
#define bustype_ODY_PCIERCX_UNUSED_CAP0(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_UNUSED_CAP0(a) "PCIERCX_UNUSED_CAP0"
#define busnum_ODY_PCIERCX_UNUSED_CAP0(a) (a)
#define arguments_ODY_PCIERCX_UNUSED_CAP0(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_unused_cap1
 *
 * PCIe RC Unused Capability Registers
 */
union ody_pciercx_unused_cap1 {
	uint32_t u;
	struct ody_pciercx_unused_cap1_s {
		uint32_t sw_hdr                      : 32;
	} s;
	/* struct ody_pciercx_unused_cap1_s cn; */
};
typedef union ody_pciercx_unused_cap1 ody_pciercx_unused_cap1_t;

static inline uint64_t ODY_PCIERCX_UNUSED_CAP1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_UNUSED_CAP1(uint64_t a)
{
	if (a <= 15)
		return 0xc0;
	__ody_csr_fatal("PCIERCX_UNUSED_CAP1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_UNUSED_CAP1(a) ody_pciercx_unused_cap1_t
#define bustype_ODY_PCIERCX_UNUSED_CAP1(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_UNUSED_CAP1(a) "PCIERCX_UNUSED_CAP1"
#define busnum_ODY_PCIERCX_UNUSED_CAP1(a) (a)
#define arguments_ODY_PCIERCX_UNUSED_CAP1(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_unused_cap10
 *
 * PCIe RC Unused Capability Registers
 */
union ody_pciercx_unused_cap10 {
	uint32_t u;
	struct ody_pciercx_unused_cap10_s {
		uint32_t sw_hdr                      : 32;
	} s;
	/* struct ody_pciercx_unused_cap10_s cn; */
};
typedef union ody_pciercx_unused_cap10 ody_pciercx_unused_cap10_t;

static inline uint64_t ODY_PCIERCX_UNUSED_CAP10(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_UNUSED_CAP10(uint64_t a)
{
	if (a <= 15)
		return 0xe4;
	__ody_csr_fatal("PCIERCX_UNUSED_CAP10", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_UNUSED_CAP10(a) ody_pciercx_unused_cap10_t
#define bustype_ODY_PCIERCX_UNUSED_CAP10(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_UNUSED_CAP10(a) "PCIERCX_UNUSED_CAP10"
#define busnum_ODY_PCIERCX_UNUSED_CAP10(a) (a)
#define arguments_ODY_PCIERCX_UNUSED_CAP10(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_unused_cap11
 *
 * PCIe RC Unused Capability Registers
 */
union ody_pciercx_unused_cap11 {
	uint32_t u;
	struct ody_pciercx_unused_cap11_s {
		uint32_t sw_hdr                      : 32;
	} s;
	/* struct ody_pciercx_unused_cap11_s cn; */
};
typedef union ody_pciercx_unused_cap11 ody_pciercx_unused_cap11_t;

static inline uint64_t ODY_PCIERCX_UNUSED_CAP11(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_UNUSED_CAP11(uint64_t a)
{
	if (a <= 15)
		return 0xe8;
	__ody_csr_fatal("PCIERCX_UNUSED_CAP11", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_UNUSED_CAP11(a) ody_pciercx_unused_cap11_t
#define bustype_ODY_PCIERCX_UNUSED_CAP11(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_UNUSED_CAP11(a) "PCIERCX_UNUSED_CAP11"
#define busnum_ODY_PCIERCX_UNUSED_CAP11(a) (a)
#define arguments_ODY_PCIERCX_UNUSED_CAP11(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_unused_cap12
 *
 * PCIe RC Unused Capability Registers
 */
union ody_pciercx_unused_cap12 {
	uint32_t u;
	struct ody_pciercx_unused_cap12_s {
		uint32_t sw_hdr                      : 32;
	} s;
	/* struct ody_pciercx_unused_cap12_s cn; */
};
typedef union ody_pciercx_unused_cap12 ody_pciercx_unused_cap12_t;

static inline uint64_t ODY_PCIERCX_UNUSED_CAP12(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_UNUSED_CAP12(uint64_t a)
{
	if (a <= 15)
		return 0xec;
	__ody_csr_fatal("PCIERCX_UNUSED_CAP12", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_UNUSED_CAP12(a) ody_pciercx_unused_cap12_t
#define bustype_ODY_PCIERCX_UNUSED_CAP12(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_UNUSED_CAP12(a) "PCIERCX_UNUSED_CAP12"
#define busnum_ODY_PCIERCX_UNUSED_CAP12(a) (a)
#define arguments_ODY_PCIERCX_UNUSED_CAP12(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_unused_cap13
 *
 * PCIe RC Unused Capability Registers
 */
union ody_pciercx_unused_cap13 {
	uint32_t u;
	struct ody_pciercx_unused_cap13_s {
		uint32_t sw_hdr                      : 32;
	} s;
	/* struct ody_pciercx_unused_cap13_s cn; */
};
typedef union ody_pciercx_unused_cap13 ody_pciercx_unused_cap13_t;

static inline uint64_t ODY_PCIERCX_UNUSED_CAP13(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_UNUSED_CAP13(uint64_t a)
{
	if (a <= 15)
		return 0xf0;
	__ody_csr_fatal("PCIERCX_UNUSED_CAP13", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_UNUSED_CAP13(a) ody_pciercx_unused_cap13_t
#define bustype_ODY_PCIERCX_UNUSED_CAP13(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_UNUSED_CAP13(a) "PCIERCX_UNUSED_CAP13"
#define busnum_ODY_PCIERCX_UNUSED_CAP13(a) (a)
#define arguments_ODY_PCIERCX_UNUSED_CAP13(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_unused_cap14
 *
 * PCIe RC Unused Capability Registers
 */
union ody_pciercx_unused_cap14 {
	uint32_t u;
	struct ody_pciercx_unused_cap14_s {
		uint32_t sw_hdr                      : 32;
	} s;
	/* struct ody_pciercx_unused_cap14_s cn; */
};
typedef union ody_pciercx_unused_cap14 ody_pciercx_unused_cap14_t;

static inline uint64_t ODY_PCIERCX_UNUSED_CAP14(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_UNUSED_CAP14(uint64_t a)
{
	if (a <= 15)
		return 0xf4;
	__ody_csr_fatal("PCIERCX_UNUSED_CAP14", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_UNUSED_CAP14(a) ody_pciercx_unused_cap14_t
#define bustype_ODY_PCIERCX_UNUSED_CAP14(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_UNUSED_CAP14(a) "PCIERCX_UNUSED_CAP14"
#define busnum_ODY_PCIERCX_UNUSED_CAP14(a) (a)
#define arguments_ODY_PCIERCX_UNUSED_CAP14(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_unused_cap15
 *
 * PCIe RC Unused Capability Registers
 */
union ody_pciercx_unused_cap15 {
	uint32_t u;
	struct ody_pciercx_unused_cap15_s {
		uint32_t sw_hdr                      : 32;
	} s;
	/* struct ody_pciercx_unused_cap15_s cn; */
};
typedef union ody_pciercx_unused_cap15 ody_pciercx_unused_cap15_t;

static inline uint64_t ODY_PCIERCX_UNUSED_CAP15(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_UNUSED_CAP15(uint64_t a)
{
	if (a <= 15)
		return 0xf8;
	__ody_csr_fatal("PCIERCX_UNUSED_CAP15", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_UNUSED_CAP15(a) ody_pciercx_unused_cap15_t
#define bustype_ODY_PCIERCX_UNUSED_CAP15(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_UNUSED_CAP15(a) "PCIERCX_UNUSED_CAP15"
#define busnum_ODY_PCIERCX_UNUSED_CAP15(a) (a)
#define arguments_ODY_PCIERCX_UNUSED_CAP15(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_unused_cap16
 *
 * PCIe RC Unused Capability Registers
 */
union ody_pciercx_unused_cap16 {
	uint32_t u;
	struct ody_pciercx_unused_cap16_s {
		uint32_t sw_hdr                      : 32;
	} s;
	/* struct ody_pciercx_unused_cap16_s cn; */
};
typedef union ody_pciercx_unused_cap16 ody_pciercx_unused_cap16_t;

static inline uint64_t ODY_PCIERCX_UNUSED_CAP16(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_UNUSED_CAP16(uint64_t a)
{
	if (a <= 15)
		return 0xfc;
	__ody_csr_fatal("PCIERCX_UNUSED_CAP16", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_UNUSED_CAP16(a) ody_pciercx_unused_cap16_t
#define bustype_ODY_PCIERCX_UNUSED_CAP16(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_UNUSED_CAP16(a) "PCIERCX_UNUSED_CAP16"
#define busnum_ODY_PCIERCX_UNUSED_CAP16(a) (a)
#define arguments_ODY_PCIERCX_UNUSED_CAP16(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_unused_cap2
 *
 * PCIe RC Unused Capability Registers
 */
union ody_pciercx_unused_cap2 {
	uint32_t u;
	struct ody_pciercx_unused_cap2_s {
		uint32_t sw_hdr                      : 32;
	} s;
	/* struct ody_pciercx_unused_cap2_s cn; */
};
typedef union ody_pciercx_unused_cap2 ody_pciercx_unused_cap2_t;

static inline uint64_t ODY_PCIERCX_UNUSED_CAP2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_UNUSED_CAP2(uint64_t a)
{
	if (a <= 15)
		return 0xc4;
	__ody_csr_fatal("PCIERCX_UNUSED_CAP2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_UNUSED_CAP2(a) ody_pciercx_unused_cap2_t
#define bustype_ODY_PCIERCX_UNUSED_CAP2(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_UNUSED_CAP2(a) "PCIERCX_UNUSED_CAP2"
#define busnum_ODY_PCIERCX_UNUSED_CAP2(a) (a)
#define arguments_ODY_PCIERCX_UNUSED_CAP2(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_unused_cap3
 *
 * PCIe RC Unused Capability Registers
 */
union ody_pciercx_unused_cap3 {
	uint32_t u;
	struct ody_pciercx_unused_cap3_s {
		uint32_t sw_hdr                      : 32;
	} s;
	/* struct ody_pciercx_unused_cap3_s cn; */
};
typedef union ody_pciercx_unused_cap3 ody_pciercx_unused_cap3_t;

static inline uint64_t ODY_PCIERCX_UNUSED_CAP3(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_UNUSED_CAP3(uint64_t a)
{
	if (a <= 15)
		return 0xc8;
	__ody_csr_fatal("PCIERCX_UNUSED_CAP3", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_UNUSED_CAP3(a) ody_pciercx_unused_cap3_t
#define bustype_ODY_PCIERCX_UNUSED_CAP3(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_UNUSED_CAP3(a) "PCIERCX_UNUSED_CAP3"
#define busnum_ODY_PCIERCX_UNUSED_CAP3(a) (a)
#define arguments_ODY_PCIERCX_UNUSED_CAP3(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_unused_cap4
 *
 * PCIe RC Unused Capability Registers
 */
union ody_pciercx_unused_cap4 {
	uint32_t u;
	struct ody_pciercx_unused_cap4_s {
		uint32_t sw_hdr                      : 32;
	} s;
	/* struct ody_pciercx_unused_cap4_s cn; */
};
typedef union ody_pciercx_unused_cap4 ody_pciercx_unused_cap4_t;

static inline uint64_t ODY_PCIERCX_UNUSED_CAP4(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_UNUSED_CAP4(uint64_t a)
{
	if (a <= 15)
		return 0xcc;
	__ody_csr_fatal("PCIERCX_UNUSED_CAP4", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_UNUSED_CAP4(a) ody_pciercx_unused_cap4_t
#define bustype_ODY_PCIERCX_UNUSED_CAP4(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_UNUSED_CAP4(a) "PCIERCX_UNUSED_CAP4"
#define busnum_ODY_PCIERCX_UNUSED_CAP4(a) (a)
#define arguments_ODY_PCIERCX_UNUSED_CAP4(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_unused_cap5
 *
 * PCIe RC Unused Capability Registers
 */
union ody_pciercx_unused_cap5 {
	uint32_t u;
	struct ody_pciercx_unused_cap5_s {
		uint32_t sw_hdr                      : 32;
	} s;
	/* struct ody_pciercx_unused_cap5_s cn; */
};
typedef union ody_pciercx_unused_cap5 ody_pciercx_unused_cap5_t;

static inline uint64_t ODY_PCIERCX_UNUSED_CAP5(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_UNUSED_CAP5(uint64_t a)
{
	if (a <= 15)
		return 0xd0;
	__ody_csr_fatal("PCIERCX_UNUSED_CAP5", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_UNUSED_CAP5(a) ody_pciercx_unused_cap5_t
#define bustype_ODY_PCIERCX_UNUSED_CAP5(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_UNUSED_CAP5(a) "PCIERCX_UNUSED_CAP5"
#define busnum_ODY_PCIERCX_UNUSED_CAP5(a) (a)
#define arguments_ODY_PCIERCX_UNUSED_CAP5(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_unused_cap6
 *
 * PCIe RC Unused Capability Registers
 */
union ody_pciercx_unused_cap6 {
	uint32_t u;
	struct ody_pciercx_unused_cap6_s {
		uint32_t sw_hdr                      : 32;
	} s;
	/* struct ody_pciercx_unused_cap6_s cn; */
};
typedef union ody_pciercx_unused_cap6 ody_pciercx_unused_cap6_t;

static inline uint64_t ODY_PCIERCX_UNUSED_CAP6(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_UNUSED_CAP6(uint64_t a)
{
	if (a <= 15)
		return 0xd4;
	__ody_csr_fatal("PCIERCX_UNUSED_CAP6", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_UNUSED_CAP6(a) ody_pciercx_unused_cap6_t
#define bustype_ODY_PCIERCX_UNUSED_CAP6(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_UNUSED_CAP6(a) "PCIERCX_UNUSED_CAP6"
#define busnum_ODY_PCIERCX_UNUSED_CAP6(a) (a)
#define arguments_ODY_PCIERCX_UNUSED_CAP6(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_unused_cap7
 *
 * PCIe RC Unused Capability Registers
 */
union ody_pciercx_unused_cap7 {
	uint32_t u;
	struct ody_pciercx_unused_cap7_s {
		uint32_t sw_hdr                      : 32;
	} s;
	/* struct ody_pciercx_unused_cap7_s cn; */
};
typedef union ody_pciercx_unused_cap7 ody_pciercx_unused_cap7_t;

static inline uint64_t ODY_PCIERCX_UNUSED_CAP7(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_UNUSED_CAP7(uint64_t a)
{
	if (a <= 15)
		return 0xd8;
	__ody_csr_fatal("PCIERCX_UNUSED_CAP7", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_UNUSED_CAP7(a) ody_pciercx_unused_cap7_t
#define bustype_ODY_PCIERCX_UNUSED_CAP7(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_UNUSED_CAP7(a) "PCIERCX_UNUSED_CAP7"
#define busnum_ODY_PCIERCX_UNUSED_CAP7(a) (a)
#define arguments_ODY_PCIERCX_UNUSED_CAP7(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_unused_cap8
 *
 * PCIe RC Unused Capability Registers
 */
union ody_pciercx_unused_cap8 {
	uint32_t u;
	struct ody_pciercx_unused_cap8_s {
		uint32_t sw_hdr                      : 32;
	} s;
	/* struct ody_pciercx_unused_cap8_s cn; */
};
typedef union ody_pciercx_unused_cap8 ody_pciercx_unused_cap8_t;

static inline uint64_t ODY_PCIERCX_UNUSED_CAP8(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_UNUSED_CAP8(uint64_t a)
{
	if (a <= 15)
		return 0xdc;
	__ody_csr_fatal("PCIERCX_UNUSED_CAP8", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_UNUSED_CAP8(a) ody_pciercx_unused_cap8_t
#define bustype_ODY_PCIERCX_UNUSED_CAP8(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_UNUSED_CAP8(a) "PCIERCX_UNUSED_CAP8"
#define busnum_ODY_PCIERCX_UNUSED_CAP8(a) (a)
#define arguments_ODY_PCIERCX_UNUSED_CAP8(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_unused_cap9
 *
 * PCIe RC Unused Capability Registers
 */
union ody_pciercx_unused_cap9 {
	uint32_t u;
	struct ody_pciercx_unused_cap9_s {
		uint32_t sw_hdr                      : 32;
	} s;
	/* struct ody_pciercx_unused_cap9_s cn; */
};
typedef union ody_pciercx_unused_cap9 ody_pciercx_unused_cap9_t;

static inline uint64_t ODY_PCIERCX_UNUSED_CAP9(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_UNUSED_CAP9(uint64_t a)
{
	if (a <= 15)
		return 0xe0;
	__ody_csr_fatal("PCIERCX_UNUSED_CAP9", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_UNUSED_CAP9(a) ody_pciercx_unused_cap9_t
#define bustype_ODY_PCIERCX_UNUSED_CAP9(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_UNUSED_CAP9(a) "PCIERCX_UNUSED_CAP9"
#define busnum_ODY_PCIERCX_UNUSED_CAP9(a) (a)
#define arguments_ODY_PCIERCX_UNUSED_CAP9(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_upconfig
 *
 * PCIe RC UpConfigure Multi-lane Control Register
 */
union ody_pciercx_upconfig {
	uint32_t u;
	struct ody_pciercx_upconfig_s {
		uint32_t trgt_lnk_wdth               : 6;
		uint32_t dir_lnk_wdth_chg            : 1;
		uint32_t upc_supp                    : 1;
		uint32_t rel_lnk_wdth_chg            : 1;
		uint32_t reserved_9_31               : 23;
	} s;
	/* struct ody_pciercx_upconfig_s cn; */
};
typedef union ody_pciercx_upconfig ody_pciercx_upconfig_t;

static inline uint64_t ODY_PCIERCX_UPCONFIG(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_UPCONFIG(uint64_t a)
{
	if (a <= 15)
		return 0x8c0;
	__ody_csr_fatal("PCIERCX_UPCONFIG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_UPCONFIG(a) ody_pciercx_upconfig_t
#define bustype_ODY_PCIERCX_UPCONFIG(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_UPCONFIG(a) "PCIERCX_UPCONFIG"
#define busnum_ODY_PCIERCX_UPCONFIG(a) (a)
#define arguments_ODY_PCIERCX_UPCONFIG(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_ver_num
 *
 * PCIe RC Controller IIP Release Version Number Register
 */
union ody_pciercx_ver_num {
	uint32_t u;
	struct ody_pciercx_ver_num_s {
		uint32_t vn                          : 32;
	} s;
	/* struct ody_pciercx_ver_num_s cn; */
};
typedef union ody_pciercx_ver_num ody_pciercx_ver_num_t;

static inline uint64_t ODY_PCIERCX_VER_NUM(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_VER_NUM(uint64_t a)
{
	if (a <= 15)
		return 0x8f8;
	__ody_csr_fatal("PCIERCX_VER_NUM", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_VER_NUM(a) ody_pciercx_ver_num_t
#define bustype_ODY_PCIERCX_VER_NUM(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_VER_NUM(a) "PCIERCX_VER_NUM"
#define busnum_ODY_PCIERCX_VER_NUM(a) (a)
#define arguments_ODY_PCIERCX_VER_NUM(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_ver_type
 *
 * PCIe RC Controller IIP Release Version Type Register
 */
union ody_pciercx_ver_type {
	uint32_t u;
	struct ody_pciercx_ver_type_s {
		uint32_t vt                          : 32;
	} s;
	/* struct ody_pciercx_ver_type_s cn; */
};
typedef union ody_pciercx_ver_type ody_pciercx_ver_type_t;

static inline uint64_t ODY_PCIERCX_VER_TYPE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_VER_TYPE(uint64_t a)
{
	if (a <= 15)
		return 0x8fc;
	__ody_csr_fatal("PCIERCX_VER_TYPE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_VER_TYPE(a) ody_pciercx_ver_type_t
#define bustype_ODY_PCIERCX_VER_TYPE(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_VER_TYPE(a) "PCIERCX_VER_TYPE"
#define busnum_ODY_PCIERCX_VER_TYPE(a) (a)
#define arguments_ODY_PCIERCX_VER_TYPE(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_xmit_arb1
 *
 * PCIe RC VC Transmit Arbitration Register 1
 */
union ody_pciercx_xmit_arb1 {
	uint32_t u;
	struct ody_pciercx_xmit_arb1_s {
		uint32_t wrr_vc0                     : 8;
		uint32_t wrr_vc1                     : 8;
		uint32_t wrr_vc2                     : 8;
		uint32_t wrr_vc3                     : 8;
	} s;
	/* struct ody_pciercx_xmit_arb1_s cn; */
};
typedef union ody_pciercx_xmit_arb1 ody_pciercx_xmit_arb1_t;

static inline uint64_t ODY_PCIERCX_XMIT_ARB1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_XMIT_ARB1(uint64_t a)
{
	if (a <= 15)
		return 0x740;
	__ody_csr_fatal("PCIERCX_XMIT_ARB1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_XMIT_ARB1(a) ody_pciercx_xmit_arb1_t
#define bustype_ODY_PCIERCX_XMIT_ARB1(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_XMIT_ARB1(a) "PCIERCX_XMIT_ARB1"
#define busnum_ODY_PCIERCX_XMIT_ARB1(a) (a)
#define arguments_ODY_PCIERCX_XMIT_ARB1(a) (a), -1, -1, -1

/**
 * Register (PCICONFIGRC) pcierc#_xmit_arb2
 *
 * PCIe RC VC Transmit Arbitration Register 2
 */
union ody_pciercx_xmit_arb2 {
	uint32_t u;
	struct ody_pciercx_xmit_arb2_s {
		uint32_t wrr_vc4                     : 8;
		uint32_t wrr_vc5                     : 8;
		uint32_t wrr_vc6                     : 8;
		uint32_t wrr_vc7                     : 8;
	} s;
	/* struct ody_pciercx_xmit_arb2_s cn; */
};
typedef union ody_pciercx_xmit_arb2 ody_pciercx_xmit_arb2_t;

static inline uint64_t ODY_PCIERCX_XMIT_ARB2(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_PCIERCX_XMIT_ARB2(uint64_t a)
{
	if (a <= 15)
		return 0x744;
	__ody_csr_fatal("PCIERCX_XMIT_ARB2", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_PCIERCX_XMIT_ARB2(a) ody_pciercx_xmit_arb2_t
#define bustype_ODY_PCIERCX_XMIT_ARB2(a) CSR_TYPE_PCICONFIGRC
#define basename_ODY_PCIERCX_XMIT_ARB2(a) "PCIERCX_XMIT_ARB2"
#define busnum_ODY_PCIERCX_XMIT_ARB2(a) (a)
#define arguments_ODY_PCIERCX_XMIT_ARB2(a) (a), -1, -1, -1

#endif /* __ODY_CSRS_PCIERC_H__ */
