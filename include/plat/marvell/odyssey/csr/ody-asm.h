/***********************license start***********************************
* Copyright (C) 2021-2026 Marvell.
* SPDX-License-Identifier: BSD-3-Clause
* https://spdx.org/licenses
***********************license end**************************************/

/**
 * @file
 *
 * This is file defines ASM primitives for the executive.

 * <hr>$Revision: 53373 $<hr>
 *
 * @defgroup __asm__ Assembly support
 * @{
 */

/* This header file can be included from a .S file.  Keep non-preprocessor
   things under !__ASSEMBLER__.  */
#ifndef __ASSEMBLER__

/* turn the variable name into a string */
#define __TMP_STR(x) __TMP_STR2(x)
#define __TMP_STR2(x) #x
#define __VASTR(...) #__VA_ARGS__

#define MRS_NV(reg, val) __asm__ ("mrs %x[rd]," #reg : [rd] "=r" (val))
#define MRS(reg, val) __asm__ volatile ("mrs %x[rd]," #reg : [rd] "=r" (val))
#define MSR(reg, val) __asm__ volatile ("msr " #reg ",%x[rd]" : : [rd] "r" (val))

/* Barriers: The ODY uses non-shared memory (not inner or outer shared
    in ARM speak). Inner or Outer shared instructions won't work */
#define MB          __asm__ volatile ("dmb sy"      : : : "memory") /* Full memory barrier, like MIPS SYNC */
#define WMB         __asm__ volatile ("dmb st"      : : : "memory") /* Write memory barrier, like MIPS SYNCW */
#define RMB         __asm__ volatile ("dmb ld"      : : : "memory") /* Read memory barrier, only necessary on OcteonTX2 */
#define DSB         __asm__ volatile ("dsb sy"      : : : "memory") /* Core data synchonization barrier */
#define ISB         __asm__ volatile ("isb"         : : : "memory") /* Instruction synchronization barrier */

/* other useful stuff */
#define WFE         __asm__ volatile ("wfe"         : : : "memory") /* Wait for event */
#define SEV         __asm__ volatile ("sev"         : : : "memory") /* Send global event */

// prefetch helper
#define PREFETCH_PREFX(type, address, offset) \
	__asm__ volatile ("PRFUM " type ", [%[rbase],%[off]]" : : [rbase] "r" (address), [off] "I" (offset))

// normal prefetch
#define PREFETCH(address, offset) PREFETCH_PREFX("PLDL1KEEP", address, offset)

#define ICACHE_INVALIDATE  { __asm__ volatile ("ic iallu" : : ); }    // invalidate entire icache

// Do not push to memory, just invalidate
#define CACHE_I_L2(address) \
	{ __asm__ volatile ("dc  ivac, %0" : : "r" (address)); }

// Push to memory, invalidate
#define CACHE_WBI_L2(address) \
	{ __asm__ volatile ("dc civac, %0" : : "r" (address)); }

// Push to memory, do not invalidate
#define CACHE_WB_L2(address) \
	{ __asm__ volatile ("dc  cvac, %0" : : "r" (address)); }

#define STORE_PAIR(ptr, data1, data2) { __asm__ volatile ("stp %x[d1], %x[d2], [%[b]]" : [mem] "+m" (*(__uint128_t *)ptr) : [b] "r" (ptr), [d1] "r" (data1), [d2] "r" (data2)); }

#endif	/* __ASSEMBLER__ */

/** @} */
