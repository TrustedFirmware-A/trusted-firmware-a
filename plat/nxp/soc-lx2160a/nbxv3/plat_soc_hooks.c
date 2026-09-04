/*
 * SPDX-License-Identifier: BSD-3-Clause
 * Copyright 2026 Free Mobile - Vincent Jardin
 *
 * Platform overrides for the LX2160A shared soc.c weak hooks.
 */

#include <stdint.h>

#include <common/debug.h>
#include <lib/mmio.h>
#include <nxp_smmu.h>

#include "flash_bootstrap.h"
#include "nbxv3_runtime_mode.h"
#include <soc.h>

/*
 * RCW build stamp, written by the PBI into DCFG SCRATCHRW13:
 *
 *   31   28 27   24 23   16 15    8 7     0
 *  +-------+-------+-------+-------+-------+
 *  |CARRIER|  TAG  |  YY   |  MM   |  DD   |   all BCD
 *  +-------+-------+-------+-------+-------+
 *
 * e.g. 0x2B260820 -> "Iliad nbxv32 RCW v.20260820".
 */
#define NBXV3_DCFG_SCRATCHRW13_OFFSET	0x230U
#define NBXV3_STAMP_TAG			0xBU
#define NBXV3_STAMP_TAG_SHIFT		24U
#define NBXV3_STAMP_CARRIER_SHIFT	28U
#define NBXV3_STAMP_DATE_MASK		0x00FFFFFFU
#define NBXV3_STAMP_BRINGUP		0xFU

static void nbxv3_print_rcw_stamp(void)
{
	uint32_t stamp = mmio_read_32(NXP_DCFG_ADDR +
				      NBXV3_DCFG_SCRATCHRW13_OFFSET);
	uint32_t carrier;

	if (stamp == 0U) {
		NOTICE("Iliad nbxv3 RCW v.<none> (PBL missing build stamp)\n");
		return;
	}

	if (((stamp >> NBXV3_STAMP_TAG_SHIFT) & 0xFU) != NBXV3_STAMP_TAG) {
		NOTICE("Iliad nbxv3 RCW v.<unknown format 0x%08X>\n", stamp);
		return;
	}

	carrier = stamp >> NBXV3_STAMP_CARRIER_SHIFT;

	if (carrier == NBXV3_STAMP_BRINGUP) {
		NOTICE("Iliad nbxv3 (bring-up, no IO) RCW v.20%06X\n",
		       stamp & NBXV3_STAMP_DATE_MASK);
		return;
	}

	NOTICE("Iliad nbxv3%u RCW v.20%06X\n", carrier,
	       stamp & NBXV3_STAMP_DATE_MASK);
}

/*
 * Called near the end of soc_early_init()
 *
 * nbxv3-specific platform overrides go here.
 */
void plat_soc_early_init_hook(void)
{
	nbxv3_mode_t mode = nbxv3_runtime_mode();

	nbxv3_print_rcw_stamp();

	NOTICE("nbxv3: runtime mode = %s\n", nbxv3_mode_name(mode));

	switch (mode) {
	case NBXV3_MODE_FLASH_BOOTSTRAP:
		nbxv3_flash_bootstrap();
		/* no return */
	case NBXV3_MODE_FLASH_NO_HOST:
		nbxv3_wait_or_por_retry();
		/* no return */
	case NBXV3_MODE_PROD:
	default:
		break;
	}

	/*
	 * Baremetal packet processing: SMMU bypass for the whole bus.
	 *
	 * Sets SCR0.CLIENTPD = 1 and SCR0.USFCFG = 0 on both the secure
	 * (SCR0) and non-secure (NSCR0) global control banks. After this
	 * point every transaction passes through with IOVA == PA: no
	 * stream-table walk, no TLB pressure, no GFSR fault traffic.
	 *
	 * Symmetric with the existing secure-boot path. Upstream
	 * soc.c::soc_init() already calls bypass_smmu() when
	 * TRUSTED_BOARD_BOOT=1 AND boot mode is secure. We're not adding
	 * any new behaviour to the SMMU hardware: we're widening the
	 * "when do we call it" condition to "always on nbxv3", because
	 * the baremetal use cases has the same need (no IOMMU isolation
	 * required) as the secure-boot path that upstream already covers.
	 *
	 * Threat model: there is no untrusted DMA path on this product
	 * (no PCIe slot exposed to user-pluggable cards, no virtualised
	 * guests, no untrusted device firmware). The SMMU's IOMMU
	 * isolation defends against threats that do not exist here, at
	 * the cost of stream-table-walk latency on every DPAA2 / WRIOP /
	 * qDMA descriptor in the 100GE packet path.
	 *
	 * If the threat model ever changes (ex: a board revision adds a
	 * user-facing PCIe slot, or virt), revert this call site: no other
	 * change is required to reinstate SMMU protection.
	 */
	bypass_smmu(NXP_SMMU_ADDR);
	NOTICE("nbxv3: SMMU bypass on (IOVA == PA): baremetal packet path\n");
}
