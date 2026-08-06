/*
 * Copyright (c) 2019-2026, Intel Corporation. All rights reserved.
 * Copyright (c) 2024-2026, Altera Corporation. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include <assert.h>
#include <errno.h>
#include <string.h>

#include <common/debug.h>
#include <drivers/delay_timer.h>
#include <lib/mmio.h>

#include "config_dma/socfpga_config_dma.h"
#include <platform_def.h>

/* Driver State Structures */
struct dw_dma_chan {
	int id;
	bool in_use;
	uintptr_t base;				/* controller base */
	/* bookkeeping for LLI transfers */
	struct dw_dma_lli_desc *lli_virt;	/* pointer to first LLI used */
	int lli_count;
};

/* Static Variables */
static struct dw_dma_chan channels[MAX_CHANNELS];
static uintptr_t g_base = DMAC_BASE;

/*
 * Simple static descriptor pool. Replace with dynamic allocator if needed.
 * Temporary place the lli_desc at RAM, this struct will be allocating at the OCRAM,
 * and the HPS OCRAM is not mapped at the MNOC, thus accessing the LLI will failed,
 * temporarily place the LLI at DDR RAM 0x80040000, the software component need to
 * decide a proper allocated address for this
 */
#define LLI_POOL_BASE 0x80040000

static struct dw_dma_lli_desc (*lli_pool)
	[MAX_LLIS_PER_TRANSFER] =
	(struct dw_dma_lli_desc (*)[MAX_LLIS_PER_TRANSFER]) LLI_POOL_BASE;

/* Helper Functions */
static inline uintptr_t reg_addr(uintptr_t base, uint32_t off)
{
	return (base + off);
}

/* Internal helper: encode width (bytes → encoding) */
static inline uint32_t width_to_enc(uint32_t width_bytes)
{
	/*
	 * 0 = 1 byte, 1 = 2 bytes, 2 = 4 bytes, 3 = 8 bytes,
	 * 4 = 16 bytes, 5 = 32 bytes
	 */
	switch (width_bytes) {
	case 1:
		return 0;
	case 2:
		return 1;
	case 4:
		return 2;
	case 8:
		return 3;
	case 16:
		return 4;
	case 32:
		return 5;
	default:
		return 5;
	}
}

/*
 * Internal helper: compute beats for chunk (len / transfer_width_bytes)
 * and clamp to DMA_MAX_BLOCK_TS.
 */
static size_t compute_beats_and_clamp(size_t bytes, uint32_t transfer_width_bytes)
{
	size_t beats = bytes / transfer_width_bytes;

	if (beats == 0) {
		return 0;
	}

	if (beats > DMA_MAX_BLOCK_TS) {
		beats = DMA_MAX_BLOCK_TS;
	}

	return beats;
}

/* Initialization / Reset */
void dw_dma_init(uintptr_t base_addr)
{
	int i;

	g_base = base_addr;

	/* De-assert reset, write 1 and wait for bit to be cleared */
	mmio_write_32(reg_addr(g_base, REG_DMAC_RESET), 0x1);

	for (i = 0; i < MAX_CHANNELS; ++i) {
		channels[i].id = i;
		channels[i].in_use = false;
		channels[i].base = g_base;
		channels[i].lli_virt = NULL;
		channels[i].lli_count = 0;
	}

	/* Enable DMAC */
	mmio_write_32(reg_addr(g_base, REG_DMAC_CFG), 0x3);

	/* Soft reset / disable all channels */
	mmio_write_32(reg_addr(g_base, REG_DMAC_CHEN), 0x0);

	VERBOSE("DW DMA: Initialized at 0x%lx\n", g_base);
}

void dw_dma_deinit(void)
{
	int i;

	/* Stop all channels and clear state */
	mmio_write_32(reg_addr(g_base, REG_DMAC_CHEN), 0x0);

	for (i = 0; i < MAX_CHANNELS; ++i) {
		channels[i].in_use = false;
		channels[i].lli_virt = NULL;
		channels[i].lli_count = 0;
	}

	VERBOSE("DW DMA: Deinitialized\n");
}

/* Channel Management */
int dw_dma_chan_alloc(void)
{
	int i;

	for (i = 0; i < MAX_CHANNELS; ++i) {
		if (!channels[i].in_use) {
			channels[i].in_use = true;
			channels[i].lli_virt = NULL;
			channels[i].lli_count = 0;
			VERBOSE("DW DMA: Allocated channel %d\n", i);
			return i;
		}
	}

	ERROR("DW DMA: No free channel available\n");
	return -ENOMEM;
}

void dw_dma_chan_free(int ch)
{
	uintptr_t chbase;

	if (ch < 0 || ch >= MAX_CHANNELS) {
		return;
	}

	chbase = reg_addr(g_base, CH_REG_OFF(ch, 0));
	mmio_write_32(chbase + REG_CH_CTL, 0);
	mmio_write_32(chbase + REG_CH_STATUS, 0);
	mmio_write_32(chbase + REG_CH_CFG_LO, 0);
	mmio_write_32(chbase + REG_CH_CFG_HI, 0);

	channels[ch].in_use = false;
	channels[ch].lli_virt = NULL;
	channels[ch].lli_count = 0;

	VERBOSE("DW DMA: channel %d is free\n", ch);
}

/*
 * Multiblock preparation using LLI descriptors
 * - Splits the logical transfer into one or more HW blocks
 * - Fills a simple descriptor chain in lli_pool for the channel
 * - Programs CHx_LLP with the physical pointer of first descriptor
 * - Does NOT start the channel; caller must call dw_dma_start(ch)
 *
 * Note: In real hardware the LLP address must be a physical address.
 * This assumes 1:1 physical mapping (identity) for brevity.
 * On real platforms you must convert virtual pointers to DMA addresses.
 */
int dw_dma_prep_h2d_multiblock(int ch, uintptr_t src_addr,
			       uintptr_t dst_periph_addr,
			       uint32_t len_bytes,
			       uint8_t dst_periph_hs_id,
			       uint8_t transfer_width_bytes)
{
	uintptr_t chbase;
	uint32_t width_enc;
	size_t bytes_remaining;
	size_t offset;
	int desc_idx;
	uint32_t cfg_lo, cfg_hi;
	int i;

	if (ch < 0 || ch >= MAX_CHANNELS || !channels[ch].in_use) {
		return -EINVAL;
	}

	if (len_bytes == 0) {
		return -EINVAL;
	}

	if (!(transfer_width_bytes == 1 || transfer_width_bytes == 2 ||
	      transfer_width_bytes == 4 || transfer_width_bytes == 8 ||
	      transfer_width_bytes == 16 || transfer_width_bytes == 32)) {
		return -EINVAL;
	}

	chbase = reg_addr(g_base, CH_REG_OFF(ch, 0));

	/* Clear existing LLI state */
	channels[ch].lli_virt = NULL;
	channels[ch].lli_count = 0;

	/* compute per-block bytes based on transfer width and axi block_ts */
	width_enc = width_to_enc(transfer_width_bytes);

	bytes_remaining = len_bytes;
	offset = 0;
	desc_idx = 0;

	while (bytes_remaining > 0 && desc_idx < MAX_LLIS_PER_TRANSFER) {
		size_t want_bytes = bytes_remaining;
		size_t max_block_bytes = (size_t)DMA_MAX_BLOCK_TS * transfer_width_bytes;
		size_t chunk = (want_bytes > max_block_bytes) ? max_block_bytes : want_bytes;
		size_t beats = compute_beats_and_clamp(chunk, transfer_width_bytes);
		struct dw_dma_lli_desc *d;
		uint32_t ctl;

		if (beats == 0) {
			ERROR("DW DMA: Cannot form valid chunk\n");
			return -EINVAL;
		}

		/* Fixme: on real hardware, virtual to physical conversion is needed for LLP */
		d = &lli_pool[ch][desc_idx];
		memset(d, 0, sizeof(*d));

		d->sar_low = (uint32_t)(src_addr + offset);
		d->dar_low = (uint32_t)dst_periph_addr;
		d->block_ts = (uint32_t)(beats - 1);

		/* prepare ctl: widths, msizes and NOINC/INC bits (H2D) */
		ctl = 0;
		ctl |= CH_CTL_SRC_TR_WIDTH(width_enc);
		ctl |= CH_CTL_DST_TR_WIDTH(width_enc);
		ctl |= CH_CTL_SRC_MSIZE(6);
		ctl |= CH_CTL_DST_MSIZE(6);
		ctl |= CH_CTL_SINC(0);
		ctl |= CH_CTL_DINC(0);

		d->ctl_low = ctl;

		/*
		 * Set LLI descriptor control high bits:
		 * - Valid bit (always set)
		 * - Last byte (set if this is the final descriptor)
		 */
		d->ctl_high = LLI_CTL_HIGH_VALID_BIT;
		if (bytes_remaining <= (beats * transfer_width_bytes)) {
			d->ctl_high |= LLI_CTL_HIGH_LAST_BYTE;
		}

		/* set next pointer later */
		d->llp_low = 0;

		bytes_remaining -= (beats * transfer_width_bytes);
		offset += (beats * transfer_width_bytes);
		desc_idx++;
	}

	if (bytes_remaining > 0) {
		ERROR("DW DMA: Not enough descriptors to cover transfer\n");
		return -ENOMEM;
	}

	/* link descriptors (physical pointers assumed identity-mapped) */
	for (i = 0; i < desc_idx; ++i) {
		if (i + 1 < desc_idx) {
			lli_pool[ch][i].llp_low = (uint32_t)(uintptr_t)&lli_pool[ch][i + 1];
		} else {
			lli_pool[ch][i].llp_low = 0;
		}
	}

	/*
	 * Program CHx_LLP with physical address of first descriptor
	 * Fixme: the linked list , should we using physical address memory within
	 * ATF or IOVA from the OS Linux. If this memory region is protected
	 * or secure, the Config DMA may not be able to read this.
	 * So, may need to create a reserve memory in DDR for this.
	 */
	mmio_write_32(chbase + REG_CH_LLP, (uint32_t)(uintptr_t)&lli_pool[ch][0]);

	/* Program CTL in channel to enable LLP walking */
	mmio_write_32(chbase + REG_CH_CTL,
		      mmio_read_32(chbase + REG_CH_CTL) | CH_CTRL_LLP_EN);

	channels[ch].lli_virt = &lli_pool[ch][0];
	channels[ch].lli_count = desc_idx;

	/*
	 * Program CFG registers for multi-block linked-list mode:
	 *  - SRC is memory (software handshake, no HW HS)
	 *  - DST uses HW handshake with dst_periph_hs_id
	 *  - Use linked list mode (0x3)
	 */
	cfg_lo = 0;
	cfg_hi = 0;

	cfg_hi |= 0;					/* Source: software handshake */
	cfg_hi |= 0;					/* Destination: HW handshake */
	cfg_lo |= CH_CFG_L_SRC_MULTBLK_TYPE(0x3);	/* linked list */
	cfg_lo |= CH_CFG_L_DEST_MULTBLK_TYPE(0x3);	/* linked list */
	cfg_hi |= CH_CFG_H_TT_FC(TT_FC_MEM_TO_PER_DMAC);
	cfg_hi |= CH_CFG_H_PRIORITY(0);			/* Default priority */
	cfg_hi |= CH_CFG_H_DST_PER(dst_periph_hs_id);
	/*
	 * Fixme: source outstanding request limit should be 16
	 * but this is not used in Simics
	 * Need to get this from HW.
	 */
	cfg_hi |= (0xF << 23);				/* Set to 16 */
	cfg_hi |= (0xF << 27);				/* Set to 16 */

	mmio_write_32(chbase + REG_CH_CFG_LO, cfg_lo);
	mmio_write_32(chbase + REG_CH_CFG_HI, cfg_hi);

	VERBOSE("DW DMA: Prepared multiblock transfer on channel %d, %d descriptors\n",
		ch, desc_idx);

	return 0;
}

/*
 * Single-block Preparation
 * - Target HW: Synopsys DW AXI DMAC, Agilex72 platform
 * - Use case: Simple Host-to-Device transfers
 * - Single-block (non-LLI) mode only
 * - DMA controller is the flow controller (TT_FC = MEM_TO_PER_DMAC)
 * - Transfer width and burst settings are aligned to Agilex72 bus capability
 *   and validated in Simics.
 *
 * NOTE: MSIZE, outstanding requests limits, and priority are currently
 * set based on Simics and might will revisit in silicon.
 */
int dw_dma_prep_h2d_ex(int ch, uintptr_t src_addr,
		       uintptr_t dst_periph_addr,
		       uint32_t len_bytes,
		       uint8_t dst_periph_hs_id,
		       uint8_t transfer_width_bytes)
{
	uintptr_t chbase;
	uint32_t en;
	uint32_t beats;
	uint32_t ctl;
	uint32_t width_enc;
	uint32_t cfg_lo, cfg_hi;

	VERBOSE("DW DMA: Preparing H2D transfer\n");

	if (ch < 0 || ch >= MAX_CHANNELS || !channels[ch].in_use) {
		return -EINVAL;
	}

	if (len_bytes == 0) {
		return -EINVAL;
	}

	if (!(transfer_width_bytes == 1 || transfer_width_bytes == 2 ||
	      transfer_width_bytes == 4 || transfer_width_bytes == 8 ||
	      transfer_width_bytes == 32)) {
		/* unsupported transfer width in this template */
		return -EINVAL;
	}

	if ((len_bytes % transfer_width_bytes) != 0) {
		return -EINVAL;
	}

	chbase = reg_addr(g_base, CH_REG_OFF(ch, 0));
	VERBOSE("DW DMA: Channel base 0x%lx\n", chbase);

	/* Disable channel in global enable while programming */
	en = mmio_read_32(reg_addr(g_base, REG_DMAC_CHEN));
	en &= ~(1U << ch);
	mmio_write_32(reg_addr(g_base, REG_DMAC_CHEN), en);

	/* Clear any status bits */
	/* Fixme: why set it to all 1s? */
	mmio_write_32(chbase + REG_CH_STATUS, 0xFFFFFFFF);

	/* Program source and destination addresses */
	mmio_write_32(chbase + REG_CH_SRC_ADDR, (uint32_t)src_addr);
	mmio_write_32(chbase + REG_CH_DST_ADDR, (uint32_t)dst_periph_addr);

	/* Program transfer size as BLOCK_TS (beats) */
	beats = len_bytes / transfer_width_bytes;

	if (beats == 0) {
		return -EINVAL;
	}

	if (beats > DMA_MAX_BLOCK_TS) {
		beats = DMA_MAX_BLOCK_TS;
	}

	mmio_write_32(chbase + REG_CH_BLOCK_TS, beats - 1);

	VERBOSE("DW DMA: Size = %d, block_ts = %d, transfer width = %d bytes\n",
		len_bytes, beats, transfer_width_bytes);

	/* Program control register (CTL) — set width, burst sizes, TT_FC */
	ctl = 0;
	width_enc = width_to_enc(transfer_width_bytes);

	/*
	 * Transfer width: Dynamically encoded based on transfer_width_bytes.
	 * Encoding: 0=1B, 1=2B, 2=4B, 3=8B, 4=16B, 5=32B.
	 * Must match both src and dst for memory-to-peripheral.
	 */
	ctl |= CH_CTL_SRC_TR_WIDTH(width_enc);
	ctl |= CH_CTL_DST_TR_WIDTH(width_enc);

	VERBOSE("DW DMA: Width encoding: %d\n", width_enc);

	/*
	 * MSIZE set to 6 based on Simics simulation configuration.
	 * Fixme: Verify optimal MSIZE for silicon.
	 */
	ctl |= CH_CTL_SRC_MSIZE(6);
	ctl |= CH_CTL_DST_MSIZE(6);

	/* Source and destination address auto-increment */
	ctl |= CH_CTL_SINC(0);
	ctl |= CH_CTL_DINC(0);

	mmio_write_32(chbase + REG_CH_CTL, ctl);

	/* Enable Channel interrupt and status */
	/* Enable block transfer done, DMA transfer done, destination transaction complete */
	mmio_write_32(chbase + REG_CH_INTSTATUS_ENABLE, CH_INTSTAT_TRANSFER_COMPLETE_MASK);

	/*
	 * Program CFG registers properly:
	 *  - SRC is memory (no HW HS)
	 *  - DST uses HW handshake with dst_periph_hs_id
	 *  - Use contiguous single-block mode
	 */
	cfg_lo = 0;
	cfg_hi = 0;

	cfg_hi |= 0;					/* Source: software handshake (memory) */
	cfg_hi |= 0;					/* Fixme: Destination: HW handshake */
	/*
	 * Both SRC and DST are set to contiguous mode,
	 * only single block transfer are supported in this function
	 */
	cfg_lo |= CH_CFG_L_SRC_MULTBLK_TYPE(0x0);	/* Contiguous */
	cfg_lo |= CH_CFG_L_DEST_MULTBLK_TYPE(0x0);
	/*
	 * Transfer type and flow controller: Memory-to-Peripheral with DMA as
	 * flow controller (TT_FC=1) to match Simics configuration.
	 */
	cfg_hi |= CH_CFG_H_TT_FC(TT_FC_MEM_TO_PER_DMAC);
	/* Channel priority: 0 (lowest) for single-channel use. */
	cfg_hi |= CH_CFG_H_PRIORITY(0);
	cfg_hi |= CH_CFG_H_DST_PER(dst_periph_hs_id);
	/*
	 * Outstanding request limits: Set to 0xF (16).
	 * Currently not modeled in simics.
	 * Fixme: To confirm optimal value with HW team once available
	 */
	cfg_hi |= (0xF << 23);
	cfg_hi |= (0xF << 27);				/* Set to 16 */

	mmio_write_32(chbase + REG_CH_CFG_LO, cfg_lo);
	mmio_write_32(chbase + REG_CH_CFG_HI, cfg_hi);

	VERBOSE("DW DMA: Channel configured\n");

	return 0;
}

int dw_dma_prep_h2d(int ch, uintptr_t src_addr,
		    uintptr_t dst_periph_addr,
		    uint32_t len)
{
	return dw_dma_prep_h2d_ex(ch, src_addr, dst_periph_addr, len,
				0 /* hs id default */, 32 /* width bytes */);
}

/* Transfer Control */
int dw_dma_submit(int ch)
{
	(void)ch;
	return 0;
}

int dw_dma_start(int ch)
{
	uint32_t en;

	if (ch < 0 || ch >= MAX_CHANNELS || !channels[ch].in_use) {
		return -EINVAL;
	}

	/* Fixme: need to check if LLI created */
	/*
	 * if (channels[ch].lli_virt == NULL || channels[ch].lli_count = 0) {
	 *	return -EINVAL;
	 * }
	 */

	VERBOSE("DW DMA: Starting channel %d\n", ch);

	/* Mark channel enabled in global channel enable register */
	en = mmio_read_32(reg_addr(g_base, REG_DMAC_CHEN));
	en |= (1U << ch);		/* Enable channel bit */
	en |= (1U << (ch + 8));		/* Write enable bit for channel */
	mmio_write_32(reg_addr(g_base, REG_DMAC_CHEN), en);

	return 0;
}

/* Polling wait for completion with timeout_ms (simple busy-wait) */
int dw_dma_wait_for_completion(int ch, uint32_t timeout_ms)
{
	uintptr_t chbase;
	uint32_t status = 0;
	unsigned int elapsed = 0;

	if (ch < 0 || ch >= MAX_CHANNELS || !channels[ch].in_use) {
		return -EINVAL;
	}

	chbase = reg_addr(g_base, CH_REG_OFF(ch, 0));

	VERBOSE("DW DMA: In DMA wait\n");

	/* Check Interrupt status */
	while (elapsed < timeout_ms) {
		status = mmio_read_32(chbase + REG_CH_INTSTATUS);

		if (status == CH_INTSTAT_TRANSFER_COMPLETE_MASK) {
			/*
			 * Transfer complete: block done,
			 * source + destination transaction complete
			 */
			mmio_write_32(chbase + REG_CH_INTCLEAR,
				      CH_INTSTAT_TRANSFER_COMPLETE_MASK);
			return 0;
		}

		if (status == CH_INTSTAT_DMA_TRANSFER_COMPLETE_MASK) {
			/*
			 * DMA Transfer complete: block done, DMA done,
			 * destination transaction complete
			 */
			mmio_write_32(chbase + REG_CH_INTCLEAR,
				      CH_INTSTAT_DMA_TRANSFER_COMPLETE_MASK);
			return 0;
		}

		if (status & CH_INTSTAT_ERROR_MASK) {
			/* Source slave error detected */
			ERROR("DW DMA: Source Slave Error on channel %d, status=0x%x\n",
			      ch, status);
			return -EIO;  /* Return error, not success! */
		}

		/* Fixme: may need better timeout handling on real hardware */
		udelay(1000);
		elapsed++;
	}

	ERROR("DW DMA: Timeout on channel %d after %u ms, final status=0x%x\n",
	      ch, elapsed, status);
	return -ETIMEDOUT;
}

/* prepare + submit + start + wait */
int dw_dma_transfer_h2d_blocking(int ch, uintptr_t src_addr,
				 uintptr_t dst_periph_addr,
				 uint32_t len,
				 uint32_t timeout_ms)
{
	int r;

	INFO("DW DMA: Preparing transfer - src=0x%lx, dst=0x%lx, len=%u\n",
	     src_addr, dst_periph_addr, len);

	/* Choose single-block or multi-block based on transfer size */
	if (len > DMA_SINGLE_BLOCK_MAX_BYTES) {
		NOTICE("DW DMA: Multi-block transfer (%u bytes)\n", len);
		r = dw_dma_prep_h2d_multiblock(ch, src_addr, dst_periph_addr, len, 0, 32);
		if (r) {
			ERROR("DW DMA: dw_dma_prep_h2d_multiblock failed: %d\n", r);
			return r;
		}
	} else {
		NOTICE("DW DMA: Single-block transfer (%u bytes)\n", len);
		r = dw_dma_prep_h2d(ch, src_addr, dst_periph_addr, len);
		if (r) {
			ERROR("DW DMA: dw_dma_prep_h2d failed: %d\n", r);
			return r;
		}
	}

	dw_dma_submit(ch);
	dw_dma_start(ch);

	return dw_dma_wait_for_completion(ch, timeout_ms);
}

/* cleanup LLI state for channel (does not change HW) */
void dw_dma_cleanup_llp(int ch)
{
	if (ch < 0 || ch >= MAX_CHANNELS) {
		return;
	}

	channels[ch].lli_virt = NULL;
	channels[ch].lli_count = 0;
	/* Note: do not free static pool; if dynamic allocation used, free here */
}

/* Interrupt Handler */
void dw_dma_irq_handler(void)
{
	int ch;
	uint32_t ch_status;
	uintptr_t chbase;
	uint32_t ctrl;

	for (ch = 0; ch < MAX_CHANNELS; ++ch) {
		chbase = reg_addr(g_base, CH_REG_OFF(ch, 0));
		ch_status = mmio_read_32(chbase + REG_CH_STATUS);

		if (ch_status & CH_STATUS_DONE) {
			mmio_write_32(chbase + REG_CH_STATUS, CH_STATUS_DONE);
			ctrl = mmio_read_32(chbase + REG_CH_CTL) & ~CH_CTRL_START;
			mmio_write_32(chbase + REG_CH_CTL, ctrl);
			/* user callback could be invoked here */
			VERBOSE("DW DMA: IRQ handler - channel %d done\n", ch);
		}
	}
}
