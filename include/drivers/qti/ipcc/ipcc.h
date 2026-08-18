/*
 * Copyright (c) 2026, Qualcomm Technologies, Inc. and/or its subsidiaries.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef QTI_IPCC_H
#define QTI_IPCC_H

#include <stdint.h>

/*
 * IPCC (Inter-Processor Communication Controller) host interface.
 *
 * Outbound only: BL31 raises signals towards other subsystems and never
 * receives them, so there is no signal registration, interrupt handling or
 * callback support. Both delivery mechanisms are implemented and the chipset
 * config picks between them per client:
 *
 *   - Router: one write to our own SEND register encodes target and signal.
 *   - Legacy: each target client owns a trigger register and each signal a
 *     fixed bit mask within it.
 */

/* Protocols the controller defines; a chipset instantiates a subset. */
enum ipcc_protocol {
	IPCC_PROTO_MPROC = 0,
	IPCC_PROTO_COMPUTEL0 = 1,
	IPCC_PROTO_COMPUTEL1 = 2,
	IPCC_PROTO_PERIPH = 3,
	IPCC_PROTO_FENCE = 4,

	IPCC_PROTO_TOTAL,
};

/*
 * Client IDs the controller defines. They are architectural -- remote
 * subsystems agree on them -- so every value is spelled out and none is ever
 * renumbered. The space is sparse (65, 72..83 and 85..127 are unassigned),
 * which makes IPCC_CLIENT_TOTAL one past the highest ID, not a client count.
 */
enum ipcc_client {
	IPCC_CLIENT_AOP = 0,
	IPCC_CLIENT_TZ = 1,
	IPCC_CLIENT_MPSS = 2,
	IPCC_CLIENT_LPASS = 3,
	IPCC_CLIENT_SLPI = 4,
	IPCC_CLIENT_SDC = 5,
	IPCC_CLIENT_NSP0 = 6,
	IPCC_CLIENT_NPU = 7,
	IPCC_CLIENT_APPS = 8,
	IPCC_CLIENT_GPU = 9,
	IPCC_CLIENT_CVP = 10,
	IPCC_CLIENT_CAM = 11,
	IPCC_CLIENT_VPU = 12,
	IPCC_CLIENT_PCIE0 = 13,
	IPCC_CLIENT_PCIE1 = 14,
	IPCC_CLIENT_PCIE2 = 15,
	IPCC_CLIENT_SPSS = 16,
	IPCC_CLIENT_SMSS = 17,
	IPCC_CLIENT_NSP1 = 18,
	IPCC_CLIENT_PCIE3 = 19,
	IPCC_CLIENT_PCIE4 = 20,
	IPCC_CLIENT_PCIE5 = 21,
	IPCC_CLIENT_PCIE6 = 22,
	IPCC_CLIENT_TMESS = 23,
	IPCC_CLIENT_WPSS = 24,
	IPCC_CLIENT_DPU = 25,
	IPCC_CLIENT_IPA = 26,
	IPCC_CLIENT_SAIL0 = 27,
	IPCC_CLIENT_SAIL1 = 28,
	IPCC_CLIENT_SAIL2 = 29,
	IPCC_CLIENT_SAIL3 = 30,
	IPCC_CLIENT_GPDSP0 = 31,
	IPCC_CLIENT_GPDSP1 = 32,
	IPCC_CLIENT_APSS_NS1 = 33,
	IPCC_CLIENT_APSS_NS2 = 34,
	IPCC_CLIENT_APSS_NS3 = 35,
	IPCC_CLIENT_APSS_NS4 = 36,
	IPCC_CLIENT_APSS_NS5 = 37,
	IPCC_CLIENT_APSS_NS6 = 38,
	IPCC_CLIENT_APSS_NS7 = 39,
	IPCC_CLIENT_TENX = 40,
	IPCC_CLIENT_ORAN = 41,
	IPCC_CLIENT_MVMSS = 42,
	IPCC_CLIENT_DPU1 = 43,
	IPCC_CLIENT_PCIE7 = 44,
	IPCC_CLIENT_DBG = 45,
	IPCC_CLIENT_SOCCP = 46,
	IPCC_CLIENT_ICP1 = 47,
	IPCC_CLIENT_NSP2 = 48,
	IPCC_CLIENT_NSP3 = 49,
	IPCC_CLIENT_SAIL4 = 50,
	IPCC_CLIENT_SAIL5 = 51,
	IPCC_CLIENT_CPUCP = 52,
	IPCC_CLIENT_A78CSS = 53,
	IPCC_CLIENT_GPU1 = 54,
	IPCC_CLIENT_OOBSS = 55,
	IPCC_CLIENT_OOBSS_S = 56,
	IPCC_CLIENT_DCP = 57,
	IPCC_CLIENT_PDP0 = 58,
	IPCC_CLIENT_PDP1 = 59,
	IPCC_CLIENT_PDP2 = 60,
	IPCC_CLIENT_PDP3 = 61,
	IPCC_CLIENT_M55_WM = 62,
	IPCC_CLIENT_LSR = 63,
	IPCC_CLIENT_QECP = 64,
	IPCC_CLIENT_QUP_TOP0 = 66,
	IPCC_CLIENT_QUP_TOP1 = 67,
	IPCC_CLIENT_QUP_TOP2 = 68,
	IPCC_CLIENT_QUP_TOP3 = 69,
	IPCC_CLIENT_QUP_SSC0 = 70,
	IPCC_CLIENT_QUP_SSC1 = 71,
	IPCC_CLIENT_QUP_TOP4 = 84,
	IPCC_CLIENT_IFE0 = 128,
	IPCC_CLIENT_IFE1 = 129,
	IPCC_CLIENT_IFE2 = 130,
	IPCC_CLIENT_IFE3 = 131,
	IPCC_CLIENT_IFE4 = 132,
	IPCC_CLIENT_IFE5 = 133,
	IPCC_CLIENT_IFE6 = 134,
	IPCC_CLIENT_IFE7 = 135,
	IPCC_CLIENT_IFE8 = 136,
	IPCC_CLIENT_IFE9 = 137,
	IPCC_CLIENT_IFE10 = 138,
	IPCC_CLIENT_IFE11 = 139,
	IPCC_CLIENT_IFE12 = 140,

	IPCC_CLIENT_TOTAL,

	/* Alternate names for the same clients; both spellings are in use. */
	IPCC_CLIENT_RPM = IPCC_CLIENT_AOP,
	IPCC_CLIENT_APSS_S = IPCC_CLIENT_TZ,
	IPCC_CLIENT_ADSP0 = IPCC_CLIENT_LPASS,
	IPCC_CLIENT_CDSP = IPCC_CLIENT_NSP0,
	IPCC_CLIENT_APSS_NS0 = IPCC_CLIENT_APPS,
	IPCC_CLIENT_GPU0 = IPCC_CLIENT_GPU,
	IPCC_CLIENT_ICP0 = IPCC_CLIENT_CAM,
	IPCC_CLIENT_DPU0 = IPCC_CLIENT_DPU,
	IPCC_CLIENT_ADSP1 = IPCC_CLIENT_GPDSP0,
	IPCC_CLIENT_ADSP2 = IPCC_CLIENT_GPDSP1,
	IPCC_CLIENT_DUMMY = IPCC_CLIENT_DBG,
	IPCC_CLIENT_APCP = IPCC_CLIENT_CPUCP,
	IPCC_CLIENT_PRIME_CORE = IPCC_CLIENT_M55_WM,
	IPCC_CLIENT_LMCU = IPCC_CLIENT_M55_WM,
	IPCC_CLIENT_M55_AM = IPCC_CLIENT_LSR,
	IPCC_CLIENT_CAM_ENG0 = IPCC_CLIENT_IFE0,
	IPCC_CLIENT_CAM_ENG1 = IPCC_CLIENT_IFE1,
	IPCC_CLIENT_CAM_ENG2 = IPCC_CLIENT_IFE2,
	IPCC_CLIENT_CAM_ENG3 = IPCC_CLIENT_IFE3,
	IPCC_CLIENT_CAM_ENG4 = IPCC_CLIENT_IFE4,
	IPCC_CLIENT_CAM_ENG5 = IPCC_CLIENT_IFE5,
	IPCC_CLIENT_CAM_ENG6 = IPCC_CLIENT_IFE6,
	IPCC_CLIENT_CAM_ENG7 = IPCC_CLIENT_IFE7,
	IPCC_CLIENT_CAM_ENG8 = IPCC_CLIENT_IFE8,
	IPCC_CLIENT_CAM_ENG9 = IPCC_CLIENT_IFE9,
	IPCC_CLIENT_CAM_ENG10 = IPCC_CLIENT_IFE10,
	IPCC_CLIENT_CAM_ENG11 = IPCC_CLIENT_IFE11,
	IPCC_CLIENT_CAM_ENG12 = IPCC_CLIENT_IFE12,
};

#ifdef QTI_IPCC_ENABLED

/*
 * Resolve our own per-protocol register addresses from the chipset config and
 * latch the controller version. Call once, before any trigger.
 */
void qti_ipcc_init(void);

/*
 * Trigger the signal range [signal_low, signal_high] towards target_id on the
 * given protocol, over whichever mechanism the chipset config wires for that
 * target. Returns 0 on success or a negative errno.
 */
int qti_ipcc_trigger(enum ipcc_protocol protocol, enum ipcc_client target_id,
		     uint16_t signal_low, uint16_t signal_high);

#else /* !QTI_IPCC_ENABLED */

static inline void qti_ipcc_init(void) {}

static inline int qti_ipcc_trigger(enum ipcc_protocol protocol,
				   enum ipcc_client target_id,
				   uint16_t signal_low, uint16_t signal_high)
{
	return 0;
}

#endif /* QTI_IPCC_ENABLED */

#endif /* QTI_IPCC_H */
