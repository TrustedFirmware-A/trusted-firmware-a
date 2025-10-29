/*
 * Copyright (c) 2026, Qualcomm Technologies, Inc. and/or its subsidiaries.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include <assert.h>
#include <inttypes.h>

#include <arch_helpers.h>
#include <common/debug.h>
#include <drivers/arm/gicv3.h>
#include <drivers/qti/qtimer/qtimer.h>
#include <drivers/qti/watchdog/watchdog.h>
#include <lib/mmio.h>
#include <lib/spinlock.h>
#include <lib/utils_def.h>
#include <platform.h>
#include <watchdog_defs.h>

#include <qti_interrupt_svc.h>
#include <qti_plat.h>

#define WDOG_BITE_TIME_MS	22000U
#define WDOG_BARK_TIME_MS	6000U
#define WDOG_FREQ_IN_HZ		32768ULL
#define MPIDR_INVALID		0xDEAD

uint64_t qti_watchdog_pet_ticks __section("tzfw_coherent_mem");

static u_register_t mpidr[PLATFORM_CORE_COUNT] = {
	[0 ... PLATFORM_CORE_COUNT - 1] = MPIDR_INVALID
};

static uint32_t ms_to_wdt_ticks(uint32_t ms)
{
	return (uint32_t)((WDOG_FREQ_IN_HZ * (uint64_t)ms) / 1000ULL);
}

void qti_watchdog_start(uint32_t bark_ms, uint32_t bite_ms)
{
	uint32_t bark, bite;

	bark = ms_to_wdt_ticks(MAX(bark_ms, 0x1U));
	bite = ms_to_wdt_ticks(MAX(bite_ms, 0x1U));
	bark = MIN(bark, 0xFFFFFU);
	bite = MIN(bite, 0xFFFFFU);

	mmio_clrbits_32(WDOG_CTL_ADDR, ENABLE_BIT);
	mmio_clrsetbits_32(WDOG_BARK_ADDR, WDOG_BARK_MASK, bark);
	while ((mmio_read_32(WDOG_BARK_ADDR) & BARK_SYNC_BIT) == 0) {
	}

	mmio_clrsetbits_32(WDOG_BITE_ADDR, WDOG_BITE_MASK, bite);
	while ((mmio_read_32(WDOG_BITE_ADDR) & BITE_SYNC_BIT) == 0) {
	}

	mmio_setbits_32(WDOG_CTL_ADDR, ENABLE_BIT);
	mmio_setbits_32(WDOG_CTL_ADDR, CLK_ENABLE_BIT);
	mmio_write_32(WDOG_RESET_ADDR, RESET);
	dsb();
}

void qti_watchdog_stop(void)
{
	mmio_write_32(WDOG_RESET_ADDR, RESET);
	mmio_clrbits_32(WDOG_CTL_ADDR, ENABLE_BIT);
	dsb();
}

void qti_watchdog_pet(void)
{
	qti_watchdog_pet_ticks = qti_qtimer_get_raw();
	mmio_write_32(WDOG_RESET_ADDR, RESET);
	dsb();
}

static void *bark_handler(uint32_t id, void *ctx)
{
	if (id != WDOG_BARK_INT_ID)
		return NULL;

	qti_watchdog_pet();

	return ctx;
}

void qti_watchdog_set_target(qti_watchdog_cpu_state_t state)
{
	static struct {
		struct {
			uint8_t interruptible;
			uint8_t on;
		} state;
		uint8_t watchdog;
		spinlock_t lock;
	} cpu;
	unsigned int core = plat_my_core_pos();
	unsigned int tgt = UINT32_MAX;

	if (mpidr[core] == MPIDR_INVALID) {
		mpidr[core] = read_mpidr_el1();
	}

	spin_lock(&cpu.lock);
	switch (state) {
	case QTI_WATCHDOG_CPU_WAKEUP:
		cpu.state.interruptible |= (1 << core);
		cpu.state.on |= (1 << core);

		/* wdog currently in sleep, move it to this core */
		if (!(cpu.state.on & (1 << cpu.watchdog))) {
			tgt = core;
		}
		break;
	case QTI_WATCHDOG_CPU_HOTPLUG:
		cpu.state.interruptible &= ~(1 << core);
		if (cpu.watchdog != core) {
			cpu.state.on &= ~(1 << core);
			break;
		}

		/* if more than one cpu online */
		if (cpu.state.on & (cpu.state.on - 1)) {
			cpu.state.on &= ~(1 << core);
			tgt = __builtin_ctz((uintptr_t)cpu.state.on);
		} else {
			assert(cpu.state.interruptible != 0);
			cpu.state.on &= ~(1 << core);
			tgt = __builtin_ctz((uintptr_t)cpu.state.interruptible);
		}
		break;
	case QTI_WATCHDOG_CPU_SUSPEND:
		if (cpu.watchdog != core) {
			cpu.state.on &= ~(1 << core);
			break;
		}

		/* if more than one cpu online */
		if (cpu.state.on & (cpu.state.on - 1)) {
			cpu.state.on &= ~(1 << core);
			tgt = __builtin_ctz((uintptr_t)cpu.state.on);
		} else {
			assert(core == cpu.watchdog);
			cpu.state.on &= ~(1 << core);
		}
		break;
	default:
		break;

	};

	if (tgt != UINT32_MAX) {
		assert(mpidr[tgt] != MPIDR_INVALID);
		cpu.watchdog = tgt;
		gic_set_spi_routing(WDOG_BARK_INT_ID, GICV3_IRM_PE, mpidr[tgt]);
	}
	spin_unlock(&cpu.lock);
}

int qti_watchdog_init(void)
{
	int ret;

	mmio_write_32(WDOG_CTL_ADDR, CHIP_AUTOPET_EN | HW_SLEEP_WAKEUP_EN);
	ret = qti_interrupt_svc_register(WDOG_BARK_INT_ID, bark_handler, NULL);
	if (ret) {
		ERROR("Failure registering watchdog\n");
		return ret;
	}

	qti_watchdog_set_target(QTI_WATCHDOG_CPU_WAKEUP);
	qti_watchdog_start(WDOG_BARK_TIME_MS, WDOG_BITE_TIME_MS);

	return 0;
}

