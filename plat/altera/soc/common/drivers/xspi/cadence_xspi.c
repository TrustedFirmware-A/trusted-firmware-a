/*
 * Copyright (c) 2026, Altera Corporation. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include <assert.h>
#include <errno.h>
#include <string.h>

#include <arch_helpers.h>
#include <common/debug.h>
#include <drivers/delay_timer.h>
#include <lib/mmio.h>
#include <lib/utils_def.h>

#include "cadence_xspi.h"

#define CDNS_XSPI_TIMEOUT_US		100000

static int cdns_xspi_wait_idle(uintptr_t reg, uint32_t mask, uint32_t value,
			       uint32_t timeout_us)
{
	uint32_t count = 0;
	uint32_t val;

	do {
		val = mmio_read_32(reg);

		if ((val & mask) == value) {
			return 0;
		}

		udelay(1);
		count++;
	} while (count < timeout_us);

	return -ETIMEDOUT;
}

static int cdns_xspi_wait_for_controller_idle(struct cdns_xspi *cdns_xspi)
{
	return cdns_xspi_wait_idle(cdns_xspi->hw.iobase +
				   CDNS_XSPI_CTRL_STATUS_REG,
				   CDNS_XSPI_CTRL_BUSY,
				   0,
				   CDNS_XSPI_TIMEOUT_US);
}

static int cdns_xspi_wait_for_sdma_complete(struct cdns_xspi *cdns_xspi)
{
	int ret;
	uint32_t irq_status;

	ret = cdns_xspi_wait_idle(cdns_xspi->hw.iobase +
				  CDNS_XSPI_INTR_STATUS_REG,
				  CDNS_XSPI_SDMA_TRIGGER,
				  CDNS_XSPI_SDMA_TRIGGER,
				  CDNS_XSPI_TIMEOUT_US);

	if (!ret) {
		/*
		 * Use mmio_write_32 (not mmio_setbits_32) to avoid
		 * unintentionally clearing other W1C status bits.
		 */
		mmio_write_32(cdns_xspi->hw.iobase + CDNS_XSPI_INTR_STATUS_REG,
			      CDNS_XSPI_SDMA_TRIGGER);
	}

	/* Check if SDMA ERROR happened */
	irq_status = mmio_read_32(cdns_xspi->hw.iobase + CDNS_XSPI_INTR_STATUS_REG);
	if (irq_status & CDNS_XSPI_SDMA_ERROR) {
		/*
		 * Need to clear the SDMA_ERROR interrupt
		 * after read, writing 1 to clear the bit.
		 */
		ERROR("XSPI: Slave DMA transaction error\n");

		cdns_xspi->sdma_error = true;
		/* Use mmio_write_32 to clear only SDMA_ERROR (W1C register) */
		mmio_write_32(cdns_xspi->hw.iobase + CDNS_XSPI_INTR_STATUS_REG,
			      CDNS_XSPI_SDMA_ERROR);

		ret = -EIO;
	}

	return ret;
}

static int cdns_xspi_wait_for_cmd_complete(struct cdns_xspi *cdns_xspi)
{
	int ret;
	uint32_t irq_status;

	ret = cdns_xspi_wait_idle(cdns_xspi->hw.iobase +
				  CDNS_XSPI_INTR_STATUS_REG,
				  CDNS_XSPI_STIG_DONE,
				  CDNS_XSPI_STIG_DONE,
				  CDNS_XSPI_TIMEOUT_US);

	irq_status = mmio_read_32(cdns_xspi->hw.iobase + CDNS_XSPI_INTR_STATUS_REG);

	if (!ret) {
		/*
		 * Need to clear the interrupt after read,
		 * writing 1 to clear the bit.
		 */
		mmio_write_32(cdns_xspi->hw.iobase + CDNS_XSPI_INTR_STATUS_REG,
			      irq_status & CDNS_XSPI_STIG_DONE);
	}

	return ret;
}

static void cdns_xspi_trigger_command(struct cdns_xspi *cdns_xspi,
				      uint32_t cmd_regs[6])
{
	mmio_write_32(cdns_xspi->hw.iobase + CDNS_XSPI_CMD_REG_5, cmd_regs[5]);
	mmio_write_32(cdns_xspi->hw.iobase + CDNS_XSPI_CMD_REG_4, cmd_regs[4]);
	mmio_write_32(cdns_xspi->hw.iobase + CDNS_XSPI_CMD_REG_3, cmd_regs[3]);
	mmio_write_32(cdns_xspi->hw.iobase + CDNS_XSPI_CMD_REG_2, cmd_regs[2]);
	mmio_write_32(cdns_xspi->hw.iobase + CDNS_XSPI_CMD_REG_1, cmd_regs[1]);
	mmio_write_32(cdns_xspi->hw.iobase + CDNS_XSPI_CMD_REG_0, cmd_regs[0]);
	/* Ensure all register writes reach the hardware before it acts */
	dsbsy();
}

static int cdns_xspi_check_command_status(struct cdns_xspi *cdns_xspi)
{
	int ret = 0;
	uint32_t cmd_status = mmio_read_32(cdns_xspi->hw.iobase +
					CDNS_XSPI_CMD_STATUS_REG);

	/* Check if the command has completed */
	if (cmd_status & CDNS_XSPI_CMD_STATUS_COMPLETED) {
		/* Check for failure status and report each type of error */
		if ((cmd_status & CDNS_XSPI_CMD_STATUS_FAILED) != 0) {
			if (cmd_status & CDNS_XSPI_CMD_STATUS_DQS_ERROR) {
				ERROR("XSPI: Incorrect DQS pulses detected\n");
			}
			if (cmd_status & CDNS_XSPI_CMD_STATUS_CRC_ERROR) {
				ERROR("XSPI: CRC error received\n");
			}
			if (cmd_status & CDNS_XSPI_CMD_STATUS_BUS_ERROR) {
				ERROR("XSPI: Error resp on system DMA interface\n");
			}
			if (cmd_status & CDNS_XSPI_CMD_STATUS_INV_SEQ_ERROR) {
				ERROR("XSPI: Invalid command sequence detected\n");
			}
			ret = -EPROTO;
		}
	} else {
		/* Command did not complete at all -- fatal error */
		ERROR("XSPI: Fatal error - command not completed\n");
		ret = -EPROTO;
	}

	return ret;
}

static void cdns_xspi_set_interrupts(struct cdns_xspi *cdns_xspi,
				     bool enabled)
{
	uint32_t intr_enable;

	intr_enable = mmio_read_32(cdns_xspi->hw.iobase +
				CDNS_XSPI_INTR_ENABLE_REG);
	if (enabled) {
		intr_enable |= CDNS_XSPI_INTR_MASK;
	} else {
		intr_enable &= ~CDNS_XSPI_INTR_MASK;
	}

	mmio_write_32(cdns_xspi->hw.iobase + CDNS_XSPI_INTR_ENABLE_REG,
		      intr_enable);
}

int cdns_xspi_controller_init(struct cdns_xspi *cdns_xspi)
{
	uint32_t ctrl_ver;
	uint32_t ctrl_features;
	uint16_t hw_magic_num;

	ctrl_ver = mmio_read_32(cdns_xspi->hw.iobase + CDNS_XSPI_CTRL_VERSION_REG);
	hw_magic_num = EXTRACT(CDNS_XSPI_MAGIC_NUM, ctrl_ver);
	if (hw_magic_num != CDNS_XSPI_MAGIC_NUM_VALUE) {
		ERROR("XSPI: Incorrect magic number: %x, expected: %x\n",
		      hw_magic_num, CDNS_XSPI_MAGIC_NUM_VALUE);
		return -ENXIO;
	}

	ctrl_features = mmio_read_32(cdns_xspi->hw.iobase +
				CDNS_XSPI_CTRL_FEATURES_REG);
	cdns_xspi->hw_num_banks = EXTRACT(CDNS_XSPI_NUM_BANKS, ctrl_features);
	cdns_xspi->set_interrupts_handler(cdns_xspi, false);

	VERBOSE("XSPI: Controller initialized (banks: %d)\n",
		cdns_xspi->hw_num_banks);

	return 0;
}

static void cdns_xspi_sdma_handle(struct cdns_xspi *cdns_xspi)
{
	uint32_t sdma_size, sdma_trd_info;
	uint8_t sdma_dir;
	uint8_t *in_buf;
	const uint8_t *out_buf;

	sdma_size = mmio_read_32(cdns_xspi->hw.iobase + CDNS_XSPI_SDMA_SIZE_REG);

	/* Validate sdma_size to prevent buffer overread/overwrite */
	if (sdma_size == 0U || sdma_size > cdns_xspi->sdmasize) {
		ERROR("XSPI: Invalid SDMA size %u (max %u)\n",
		      sdma_size, cdns_xspi->sdmasize);
		return;
	}

	sdma_trd_info = mmio_read_32(cdns_xspi->hw.iobase +
				CDNS_XSPI_SDMA_TRD_INFO_REG);
	sdma_dir = EXTRACT(CDNS_XSPI_SDMA_DIR, sdma_trd_info);

	in_buf = (uint8_t *)cdns_xspi->in_buffer;
	out_buf = (const uint8_t *)cdns_xspi->out_buffer;

	switch (sdma_dir) {
	case CDNS_XSPI_SDMA_DIR_READ:
		if (in_buf) {
			for (uint32_t i = 0; i < sdma_size; i++) {
				in_buf[i] = mmio_read_8(cdns_xspi->hw.sdmabase + i);
			}
		}
		break;

	case CDNS_XSPI_SDMA_DIR_WRITE:
		if (out_buf) {
			for (uint32_t i = 0; i < sdma_size; i++) {
				mmio_write_8(cdns_xspi->hw.sdmabase + i, out_buf[i]);
			}
		}
		break;
	}
}

static int cdns_xspi_send_stig_command(struct cdns_xspi *cdns_xspi,
				       const struct spi_mem_op *op,
				       bool data_phase)
{
	uint32_t cmd_regs[6] = {0};
	uint32_t ctrl_cfg;
	uint32_t ctrl_cfg_saved;
	int ret = 0;
	int dummybytes = op->dummy.nbytes;

	ret = cdns_xspi_wait_for_controller_idle(cdns_xspi);
	if (ret < 0) {
		return ret;
	}

	/* Save work mode and switch to STIG; restore on exit */
	ctrl_cfg_saved = mmio_read_32(cdns_xspi->hw.iobase + CDNS_XSPI_CTRL_CONFIG_REG);
	ctrl_cfg = ctrl_cfg_saved;
	UPDATE_REG_FIELD(CDNS_XSPI_CTRL_WORK_MODE, ctrl_cfg,
			   CDNS_XSPI_WORK_MODE_STIG);
	mmio_write_32(cdns_xspi->hw.iobase + CDNS_XSPI_CTRL_CONFIG_REG,
		      ctrl_cfg);

	cdns_xspi->set_interrupts_handler(cdns_xspi, true);
	cdns_xspi->sdma_error = false;

	cmd_regs[1] = CDNS_XSPI_CMD_FLD_P1_INSTR_CMD_1(op, data_phase);
	cmd_regs[2] = CDNS_XSPI_CMD_FLD_P1_INSTR_CMD_2(op);
	if (dummybytes != 0) {
		cmd_regs[3] = CDNS_XSPI_CMD_FLD_P1_INSTR_CMD_3(op, 1);
		dummybytes--;
	} else {
		cmd_regs[3] = CDNS_XSPI_CMD_FLD_P1_INSTR_CMD_3(op, 0);
	}
	cmd_regs[4] = CDNS_XSPI_CMD_FLD_P1_INSTR_CMD_4(op, cdns_xspi->cur_cs);

	cdns_xspi_trigger_command(cdns_xspi, cmd_regs);

	if (data_phase) {
		cmd_regs[0] = CDNS_XSPI_STIG_DONE_FLAG;
		cmd_regs[1] = CDNS_XSPI_CMD_FLD_DSEQ_CMD_1;
		cmd_regs[2] = CDNS_XSPI_CMD_FLD_DSEQ_CMD_2(op);
		cmd_regs[3] = CDNS_XSPI_CMD_FLD_DSEQ_CMD_3(op, dummybytes);
		cmd_regs[4] = CDNS_XSPI_CMD_FLD_DSEQ_CMD_4(op, cdns_xspi->cur_cs);

		cdns_xspi->in_buffer = op->data.buf.in;
		cdns_xspi->out_buffer = op->data.buf.out;

		cdns_xspi_trigger_command(cdns_xspi, cmd_regs);

		ret = cdns_xspi_wait_for_sdma_complete(cdns_xspi);
		if (ret < 0) {
			cdns_xspi->set_interrupts_handler(cdns_xspi, false);
			mmio_write_32(cdns_xspi->hw.iobase + CDNS_XSPI_CTRL_CONFIG_REG,
				      ctrl_cfg_saved);
			return ret;
		}
		cdns_xspi_sdma_handle(cdns_xspi);
	}

	ret = cdns_xspi_wait_for_cmd_complete(cdns_xspi);
	if (ret < 0) {
		cdns_xspi->set_interrupts_handler(cdns_xspi, false);
		mmio_write_32(cdns_xspi->hw.iobase + CDNS_XSPI_CTRL_CONFIG_REG,
			      ctrl_cfg_saved);
		return ret;
	}

	ret = cdns_xspi_check_command_status(cdns_xspi);

	cdns_xspi->set_interrupts_handler(cdns_xspi, false);
	mmio_write_32(cdns_xspi->hw.iobase + CDNS_XSPI_CTRL_CONFIG_REG, ctrl_cfg_saved);

	return ret;
}

int cdns_xspi_mem_op_execute(struct cdns_xspi *cdns_xspi,
			     const struct spi_mem_op *op)
{
	spi_mem_data_dir dir;

	assert(cdns_xspi != NULL);
	assert(op != NULL);

	VERBOSE("XSPI: Executing memory operation (opcode: 0x%x, addr: 0x%lx, size: %u)\n",
		op->cmd.opcode, op->addr.val, op->data.nbytes);

	dir = op->data.dir;

	return cdns_xspi_send_stig_command(cdns_xspi, op,
					(dir != SPI_MEM_NO_DATA));
}

static void cdns_xspi_print_phy_config(struct cdns_xspi *cdns_xspi)
{
	INFO("XSPI: PHY configuration\n");
	INFO("  xspi_dll_phy_ctrl: 0x%08x\n",
	     mmio_read_32(cdns_xspi->hw.iobase + CDNS_XSPI_DLL_PHY_CTRL));
	INFO("  phy_dq_timing: 0x%08x\n",
	     mmio_read_32(cdns_xspi->hw.auxbase + CDNS_XSPI_CCP_PHY_DQ_TIMING));
	INFO("  phy_dqs_timing: 0x%08x\n",
	     mmio_read_32(cdns_xspi->hw.auxbase + CDNS_XSPI_CCP_PHY_DQS_TIMING));
	INFO("  phy_gate_loopback_ctrl: 0x%08x\n",
	     mmio_read_32(cdns_xspi->hw.auxbase +
			  CDNS_XSPI_CCP_PHY_GATE_LPBCK_CTRL));
	INFO("  phy_dll_slave_ctrl: 0x%08x\n",
	     mmio_read_32(cdns_xspi->hw.auxbase +
			  CDNS_XSPI_CCP_PHY_DLL_SLAVE_CTRL));
}

int cdns_xspi_init(struct cdns_xspi *cdns_xspi,
		   uintptr_t iobase,
		   uintptr_t sdmabase,
		   size_t sdmasize,
		   uintptr_t auxbase)
{
	int ret;

	assert(cdns_xspi != NULL);

	VERBOSE("XSPI: Initializing Cadence xSPI driver\n");

	memset(cdns_xspi, 0, sizeof(*cdns_xspi));

	cdns_xspi->hw.iobase = iobase;
	cdns_xspi->hw.sdmabase = sdmabase;
	cdns_xspi->sdmasize = sdmasize;
	cdns_xspi->hw.auxbase = auxbase;
	cdns_xspi->cur_cs = 0;

	cdns_xspi->sdma_handler = &cdns_xspi_sdma_handle;
	cdns_xspi->set_interrupts_handler = &cdns_xspi_set_interrupts;

	cdns_xspi_print_phy_config(cdns_xspi);

	ret = cdns_xspi_controller_init(cdns_xspi);
	if (ret) {
		ERROR("XSPI: Failed to initialize controller\n");
		return ret;
	}

	VERBOSE("XSPI: Driver initialized successfully\n");
	VERBOSE("XSPI: IO Base: 0x%lx, SDMA Base: 0x%lx, AUX Base: 0x%lx\n",
		iobase, sdmabase, auxbase);

	return 0;
}
