#ifndef __ODY_CSRS_NCB_H__
#define __ODY_CSRS_NCB_H__
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
 * NCB.
 *
 * This file is auto generated. Do not edit.
 *
 */

/**
 * Enumeration ncb_bar_e
 *
 * NCB Base Address Register Enumeration
 * Enumerates the base address registers.
 */
#define ODY_NCB_BAR_E_NCBX_PF_BAR0(a) (0x87e140000000ll + 0x1000000ll * (a))
#define ODY_NCB_BAR_E_NCBX_PF_BAR0_SIZE 0x100000ull

/**
 * Enumeration ncb_psb_event_e
 *
 * NCB Power Serial Bus Event Enumeration
 * Enumerates the event numbers for IOB slaves, which correspond to index {b} of
 * PSBS_SYS()_EVENT()_CFG.
 */
#define ODY_NCB_PSB_EVENT_E_NCB_READ_DAT_ARBID0 (2)
#define ODY_NCB_PSB_EVENT_E_NCB_READ_DAT_ARBID1 (6)
#define ODY_NCB_PSB_EVENT_E_NCB_READ_DAT_ARBID10 (0x2a)
#define ODY_NCB_PSB_EVENT_E_NCB_READ_DAT_ARBID11 (0x2e)
#define ODY_NCB_PSB_EVENT_E_NCB_READ_DAT_ARBID12 (0x32)
#define ODY_NCB_PSB_EVENT_E_NCB_READ_DAT_ARBID13 (0x36)
#define ODY_NCB_PSB_EVENT_E_NCB_READ_DAT_ARBID14 (0x3a)
#define ODY_NCB_PSB_EVENT_E_NCB_READ_DAT_ARBID15 (0x3e)
#define ODY_NCB_PSB_EVENT_E_NCB_READ_DAT_ARBID2 (0xa)
#define ODY_NCB_PSB_EVENT_E_NCB_READ_DAT_ARBID3 (0xe)
#define ODY_NCB_PSB_EVENT_E_NCB_READ_DAT_ARBID4 (0x12)
#define ODY_NCB_PSB_EVENT_E_NCB_READ_DAT_ARBID5 (0x16)
#define ODY_NCB_PSB_EVENT_E_NCB_READ_DAT_ARBID6 (0x1a)
#define ODY_NCB_PSB_EVENT_E_NCB_READ_DAT_ARBID7 (0x1e)
#define ODY_NCB_PSB_EVENT_E_NCB_READ_DAT_ARBID8 (0x22)
#define ODY_NCB_PSB_EVENT_E_NCB_READ_DAT_ARBID9 (0x26)
#define ODY_NCB_PSB_EVENT_E_NCB_READ_REQ_ARBID0 (0)
#define ODY_NCB_PSB_EVENT_E_NCB_READ_REQ_ARBID1 (4)
#define ODY_NCB_PSB_EVENT_E_NCB_READ_REQ_ARBID10 (0x28)
#define ODY_NCB_PSB_EVENT_E_NCB_READ_REQ_ARBID11 (0x2c)
#define ODY_NCB_PSB_EVENT_E_NCB_READ_REQ_ARBID12 (0x30)
#define ODY_NCB_PSB_EVENT_E_NCB_READ_REQ_ARBID13 (0x34)
#define ODY_NCB_PSB_EVENT_E_NCB_READ_REQ_ARBID14 (0x38)
#define ODY_NCB_PSB_EVENT_E_NCB_READ_REQ_ARBID15 (0x3c)
#define ODY_NCB_PSB_EVENT_E_NCB_READ_REQ_ARBID2 (8)
#define ODY_NCB_PSB_EVENT_E_NCB_READ_REQ_ARBID3 (0xc)
#define ODY_NCB_PSB_EVENT_E_NCB_READ_REQ_ARBID4 (0x10)
#define ODY_NCB_PSB_EVENT_E_NCB_READ_REQ_ARBID5 (0x14)
#define ODY_NCB_PSB_EVENT_E_NCB_READ_REQ_ARBID6 (0x18)
#define ODY_NCB_PSB_EVENT_E_NCB_READ_REQ_ARBID7 (0x1c)
#define ODY_NCB_PSB_EVENT_E_NCB_READ_REQ_ARBID8 (0x20)
#define ODY_NCB_PSB_EVENT_E_NCB_READ_REQ_ARBID9 (0x24)
#define ODY_NCB_PSB_EVENT_E_NCB_WRITE_DAT_ARBID0 (3)
#define ODY_NCB_PSB_EVENT_E_NCB_WRITE_DAT_ARBID1 (7)
#define ODY_NCB_PSB_EVENT_E_NCB_WRITE_DAT_ARBID10 (0x2b)
#define ODY_NCB_PSB_EVENT_E_NCB_WRITE_DAT_ARBID11 (0x2f)
#define ODY_NCB_PSB_EVENT_E_NCB_WRITE_DAT_ARBID12 (0x33)
#define ODY_NCB_PSB_EVENT_E_NCB_WRITE_DAT_ARBID13 (0x37)
#define ODY_NCB_PSB_EVENT_E_NCB_WRITE_DAT_ARBID14 (0x3b)
#define ODY_NCB_PSB_EVENT_E_NCB_WRITE_DAT_ARBID15 (0x3f)
#define ODY_NCB_PSB_EVENT_E_NCB_WRITE_DAT_ARBID2 (0xb)
#define ODY_NCB_PSB_EVENT_E_NCB_WRITE_DAT_ARBID3 (0xf)
#define ODY_NCB_PSB_EVENT_E_NCB_WRITE_DAT_ARBID4 (0x13)
#define ODY_NCB_PSB_EVENT_E_NCB_WRITE_DAT_ARBID5 (0x17)
#define ODY_NCB_PSB_EVENT_E_NCB_WRITE_DAT_ARBID6 (0x1b)
#define ODY_NCB_PSB_EVENT_E_NCB_WRITE_DAT_ARBID7 (0x1f)
#define ODY_NCB_PSB_EVENT_E_NCB_WRITE_DAT_ARBID8 (0x23)
#define ODY_NCB_PSB_EVENT_E_NCB_WRITE_DAT_ARBID9 (0x27)
#define ODY_NCB_PSB_EVENT_E_NCB_WRITE_REQ_ARBID0 (1)
#define ODY_NCB_PSB_EVENT_E_NCB_WRITE_REQ_ARBID1 (5)
#define ODY_NCB_PSB_EVENT_E_NCB_WRITE_REQ_ARBID10 (0x29)
#define ODY_NCB_PSB_EVENT_E_NCB_WRITE_REQ_ARBID11 (0x2d)
#define ODY_NCB_PSB_EVENT_E_NCB_WRITE_REQ_ARBID12 (0x31)
#define ODY_NCB_PSB_EVENT_E_NCB_WRITE_REQ_ARBID13 (0x35)
#define ODY_NCB_PSB_EVENT_E_NCB_WRITE_REQ_ARBID14 (0x39)
#define ODY_NCB_PSB_EVENT_E_NCB_WRITE_REQ_ARBID15 (0x3d)
#define ODY_NCB_PSB_EVENT_E_NCB_WRITE_REQ_ARBID2 (9)
#define ODY_NCB_PSB_EVENT_E_NCB_WRITE_REQ_ARBID3 (0xd)
#define ODY_NCB_PSB_EVENT_E_NCB_WRITE_REQ_ARBID4 (0x11)
#define ODY_NCB_PSB_EVENT_E_NCB_WRITE_REQ_ARBID5 (0x15)
#define ODY_NCB_PSB_EVENT_E_NCB_WRITE_REQ_ARBID6 (0x19)
#define ODY_NCB_PSB_EVENT_E_NCB_WRITE_REQ_ARBID7 (0x1d)
#define ODY_NCB_PSB_EVENT_E_NCB_WRITE_REQ_ARBID8 (0x21)
#define ODY_NCB_PSB_EVENT_E_NCB_WRITE_REQ_ARBID9 (0x25)

/**
 * Register (RSL) ncb#_arb#_crds
 *
 * NREQ Priority Register
 */
union ody_ncbx_arbx_crds {
	uint64_t u;
	struct ody_ncbx_arbx_crds_s {
		uint64_t min                         : 10;
		uint64_t max                         : 10;
		uint64_t rsv_rdstid                  : 1;
		uint64_t reserved_21_63              : 43;
	} s;
	/* struct ody_ncbx_arbx_crds_s cn; */
};
typedef union ody_ncbx_arbx_crds ody_ncbx_arbx_crds_t;

static inline uint64_t ODY_NCBX_ARBX_CRDS(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_NCBX_ARBX_CRDS(uint64_t a, uint64_t b)
{
	if (((a == 0) || ((a >= 2) && (a <= 5))) && (b <= 15))
		return 0x87e1400f0000ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0xf);
	__ody_csr_fatal("NCBX_ARBX_CRDS", 2, a, b, 0, 0, 0, 0);
}

#define typedef_ODY_NCBX_ARBX_CRDS(a, b) ody_ncbx_arbx_crds_t
#define bustype_ODY_NCBX_ARBX_CRDS(a, b) CSR_TYPE_RSL
#define basename_ODY_NCBX_ARBX_CRDS(a, b) "NCBX_ARBX_CRDS"
#define device_bar_ODY_NCBX_ARBX_CRDS(a, b) 0x0 /* PF_BAR0 */
#define busnum_ODY_NCBX_ARBX_CRDS(a, b) (a)
#define arguments_ODY_NCBX_ARBX_CRDS(a, b) (a), (b), -1, -1

/**
 * Register (RSL) ncb#_arb_iut_dis
 *
 * NCBO ARBID IUT Disable Register
 * This register enables the uTLB for transactions through each ARBID.
 */
union ody_ncbx_arb_iut_dis {
	uint64_t u;
	struct ody_ncbx_arb_iut_dis_s {
		uint64_t dis                         : 16;
		uint64_t reserved_16_63              : 48;
	} s;
	/* struct ody_ncbx_arb_iut_dis_s cn; */
};
typedef union ody_ncbx_arb_iut_dis ody_ncbx_arb_iut_dis_t;

static inline uint64_t ODY_NCBX_ARB_IUT_DIS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_NCBX_ARB_IUT_DIS(uint64_t a)
{
	if ((a == 0) || ((a >= 2) && (a <= 5)))
		return 0x87e140008080ll + 0x1000000ll * ((a) & 0x7);
	__ody_csr_fatal("NCBX_ARB_IUT_DIS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_NCBX_ARB_IUT_DIS(a) ody_ncbx_arb_iut_dis_t
#define bustype_ODY_NCBX_ARB_IUT_DIS(a) CSR_TYPE_RSL
#define basename_ODY_NCBX_ARB_IUT_DIS(a) "NCBX_ARB_IUT_DIS"
#define device_bar_ODY_NCBX_ARB_IUT_DIS(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_NCBX_ARB_IUT_DIS(a) (a)
#define arguments_ODY_NCBX_ARB_IUT_DIS(a) (a), -1, -1, -1

/**
 * Register (RSL) ncb#_arbid#_ctl
 *
 * NCB ARBID Control Registers
 * This register set properties for each of the flat ARBIDs.
 */
union ody_ncbx_arbidx_ctl {
	uint64_t u;
	struct ody_ncbx_arbidx_ctl_s {
		uint64_t ld_ld_ord                   : 1;
		uint64_t st_st_ord                   : 1;
		uint64_t st_ld_ord                   : 1;
		uint64_t ro_dis                      : 1;
		uint64_t pr_iova_dis                 : 1;
		uint64_t prefetch_dis                : 1;
		uint64_t crppr_ena                   : 2;
		uint64_t sow_dis                     : 1;
		uint64_t fast_ord                    : 1;
		uint64_t reserved_10_63              : 54;
	} s;
	/* struct ody_ncbx_arbidx_ctl_s cn; */
};
typedef union ody_ncbx_arbidx_ctl ody_ncbx_arbidx_ctl_t;

static inline uint64_t ODY_NCBX_ARBIDX_CTL(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_NCBX_ARBIDX_CTL(uint64_t a, uint64_t b)
{
	if (((a == 0) || ((a >= 2) && (a <= 5))) && (b <= 15))
		return 0x87e140006100ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0xf);
	__ody_csr_fatal("NCBX_ARBIDX_CTL", 2, a, b, 0, 0, 0, 0);
}

#define typedef_ODY_NCBX_ARBIDX_CTL(a, b) ody_ncbx_arbidx_ctl_t
#define bustype_ODY_NCBX_ARBIDX_CTL(a, b) CSR_TYPE_RSL
#define basename_ODY_NCBX_ARBIDX_CTL(a, b) "NCBX_ARBIDX_CTL"
#define device_bar_ODY_NCBX_ARBIDX_CTL(a, b) 0x0 /* PF_BAR0 */
#define busnum_ODY_NCBX_ARBIDX_CTL(a, b) (a)
#define arguments_ODY_NCBX_ARBIDX_CTL(a, b) (a), (b), -1, -1

/**
 * Register (RSL) ncb#_arbid#_rr_ctl
 *
 * NCB Round Robin Control Registers
 */
union ody_ncbx_arbidx_rr_ctl {
	uint64_t u;
	struct ody_ncbx_arbidx_rr_ctl_s {
		uint64_t weight                      : 4;
		uint64_t reserved_4_63               : 60;
	} s;
	/* struct ody_ncbx_arbidx_rr_ctl_s cn; */
};
typedef union ody_ncbx_arbidx_rr_ctl ody_ncbx_arbidx_rr_ctl_t;

static inline uint64_t ODY_NCBX_ARBIDX_RR_CTL(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_NCBX_ARBIDX_RR_CTL(uint64_t a, uint64_t b)
{
	if (((a == 0) || ((a >= 2) && (a <= 5))) && (b <= 15))
		return 0x87e1400f7000ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0xf);
	__ody_csr_fatal("NCBX_ARBIDX_RR_CTL", 2, a, b, 0, 0, 0, 0);
}

#define typedef_ODY_NCBX_ARBIDX_RR_CTL(a, b) ody_ncbx_arbidx_rr_ctl_t
#define bustype_ODY_NCBX_ARBIDX_RR_CTL(a, b) CSR_TYPE_RSL
#define basename_ODY_NCBX_ARBIDX_RR_CTL(a, b) "NCBX_ARBIDX_RR_CTL"
#define device_bar_ODY_NCBX_ARBIDX_RR_CTL(a, b) 0x0 /* PF_BAR0 */
#define busnum_ODY_NCBX_ARBIDX_RR_CTL(a, b) (a)
#define arguments_ODY_NCBX_ARBIDX_RR_CTL(a, b) (a), (b), -1, -1

/**
 * Register (RSL) ncb#_ctl
 *
 * NCB Control Registers
 */
union ody_ncbx_ctl {
	uint64_t u;
	struct ody_ncbx_ctl_s {
		uint64_t cal                         : 1;
		uint64_t dis                         : 1;
		uint64_t reserved_2_63               : 62;
	} s;
	/* struct ody_ncbx_ctl_s cn; */
};
typedef union ody_ncbx_ctl ody_ncbx_ctl_t;

static inline uint64_t ODY_NCBX_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_NCBX_CTL(uint64_t a)
{
	if ((a == 0) || ((a >= 2) && (a <= 5)))
		return 0x87e1400f6000ll + 0x1000000ll * ((a) & 0x7);
	__ody_csr_fatal("NCBX_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_NCBX_CTL(a) ody_ncbx_ctl_t
#define bustype_ODY_NCBX_CTL(a) CSR_TYPE_RSL
#define basename_ODY_NCBX_CTL(a) "NCBX_CTL"
#define device_bar_ODY_NCBX_CTL(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_NCBX_CTL(a) (a)
#define arguments_ODY_NCBX_CTL(a) (a), -1, -1, -1

/**
 * Register (RSL) ncb#_ready
 *
 * NCB READY Registers
 */
union ody_ncbx_ready {
	uint64_t u;
	struct ody_ncbx_ready_s {
		uint64_t ncbo_ready                  : 16;
		uint64_t reserved_16_63              : 48;
	} s;
	/* struct ody_ncbx_ready_s cn; */
};
typedef union ody_ncbx_ready ody_ncbx_ready_t;

static inline uint64_t ODY_NCBX_READY(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_NCBX_READY(uint64_t a)
{
	if ((a == 0) || ((a >= 2) && (a <= 5)))
		return 0x87e140008100ll + 0x1000000ll * ((a) & 0x7);
	__ody_csr_fatal("NCBX_READY", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_NCBX_READY(a) ody_ncbx_ready_t
#define bustype_ODY_NCBX_READY(a) CSR_TYPE_RSL
#define basename_ODY_NCBX_READY(a) "NCBX_READY"
#define device_bar_ODY_NCBX_READY(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_NCBX_READY(a) (a)
#define arguments_ODY_NCBX_READY(a) (a), -1, -1, -1

#endif /* __ODY_CSRS_NCB_H__ */
