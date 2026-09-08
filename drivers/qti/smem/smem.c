/*
 * Copyright (c) 2026, Qualcomm Technologies, Inc. and/or its subsidiaries.
 * SPDX-License-Identifier: BSD-3-Clause
 */

/*
 * Qualcomm Shared Memory (SMEM) - Common Core
 *
 */

#include <stddef.h>
#include <stdint.h>
#include <string.h>

#include "smem_internal.h"
#include "smem_plat.h"

/* -----------------------------------------------------------------------
 * Driver state instance
 * -----------------------------------------------------------------------
 */

/* Single static instance */
static struct qti_smem_info qti_smem_info;

/* -----------------------------------------------------------------------
 * Internal helpers
 * -----------------------------------------------------------------------
 */

static inline uint16_t smem_rd16(const void *ptr)
{
	uint16_t val;

	memcpy(&val, ptr, sizeof(val));
	return val;
}

static inline uint32_t smem_rd32(const void *ptr)
{
	uint32_t val;

	memcpy(&val, ptr, sizeof(val));
	return val;
}

static int smem_validate_toc_entry(const struct qti_smem_toc_entry *e)
{
	uint32_t off = smem_rd32(&e->offset);
	uint32_t sz = smem_rd32(&e->size);
	uint64_t end;

	/* Partition must be large enough to hold the partition header. */
	if (sz < (uint32_t)sizeof(struct qti_smem_partition_header))
		return -EIO;
	/* offset + size must not overflow and must lie within SMEM. */
	end = (uint64_t)off + (uint64_t)sz;
	if ((off < QTI_SMEM_BOOT_INFO_SIZE) ||
		(end > (uint64_t)qti_smem_info.toc_offset))
		return -EIO;
	return 0;
}

static int smem_part_involves_local(const struct qti_smem_toc_entry *e)
{
	uint16_t lh = (uint16_t)qti_smem_info.local_host;
	uint16_t h0 = smem_rd16(&e->host0);
	uint16_t h1 = smem_rd16(&e->host1);

	/* Common partition - accessible to all hosts. */
	if ((h0 == (uint16_t)QTI_SMEM_HOST_COMMON) &&
	    (h1 == (uint16_t)QTI_SMEM_HOST_COMMON)) {
		return 1;
	}

	/* Edge-pair partition: local host is one endpoint. */
	return ((h0 == lh) || (h1 == lh)) ? 1 : 0;
}

static int smem_part_matches(const struct qti_smem_toc_entry *e, uint16_t host)
{
	uint16_t lh = (uint16_t)qti_smem_info.local_host;
	uint16_t rh = host;
	uint16_t h0 = smem_rd16(&e->host0);
	uint16_t h1 = smem_rd16(&e->host1);

	/* Common partition lookup. */
	if (host == QTI_SMEM_HOST_COMMON) {
		return ((h0 == (uint16_t)QTI_SMEM_HOST_COMMON) &&
			(h1 == (uint16_t)QTI_SMEM_HOST_COMMON)) ?
			       1 :
			       0;
	}

	/* Edge-pair: one endpoint must be local, the other must be remote. */
	return (((h0 == lh) && (h1 == rh)) || ((h0 == rh) && (h1 == lh))) ? 1 :
									    0;
}

static int smem_scan_uncached(const uint8_t *base, uint32_t scan_limit,
			      uint16_t item_id, void **addr, size_t *size)
{
	const uint8_t *limit;
	const uint8_t *ptr;
	const struct qti_smem_item_header *ihdr;
	uint32_t item_size;
	uint32_t step = 0U;

	if (scan_limit < (uint32_t)sizeof(struct qti_smem_partition_header))
		return -EIO;

	limit = base + scan_limit;

	for (ptr = base + sizeof(struct qti_smem_partition_header);
	     ptr < limit; ptr += (size_t)step) {
		if ((uintptr_t)limit - (uintptr_t)ptr <
		    sizeof(struct qti_smem_item_header))
			return -EIO;

		ihdr = (const struct qti_smem_item_header *)(const void *)ptr;

		if (smem_rd16(&ihdr->canary) != (uint16_t)QTI_SMEM_ITEM_CANARY)
			return -EIO;

		item_size = smem_rd32(&ihdr->size);

		if (item_size == 0U)
			return -EIO;
		if ((uint32_t)smem_rd16(&ihdr->padding_data) > item_size)
			return -EIO;

		step = (uint32_t)sizeof(struct qti_smem_item_header) +
		       (uint32_t)smem_rd16(&ihdr->padding_header) + item_size;
		if (step < item_size)
			return -EIO;
		if ((uintptr_t)limit - (uintptr_t)ptr < (uintptr_t)step)
			return -EIO;

		if (smem_rd16(&ihdr->item) != item_id)
			continue;

		*addr = (void *)(ptr + sizeof(struct qti_smem_item_header) +
				 (size_t)smem_rd16(&ihdr->padding_header));
		if (size != NULL)
			*size = (size_t)(item_size -
					 (size_t)smem_rd16(&ihdr->padding_data));
		goto out;
	}
	return -ENOENT;
out:
	return 0;
}

static int smem_search_partition(uint32_t part_offset, uint32_t part_size,
				 uint16_t item_id, void **addr, size_t *size)
{
	const struct qti_smem_partition_header *phdr;
	void *va;
	int rc;
	uint32_t offset_free_uncached;
	uint32_t offset_free_cached;
	uint32_t min_uncached;

	/* Validate partition range before any memory access. */
	if (part_size < (uint32_t)sizeof(struct qti_smem_partition_header))
		return -EIO;
	if ((uint64_t)part_offset + (uint64_t)part_size >
	    (uint64_t)qti_smem_info.smem_size) {
		return -EIO;
	}

	va = qti_smem_plat_get_addr(part_offset);
	if (va == NULL)
		return -EPERM;

	phdr = (const struct qti_smem_partition_header *)va;

	/*
	 * Validate static partition fields.
	 * magic and size are written once at partition creation time and
	 * never change, so they can be read without the HW lock.
	 */
	if (smem_rd32(&phdr->magic) != QTI_SMEM_PART_MAGIC) {
		ERROR("smem: bad partition magic 0x%08x\n",
		      (unsigned int)smem_rd32(&phdr->magic));
		return -EIO;
	}
	if (smem_rd32(&phdr->size) != part_size) {
		ERROR("smem: partition size mismatch (header=%u toc=%u)\n",
		      (unsigned int)smem_rd32(&phdr->size),
		      (unsigned int)part_size);
		return -EIO;
	}

	/* Read mutable heap pointers. */
	offset_free_uncached = smem_rd32(&phdr->offset_free_uncached);
	offset_free_cached = smem_rd32(&phdr->offset_free_cached);

	/*
	 * Validate heap pointers:
	 *   offset_free_uncached >= sizeof(partition_header)
	 *   offset_free_uncached <= offset_free_cached
	 *   offset_free_cached   <= part_size
	 */
	min_uncached = (uint32_t)sizeof(struct qti_smem_partition_header);
	if ((offset_free_uncached < min_uncached) ||
	    (offset_free_uncached > offset_free_cached) ||
	    (offset_free_cached > part_size)) {
		ERROR("smem: bad heap pointers uncached=%u cached=%u size=%u\n",
		      (unsigned int)offset_free_uncached,
		      (unsigned int)offset_free_cached,
		      (unsigned int)part_size);
		return -EIO;
	}

	rc = smem_scan_uncached((const uint8_t *)va, offset_free_uncached,
				item_id, addr, size);

	return rc;
}

static int
smem_validate_boot_version(const struct qti_smem_static_header *static_hdr)
{
	uint32_t boot_version;
	uint32_t boot_major;
	uint32_t local_major;

	boot_version =
		smem_rd32(&static_hdr->ver[QTI_SMEM_VERSION_BOOT_OFFSET]);
	boot_major = boot_version & QTI_SMEM_MAJOR_VERSION_MASK;
	local_major = QTI_SMEM_VERSION_ID & QTI_SMEM_MAJOR_VERSION_MASK;

	if (boot_major != local_major) {
		ERROR("smem: BOOT version major mismatch: got 0x%08x expected 0x%08x\n",
		      (unsigned int)boot_version, (unsigned int)local_major);
		return -ENODEV;
	}

	return 0;
}

static int smem_validate_toc_header(const struct qti_smem_toc_header *toc,
				    uint32_t *num_entries_out)
{
	uint32_t num_entries;

	if (smem_rd32(&toc->magic) != QTI_SMEM_TOC_MAGIC) {
		ERROR("smem: bad TOC magic 0x%08x\n",
		      (unsigned int)smem_rd32(&toc->magic));
		return -EIO;
	}

	if (smem_rd32(&toc->version) != QTI_SMEM_TOC_VERSION) {
		ERROR("smem: unsupported TOC version %u\n",
		      (unsigned int)smem_rd32(&toc->version));
		return -ENODEV;
	}

	num_entries = smem_rd32(&toc->num_entries);
	if ((num_entries == 0U) || (num_entries > QTI_SMEM_TOC_MAX_ENTRIES)) {
		ERROR("smem: invalid TOC num_entries %u\n",
		      (unsigned int)num_entries);
		return -EIO;
	}

	/* Entries array must fit within the TOC page. */
	if ((uint32_t)sizeof(struct qti_smem_toc_header) +
		    num_entries * (uint32_t)sizeof(struct qti_smem_toc_entry) >
	    QTI_SMEM_TOC_SIZE) {
		ERROR("smem: TOC entries overflow TOC page\n");
		return -EIO;
	}

	*num_entries_out = num_entries;
	return 0;
}

static int smem_map_partitions(const struct qti_smem_toc_entry *entries,
			       uint32_t num_entries)
{
	uint32_t i;
	int ret;

	for (i = 0U; i < num_entries; i++) {
		const struct qti_smem_toc_entry *e = &entries[i];

		if (smem_validate_toc_entry(e) != 0)
			continue; /* skip malformed entries silently */

		if (smem_part_involves_local(e) == 0)
			continue; /* not relevant partition - do not map */

		ret = qti_smem_plat_map(smem_rd32(&e->offset),
					(size_t)smem_rd32(&e->size),
					QTI_SMEM_PLAT_MAP_RW);
		if (ret != 0) {
			ERROR("smem: failed to map partition host0=%u host1=%u offset=%u: %d\n",
			      (unsigned int)smem_rd16(&e->host0),
			      (unsigned int)smem_rd16(&e->host1),
			      (unsigned int)smem_rd32(&e->offset), ret);
			return ret;
		}

		if ((smem_rd16(&e->host0) == (uint16_t)QTI_SMEM_HOST_COMMON) &&
		    (smem_rd16(&e->host1) == (uint16_t)QTI_SMEM_HOST_COMMON) &&
		    (qti_smem_info.common_part_offset == 0U)) {
			qti_smem_info.common_part_offset =
				smem_rd32(&e->offset);
			qti_smem_info.common_part_size = smem_rd32(&e->size);
		}
	}

	return 0;
}

/* -----------------------------------------------------------------------
 * Public API
 * -----------------------------------------------------------------------
 */

int qti_smem_host_id(uint16_t proc_id, uint16_t proc_num, uint16_t pd_num,
		     uint16_t chiplet, uint16_t *host)
{
	uint16_t encoded;

	if (host == NULL)
		return -EINVAL;

	/* Range checks: each field must fit in its allocated bit-width. */
	if ((uint32_t)proc_id > HOST_PROC_ID_MASK)
		return -EINVAL;
	if ((uint32_t)proc_num > HOST_PROC_NUM_MASK)
		return -EINVAL;
	if ((uint32_t)pd_num > HOST_PD_NUM_MASK)
		return -EINVAL;
	if ((uint32_t)chiplet > HOST_CHIPLET_MASK)
		return -EINVAL;

	encoded = (uint16_t)(((uint16_t)proc_id << HOST_PROC_ID_SHIFT) |
			     ((uint16_t)proc_num << HOST_PROC_NUM_SHIFT) |
			     ((uint16_t)pd_num << HOST_PD_NUM_SHIFT) |
			     ((uint16_t)chiplet << HOST_CHIPLET_SHIFT));

	/*
	 * Reject any encoding that collides with a reserved/special host.
	 * These checks protect against accidental construction of reserved
	 * values even when the individual field ranges permit it.
	 */
	if (encoded == (uint16_t)QTI_SMEM_HOST_COMMON)
		return -EINVAL;
	if (encoded == (uint16_t)QTI_SMEM_HOST_INVALID)
		return -EINVAL;
	if (encoded == (uint16_t)QTI_SMEM_HOST_MULTIHOST)
		return -EINVAL;

	*host = encoded;
	return 0;
}

/*
 * qti_smem_init() - Initialize the SMEM common core.
 *
 * Return: 0 on success, -EALREADY if already initialized, or a negative
 * errno value on failure.
 */
int qti_smem_init(void)
{
	struct qti_smem_plat_info plat_info;
	const struct qti_smem_static_header *static_hdr;
	const struct qti_smem_toc_header *toc;
	const struct qti_smem_toc_entry *entries;
	void *va;
	uint32_t smem_size;
	uint32_t toc_offset;
	uint32_t num_entries;
	int ret;

	if (qti_smem_info.initialized != 0)
		return -EALREADY;

	ret = qti_smem_plat_init(&plat_info);
	if (ret != 0)
		goto out;

	if (plat_info.local_host == (uint16_t)QTI_SMEM_HOST_INVALID) {
		WARN("smem: invalid local_host\n");
		ret = -EINVAL;
		goto out;
	}

	/*
	 * smem_size must hold at least the BOOT info page and the TOC page
	 * without overlap.  The constant sum cannot overflow size_t.
	 */
	if (plat_info.smem_size <
	    (size_t)(QTI_SMEM_BOOT_INFO_SIZE + QTI_SMEM_TOC_SIZE)) {
		WARN("smem: smem_size too small\n");
		ret = -EINVAL;
		goto out;
	}

	/* smem_size must fit in uint32_t (offsets are uint32_t). */
	if (plat_info.smem_size > (size_t)UINT32_MAX) {
		WARN("smem: smem_size exceeds uint32_t\n");
		ret = -EINVAL;
		goto out;
	}

	if (plat_info.max_items == 0U) {
		WARN("smem: max_items is zero\n");
		ret = -EINVAL;
		goto out;
	}

	smem_size = (uint32_t)plat_info.smem_size;
	toc_offset = smem_size - QTI_SMEM_TOC_SIZE;

	ret = qti_smem_plat_map(0U, QTI_SMEM_BOOT_INFO_SIZE,
				QTI_SMEM_PLAT_MAP_RO);
	if (ret != 0) {
		WARN("smem: failed to map BOOT info: %d\n", ret);
		goto out;
	}

	va = qti_smem_plat_get_addr(0U);
	if (va == NULL) {
		WARN("smem: BOOT info not mapped\n");
		ret = -EIO;
		goto out;
	}

	static_hdr = (const struct qti_smem_static_header *)va;

	ret = smem_validate_boot_version(static_hdr);
	if (ret != 0)
		goto out;

	ret = qti_smem_plat_map(toc_offset, QTI_SMEM_TOC_SIZE,
				QTI_SMEM_PLAT_MAP_RO);
	if (ret != 0) {
		WARN("smem: failed to map TOC: %d\n", ret);
		goto out;
	}

	va = qti_smem_plat_get_addr(toc_offset);
	if (va == NULL) {
		WARN("smem: TOC not mapped\n");
		ret = -EIO;
		goto out;
	}

	toc = (const struct qti_smem_toc_header *)va;
	entries = (const struct qti_smem_toc_entry
			   *)((const uint8_t *)va +
			      sizeof(struct qti_smem_toc_header));

	ret = smem_validate_toc_header(toc, &num_entries);
	if (ret != 0)
		goto out;

	/*
	 * Populate qti_smem_info fields needed by smem_validate_toc_entry(),
	 * smem_part_involves_local(), and smem_map_partitions() before
	 * calling them.
	 */
	qti_smem_info.local_host = plat_info.local_host;
	qti_smem_info.max_items = plat_info.max_items;
	qti_smem_info.smem_size = smem_size;
	qti_smem_info.toc_offset = toc_offset;
	qti_smem_info.num_toc_entries = num_entries;

	ret = smem_map_partitions(entries, num_entries);
	if (ret != 0) {
		/* Roll back partially populated state. */
		memset(&qti_smem_info, 0, sizeof(qti_smem_info));
		goto out;
	}

	qti_smem_info.initialized = 1;

out:
	if (ret != 0)
		WARN("Smem initialization error\n");
	return ret;
}

/*
 * qti_smem_lookup() - Look up an existing SMEM item.
 *
 * Fast path (QTI_SMEM_HOST_COMMON):
 *   Uses the cached common_part_offset / common_part_size from
 *   qti_smem_info to call smem_search_partition() directly, bypassing
 *   the TOC walk entirely.
 *
 * Slow path (edge-pair host):
 *   Walks the TOC to find a partition matching the requested host pair,
 *   then calls smem_search_partition() for the first matching entry.
 */
int qti_smem_lookup(uint16_t remote_host, uint16_t item, uint32_t flags,
		    void **item_ptr, size_t *item_size)
{
	const struct qti_smem_toc_entry *entries;
	void *toc_va;
	uint32_t i;
	int rc;

	/* Validate arguments. */
	if (item_ptr == NULL)
		return -EINVAL;
	if (remote_host == QTI_SMEM_HOST_INVALID)
		return -EINVAL;
	if (flags != 0U)
		return -EINVAL;

	if (qti_smem_info.initialized == 0)
		return -ENODEV;

	if ((uint32_t)item >= (uint32_t)qti_smem_info.max_items)
		return -EINVAL;

	/*
	 * Fast path: common partition lookup.
	 *
	 * The common partition offset and size were cached during
	 * qti_smem_init() by smem_map_partitions().  Use them directly
	 * to avoid walking the TOC on every common-partition lookup.
	 *
	 * If no common partition was found during init (common_part_offset
	 * == 0 and common_part_size == 0), continue below to the TOC walk
	 * which will also return -ENOENT.
	 */
	if (remote_host == QTI_SMEM_HOST_COMMON) {
		if ((qti_smem_info.common_part_offset != 0U) ||
		    (qti_smem_info.common_part_size != 0U)) {
			return smem_search_partition(
				qti_smem_info.common_part_offset,
				qti_smem_info.common_part_size, item, item_ptr,
				item_size);
		}
		/* No common partition mapped - item cannot exist. */
		return -ENOENT;
	}

	/*
	 * Slow path: edge-pair partition lookup.
	 *
	 * Walk the TOC looking for a partition matching {local_host, host}.
	 * First matching valid partition wins.
	 */
	toc_va = qti_smem_plat_get_addr(qti_smem_info.toc_offset);
	if (toc_va == NULL)
		return -EIO;

	entries = (const struct qti_smem_toc_entry
			   *)((const uint8_t *)toc_va +
			      sizeof(struct qti_smem_toc_header));

	for (i = 0U; i < qti_smem_info.num_toc_entries; i++) {
		const struct qti_smem_toc_entry *e = &entries[i];

		if (smem_validate_toc_entry(e) != 0)
			continue;

		if (smem_part_matches(e, remote_host) == 0)
			continue;

		rc = smem_search_partition(smem_rd32(&e->offset),
					   smem_rd32(&e->size), item, item_ptr,
					   item_size);
		if (rc != -ENOENT)
			return rc; /* found, or hard error */
	}

	return -ENOENT;
}
