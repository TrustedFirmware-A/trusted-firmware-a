/*
 * Copyright (C) 2017-2026 Freebox SAS
 *
 * SPDX-License-Identifier: BSD-3-Clause
 *
 * ramoopsies - Save/restore ramoops buffer during DDR ECC initialization
 *
 * When booting with ECC-enabled DDR and uninitialized memory (cold boot),
 * the memory controller will raise SError exceptions due to parity errors.
 * This module saves the ramoops buffer (kernel crash logs) before DDR
 * scrubbing and restores it afterward, also handling any pending SError.
 *
 * This uses the linker --wrap feature to intercept mv_ddr_mem_scrubbing()
 * without modifying the upstream mv-ddr-marvell repository.
 *
 * Original author: Nicolas Schichan <nschichan@freebox.fr>
 */

#include <string.h>

#include <arch_helpers.h>

/*
 * ISR_EL1.A bit indicates pending SError
 */
#define ISR_A_BIT	(1U << ISR_A_SHIFT)

/*
 * ARMv8 exception vectors must be aligned on a 2048 byte boundary.
 * Each vector entry has space for 32 instructions (128 bytes) for
 * sync aborts, IRQs, FIQs and SErrors.
 *
 * We only need to handle SError - use ERET (0xd69f03e0) to return.
 * All other vectors are filled with zeros (invalid instruction trap).
 *
 * Vector table layout (4 exception levels x 4 exception types x 32 insns):
 *   - Offset 0x000: Current EL with SP_EL0 (Sync, IRQ, FIQ, SError)
 *   - Offset 0x200: Current EL with SP_ELx (Sync, IRQ, FIQ, SError)
 *   - Offset 0x400: Lower EL AArch64 (Sync, IRQ, FIQ, SError)
 *   - Offset 0x600: Lower EL AArch32 (Sync, IRQ, FIQ, SError)
 *
 * SError vectors are at offsets 0x180, 0x380, 0x580, 0x780 within the table.
 * We use designated initializers to place ERET at these SError entry points.
 */
#define ARMV8_ERET	0xd69f03e0U

/* SError vector offsets in uint32_t units (byte offset / 4) */
#define SERROR_EL0_IDX		(0x180 / 4)	/* Current EL SP_EL0 SError */
#define SERROR_ELX_IDX		(0x380 / 4)	/* Current EL SP_ELx SError */
#define SERROR_AARCH64_IDX	(0x580 / 4)	/* Lower EL AArch64 SError */
#define SERROR_AARCH32_IDX	(0x780 / 4)	/* Lower EL AArch32 SError */

/*
 * Custom exception vector table - only handles SError with ERET
 * Total size: 2048 bytes (512 x uint32_t)
 */
static uint32_t vectors[512] __aligned(2048) = {
	[SERROR_EL0_IDX]     = ARMV8_ERET,
	[SERROR_ELX_IDX]     = ARMV8_ERET,
	[SERROR_AARCH64_IDX] = ARMV8_ERET,
	[SERROR_AARCH32_IDX] = ARMV8_ERET,
};

/*
 * clear_serror - Clear a raised SError exception
 *
 * There is no architecturally defined way of clearing an SError exception,
 * so we need to actually take the exception. This is done by:
 *
 * 1. Installing a custom vector table at VBAR_EL3
 * 2. Routing SError to EL3 via SCR_EL3.EA
 * 3. Unmasking SError exceptions
 * 4. The custom vector handler just executes ERET
 * 5. Restoring original VBAR and SCR
 */
static void clear_serror(void)
{
	u_register_t isr = read_isr_el1();
	u_register_t old_vbar = read_vbar_el3();
	u_register_t old_scr = read_scr_el3();

	if ((isr & ISR_A_BIT) == 0U)
		/* No pending SError, nothing to do */
		return;

	/* Install custom exception vector */
	write_vbar_el3((u_register_t)vectors);

	/* Route SError exceptions to EL3 */
	write_scr_el3(read_scr_el3() | SCR_EA_BIT);

	/* Ensure changes are visible */
	isb();

	/* Unmask and wait for SError to clear */
	enable_serror();
	do {
		isr = read_isr_el1();
	} while ((isr & ISR_A_BIT) != 0U);
	disable_serror();

	/* Restore original SCR and VBAR */
	write_vbar_el3(old_vbar);
	write_scr_el3(old_scr);
	isb();
}

/*
 * Ramoops buffer location and size
 * This is where Linux stores kernel crash/oops logs
 */
#define RAMOOPSIES_ADDR	((void *)0x3fff8000ULL)
#define RAMOOPSIES_SIZE	(32U << 10)	/* 32KB */

/*
 * Backup area in SRAM during BLE execution
 */
static uint8_t ramoopsies_backup[RAMOOPSIES_SIZE];

/*
 * Reference to the real mv_ddr_mem_scrubbing() provided by --wrap
 */
extern void __real_mv_ddr_mem_scrubbing(void);

/*
 * __wrap_mv_ddr_mem_scrubbing - Wrapper for DDR memory scrubbing
 *
 * This function is called instead of mv_ddr_mem_scrubbing() due to
 * the --wrap linker option. It:
 * 1. Saves the ramoops buffer and clears any pending SError
 * 2. Calls the real scrubbing function
 * 3. Restores the ramoops buffer
 */
void __wrap_mv_ddr_mem_scrubbing(void)
{
	/* Save ramoops buffer before scrubbing clears it */
	memcpy(ramoopsies_backup, RAMOOPSIES_ADDR, RAMOOPSIES_SIZE);

	/*
	 * When booting with uninitialized DDR (cold boot with ECC enabled),
	 * the memory controller will raise an SError due to ECC parity
	 * errors. Clear it so we can continue.
	 */
	clear_serror();

	/* Call the real scrubbing function */
	__real_mv_ddr_mem_scrubbing();

	/* Restore the ramoops buffer */
	memcpy(RAMOOPSIES_ADDR, ramoopsies_backup, RAMOOPSIES_SIZE);
}
