#ifndef __ODY_CSRS_IOBN_H__
#define __ODY_CSRS_IOBN_H__
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
 * IOBN.
 *
 * This file is auto generated. Do not edit.
 *
 */

/**
 * Enumeration iobn_bar_e
 *
 * IOBN Base Address Register Enumeration
 * Enumerates the base address registers.
 */
#define ODY_IOBN_BAR_E_IOBNX_PF_BAR0(a) (0x87e120000000ll + 0x1000000ll * (a))
#define ODY_IOBN_BAR_E_IOBNX_PF_BAR0_SIZE 0x100000ull
#define ODY_IOBN_BAR_E_IOBNX_PF_BAR4(a) (0x87e120f00000ll + 0x1000000ll * (a))
#define ODY_IOBN_BAR_E_IOBNX_PF_BAR4_SIZE 0x100000ull

/**
 * Enumeration iobn_inb_err_e
 *
 * IOBN In Bound Error Enumeration
 * Enumerates the types of error detected on IOB inbound path. Errors are logged based on
 * priority, where ::ABORT_ZERO_ERR has highest
 * priority and ::ADDR_ERR has the lowest priority. See IOBN_INB_ERR_STATUS.
 */
#define ODY_IOBN_INB_ERR_E_ABORT_ZERO_ERR (1)
#define ODY_IOBN_INB_ERR_E_ADDR_ERR (2)
#define ODY_IOBN_INB_ERR_E_NONE (0)
#define ODY_IOBN_INB_ERR_E_RSVD (3)

/**
 * Enumeration iobn_int_vec_e
 *
 * IOBN MSI-X Vector Enumeration
 * Enumerates the MSI-X interrupt vectors.
 */
#define ODY_IOBN_INT_VEC_E_INTS (0)

/**
 * Enumeration iobn_ncbi_ro_mod_e
 *
 * IOBN NCBI Relax Order Modification Enumeration
 * Enumerates the controls for when CR's are allowed to pass PRs, see
 * IOBN_ARBID()_CTL[CRPPR_ENA].
 */
#define ODY_IOBN_NCBI_RO_MOD_E_BUS_CTL (0)
#define ODY_IOBN_NCBI_RO_MOD_E_OFF (2)
#define ODY_IOBN_NCBI_RO_MOD_E_ON (3)
#define ODY_IOBN_NCBI_RO_MOD_E_RSVD (1)

/**
 * Enumeration iobn_outb_err_e
 *
 * IOBN Outbound Error Enumeration
 * Enumerates the types of error detected on IOB outbound path. If the bit is set in
 * IOBN_OUTB_ERR_STATUS corresponding to the enumeration value, that error occurred.
 */
#define ODY_IOBN_OUTB_ERR_E_ABORT_ZERO_ERR (1)
#define ODY_IOBN_OUTB_ERR_E_ADDR_ERR (2)
#define ODY_IOBN_OUTB_ERR_E_CLASS_A_FAULT (4)
#define ODY_IOBN_OUTB_ERR_E_NCBO_RDY_FAULT (0x10)
#define ODY_IOBN_OUTB_ERR_E_NONE (0)
#define ODY_IOBN_OUTB_ERR_E_PERMIT_FAULT (8)

/**
 * Register (RSL) iobn#_cfg0
 *
 * IOBN General Configuration 0 Register
 */
union ody_iobnx_cfg0 {
	uint64_t u;
	struct ody_iobnx_cfg0_s {
		uint64_t force_sclk_cond_clk_en      : 1;
		uint64_t reserved_1_3                : 3;
		uint64_t dis_ncbo_cr_pois            : 4;
		uint64_t clken                       : 4;
		uint64_t reserved_12_63              : 52;
	} s;
	/* struct ody_iobnx_cfg0_s cn; */
};
typedef union ody_iobnx_cfg0 ody_iobnx_cfg0_t;

static inline uint64_t ODY_IOBNX_CFG0(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_IOBNX_CFG0(uint64_t a)
{
	if (a <= 4)
		return 0x87e120002000ll + 0x1000000ll * ((a) & 0x7);
	__ody_csr_fatal("IOBNX_CFG0", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_IOBNX_CFG0(a) ody_iobnx_cfg0_t
#define bustype_ODY_IOBNX_CFG0(a) CSR_TYPE_RSL
#define basename_ODY_IOBNX_CFG0(a) "IOBNX_CFG0"
#define device_bar_ODY_IOBNX_CFG0(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_IOBNX_CFG0(a) (a)
#define arguments_ODY_IOBNX_CFG0(a) (a), -1, -1, -1

/**
 * Register (RSL) iobn#_cfg1
 *
 * IOBN General Configuration 1 Register
 */
union ody_iobnx_cfg1 {
	uint64_t u;
	struct ody_iobnx_cfg1_s {
		uint64_t force_rclk_cond_clk_en      : 1;
		uint64_t reserved_1_2                : 2;
		uint64_t tlb_sync_dis                : 1;
		uint64_t reserved_4_7                : 4;
		uint64_t mem_rtry_psize              : 4;
		uint64_t reserved_12_15              : 4;
		uint64_t smmu_rtry_psize             : 4;
		uint64_t eats_cache_dis              : 1;
		uint64_t utlb_clone_dis              : 1;
		uint64_t utlb_cam_evict_cnt          : 6;
		uint64_t reserved_28_63              : 36;
	} s;
	/* struct ody_iobnx_cfg1_s cn; */
};
typedef union ody_iobnx_cfg1 ody_iobnx_cfg1_t;

static inline uint64_t ODY_IOBNX_CFG1(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_IOBNX_CFG1(uint64_t a)
{
	if (a <= 4)
		return 0x87e120082010ll + 0x1000000ll * ((a) & 0x7);
	__ody_csr_fatal("IOBNX_CFG1", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_IOBNX_CFG1(a) ody_iobnx_cfg1_t
#define bustype_ODY_IOBNX_CFG1(a) CSR_TYPE_RSL
#define basename_ODY_IOBNX_CFG1(a) "IOBNX_CFG1"
#define device_bar_ODY_IOBNX_CFG1(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_IOBNX_CFG1(a) (a)
#define arguments_ODY_IOBNX_CFG1(a) (a), -1, -1, -1

/**
 * Register (RSL) iobn#_const
 *
 * IOBN Constant Registers
 * This register returns discovery information.
 */
union ody_iobnx_const {
	uint64_t u;
	struct ody_iobnx_const_s {
		uint64_t lsw_pres                    : 4;
		uint64_t reserved_4_7                : 4;
		uint64_t ncbs                        : 3;
		uint64_t reserved_11_15              : 5;
		uint64_t st_ncb_num                  : 4;
		uint64_t reserved_20_63              : 44;
	} s;
	/* struct ody_iobnx_const_s cn; */
};
typedef union ody_iobnx_const ody_iobnx_const_t;

static inline uint64_t ODY_IOBNX_CONST(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_IOBNX_CONST(uint64_t a)
{
	if (a <= 4)
		return 0x87e120000000ll + 0x1000000ll * ((a) & 0x7);
	__ody_csr_fatal("IOBNX_CONST", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_IOBNX_CONST(a) ody_iobnx_const_t
#define bustype_ODY_IOBNX_CONST(a) CSR_TYPE_RSL
#define basename_ODY_IOBNX_CONST(a) "IOBNX_CONST"
#define device_bar_ODY_IOBNX_CONST(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_IOBNX_CONST(a) (a)
#define arguments_ODY_IOBNX_CONST(a) (a), -1, -1, -1

/**
 * Register (RSL) iobn#_dom#_bus#_streams
 *
 * IOBN Domain Bus Permit Registers
 * This register sets the permissions for a NCBI transaction (which are DMA
 * transactions or MSI-X writes), for requests for NCB device virtual-functions
 * and bridges.
 *
 * Index {b} corresponds to the stream's domain (stream_id\<21:16\>).
 *
 * Index {c} corresponds to the stream's bus number (stream_id\<15:8\>).
 *
 * For each combination of index {b} and {c}, each index {a} (the IOB number) must be
 * programmed to the same value.
 *
 * Streams which hit index {c}=0x0 are also affected by IOBN_DOM()_DEV()_STREAMS.
 * Streams which hit index {b}=PCC_DEV_CON_E::MRML\<21:16\>,
 * {c}=PCC_DEV_CON_E::MRML\<15:8\> are also affected by IOBN_RSL()_STREAMS.
 * Both of those alternative registers provide better granularity, so those indices
 * into this register should be left permissive (value of 0x0).
 */
union ody_iobnx_domx_busx_streams {
	uint64_t u;
	struct ody_iobnx_domx_busx_streams_s {
		uint64_t phys_nsec                   : 1;
		uint64_t strm_nsec                   : 1;
		uint64_t reserved_2_63               : 62;
	} s;
	/* struct ody_iobnx_domx_busx_streams_s cn; */
};
typedef union ody_iobnx_domx_busx_streams ody_iobnx_domx_busx_streams_t;

static inline uint64_t ODY_IOBNX_DOMX_BUSX_STREAMS(uint64_t a, uint64_t b, uint64_t c) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_IOBNX_DOMX_BUSX_STREAMS(uint64_t a, uint64_t b, uint64_t c)
{
	if ((a <= 4) && (b <= 18) && (c <= 255))
		return 0x87e120040000ll + 0x1000000ll * ((a) & 0x7) + 0x800ll * ((b) & 0x1f) + 8ll * ((c) & 0xff);
	__ody_csr_fatal("IOBNX_DOMX_BUSX_STREAMS", 3, a, b, c, 0, 0, 0);
}

#define typedef_ODY_IOBNX_DOMX_BUSX_STREAMS(a, b, c) ody_iobnx_domx_busx_streams_t
#define bustype_ODY_IOBNX_DOMX_BUSX_STREAMS(a, b, c) CSR_TYPE_RSL
#define basename_ODY_IOBNX_DOMX_BUSX_STREAMS(a, b, c) "IOBNX_DOMX_BUSX_STREAMS"
#define device_bar_ODY_IOBNX_DOMX_BUSX_STREAMS(a, b, c) 0x0 /* PF_BAR0 */
#define busnum_ODY_IOBNX_DOMX_BUSX_STREAMS(a, b, c) (a)
#define arguments_ODY_IOBNX_DOMX_BUSX_STREAMS(a, b, c) (a), (b), (c), -1

/**
 * Register (RSL) iobn#_dom#_dev#_streams
 *
 * IOBN Device Bus Permit Registers
 * This register sets the permissions for a NCBI transaction (which are DMA
 * transactions or MSI-X writes), for requests for NCB device physical-functions,
 * i.e. those where:
 *
 *   _ stream_id\<15:8\> = 0x0.
 *
 * Index {a} corresponds to the stream's domain number (stream_id\<21:16\>).
 *
 * Index {b} corresponds to the non-ARI ECAM device number (stream_id\<7:3\>).
 *
 * For each combination of index {b} and {c}, each index {a} (the IOB number) must be
 * programmed to the same value.
 */
union ody_iobnx_domx_devx_streams {
	uint64_t u;
	struct ody_iobnx_domx_devx_streams_s {
		uint64_t phys_nsec                   : 1;
		uint64_t strm_nsec                   : 1;
		uint64_t reserved_2_63               : 62;
	} s;
	/* struct ody_iobnx_domx_devx_streams_s cn; */
};
typedef union ody_iobnx_domx_devx_streams ody_iobnx_domx_devx_streams_t;

static inline uint64_t ODY_IOBNX_DOMX_DEVX_STREAMS(uint64_t a, uint64_t b, uint64_t c) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_IOBNX_DOMX_DEVX_STREAMS(uint64_t a, uint64_t b, uint64_t c)
{
	if ((a <= 4) && (b <= 18) && (c <= 31))
		return 0x87e120010000ll + 0x1000000ll * ((a) & 0x7) + 0x100ll * ((b) & 0x1f) + 8ll * ((c) & 0x1f);
	__ody_csr_fatal("IOBNX_DOMX_DEVX_STREAMS", 3, a, b, c, 0, 0, 0);
}

#define typedef_ODY_IOBNX_DOMX_DEVX_STREAMS(a, b, c) ody_iobnx_domx_devx_streams_t
#define bustype_ODY_IOBNX_DOMX_DEVX_STREAMS(a, b, c) CSR_TYPE_RSL
#define basename_ODY_IOBNX_DOMX_DEVX_STREAMS(a, b, c) "IOBNX_DOMX_DEVX_STREAMS"
#define device_bar_ODY_IOBNX_DOMX_DEVX_STREAMS(a, b, c) 0x0 /* PF_BAR0 */
#define busnum_ODY_IOBNX_DOMX_DEVX_STREAMS(a, b, c) (a)
#define arguments_ODY_IOBNX_DOMX_DEVX_STREAMS(a, b, c) (a), (b), (c), -1

/**
 * Register (RSL) iobn#_ecam_dom#_dev#_permit
 *
 * IOBN ECAM Domain Device Permit Registers
 * Program identically to ECAM_DOM()_DEV()_PERMIT.
 *
 * This register sets the permissions for a ECAM access  (derived from request address) to NCBO
 * for a request from an IO device.
 * Index {a} corresponds to the domain, addr[32:28].
 * Index {b} corresponds to the dev, addr[19:15].
 * If ECAM access resuts in a failure a response will be returned and where required data
 * with a value of all 1's and FAULT == 0 (MESH, CHI_RESPERR_OK).
 *
 * If IOBN_CONST.UNIMP_REG is set this register is not implemented.
 * Reads will respond with zero and writes will be ignored.
 */
union ody_iobnx_ecam_domx_devx_permit {
	uint64_t u;
	struct ody_iobnx_ecam_domx_devx_permit_s {
		uint64_t sec_dis                     : 1;
		uint64_t nsec_dis                    : 1;
		uint64_t xcp0_dis                    : 1;
		uint64_t xcp1_dis                    : 1;
		uint64_t xcp2_dis                    : 1;
		uint64_t reserved_5_6                : 2;
		uint64_t kill                        : 1;
		uint64_t lock                        : 1;
		uint64_t reserved_9_63               : 55;
	} s;
	/* struct ody_iobnx_ecam_domx_devx_permit_s cn; */
};
typedef union ody_iobnx_ecam_domx_devx_permit ody_iobnx_ecam_domx_devx_permit_t;

static inline uint64_t ODY_IOBNX_ECAM_DOMX_DEVX_PERMIT(uint64_t a, uint64_t b, uint64_t c) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_IOBNX_ECAM_DOMX_DEVX_PERMIT(uint64_t a, uint64_t b, uint64_t c)
{
	if ((a <= 4) && (b <= 18) && (c <= 31))
		return 0x87e1200e0000ll + 0x1000000ll * ((a) & 0x7) + 0x800ll * ((b) & 0x1f) + 8ll * ((c) & 0x1f);
	__ody_csr_fatal("IOBNX_ECAM_DOMX_DEVX_PERMIT", 3, a, b, c, 0, 0, 0);
}

#define typedef_ODY_IOBNX_ECAM_DOMX_DEVX_PERMIT(a, b, c) ody_iobnx_ecam_domx_devx_permit_t
#define bustype_ODY_IOBNX_ECAM_DOMX_DEVX_PERMIT(a, b, c) CSR_TYPE_RSL
#define basename_ODY_IOBNX_ECAM_DOMX_DEVX_PERMIT(a, b, c) "IOBNX_ECAM_DOMX_DEVX_PERMIT"
#define device_bar_ODY_IOBNX_ECAM_DOMX_DEVX_PERMIT(a, b, c) 0x0 /* PF_BAR0 */
#define busnum_ODY_IOBNX_ECAM_DOMX_DEVX_PERMIT(a, b, c) (a)
#define arguments_ODY_IOBNX_ECAM_DOMX_DEVX_PERMIT(a, b, c) (a), (b), (c), -1

/**
 * Register (RSL) iobn#_err_ena
 *
 * IOBN Error Enable Register
 * Controls what errors are logged into IOBN_INB_ERR_STATUS and IOBN_OUTB_ERR_STATUS registers.
 */
union ody_iobnx_err_ena {
	uint64_t u;
	struct ody_iobnx_err_ena_s {
		uint64_t inb_err_enb                 : 2;
		uint64_t reserved_2_7                : 6;
		uint64_t outb_err_enb                : 5;
		uint64_t reserved_13_63              : 51;
	} s;
	/* struct ody_iobnx_err_ena_s cn; */
};
typedef union ody_iobnx_err_ena ody_iobnx_err_ena_t;

static inline uint64_t ODY_IOBNX_ERR_ENA(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_IOBNX_ERR_ENA(uint64_t a)
{
	if (a <= 4)
		return 0x87e120083080ll + 0x1000000ll * ((a) & 0x7);
	__ody_csr_fatal("IOBNX_ERR_ENA", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_IOBNX_ERR_ENA(a) ody_iobnx_err_ena_t
#define bustype_ODY_IOBNX_ERR_ENA(a) CSR_TYPE_RSL
#define basename_ODY_IOBNX_ERR_ENA(a) "IOBNX_ERR_ENA"
#define device_bar_ODY_IOBNX_ERR_ENA(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_IOBNX_ERR_ENA(a) (a)
#define arguments_ODY_IOBNX_ERR_ENA(a) (a), -1, -1, -1

/**
 * Register (RSL) iobn#_inb_err_status
 *
 * IOBN In Bound Error Status Register
 * Inbound error status register logs first error detected on inbound control path.
 */
union ody_iobnx_inb_err_status {
	uint64_t u;
	struct ody_iobnx_inb_err_status_s {
		uint64_t err_type                    : 2;
		uint64_t reserved_2_11               : 10;
		uint64_t address                     : 40;
		uint64_t reserved_52_55              : 4;
		uint64_t arbid                       : 4;
		uint64_t reserved_60_63              : 4;
	} s;
	/* struct ody_iobnx_inb_err_status_s cn; */
};
typedef union ody_iobnx_inb_err_status ody_iobnx_inb_err_status_t;

static inline uint64_t ODY_IOBNX_INB_ERR_STATUS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_IOBNX_INB_ERR_STATUS(uint64_t a)
{
	if (a <= 4)
		return 0x87e120083088ll + 0x1000000ll * ((a) & 0x7);
	__ody_csr_fatal("IOBNX_INB_ERR_STATUS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_IOBNX_INB_ERR_STATUS(a) ody_iobnx_inb_err_status_t
#define bustype_ODY_IOBNX_INB_ERR_STATUS(a) CSR_TYPE_RSL
#define basename_ODY_IOBNX_INB_ERR_STATUS(a) "IOBNX_INB_ERR_STATUS"
#define device_bar_ODY_IOBNX_INB_ERR_STATUS(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_IOBNX_INB_ERR_STATUS(a) (a)
#define arguments_ODY_IOBNX_INB_ERR_STATUS(a) (a), -1, -1, -1

/**
 * Register (RSL) iobn#_inb_mesh_throttle
 *
 * IOBN Inbound Mesh Throttle Register
 * Controls the rate of TX_REQ sent to the MESH.
 * Rate is dynamically controlled by ARM CHI CBUSY messages. Absolute min rate is 1
 * every 16 cycles. Max rate is 16 every 16 cycles.
 * Decrease TX_REQ rate if more than THRESH of the last WINDOW reponses contain CBUSY==3.
 * Increase TX_REQ rate if more than THRESH of the last WINDOW reponses contain CBUSY \<2.
 */
union ody_iobnx_inb_mesh_throttle {
	uint64_t u;
	struct ody_iobnx_inb_mesh_throttle_s {
		uint64_t ena                         : 1;
		uint64_t reserved_1_3                : 3;
		uint64_t incr                        : 2;
		uint64_t decr                        : 2;
		uint64_t thresh                      : 2;
		uint64_t window                      : 2;
		uint64_t min_rate                    : 4;
		uint64_t max_rate                    : 4;
		uint64_t timeout                     : 4;
		uint64_t reserved_24_63              : 40;
	} s;
	/* struct ody_iobnx_inb_mesh_throttle_s cn; */
};
typedef union ody_iobnx_inb_mesh_throttle ody_iobnx_inb_mesh_throttle_t;

static inline uint64_t ODY_IOBNX_INB_MESH_THROTTLE(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_IOBNX_INB_MESH_THROTTLE(uint64_t a)
{
	if (a <= 4)
		return 0x87e120082200ll + 0x1000000ll * ((a) & 0x7);
	__ody_csr_fatal("IOBNX_INB_MESH_THROTTLE", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_IOBNX_INB_MESH_THROTTLE(a) ody_iobnx_inb_mesh_throttle_t
#define bustype_ODY_IOBNX_INB_MESH_THROTTLE(a) CSR_TYPE_RSL
#define basename_ODY_IOBNX_INB_MESH_THROTTLE(a) "IOBNX_INB_MESH_THROTTLE"
#define device_bar_ODY_IOBNX_INB_MESH_THROTTLE(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_IOBNX_INB_MESH_THROTTLE(a) (a)
#define arguments_ODY_IOBNX_INB_MESH_THROTTLE(a) (a), -1, -1, -1

/**
 * Register (RSL) iobn#_int_ena_w1c
 *
 * IOBN Interrupt Enable Clear Register
 * This register clears interrupt enable bits.
 */
union ody_iobnx_int_ena_w1c {
	uint64_t u;
	struct ody_iobnx_int_ena_w1c_s {
		uint64_t ncbo_to                     : 4;
		uint64_t ncbo_ncb_psn                : 4;
		uint64_t ncbi_unexp_cr               : 4;
		uint64_t ncbo_pois_cr                : 4;
		uint64_t ncbo_flt_cr                 : 4;
		uint64_t msh_dat_dbe                 : 1;
		uint64_t msh_dat_sbe                 : 1;
		uint64_t reserved_22_23              : 2;
		uint64_t msh_dat_chk                 : 1;
		uint64_t msh_req_chk                 : 1;
		uint64_t msh_snp_chk                 : 1;
		uint64_t msh_rsp_chk                 : 1;
		uint64_t msh_dat1_chk                : 1;
		uint64_t msh_rsp1_chk                : 1;
		uint64_t msh_smmu_psn                : 1;
		uint64_t msh_dato_dbe                : 1;
		uint64_t msh_dato_sbe                : 1;
		uint64_t reserved_33_63              : 31;
	} s;
	/* struct ody_iobnx_int_ena_w1c_s cn; */
};
typedef union ody_iobnx_int_ena_w1c ody_iobnx_int_ena_w1c_t;

static inline uint64_t ODY_IOBNX_INT_ENA_W1C(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_IOBNX_INT_ENA_W1C(uint64_t a)
{
	if (a <= 4)
		return 0x87e120088000ll + 0x1000000ll * ((a) & 0x7);
	__ody_csr_fatal("IOBNX_INT_ENA_W1C", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_IOBNX_INT_ENA_W1C(a) ody_iobnx_int_ena_w1c_t
#define bustype_ODY_IOBNX_INT_ENA_W1C(a) CSR_TYPE_RSL
#define basename_ODY_IOBNX_INT_ENA_W1C(a) "IOBNX_INT_ENA_W1C"
#define device_bar_ODY_IOBNX_INT_ENA_W1C(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_IOBNX_INT_ENA_W1C(a) (a)
#define arguments_ODY_IOBNX_INT_ENA_W1C(a) (a), -1, -1, -1

/**
 * Register (RSL) iobn#_int_ena_w1s
 *
 * IOBN Interrupt Enable Set Register
 * This register sets interrupt enable bits.
 */
union ody_iobnx_int_ena_w1s {
	uint64_t u;
	struct ody_iobnx_int_ena_w1s_s {
		uint64_t ncbo_to                     : 4;
		uint64_t ncbo_ncb_psn                : 4;
		uint64_t ncbi_unexp_cr               : 4;
		uint64_t ncbo_pois_cr                : 4;
		uint64_t ncbo_flt_cr                 : 4;
		uint64_t msh_dat_dbe                 : 1;
		uint64_t msh_dat_sbe                 : 1;
		uint64_t reserved_22_23              : 2;
		uint64_t msh_dat_chk                 : 1;
		uint64_t msh_req_chk                 : 1;
		uint64_t msh_snp_chk                 : 1;
		uint64_t msh_rsp_chk                 : 1;
		uint64_t msh_dat1_chk                : 1;
		uint64_t msh_rsp1_chk                : 1;
		uint64_t msh_smmu_psn                : 1;
		uint64_t msh_dato_dbe                : 1;
		uint64_t msh_dato_sbe                : 1;
		uint64_t reserved_33_63              : 31;
	} s;
	/* struct ody_iobnx_int_ena_w1s_s cn; */
};
typedef union ody_iobnx_int_ena_w1s ody_iobnx_int_ena_w1s_t;

static inline uint64_t ODY_IOBNX_INT_ENA_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_IOBNX_INT_ENA_W1S(uint64_t a)
{
	if (a <= 4)
		return 0x87e120089000ll + 0x1000000ll * ((a) & 0x7);
	__ody_csr_fatal("IOBNX_INT_ENA_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_IOBNX_INT_ENA_W1S(a) ody_iobnx_int_ena_w1s_t
#define bustype_ODY_IOBNX_INT_ENA_W1S(a) CSR_TYPE_RSL
#define basename_ODY_IOBNX_INT_ENA_W1S(a) "IOBNX_INT_ENA_W1S"
#define device_bar_ODY_IOBNX_INT_ENA_W1S(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_IOBNX_INT_ENA_W1S(a) (a)
#define arguments_ODY_IOBNX_INT_ENA_W1S(a) (a), -1, -1, -1

/**
 * Register (RSL) iobn#_int_sum
 *
 * IOBN Interrupt Summary Register
 * This register contains the different interrupt-summary bits of the IOBN.
 * Bits in this register are RAS related events, that are expected to be routed to the SCP.
 */
union ody_iobnx_int_sum {
	uint64_t u;
	struct ody_iobnx_int_sum_s {
		uint64_t ncbo_to                     : 4;
		uint64_t ncbo_ncb_psn                : 4;
		uint64_t ncbi_unexp_cr               : 4;
		uint64_t ncbo_pois_cr                : 4;
		uint64_t ncbo_flt_cr                 : 4;
		uint64_t msh_dat_dbe                 : 1;
		uint64_t msh_dat_sbe                 : 1;
		uint64_t reserved_22_23              : 2;
		uint64_t msh_dat_chk                 : 1;
		uint64_t msh_req_chk                 : 1;
		uint64_t msh_snp_chk                 : 1;
		uint64_t msh_rsp_chk                 : 1;
		uint64_t msh_dat1_chk                : 1;
		uint64_t msh_rsp1_chk                : 1;
		uint64_t msh_smmu_psn                : 1;
		uint64_t msh_dato_dbe                : 1;
		uint64_t msh_dato_sbe                : 1;
		uint64_t reserved_33_63              : 31;
	} s;
	/* struct ody_iobnx_int_sum_s cn; */
};
typedef union ody_iobnx_int_sum ody_iobnx_int_sum_t;

static inline uint64_t ODY_IOBNX_INT_SUM(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_IOBNX_INT_SUM(uint64_t a)
{
	if (a <= 4)
		return 0x87e120086000ll + 0x1000000ll * ((a) & 0x7);
	__ody_csr_fatal("IOBNX_INT_SUM", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_IOBNX_INT_SUM(a) ody_iobnx_int_sum_t
#define bustype_ODY_IOBNX_INT_SUM(a) CSR_TYPE_RSL
#define basename_ODY_IOBNX_INT_SUM(a) "IOBNX_INT_SUM"
#define device_bar_ODY_IOBNX_INT_SUM(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_IOBNX_INT_SUM(a) (a)
#define arguments_ODY_IOBNX_INT_SUM(a) (a), -1, -1, -1

/**
 * Register (RSL) iobn#_int_sum_w1s
 *
 * IOBN Interrupt Set Register
 * This register sets interrupt bits.
 */
union ody_iobnx_int_sum_w1s {
	uint64_t u;
	struct ody_iobnx_int_sum_w1s_s {
		uint64_t ncbo_to                     : 4;
		uint64_t ncbo_ncb_psn                : 4;
		uint64_t ncbi_unexp_cr               : 4;
		uint64_t ncbo_pois_cr                : 4;
		uint64_t ncbo_flt_cr                 : 4;
		uint64_t msh_dat_dbe                 : 1;
		uint64_t msh_dat_sbe                 : 1;
		uint64_t reserved_22_23              : 2;
		uint64_t msh_dat_chk                 : 1;
		uint64_t msh_req_chk                 : 1;
		uint64_t msh_snp_chk                 : 1;
		uint64_t msh_rsp_chk                 : 1;
		uint64_t msh_dat1_chk                : 1;
		uint64_t msh_rsp1_chk                : 1;
		uint64_t msh_smmu_psn                : 1;
		uint64_t msh_dato_dbe                : 1;
		uint64_t msh_dato_sbe                : 1;
		uint64_t reserved_33_63              : 31;
	} s;
	/* struct ody_iobnx_int_sum_w1s_s cn; */
};
typedef union ody_iobnx_int_sum_w1s ody_iobnx_int_sum_w1s_t;

static inline uint64_t ODY_IOBNX_INT_SUM_W1S(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_IOBNX_INT_SUM_W1S(uint64_t a)
{
	if (a <= 4)
		return 0x87e120087000ll + 0x1000000ll * ((a) & 0x7);
	__ody_csr_fatal("IOBNX_INT_SUM_W1S", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_IOBNX_INT_SUM_W1S(a) ody_iobnx_int_sum_w1s_t
#define bustype_ODY_IOBNX_INT_SUM_W1S(a) CSR_TYPE_RSL
#define basename_ODY_IOBNX_INT_SUM_W1S(a) "IOBNX_INT_SUM_W1S"
#define device_bar_ODY_IOBNX_INT_SUM_W1S(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_IOBNX_INT_SUM_W1S(a) (a)
#define arguments_ODY_IOBNX_INT_SUM_W1S(a) (a), -1, -1, -1

/**
 * Register (RSL) iobn#_lsw_cfg
 *
 * IOBN LSW General Configuration Register
 */
union ody_iobnx_lsw_cfg {
	uint64_t u;
	struct ody_iobnx_lsw_cfg_s {
		uint64_t lsw0_force_cond_clk_en      : 1;
		uint64_t lsw0_rsvd                   : 7;
		uint64_t lsw1_force_cond_clk_en      : 1;
		uint64_t lsw1_rsvd                   : 7;
		uint64_t reserved_16_63              : 48;
	} s;
	/* struct ody_iobnx_lsw_cfg_s cn; */
};
typedef union ody_iobnx_lsw_cfg ody_iobnx_lsw_cfg_t;

static inline uint64_t ODY_IOBNX_LSW_CFG(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_IOBNX_LSW_CFG(uint64_t a)
{
	if (a <= 4)
		return 0x87e120002100ll + 0x1000000ll * ((a) & 0x7);
	__ody_csr_fatal("IOBNX_LSW_CFG", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_IOBNX_LSW_CFG(a) ody_iobnx_lsw_cfg_t
#define bustype_ODY_IOBNX_LSW_CFG(a) CSR_TYPE_RSL
#define basename_ODY_IOBNX_LSW_CFG(a) "IOBNX_LSW_CFG"
#define device_bar_ODY_IOBNX_LSW_CFG(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_IOBNX_LSW_CFG(a) (a)
#define arguments_ODY_IOBNX_LSW_CFG(a) (a), -1, -1, -1

/**
 * Register (RSL) iobn#_msix_pba#
 *
 * IOBN MSI-X Pending Bit Array Registers
 * This register is the MSI-X PBA table; the bit number is indexed by the IOBN_INT_VEC_E enumeration.
 */
union ody_iobnx_msix_pbax {
	uint64_t u;
	struct ody_iobnx_msix_pbax_s {
		uint64_t pend                        : 64;
	} s;
	/* struct ody_iobnx_msix_pbax_s cn; */
};
typedef union ody_iobnx_msix_pbax ody_iobnx_msix_pbax_t;

static inline uint64_t ODY_IOBNX_MSIX_PBAX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_IOBNX_MSIX_PBAX(uint64_t a, uint64_t b)
{
	if ((a <= 4) && (b == 0))
		return 0x87e120ff0000ll + 0x1000000ll * ((a) & 0x7);
	__ody_csr_fatal("IOBNX_MSIX_PBAX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_ODY_IOBNX_MSIX_PBAX(a, b) ody_iobnx_msix_pbax_t
#define bustype_ODY_IOBNX_MSIX_PBAX(a, b) CSR_TYPE_RSL
#define basename_ODY_IOBNX_MSIX_PBAX(a, b) "IOBNX_MSIX_PBAX"
#define device_bar_ODY_IOBNX_MSIX_PBAX(a, b) 0x4 /* PF_BAR4 */
#define busnum_ODY_IOBNX_MSIX_PBAX(a, b) (a)
#define arguments_ODY_IOBNX_MSIX_PBAX(a, b) (a), (b), -1, -1

/**
 * Register (RSL) iobn#_msix_vec#_addr
 *
 * IOBN MSI-X Vector-Table Address Register
 * This register is the MSI-X vector table, indexed by the IOBN_INT_VEC_E enumeration.
 */
union ody_iobnx_msix_vecx_addr {
	uint64_t u;
	struct ody_iobnx_msix_vecx_addr_s {
		uint64_t secvec                      : 1;
		uint64_t reserved_1                  : 1;
		uint64_t addr                        : 51;
		uint64_t reserved_53_63              : 11;
	} s;
	/* struct ody_iobnx_msix_vecx_addr_s cn; */
};
typedef union ody_iobnx_msix_vecx_addr ody_iobnx_msix_vecx_addr_t;

static inline uint64_t ODY_IOBNX_MSIX_VECX_ADDR(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_IOBNX_MSIX_VECX_ADDR(uint64_t a, uint64_t b)
{
	if ((a <= 4) && (b == 0))
		return 0x87e120f00000ll + 0x1000000ll * ((a) & 0x7);
	__ody_csr_fatal("IOBNX_MSIX_VECX_ADDR", 2, a, b, 0, 0, 0, 0);
}

#define typedef_ODY_IOBNX_MSIX_VECX_ADDR(a, b) ody_iobnx_msix_vecx_addr_t
#define bustype_ODY_IOBNX_MSIX_VECX_ADDR(a, b) CSR_TYPE_RSL
#define basename_ODY_IOBNX_MSIX_VECX_ADDR(a, b) "IOBNX_MSIX_VECX_ADDR"
#define device_bar_ODY_IOBNX_MSIX_VECX_ADDR(a, b) 0x4 /* PF_BAR4 */
#define busnum_ODY_IOBNX_MSIX_VECX_ADDR(a, b) (a)
#define arguments_ODY_IOBNX_MSIX_VECX_ADDR(a, b) (a), (b), -1, -1

/**
 * Register (RSL) iobn#_msix_vec#_ctl
 *
 * IOBN MSI-X Vector-Table Control and Data Register
 * This register is the MSI-X vector table, indexed by the IOBN_INT_VEC_E enumeration.
 */
union ody_iobnx_msix_vecx_ctl {
	uint64_t u;
	struct ody_iobnx_msix_vecx_ctl_s {
		uint64_t data                        : 32;
		uint64_t mask                        : 1;
		uint64_t reserved_33_63              : 31;
	} s;
	/* struct ody_iobnx_msix_vecx_ctl_s cn; */
};
typedef union ody_iobnx_msix_vecx_ctl ody_iobnx_msix_vecx_ctl_t;

static inline uint64_t ODY_IOBNX_MSIX_VECX_CTL(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_IOBNX_MSIX_VECX_CTL(uint64_t a, uint64_t b)
{
	if ((a <= 4) && (b == 0))
		return 0x87e120f00008ll + 0x1000000ll * ((a) & 0x7);
	__ody_csr_fatal("IOBNX_MSIX_VECX_CTL", 2, a, b, 0, 0, 0, 0);
}

#define typedef_ODY_IOBNX_MSIX_VECX_CTL(a, b) ody_iobnx_msix_vecx_ctl_t
#define bustype_ODY_IOBNX_MSIX_VECX_CTL(a, b) CSR_TYPE_RSL
#define basename_ODY_IOBNX_MSIX_VECX_CTL(a, b) "IOBNX_MSIX_VECX_CTL"
#define device_bar_ODY_IOBNX_MSIX_VECX_CTL(a, b) 0x4 /* PF_BAR4 */
#define busnum_ODY_IOBNX_MSIX_VECX_CTL(a, b) (a)
#define arguments_ODY_IOBNX_MSIX_VECX_CTL(a, b) (a), (b), -1, -1

/**
 * Register (RSL) iobn#_ncb#_acc
 *
 * IOBN NCB Access Registers
 * This register sets attributes of NCBDIDs address bits \<43:36\>.
 * If IOBN_CONST.UNIMP_REG is set this register is not implemented.
 * Reads will respond with zero and writes will be ignored.
 */
union ody_iobnx_ncbx_acc {
	uint64_t u;
	struct ody_iobnx_ncbx_acc_s {
		uint64_t all_cmds                    : 1;
		uint64_t reserved_1_63               : 63;
	} s;
	/* struct ody_iobnx_ncbx_acc_s cn; */
};
typedef union ody_iobnx_ncbx_acc ody_iobnx_ncbx_acc_t;

static inline uint64_t ODY_IOBNX_NCBX_ACC(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_IOBNX_NCBX_ACC(uint64_t a, uint64_t b)
{
	if ((a <= 4) && (b <= 255))
		return 0x87e1200c0000ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0xff);
	__ody_csr_fatal("IOBNX_NCBX_ACC", 2, a, b, 0, 0, 0, 0);
}

#define typedef_ODY_IOBNX_NCBX_ACC(a, b) ody_iobnx_ncbx_acc_t
#define bustype_ODY_IOBNX_NCBX_ACC(a, b) CSR_TYPE_RSL
#define basename_ODY_IOBNX_NCBX_ACC(a, b) "IOBNX_NCBX_ACC"
#define device_bar_ODY_IOBNX_NCBX_ACC(a, b) 0x0 /* PF_BAR0 */
#define busnum_ODY_IOBNX_NCBX_ACC(a, b) (a)
#define arguments_ODY_IOBNX_NCBX_ACC(a, b) (a), (b), -1, -1

/**
 * Register (RSL) iobn#_ncb#_permit
 *
 * IOBN NCB Bus Permit Registers
 * This register sets the permissions for access to NCBDIDs address bits \<43:36\>.
 * Program identically to MRML_NCB()_PERMIT.
 * If IOBN_CONST.UNIMP_REG is set this register is not implemented.
 * Reads will respond with zero and writes will be ignored.
 */
union ody_iobnx_ncbx_permit {
	uint64_t u;
	struct ody_iobnx_ncbx_permit_s {
		uint64_t sec_dis                     : 1;
		uint64_t nsec_dis                    : 1;
		uint64_t xcp0_dis                    : 1;
		uint64_t xcp1_dis                    : 1;
		uint64_t xcp2_dis                    : 1;
		uint64_t reserved_5_6                : 2;
		uint64_t kill                        : 1;
		uint64_t lock                        : 1;
		uint64_t reserved_9_63               : 55;
	} s;
	/* struct ody_iobnx_ncbx_permit_s cn; */
};
typedef union ody_iobnx_ncbx_permit ody_iobnx_ncbx_permit_t;

static inline uint64_t ODY_IOBNX_NCBX_PERMIT(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_IOBNX_NCBX_PERMIT(uint64_t a, uint64_t b)
{
	if ((a <= 4) && (b <= 255))
		return 0x87e1200d0000ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0xff);
	__ody_csr_fatal("IOBNX_NCBX_PERMIT", 2, a, b, 0, 0, 0, 0);
}

#define typedef_ODY_IOBNX_NCBX_PERMIT(a, b) ody_iobnx_ncbx_permit_t
#define bustype_ODY_IOBNX_NCBX_PERMIT(a, b) CSR_TYPE_RSL
#define basename_ODY_IOBNX_NCBX_PERMIT(a, b) "IOBNX_NCBX_PERMIT"
#define device_bar_ODY_IOBNX_NCBX_PERMIT(a, b) 0x0 /* PF_BAR0 */
#define busnum_ODY_IOBNX_NCBX_PERMIT(a, b) (a)
#define arguments_ODY_IOBNX_NCBX_PERMIT(a, b) (a), (b), -1, -1

/**
 * Register (RSL) iobn#_ncbi#_cr_err_status
 *
 * IOBN NCBI Unexpected CR Error Status Register
 * NCBI error status register logs first unexpected NCBI CR.
 */
union ody_iobnx_ncbix_cr_err_status {
	uint64_t u;
	struct ody_iobnx_ncbix_cr_err_status_s {
		uint64_t narbid                      : 4;
		uint64_t reserved_4_63               : 60;
	} s;
	/* struct ody_iobnx_ncbix_cr_err_status_s cn; */
};
typedef union ody_iobnx_ncbix_cr_err_status ody_iobnx_ncbix_cr_err_status_t;

static inline uint64_t ODY_IOBNX_NCBIX_CR_ERR_STATUS(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_IOBNX_NCBIX_CR_ERR_STATUS(uint64_t a, uint64_t b)
{
	if ((a <= 4) && (b <= 3))
		return 0x87e120000100ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0x3);
	__ody_csr_fatal("IOBNX_NCBIX_CR_ERR_STATUS", 2, a, b, 0, 0, 0, 0);
}

#define typedef_ODY_IOBNX_NCBIX_CR_ERR_STATUS(a, b) ody_iobnx_ncbix_cr_err_status_t
#define bustype_ODY_IOBNX_NCBIX_CR_ERR_STATUS(a, b) CSR_TYPE_RSL
#define basename_ODY_IOBNX_NCBIX_CR_ERR_STATUS(a, b) "IOBNX_NCBIX_CR_ERR_STATUS"
#define device_bar_ODY_IOBNX_NCBIX_CR_ERR_STATUS(a, b) 0x0 /* PF_BAR0 */
#define busnum_ODY_IOBNX_NCBIX_CR_ERR_STATUS(a, b) (a)
#define arguments_ODY_IOBNX_NCBIX_CR_ERR_STATUS(a, b) (a), (b), -1, -1

/**
 * Register (RSL) iobn#_ncbo#_cr_err_status
 *
 * IOBN NCBO CR Error Status Register
 * Outbound error status register logs first data error detected on outbound path.
 */
union ody_iobnx_ncbox_cr_err_status {
	uint64_t u;
	struct ody_iobnx_ncbox_cr_err_status_s {
		uint64_t address                     : 53;
		uint64_t narbid                      : 4;
		uint64_t reserved_57_63              : 7;
	} s;
	/* struct ody_iobnx_ncbox_cr_err_status_s cn; */
};
typedef union ody_iobnx_ncbox_cr_err_status ody_iobnx_ncbox_cr_err_status_t;

static inline uint64_t ODY_IOBNX_NCBOX_CR_ERR_STATUS(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_IOBNX_NCBOX_CR_ERR_STATUS(uint64_t a, uint64_t b)
{
	if ((a <= 4) && (b <= 3))
		return 0x87e120000120ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0x3);
	__ody_csr_fatal("IOBNX_NCBOX_CR_ERR_STATUS", 2, a, b, 0, 0, 0, 0);
}

#define typedef_ODY_IOBNX_NCBOX_CR_ERR_STATUS(a, b) ody_iobnx_ncbox_cr_err_status_t
#define bustype_ODY_IOBNX_NCBOX_CR_ERR_STATUS(a, b) CSR_TYPE_RSL
#define basename_ODY_IOBNX_NCBOX_CR_ERR_STATUS(a, b) "IOBNX_NCBOX_CR_ERR_STATUS"
#define device_bar_ODY_IOBNX_NCBOX_CR_ERR_STATUS(a, b) 0x0 /* PF_BAR0 */
#define busnum_ODY_IOBNX_NCBOX_CR_ERR_STATUS(a, b) (a)
#define arguments_ODY_IOBNX_NCBOX_CR_ERR_STATUS(a, b) (a), (b), -1, -1

/**
 * Register (RSL) iobn#_ncbo#_psn_status
 *
 * IOBN NCBO Poison Status Register
 */
union ody_iobnx_ncbox_psn_status {
	uint64_t u;
	struct ody_iobnx_ncbox_psn_status_s {
		uint64_t address                     : 52;
		uint64_t reserved_52_63              : 12;
	} s;
	/* struct ody_iobnx_ncbox_psn_status_s cn; */
};
typedef union ody_iobnx_ncbox_psn_status ody_iobnx_ncbox_psn_status_t;

static inline uint64_t ODY_IOBNX_NCBOX_PSN_STATUS(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_IOBNX_NCBOX_PSN_STATUS(uint64_t a, uint64_t b)
{
	if ((a <= 4) && (b <= 3))
		return 0x87e120003040ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0x3);
	__ody_csr_fatal("IOBNX_NCBOX_PSN_STATUS", 2, a, b, 0, 0, 0, 0);
}

#define typedef_ODY_IOBNX_NCBOX_PSN_STATUS(a, b) ody_iobnx_ncbox_psn_status_t
#define bustype_ODY_IOBNX_NCBOX_PSN_STATUS(a, b) CSR_TYPE_RSL
#define basename_ODY_IOBNX_NCBOX_PSN_STATUS(a, b) "IOBNX_NCBOX_PSN_STATUS"
#define device_bar_ODY_IOBNX_NCBOX_PSN_STATUS(a, b) 0x0 /* PF_BAR0 */
#define busnum_ODY_IOBNX_NCBOX_PSN_STATUS(a, b) (a)
#define arguments_ODY_IOBNX_NCBOX_PSN_STATUS(a, b) (a), (b), -1, -1

/**
 * Register (RSL) iobn#_ncbo_to
 *
 * IOBN NCBO Timeout Counter Registers
 * This register set the counter value for expected return data on NCBI.
 */
union ody_iobnx_ncbo_to {
	uint64_t u;
	struct ody_iobnx_ncbo_to_s {
		uint64_t sub_time                    : 32;
		uint64_t reserved_32_63              : 32;
	} s;
	/* struct ody_iobnx_ncbo_to_s cn; */
};
typedef union ody_iobnx_ncbo_to ody_iobnx_ncbo_to_t;

static inline uint64_t ODY_IOBNX_NCBO_TO(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_IOBNX_NCBO_TO(uint64_t a)
{
	if (a <= 4)
		return 0x87e120000008ll + 0x1000000ll * ((a) & 0x7);
	__ody_csr_fatal("IOBNX_NCBO_TO", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_IOBNX_NCBO_TO(a) ody_iobnx_ncbo_to_t
#define bustype_ODY_IOBNX_NCBO_TO(a) CSR_TYPE_RSL
#define basename_ODY_IOBNX_NCBO_TO(a) "IOBNX_NCBO_TO"
#define device_bar_ODY_IOBNX_NCBO_TO(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_IOBNX_NCBO_TO(a) (a)
#define arguments_ODY_IOBNX_NCBO_TO(a) (a), -1, -1, -1

/**
 * Register (RSL) iobn#_ncbo_to_err#
 *
 * IOBN NCB Timeout Error Register
 * This register captures error information for a nonposted request that times out on
 * NCBO (when IOBN_INT_SUM[NCBO_TO] is set).
 */
union ody_iobnx_ncbo_to_errx {
	uint64_t u;
	struct ody_iobnx_ncbo_to_errx_s {
		uint64_t arbid                       : 4;
		uint64_t reserved_4_7                : 4;
		uint64_t cpid                        : 9;
		uint64_t reserved_17_63              : 47;
	} s;
	/* struct ody_iobnx_ncbo_to_errx_s cn; */
};
typedef union ody_iobnx_ncbo_to_errx ody_iobnx_ncbo_to_errx_t;

static inline uint64_t ODY_IOBNX_NCBO_TO_ERRX(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_IOBNX_NCBO_TO_ERRX(uint64_t a, uint64_t b)
{
	if ((a <= 4) && (b <= 3))
		return 0x87e1200a0000ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0x3);
	__ody_csr_fatal("IOBNX_NCBO_TO_ERRX", 2, a, b, 0, 0, 0, 0);
}

#define typedef_ODY_IOBNX_NCBO_TO_ERRX(a, b) ody_iobnx_ncbo_to_errx_t
#define bustype_ODY_IOBNX_NCBO_TO_ERRX(a, b) CSR_TYPE_RSL
#define basename_ODY_IOBNX_NCBO_TO_ERRX(a, b) "IOBNX_NCBO_TO_ERRX"
#define device_bar_ODY_IOBNX_NCBO_TO_ERRX(a, b) 0x0 /* PF_BAR0 */
#define busnum_ODY_IOBNX_NCBO_TO_ERRX(a, b) (a)
#define arguments_ODY_IOBNX_NCBO_TO_ERRX(a, b) (a), (b), -1, -1

/**
 * Register (RSL) iobn#_outb_err_status
 *
 * IOBN Outbound Error Status Register
 * Outbound error status register logs first error detected on outbound control path.
 */
union ody_iobnx_outb_err_status {
	uint64_t u;
	struct ody_iobnx_outb_err_status_s {
		uint64_t err_type                    : 5;
		uint64_t reserved_5_11               : 7;
		uint64_t address                     : 40;
		uint64_t reserved_52                 : 1;
		uint64_t ms                          : 11;
	} s;
	/* struct ody_iobnx_outb_err_status_s cn; */
};
typedef union ody_iobnx_outb_err_status ody_iobnx_outb_err_status_t;

static inline uint64_t ODY_IOBNX_OUTB_ERR_STATUS(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_IOBNX_OUTB_ERR_STATUS(uint64_t a)
{
	if (a <= 4)
		return 0x87e120083090ll + 0x1000000ll * ((a) & 0x7);
	__ody_csr_fatal("IOBNX_OUTB_ERR_STATUS", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_IOBNX_OUTB_ERR_STATUS(a) ody_iobnx_outb_err_status_t
#define bustype_ODY_IOBNX_OUTB_ERR_STATUS(a) CSR_TYPE_RSL
#define basename_ODY_IOBNX_OUTB_ERR_STATUS(a) "IOBNX_OUTB_ERR_STATUS"
#define device_bar_ODY_IOBNX_OUTB_ERR_STATUS(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_IOBNX_OUTB_ERR_STATUS(a) (a)
#define arguments_ODY_IOBNX_OUTB_ERR_STATUS(a) (a), -1, -1, -1

/**
 * Register (RSL) iobn#_psn_ctl
 *
 * Poison Control Register
 */
union ody_iobnx_psn_ctl {
	uint64_t u;
	struct ody_iobnx_psn_ctl_s {
		uint64_t dispsn                      : 1;
		uint64_t reserved_1_63               : 63;
	} s;
	/* struct ody_iobnx_psn_ctl_s cn; */
};
typedef union ody_iobnx_psn_ctl ody_iobnx_psn_ctl_t;

static inline uint64_t ODY_IOBNX_PSN_CTL(uint64_t a) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_IOBNX_PSN_CTL(uint64_t a)
{
	if (a <= 4)
		return 0x87e120083050ll + 0x1000000ll * ((a) & 0x7);
	__ody_csr_fatal("IOBNX_PSN_CTL", 1, a, 0, 0, 0, 0, 0);
}

#define typedef_ODY_IOBNX_PSN_CTL(a) ody_iobnx_psn_ctl_t
#define bustype_ODY_IOBNX_PSN_CTL(a) CSR_TYPE_RSL
#define basename_ODY_IOBNX_PSN_CTL(a) "IOBNX_PSN_CTL"
#define device_bar_ODY_IOBNX_PSN_CTL(a) 0x0 /* PF_BAR0 */
#define busnum_ODY_IOBNX_PSN_CTL(a) (a)
#define arguments_ODY_IOBNX_PSN_CTL(a) (a), -1, -1, -1

/**
 * Register (RSL) iobn#_rsl#_streams
 *
 * IOBN RSL Stream Permission Registers
 * This register sets the permissions for a NCBI transaction (which are DMA
 * transactions or MSI-X writes), for requests from a RSL device, i.e.
 * those where:
 *
 * _ stream_id\<21:8\> = PCC_DEV_CON_E::MRML\<21:8\>
 *   (stream_id\<7:0\> + 0).
 *
 * _ stream_id\<21:8\> = PCC_DEV_CON_E::MRMLB1\<21:8\>
 *   (stream_id\<7:0\> + 256).
 *
 * _ stream_id\<21:8\> = PCC_DEV_CON_E::MRMLB2\<21:8\>
 *   (stream_id\<7:0\> + 512).
 *
 * _ stream_id\<21:8\> = PCC_DEV_CON_E::MRMLB3\<21:8\>
 *   (stream_id\<7:0\> + 768).
 *
 * For each given index {a} (the RSL function number), each IOB
 * must be programmed to the same value.
 */
union ody_iobnx_rslx_streams {
	uint64_t u;
	struct ody_iobnx_rslx_streams_s {
		uint64_t phys_nsec                   : 1;
		uint64_t strm_nsec                   : 1;
		uint64_t reserved_2_63               : 62;
	} s;
	/* struct ody_iobnx_rslx_streams_s cn; */
};
typedef union ody_iobnx_rslx_streams ody_iobnx_rslx_streams_t;

static inline uint64_t ODY_IOBNX_RSLX_STREAMS(uint64_t a, uint64_t b) __attribute__ ((pure, always_inline));
static inline uint64_t ODY_IOBNX_RSLX_STREAMS(uint64_t a, uint64_t b)
{
	if ((a <= 4) && (b <= 1023))
		return 0x87e120004000ll + 0x1000000ll * ((a) & 0x7) + 8ll * ((b) & 0x3ff);
	__ody_csr_fatal("IOBNX_RSLX_STREAMS", 2, a, b, 0, 0, 0, 0);
}

#define typedef_ODY_IOBNX_RSLX_STREAMS(a, b) ody_iobnx_rslx_streams_t
#define bustype_ODY_IOBNX_RSLX_STREAMS(a, b) CSR_TYPE_RSL
#define basename_ODY_IOBNX_RSLX_STREAMS(a, b) "IOBNX_RSLX_STREAMS"
#define device_bar_ODY_IOBNX_RSLX_STREAMS(a, b) 0x0 /* PF_BAR0 */
#define busnum_ODY_IOBNX_RSLX_STREAMS(a, b) (a)
#define arguments_ODY_IOBNX_RSLX_STREAMS(a, b) (a), (b), -1, -1

#endif /* __ODY_CSRS_IOBN_H__ */
