/***********************license start***********************************
* Copyright (C) 2021-2026 Marvell.
* SPDX-License-Identifier: BSD-3-Clause
* https://spdx.org/licenses
***********************license end**************************************/

/**
 * @file
 *
 * Functions for determining which chip you are running on.
 *
 * <hr>$Revision: 49448 $<hr>
 * @addtogroup chips
 * @{
 */


/* Flag bits in top byte. The top byte of MIDR_EL1 is defined
   as ox43, the Cavium implementer code. In this number, bits
   7,5,4 are defined as zero. We use these bits to signal
   that revision numbers should be ignored. It isn't ideal
   that these are in the middle of an already defined field,
   but this keeps the model numbers as 32 bits */
#define __OM_IGNORE_REVISION        0x80000000
#define __OM_IGNORE_MINOR_REVISION  0x20000000
#define __OM_IGNORE_MODEL           0x10000000

/* Variant, or major pass numbers are stored in bits [23:20] */
#define __OM_PASS_SHIFT             8
#define __OM_PASS_MASK              (0x7 << __OM_PASS_SHIFT)

/*
 * Partnum is divied into two fields for our chips. Bits [7:4] are the
 * processor family. Bits [3:0] are the processor ID
 */
#define __OM_PARTNUM_MASK	0xff
#define __OM_FAMILY_MASK	0xf0

/* Minor pass numbers are stored in bits [13:11] */
#define __OM_MINOR_SHIFT	11
#define __OM_MINOR_MASK		(0x7 << __OM_MINOR_SHIFT)

#define __OM_BUILD(partnum, major, minor)	\
	((partnum) |				\
	(((major) - 1) << __OM_PASS_SHIFT) |	\
	((minor) << __OM_MINOR_SHIFT))


/* Per chip definitions */
#define ODYSSEY_PASS1_0         __OM_BUILD(0xBF, 1, 0)
#define ODYSSEY_PASS1_1         __OM_BUILD(0xBF, 1, 1)
#define ODYSSEY                 (ODYSSEY_CN10KA_PASS1_0 | __OM_IGNORE_REVISION)
#define ODYSSEY_PASS1_X         (ODYSSEY_CN10KA_PASS1_0 | __OM_IGNORE_MINOR_REVISION)

#define FUS_CACHE0_ADDRESS      0x87e003001000ll

/**
 * Return non-zero if the chip matech the passed model.
 *
 * @param arg_model One of the ODYSSEY_* constants for chip models and
 *                  passes
 *
 * @return Non-zero if match
 */
static inline int ody_is_model(uint32_t arg_model) __attribute__ ((pure, always_inline));
static inline int ody_is_model(uint32_t arg_model)
{
	uint64_t fuse_val = *(volatile uint64_t *)FUS_CACHE0_ADDRESS;
	uint64_t mask;
	uint32_t my_model = fuse_val & 0xffffffff;

	if (arg_model & __OM_IGNORE_REVISION)
		mask = __OM_PARTNUM_MASK;
	else if (arg_model & __OM_IGNORE_MINOR_REVISION)
		mask = __OM_PARTNUM_MASK | __OM_PASS_MASK;
	else
		mask = __OM_PARTNUM_MASK | __OM_PASS_MASK | __OM_MINOR_MASK;

	return ((arg_model) & mask) == (my_model & mask);
}

/**
 * Return non-zero if the die is in an alternate package. The
 * normal is_model() checks will treat alternate package parts
 * as all the same, where this function can be used to detect
 * them. The return value is the upper two bits of
 * MIO_FUS_DAT2[chip_id]. Most alternate packages use bit 6,
 * which will return 1 here. Parts with a second alternative
 * will use bit 7, which will return 2.
 *
 * @param arg_model One of the constants for chip models and
 *                  passes
 *
 * @return Non-zero if an alternate package
 *         0 = Normal package
 */
extern int ody_is_altpkg(uint32_t arg_model);

#define ODY_MODEL_MAX_SKU 32 /* Maximum length of SKU is 31 plus zero terminator */

/**
 * Return the SKU string for a chip
 *
 * @return Chip's SKU
 */
extern const char *ody_model_get_sku(void);

/** @} */
