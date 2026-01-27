/***********************license start***********************************
* Copyright (C) 2021-2026 Marvell.
* SPDX-License-Identifier: BSD-3-Clause
* https://spdx.org/licenses
***********************license end**************************************/

/**
 * @file
 *
 * Functions for reporting errors and warnings.
 *
 * <hr>$Revision: 49448 $<hr>
 *
 * @defgroup stdio Standard IO related functions
 * @{
 */

extern void __ody_die(void) __attribute__ ((noreturn));
extern void ody_fatal(const char *format, ...) __attribute__ ((noreturn, format(printf, 1, 2)));
extern void ody_error(const char *format, ...) __attribute__ ((format(printf, 1, 2)));
extern void ody_warn(const char *format, ...) __attribute__ ((format(printf, 1, 2)));
extern void __ody_trace_printf(const char *format, ...) __attribute__ ((format(printf, 1, 2)));
#define ody_warn_if(expression, format, ...) do { if (ody_unlikely(expression)) ody_warn (format, ##__VA_ARGS__); } while (0)

/* The following defines control detailed tracing of various parts of the
   ODY. Each one can be enabled(1) or disabled(0) independently. These
   should be disabled unless you are trying to debug something specific */

typedef enum {
	TRACE_ENABLE_DRAM,              /* DRAM initialization */
	TRACE_ENABLE_DRAM_TEST,         /* DRAM test code */
	TRACE_ENABLE_INIT,              /* Early initialization, before main() */
	TRACE_ENABLE_ECAM,              /* ECAM initialization */
	TRACE_ENABLE_QLM,               /* QLM related debug */
	TRACE_ENABLE_EMMC,              /* eMMC related debug */
	TRACE_ENABLE_PCIE,              /* PCIe link init */
	TRACE_ENABLE_PCIE_CONFIG,       /* PCIe config space reads / writes */
	TRACE_ENABLE_SPI,               /* SPI related debug */
	TRACE_ENABLE_ENV,               /* Environment variables related debug */
	TRACE_ENABLE_DEVICE,            /* ECAM based device framework */
	TRACE_ENABLE_DEVICE_SCAN,       /* ECAM based device scanning detail */
	TRACE_ENABLE_FDT_OS,            /* Device tree passed to OS */
	TRACE_ENABLE_USB_XHCI,          /* USB XHCI block */
	__TRACE_ENABLE_LAST,            /* Must always be last value */
} ody_trace_enable_t;

/* See ody-config.c to change the trace level for before config files are loaded */
extern uint64_t ody_trace_enables;

/**
 * Macro for low level tracing of ODY functions. When enabled,
 * these translate to printf() calls. The "area" is a string
 * that is appended to "TRACE_ENABLE_" to figure out which
 * enable macro to use. The macro expects a ';' after it.
 */
#define TRACE(area, format, ...) do {                       \
	if (ody_trace_enables & (1ull << TRACE_ENABLE_##area))  \
	__ody_trace_printf(#area ": " format, ##__VA_ARGS__);   \
} while (0)

/* The following defines control detailed tracing of various parts of the
   ATF. Each one can be enabled(1) or disabled(0) independently. These
   should be disabled unless you are trying to debug something specific.

   Implementation note: this order must match ATF 'mrvl_tf_log_module_e'.
*/
typedef enum {
	/* gap (matches ATF mrvl_tf_log_module_e) */
	ATF_TRACE_MODULE_RVU = 9,  /* ATF RVU driver messages */
	ATF_TRACE_MODULE_PARSE,    /* ATF platform parsing messages */
	ATF_TRACE_MODULE_PLAT_ECAM,/* ATF plat-specific ecam driver messages */
	ATF_TRACE_MODULE_GEN_ECAM, /* ATF generic ecam driver messages */
	ATF_TRACE_MODULE_UPDATE,   /* ATF update driver */
	ATF_TRACE_MODULE_ETH_CMD,  /* ATF network driver messages */
	ATF_TRACE_MODULE_ETH_LINK, /* ATF network driver link message */
	ATF_TRACE_MODULE_ETH_LINK_MGMT, /* ATF ECP link interface */
	ATF_TRACE_MODULE_GSERM,    /* ATF GSERM driver messages */
	ATF_TRACE_MODULE_ETH_SFP_MGMT,    /* ATF SFP mgmt driver messages */
	__ATF_TRACE_MODULE_LAST,   /* Must always be last value */
} atf_trace_module_t;

/** @} */
