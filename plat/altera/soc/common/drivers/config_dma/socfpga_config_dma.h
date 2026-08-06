/*
 * Copyright (c) 2019-2026, Intel Corporation. All rights reserved.
 * Copyright (c) 2024-2026, Altera Corporation. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef SOCFPGA_CONFIG_DMA_H
#define SOCFPGA_CONFIG_DMA_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include <lib/utils_def.h>

/* Platform-specific settings */
#ifndef DMAC_BASE
#if PLATFORM_MODEL == PLAT_SOCFPGA_AGILEX72
#define DMAC_BASE					0x90B2000U
#else
#define DMAC_BASE					0x18200000U
#endif
#endif

#define MAX_CHANNELS					1

/* DMAC Global Registers */
#define REG_DMAC_CFG					0x10	/* DMAC Enable */
#define REG_DMAC_CHEN					0x18	/* Channel enable */
#define REG_DMAC_RESET					0x58	/* DMAC Reset */

/* Per-channel registers base offset (channel stride) */
#define REG_CH_STRIDE					0x100
#define CH_REG_OFF(ch, r)				(0x100 + (ch) * REG_CH_STRIDE + (r))

/* Per-channel register offsets (relative to CH base) */
#define REG_CH_SRC_ADDR					0x00	/* Source Address */
#define REG_CH_DST_ADDR					0x08	/* Destination Address */
#define REG_CH_BLOCK_TS					0x10	/* BLOCK_TS (beats) */
#define REG_CH_CTL					0x18	/* Control register */
#define REG_CH_CFG_LO					0x20	/* Config Low */
#define REG_CH_CFG_HI					0x24	/* Config High */
#define REG_CH_LLP					0x28	/* Linked List Pointer */
#define REG_CH_STATUS					0x30	/* Status */
#define REG_CH_INTSTATUS_ENABLE				0x80	/* Interrupt Enable status */
#define REG_CH_INTSTATUS				0x88	/* Interrupt status */
#define REG_CH_INTCLEAR					0x98	/* Interrupt clear */

/* Channel Control bits */
#define CH_CTRL_START					BIT(0)
#define CH_CTRL_INT_EN					BIT(1)
#define CH_CTRL_LLP_EN					BIT(2)	/* Enable LLP walking */

/* Channel Status bits */
#define CH_STATUS_DONE					BIT(0)
#define CH_STATUS_BUSY					BIT(1)

/* Channel Interrupt Status bits */
#define CH_INTSTAT_BLOCK_TFR_DONE			BIT(0)	/* Block transfer done */
#define CH_INTSTAT_DMA_TFR_DONE				BIT(1)	/* DMA transfer done */
#define CH_INTSTAT_SRC_TRANSCOMP			BIT(3)	/* Source transaction complete */
#define CH_INTSTAT_DST_TRANSCOMP			BIT(4)	/* Dest transaction complete */
#define CH_INTSTAT_SRC_SLV_ERR				BIT(7)	/* Source slave error */

/* Common interrupt status masks */
#define CH_INTSTAT_TRANSFER_COMPLETE_MASK \
	(CH_INTSTAT_BLOCK_TFR_DONE | CH_INTSTAT_SRC_TRANSCOMP | \
		CH_INTSTAT_DST_TRANSCOMP)	/* 0x19 */
#define CH_INTSTAT_DMA_TRANSFER_COMPLETE_MASK \
	(CH_INTSTAT_BLOCK_TFR_DONE | CH_INTSTAT_DMA_TFR_DONE | \
		CH_INTSTAT_DST_TRANSCOMP)	/* 0x13 */
#define CH_INTSTAT_ERROR_MASK				CH_INTSTAT_SRC_SLV_ERR	/* 0x80 */

/* Fixme: verify the CTL channel register */
/* CTL Register - Source/Destination Transfer Width */
#define CH_CTL_SRC_TR_WIDTH_SHIFT			8
#define CH_CTL_DST_TR_WIDTH_SHIFT			11
#define CH_CTL_SRC_TR_WIDTH(x)				(((x) & 0x7) << CH_CTL_SRC_TR_WIDTH_SHIFT)
#define CH_CTL_DST_TR_WIDTH(x)				(((x) & 0x7) << CH_CTL_DST_TR_WIDTH_SHIFT)

/* CTL Register - Source/Destination Burst Size */
#define CH_CTL_SRC_MSIZE_SHIFT				14
#define CH_CTL_DST_MSIZE_SHIFT				18
#define CH_CTL_SRC_MSIZE(x)				(((x) & 0xF) << CH_CTL_SRC_MSIZE_SHIFT)
#define CH_CTL_DST_MSIZE(x)				(((x) & 0xF) << CH_CTL_DST_MSIZE_SHIFT)

/* CTL Register - Source/Destination Address Increment */
#define CH_CTL_SINC_SHIFT				4
#define CH_CTL_DINC_SHIFT				6
#define CH_CTL_SINC(x)					(((x) & 0x1) << CH_CTL_SINC_SHIFT)
#define CH_CTL_DINC(x)					(((x) & 0x1) << CH_CTL_DINC_SHIFT)

/* Transfer Type and Flow Control */
#define CH_CTL_TT_FC_SHIFT				20
#define CH_CTL_TT_FC(x)					(((x) & 0x7) << CH_CTL_TT_FC_SHIFT)

/* Transfer type / flow controller values */
#define TT_FC_MEM_TO_PER_DMAC				0x1 /* DMA flow controller */
#define TT_FC_MEM_TO_PER_PER				0x5 /* Peripheral flow controller */

/* LLI Descriptor CTL_HIGH register bits */
#define LLI_CTL_HIGH_VALID_BIT				BIT(31)	/* bit63 of CTL */
#define LLI_CTL_HIGH_LAST_BYTE				BIT(30)	/* bit62 of CTL */

/* ========================================================================= */
/* CHx_CFG_H Register Bitfield Definitions                                  */
/* ========================================================================= */

/* Transfer Type and Flow Controller */
#define CH_CFG_H_TT_FC_POS				0
#define CH_CFG_H_TT_FC_MASK				(0x7U << CH_CFG_H_TT_FC_POS)
#define CH_CFG_H_TT_FC(x)				(((x) & 0x7U) << CH_CFG_H_TT_FC_POS)

/* Destination Handshake Interface Select */
#define CH_CFG_H_HS_SEL_DST_POS				3
#define CH_CFG_H_HS_SEL_DST_MASK			(0x1U << CH_CFG_H_HS_SEL_DST_POS)
#define CH_CFG_H_HS_SEL_DST(x)				(((x) & 0x1U) << CH_CFG_H_HS_SEL_DST_POS)

/* Source Handshake Interface Select */
#define CH_CFG_H_HS_SEL_SRC_POS				4
#define CH_CFG_H_HS_SEL_SRC_MASK			(0x1U << CH_CFG_H_HS_SEL_SRC_POS)
#define CH_CFG_H_HS_SEL_SRC(x)				(((x) & 0x1U) << CH_CFG_H_HS_SEL_SRC_POS)

/* Source Peripheral ID */
#define CH_CFG_H_SRC_PER_POS				8
#define CH_CFG_H_SRC_PER_MASK				(0xFU << CH_CFG_H_SRC_PER_POS)
#define CH_CFG_H_SRC_PER(x)				(((x) & 0xFU) << CH_CFG_H_SRC_PER_POS)

/* Destination Peripheral ID */
#define CH_CFG_H_DST_PER_POS				12
#define CH_CFG_H_DST_PER_MASK				(0xFU << CH_CFG_H_DST_PER_POS)
#define CH_CFG_H_DST_PER(x)				(((x) & 0xFU) << CH_CFG_H_DST_PER_POS)

/* Channel Priority */
#define CH_CFG_H_PRIORITY_POS				15
#define CH_CFG_H_PRIORITY_MASK				(0x7U << CH_CFG_H_PRIORITY_POS)
#define CH_CFG_H_PRIORITY(x)				(((x) & 0x7U) << CH_CFG_H_PRIORITY_POS)

/* ========================================================================= */
/* CHx_CFG_L Register Bitfield Definitions                                  */
/* ========================================================================= */

/* Source Multi-block Type */
#define CH_CFG_L_SRC_MULTBLK_TYPE_POS			0
#define CH_CFG_L_SRC_MULTBLK_TYPE_MASK			(0x3U << CH_CFG_L_SRC_MULTBLK_TYPE_POS)
#define CH_CFG_L_SRC_MULTBLK_TYPE(x) \
	(((x) & 0x3U) << CH_CFG_L_SRC_MULTBLK_TYPE_POS)

/* Destination Multi-block Type */
#define CH_CFG_L_DEST_MULTBLK_TYPE_POS			2
#define CH_CFG_L_DEST_MULTBLK_TYPE_MASK			(0x3U << CH_CFG_L_DEST_MULTBLK_TYPE_POS)
#define CH_CFG_L_DEST_MULTBLK_TYPE(x) \
	(((x) & 0x3U) << CH_CFG_L_DEST_MULTBLK_TYPE_POS)

/* BLOCK_TS limit — choose safely for your IP configuration */
#define DMA_MAX_BLOCK_TS				128

/* Maximum single-block transfer size threshold = 4KB
 * Transfers > this size use multi-block LLI mode
 * Value = DMA_MAX_BLOCK_TS * transfer_width (128 * 32 = 4096)
 */
#define DMA_SINGLE_BLOCK_MAX_BYTES			4096

/* Safety: max descriptors per transfer (split by blocks) */
#define MAX_LLIS_PER_TRANSFER				32

/*
 * LLI Descriptor Layout (must match hardware descriptor format)
 * - LLI access uses burst size (arsize/awsize) same as data bus width
 * - Burst length (awlen/arlen) chosen based on data bus width
 * - Must not cross one complete LLI structure of 64 bytes
 * - DW_axi_dmac fetches entire LLI (40 bytes) in one AXI burst
 * - LLI must be 64-byte aligned
 */
struct dw_dma_lli_desc {
	uint32_t sar_low;		/* 0x00 */
	uint32_t sar_high;		/* 0x04 */
	uint32_t dar_low;		/* 0x08 */
	uint32_t dar_high;		/* 0x0c */
	uint32_t block_ts;		/* 0x10 */
	uint32_t reserved_0x14;		/* 0x14 */

	uint32_t llp_low;		/* 0x18 */
	uint32_t llp_high;		/* 0x1c */

	uint32_t ctl_low;		/* 0x20 */
	uint32_t ctl_high;		/* 0x24 */
	uint32_t sstat;			/* 0x28 */
	uint32_t dstat;			/* 0x2c */
	uint32_t llp_stat_low;		/* 0x30 */
	uint32_t llp_stat_high;		/* 0x34 */
	uint32_t reserved[2];		/* 0x38–0x3c padding to 64 bytes */
} __aligned(64);

/* Function */
void dw_dma_init(uintptr_t base_addr);
void dw_dma_deinit(void);
int dw_dma_chan_alloc(void);
void dw_dma_chan_free(int ch);
int dw_dma_prep_h2d_multiblock(int ch, uintptr_t src_addr,
			       uintptr_t dst_periph_addr,
			       uint32_t len_bytes,
			       uint8_t dst_periph_hs_id,
			       uint8_t transfer_width_bytes);
int dw_dma_prep_h2d_ex(int ch, uintptr_t src_addr,
		       uintptr_t dst_periph_addr,
		       uint32_t len_bytes,
		       uint8_t dst_periph_hs_id,
		       uint8_t transfer_width_bytes);
int dw_dma_prep_h2d(int ch, uintptr_t src_addr,
		    uintptr_t dst_periph_addr,
		    uint32_t len);
int dw_dma_submit(int ch);
int dw_dma_start(int ch);
int dw_dma_wait_for_completion(int ch, uint32_t timeout_ms);
int dw_dma_transfer_h2d_blocking(int ch, uintptr_t src_addr,
				 uintptr_t dst_periph_addr,
				 uint32_t len,
				 uint32_t timeout_ms);
void dw_dma_cleanup_llp(int ch);
void dw_dma_irq_handler(void);

#endif /* SOCFPGA_CONFIG_DMA_H */
