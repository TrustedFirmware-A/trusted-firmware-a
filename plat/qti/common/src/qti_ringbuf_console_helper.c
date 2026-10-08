/*
 * Copyright (c) 2026, Qualcomm Technologies, Inc. All rights reserved
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include <stddef.h>
#include <string.h>
#include <qti_ringbuf_console.h>

/*
 * Initialize the ring buffer structure and zero the log buffer.
 * Must be called before qti_console_ringbuf_register().
 */
void qti_console_ringbuf_init(struct console_ringbuf *ringbuf)
{
	CASSERT(offsetof(struct console_ringbuf, hdr.version) == CONSOLE_RINGBUF_T_VERSION,
		assert_ringbuf_version_offset);
	CASSERT(offsetof(struct console_ringbuf, hdr.magic) == CONSOLE_RINGBUF_T_MAGIC,
		assert_ringbuf_magic_offset);
	CASSERT(offsetof(struct console_ringbuf, conf.buf_size) == CONSOLE_RINGBUF_T_BUF_SIZE,
		assert_ringbuf_buf_size_offset);
	CASSERT(offsetof(struct console_ringbuf, wo_cbuf.wrap) == CONSOLE_RINGBUF_T_WRAP,
		assert_ringbuf_wrap_offset);
	CASSERT(offsetof(struct console_ringbuf, wo_cbuf.head) == CONSOLE_RINGBUF_T_HEAD,
		assert_ringbuf_head_offset);
	CASSERT(offsetof(struct console_ringbuf, wo_cbuf.buf) == CONSOLE_RINGBUF_T_LOG_BUF,
		assert_ringbuf_log_buf_offset);
	CASSERT((offsetof(struct console_ringbuf, wo_cbuf.buf) + PLAT_QTI_RING_BUF_SIZE)
		<= TFA_BUFFER_REGION_SIZE, assert_ringbuf_size_exceed);
	ringbuf->hdr.version     = DIAG_VERSION;
	ringbuf->hdr.magic       = DIAG_MAGIC_INIT;
	ringbuf->conf.buf_offset = offsetof(struct console_ringbuf, wo_cbuf.buf);
	ringbuf->conf.buf_size   = PLAT_QTI_RING_BUF_SIZE;
	ringbuf->wo_cbuf.wrap    = 0;
	ringbuf->wo_cbuf.head    = 0;
	memset(ringbuf->wo_cbuf.buf, 0, PLAT_QTI_RING_BUF_SIZE);
}
