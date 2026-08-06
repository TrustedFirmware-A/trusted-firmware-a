/*
 * Copyright (c) 2026, Altera Corporation. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef CADENCE_XSPI_H
#define CADENCE_XSPI_H

#include <assert.h>
#include <stdbool.h>
#include <stdint.h>

#include <common/debug.h>
#include <lib/utils_def.h>

#define CDNS_XSPI_MAGIC_NUM_VALUE	0x6522
#define CDNS_XSPI_MAX_BANKS		8

/*
 * Note: below are additional auxiliary registers to
 * configure XSPI controller pin-strap settings
 */

/* PHY DQ timing register */
#define CDNS_XSPI_CCP_PHY_DQ_TIMING		0x0000

/* PHY DQS timing register */
#define CDNS_XSPI_CCP_PHY_DQS_TIMING		0x0004

/* PHY gate loopback control register */
#define CDNS_XSPI_CCP_PHY_GATE_LPBCK_CTRL	0x0008

/* PHY DLL slave control register */
#define CDNS_XSPI_CCP_PHY_DLL_SLAVE_CTRL	0x0010

/* DLL PHY control register */
#define CDNS_XSPI_DLL_PHY_CTRL			0x1034

/* Command registers */
#define CDNS_XSPI_CMD_REG_0			0x0000
#define CDNS_XSPI_CMD_REG_1			0x0004
#define CDNS_XSPI_CMD_REG_2			0x0008
#define CDNS_XSPI_CMD_REG_3			0x000C
#define CDNS_XSPI_CMD_REG_4			0x0010
#define CDNS_XSPI_CMD_REG_5			0x0014

/* Command status registers */
#define CDNS_XSPI_CMD_STATUS_REG		0x0044

/* Controller status register */
#define CDNS_XSPI_CTRL_STATUS_REG		0x0100
#define CDNS_XSPI_INIT_COMPLETED		BIT(16)
#define CDNS_XSPI_INIT_LEGACY			BIT(9)
#define CDNS_XSPI_INIT_FAIL			BIT(8)
#define CDNS_XSPI_CTRL_BUSY			BIT(7)

/* Controller interrupt status register */
#define CDNS_XSPI_INTR_STATUS_REG		0x0110
#define CDNS_XSPI_STIG_DONE			BIT(23)
#define CDNS_XSPI_SDMA_ERROR			BIT(22)
#define CDNS_XSPI_SDMA_TRIGGER			BIT(21)
#define CDNS_XSPI_CMD_IGNRD_EN			BIT(20)
#define CDNS_XSPI_DDMA_TERR_EN			BIT(18)
#define CDNS_XSPI_CDMA_TREE_EN			BIT(17)
#define CDNS_XSPI_CTRL_IDLE_EN			BIT(16)

#define CDNS_XSPI_TRD_COMP_INTR_STATUS		0x0120
#define CDNS_XSPI_TRD_ERR_INTR_STATUS		0x0130
#define CDNS_XSPI_TRD_ERR_INTR_EN		0x0134

/* Controller interrupt enable register */
#define CDNS_XSPI_INTR_ENABLE_REG		0x0114
#define CDNS_XSPI_INTR_EN			BIT(31)
#define CDNS_XSPI_STIG_DONE_EN			BIT(23)
#define CDNS_XSPI_SDMA_ERROR_EN			BIT(22)
#define CDNS_XSPI_SDMA_TRIGGER_EN		BIT(21)

#define CDNS_XSPI_INTR_MASK (CDNS_XSPI_INTR_EN | \
	CDNS_XSPI_STIG_DONE_EN  | \
	CDNS_XSPI_SDMA_ERROR_EN | \
	CDNS_XSPI_SDMA_TRIGGER_EN)

/* Controller config register */
#define CDNS_XSPI_CTRL_CONFIG_REG		0x0230
#define CDNS_XSPI_CTRL_WORK_MODE_SHIFT		U(5)
#define CDNS_XSPI_CTRL_WORK_MODE_WIDTH		U(2)

#define CDNS_XSPI_WORK_MODE_DIRECT		0
#define CDNS_XSPI_WORK_MODE_STIG		1
#define CDNS_XSPI_WORK_MODE_ACMD		3

/* SDMA trigger transaction registers */
#define CDNS_XSPI_SDMA_SIZE_REG			0x0240
#define CDNS_XSPI_SDMA_TRD_INFO_REG		0x0244
#define CDNS_XSPI_SDMA_DIR_SHIFT		U(8)
#define CDNS_XSPI_SDMA_DIR_WIDTH		U(1)

/* Controller features register */
#define CDNS_XSPI_CTRL_FEATURES_REG		0x0F04
#define CDNS_XSPI_NUM_BANKS_SHIFT		U(24)
#define CDNS_XSPI_NUM_BANKS_WIDTH		U(2)
#define CDNS_XSPI_DMA_DATA_WIDTH		BIT(21)
#define CDNS_XSPI_NUM_THREADS			GENMASK(3, 0)

/* Controller version register */
#define CDNS_XSPI_CTRL_VERSION_REG		0x0F00
#define CDNS_XSPI_MAGIC_NUM_SHIFT		U(16)
#define CDNS_XSPI_MAGIC_NUM_WIDTH		U(16)
#define CDNS_XSPI_CTRL_REV			GENMASK(7, 0)

/* STIG Profile 1.0 instruction fields (split into registers) */
#define CDNS_XSPI_CMD_INSTR_TYPE_SHIFT		U(0)
#define CDNS_XSPI_CMD_INSTR_TYPE_WIDTH		U(7)
#define CDNS_XSPI_CMD_P1_R1_ADDR0_SHIFT		U(24)
#define CDNS_XSPI_CMD_P1_R1_ADDR0_WIDTH		U(8)
#define CDNS_XSPI_CMD_P1_R2_ADDR1_SHIFT		U(0)
#define CDNS_XSPI_CMD_P1_R2_ADDR1_WIDTH		U(8)
#define CDNS_XSPI_CMD_P1_R2_ADDR2_SHIFT		U(8)
#define CDNS_XSPI_CMD_P1_R2_ADDR2_WIDTH		U(8)
#define CDNS_XSPI_CMD_P1_R2_ADDR3_SHIFT		U(16)
#define CDNS_XSPI_CMD_P1_R2_ADDR3_WIDTH		U(8)
#define CDNS_XSPI_CMD_P1_R2_ADDR4_SHIFT		U(24)
#define CDNS_XSPI_CMD_P1_R2_ADDR4_WIDTH		U(8)
#define CDNS_XSPI_CMD_P1_R3_ADDR5_SHIFT		U(0)
#define CDNS_XSPI_CMD_P1_R3_ADDR5_WIDTH		U(8)
#define CDNS_XSPI_CMD_P1_R3_CMD_SHIFT		U(16)
#define CDNS_XSPI_CMD_P1_R3_CMD_WIDTH		U(8)
#define CDNS_XSPI_CMD_P1_R3_NUM_ADDR_BYTES_SHIFT	U(28)
#define CDNS_XSPI_CMD_P1_R3_NUM_ADDR_BYTES_WIDTH	U(3)
#define CDNS_XSPI_CMD_P1_R4_ADDR_IOS_SHIFT	U(0)
#define CDNS_XSPI_CMD_P1_R4_ADDR_IOS_WIDTH	U(2)
#define CDNS_XSPI_CMD_P1_R4_CMD_IOS_SHIFT	U(8)
#define CDNS_XSPI_CMD_P1_R4_CMD_IOS_WIDTH	U(2)
#define CDNS_XSPI_CMD_P1_R4_BANK_SHIFT		U(12)
#define CDNS_XSPI_CMD_P1_R4_BANK_WIDTH		U(3)

/* STIG data sequence instruction fields (split into registers) */
#define CDNS_XSPI_CMD_DSEQ_R2_DCNT_L_SHIFT	U(16)
#define CDNS_XSPI_CMD_DSEQ_R2_DCNT_L_WIDTH	U(16)
#define CDNS_XSPI_CMD_DSEQ_R3_DCNT_H_SHIFT	U(0)
#define CDNS_XSPI_CMD_DSEQ_R3_DCNT_H_WIDTH	U(16)
#define CDNS_XSPI_CMD_DSEQ_R3_NUM_OF_DUMMY_SHIFT	U(20)
#define CDNS_XSPI_CMD_DSEQ_R3_NUM_OF_DUMMY_WIDTH	U(6)
#define CDNS_XSPI_CMD_DSEQ_R4_BANK_SHIFT	U(12)
#define CDNS_XSPI_CMD_DSEQ_R4_BANK_WIDTH	U(3)
#define CDNS_XSPI_CMD_DSEQ_R4_DATA_IOS_SHIFT	U(8)
#define CDNS_XSPI_CMD_DSEQ_R4_DATA_IOS_WIDTH	U(2)
#define CDNS_XSPI_CMD_DSEQ_R4_DIR_SHIFT		U(4)
#define CDNS_XSPI_CMD_DSEQ_R4_DIR_WIDTH		U(1)
#define CDNS_XSPI_STIG_CMD_DIR_READ		1U
#define CDNS_XSPI_STIG_CMD_DIR_WRITE		0U

/* STIG command status fields */
#define CDNS_XSPI_CMD_STATUS_COMPLETED		BIT(15)
#define CDNS_XSPI_CMD_STATUS_FAILED		BIT(14)
#define CDNS_XSPI_CMD_STATUS_DQS_ERROR		BIT(3)
#define CDNS_XSPI_CMD_STATUS_CRC_ERROR		BIT(2)
#define CDNS_XSPI_CMD_STATUS_BUS_ERROR		BIT(1)
#define CDNS_XSPI_CMD_STATUS_INV_SEQ_ERROR	BIT(0)

#define CDNS_XSPI_STIG_DONE_FLAG		BIT(0)
#define CDNS_XSPI_TRD_STATUS			0x0104

#define MODE_NO_OF_BYTES_SHIFT			U(24)
#define MODE_NO_OF_BYTES_WIDTH			U(2)
#define MODEBYTES_COUNT				1

/*
 * 0x7F (127): Cadence xSPI spec-defined type for STIG data
 * sequence commands — value reserved by hardware specification.
 */
#define CDNS_XSPI_STIG_DATA_SEQ_VALUE 127

enum cdns_xspi_stig_instr_type {
	CDNS_XSPI_STIG_INSTR_TYPE_0,
	CDNS_XSPI_STIG_INSTR_TYPE_1,
	CDNS_XSPI_STIG_INSTR_TYPE_DATA_SEQ = CDNS_XSPI_STIG_DATA_SEQ_VALUE,
};

enum cdns_xspi_sdma_dir {
	CDNS_XSPI_SDMA_DIR_READ,
	CDNS_XSPI_SDMA_DIR_WRITE,
};

/*
 * cdns_xspi_buswidth_to_ios() - Convert SPI buswidth to IOS field value
 * @buswidth: SPI bus width (1, 2, 4, or 8)
 *
 * Converts standard SPI buswidth values to the hardware IOS encoding:
 *   x1 mode (buswidth=1) -> IOS=0
 *   x2 mode (buswidth=2) -> IOS=1
 *   x4 mode (buswidth=4) -> IOS=2
 *   x8 mode (buswidth=8) -> IOS=3
 *
 * Returns: IOS field value (0-3)
 */
static inline uint8_t cdns_xspi_buswidth_to_ios(uint8_t buswidth)
{
	switch (buswidth) {
	case 1:
		return 0;
	case 2:
		return 1;
	case 4:
		return 2;
	case 8:
		return 3;
	default:
		/* Invalid buswidth — caller passed an unsupported value */
		ERROR("XSPI: Invalid buswidth %u\n", buswidth);
		panic();
		return 0;
	}
}

/* SPI operation structure - simplified for ATF */
typedef enum {
	SPI_MEM_NO_DATA = 0,
	SPI_MEM_DATA_IN,
	SPI_MEM_DATA_OUT
} spi_mem_data_dir;

struct spi_mem_op {
	struct {
		uint8_t buswidth;
		uint8_t opcode;
	} cmd;
	struct {
		uint8_t nbytes;
		uint8_t buswidth;
		uint64_t val;
	} addr;
	struct {
		uint8_t nbytes;
		uint8_t buswidth;
	} dummy;
	struct {
		uint8_t buswidth;
		spi_mem_data_dir dir;
		unsigned int nbytes;
		union {
			void *in;
			const void *out;
		} buf;
	} data;
};

/* Helper macros for filling command registers */
static inline uint32_t
cdns_xspi_cmd_fld_p1_instr_cmd_1(const struct spi_mem_op *op, bool data_phase)
{
	uint32_t cmd = 0U;

	UPDATE_REG_FIELD(CDNS_XSPI_CMD_INSTR_TYPE, cmd,
			   data_phase ? CDNS_XSPI_STIG_INSTR_TYPE_1 :
					CDNS_XSPI_STIG_INSTR_TYPE_0);
	UPDATE_REG_FIELD(CDNS_XSPI_CMD_P1_R1_ADDR0, cmd,
			   op->addr.val & 0xffU);

	return cmd;
}

#define CDNS_XSPI_CMD_FLD_P1_INSTR_CMD_1(op, data_phase) \
	cdns_xspi_cmd_fld_p1_instr_cmd_1((op), (data_phase))

static inline uint32_t
cdns_xspi_cmd_fld_p1_instr_cmd_2(const struct spi_mem_op *op)
{
	uint32_t cmd = 0U;

	UPDATE_REG_FIELD(CDNS_XSPI_CMD_P1_R2_ADDR1, cmd,
			   (op->addr.val >> 8) & 0xFFU);
	UPDATE_REG_FIELD(CDNS_XSPI_CMD_P1_R2_ADDR2, cmd,
			   (op->addr.val >> 16) & 0xFFU);
	UPDATE_REG_FIELD(CDNS_XSPI_CMD_P1_R2_ADDR3, cmd,
			   (op->addr.val >> 24) & 0xFFU);
	UPDATE_REG_FIELD(CDNS_XSPI_CMD_P1_R2_ADDR4, cmd,
			   (op->addr.val >> 32) & 0xFFU);

	return cmd;
}

#define CDNS_XSPI_CMD_FLD_P1_INSTR_CMD_2(op) \
	cdns_xspi_cmd_fld_p1_instr_cmd_2(op)

static inline uint32_t
cdns_xspi_cmd_fld_p1_instr_cmd_3(const struct spi_mem_op *op, int modebytes)
{
	uint32_t cmd = 0U;

	/* addr.val contains at most 6 bytes (48 bits); nbytes must match */
	assert(op->addr.nbytes <= 6U);

	UPDATE_REG_FIELD(CDNS_XSPI_CMD_P1_R3_ADDR5, cmd,
			   (op->addr.val >> 40) & 0xFFU);
	UPDATE_REG_FIELD(CDNS_XSPI_CMD_P1_R3_CMD, cmd, op->cmd.opcode);
	UPDATE_REG_FIELD(MODE_NO_OF_BYTES, cmd, modebytes);
	UPDATE_REG_FIELD(CDNS_XSPI_CMD_P1_R3_NUM_ADDR_BYTES, cmd,
			   op->addr.nbytes);

	return cmd;
}

#define CDNS_XSPI_CMD_FLD_P1_INSTR_CMD_3(op, modebytes) \
	cdns_xspi_cmd_fld_p1_instr_cmd_3((op), (modebytes))

static inline uint32_t
cdns_xspi_cmd_fld_p1_instr_cmd_4(const struct spi_mem_op *op, uint8_t chipsel)
{
	uint32_t cmd = 0U;

	assert(chipsel < CDNS_XSPI_MAX_BANKS);

	UPDATE_REG_FIELD(CDNS_XSPI_CMD_P1_R4_ADDR_IOS, cmd,
			   cdns_xspi_buswidth_to_ios(op->addr.buswidth));
	UPDATE_REG_FIELD(CDNS_XSPI_CMD_P1_R4_CMD_IOS, cmd,
			   cdns_xspi_buswidth_to_ios(op->cmd.buswidth));
	UPDATE_REG_FIELD(CDNS_XSPI_CMD_P1_R4_BANK, cmd, chipsel);

	return cmd;
}

#define CDNS_XSPI_CMD_FLD_P1_INSTR_CMD_4(op, chipsel) \
	cdns_xspi_cmd_fld_p1_instr_cmd_4((op), (chipsel))

static inline uint32_t cdns_xspi_cmd_fld_dseq_cmd_1(void)
{
	uint32_t cmd = 0U;

	UPDATE_REG_FIELD(CDNS_XSPI_CMD_INSTR_TYPE, cmd,
			   CDNS_XSPI_STIG_INSTR_TYPE_DATA_SEQ);

	return cmd;
}

#define CDNS_XSPI_CMD_FLD_DSEQ_CMD_1	cdns_xspi_cmd_fld_dseq_cmd_1()

static inline uint32_t
cdns_xspi_cmd_fld_dseq_cmd_2(const struct spi_mem_op *op)
{
	uint32_t cmd = 0U;

	UPDATE_REG_FIELD(CDNS_XSPI_CMD_DSEQ_R2_DCNT_L, cmd,
			   op->data.nbytes & 0xFFFFU);

	return cmd;
}

#define CDNS_XSPI_CMD_FLD_DSEQ_CMD_2(op) \
	cdns_xspi_cmd_fld_dseq_cmd_2(op)

static inline uint32_t
cdns_xspi_cmd_fld_dseq_cmd_3(const struct spi_mem_op *op, int dummybytes)
{
	uint32_t cmd = 0U;
	uint32_t dummy_cnt;

	/* Verify dummy cycles divide evenly — hardware requires whole cycles */
	assert((dummybytes == 0) || (op->dummy.buswidth == 0U) ||
	       (((uint32_t)dummybytes * 8U) % op->dummy.buswidth) == 0U);

	dummy_cnt = (op->dummy.buswidth != 0U) ?
		     (((uint32_t)dummybytes * 8U) /
		      op->dummy.buswidth) : 0U;

	UPDATE_REG_FIELD(CDNS_XSPI_CMD_DSEQ_R3_DCNT_H, cmd,
			   (op->data.nbytes >> 16) & 0xffffU);
	UPDATE_REG_FIELD(CDNS_XSPI_CMD_DSEQ_R3_NUM_OF_DUMMY, cmd, dummy_cnt);

	return cmd;
}

#define CDNS_XSPI_CMD_FLD_DSEQ_CMD_3(op, dummybytes) \
	cdns_xspi_cmd_fld_dseq_cmd_3((op), (dummybytes))

static inline uint32_t
cdns_xspi_cmd_fld_dseq_cmd_4(const struct spi_mem_op *op, uint8_t chipsel)
{
	uint32_t cmd = 0U;
	uint8_t dir = (op->data.dir == SPI_MEM_DATA_IN) ?
		      CDNS_XSPI_STIG_CMD_DIR_READ :
		      CDNS_XSPI_STIG_CMD_DIR_WRITE;

	assert(chipsel < CDNS_XSPI_MAX_BANKS);

	UPDATE_REG_FIELD(CDNS_XSPI_CMD_DSEQ_R4_BANK, cmd, chipsel);
	UPDATE_REG_FIELD(CDNS_XSPI_CMD_DSEQ_R4_DATA_IOS, cmd,
			   cdns_xspi_buswidth_to_ios(op->data.buswidth));
	UPDATE_REG_FIELD(CDNS_XSPI_CMD_DSEQ_R4_DIR, cmd, dir);

	return cmd;
}

#define CDNS_XSPI_CMD_FLD_DSEQ_CMD_4(op, chipsel) \
	cdns_xspi_cmd_fld_dseq_cmd_4((op), (chipsel))

/*
 * Hardware configuration: the three memory-mapped base addresses of the
 * Cadence xSPI controller. These are set once at init and never change.
 */
struct cdns_xspi_hw {
	uintptr_t iobase;   /* Controller register base */
	uintptr_t auxbase;  /* Auxiliary (PHY) register base */
	uintptr_t sdmabase; /* Slave-DMA data window base */
};

/*
 * Full driver state: hw config + runtime state.
 * Use struct cdns_xspi_hw hw for all register accesses.
 */
struct cdns_xspi {
	struct cdns_xspi_hw hw;

	int cur_cs;
	unsigned int sdmasize;
	bool sdma_error;

	void *in_buffer;
	const void *out_buffer;

	uint8_t hw_num_banks;

	void (*sdma_handler)(struct cdns_xspi *cdns_xspi);
	void (*set_interrupts_handler)(struct cdns_xspi *cdns_xspi, bool enabled);
};

/* Function prototypes */
int cdns_xspi_init(struct cdns_xspi *cdns_xspi,
		   uintptr_t iobase,
		   uintptr_t sdmabase,
		   size_t sdmasize,
		   uintptr_t auxbase);
int cdns_xspi_controller_init(struct cdns_xspi *cdns_xspi);
int cdns_xspi_mem_op_execute(struct cdns_xspi *cdns_xspi,
			     const struct spi_mem_op *op);

#endif /* CADENCE_XSPI_H */
