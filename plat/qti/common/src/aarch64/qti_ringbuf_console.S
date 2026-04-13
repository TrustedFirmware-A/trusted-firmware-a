/*
 * Copyright (c) 2026, Qualcomm Technologies, Inc. and/or its subsidiaries.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include <asm_macros.S>
#include <console_macros.S>

#include <platform_def.h>
#include <qti_ringbuf_console.h>

/*
 * Ring-buffer console driver.
 *
 * All log output is written into an in-memory circular buffer
 * (console_ringbuf_t). On Lemans this buffer is a BL31 global object
 * (BSS-backed), while a platform slot is used only to publish the pointer
 * to that buffer for dump tooling discovery. Platforms with dedicated
 * IMEM may place the buffer there instead.
 *
 * Timestamp format
 * ----------------
 * At the start of every new line the driver prepends a fixed-width
 * 16-digit hex representation of cntpct_el0 enclosed in brackets:
 *
 *   [0000ab12cdef5678]INFO: some message\n
 *
 * The timestamp is always exactly 16 hex digits (zero-padded) so that
 * log parsers can rely on a fixed prefix length.
 *
 * Crash-safety
 * ------------
 * The TF-A console framework (crash_console_helpers.S) calls the
 * registered putc callback directly from assembly with no real stack.
 * The callback must therefore:
 *   - not use the stack at all
 *   - only clobber x0, x1, x2, x16, x17  (per the porting guide)
 *
 * Because console_ringbuf_putc needs to call console_ringbuf_putc_internal
 * multiple times (once per timestamp character plus once for the actual
 * character), and each such call clobbers x1/x2/x16/x17, all persistent
 * state is kept in the global ringbuf_putc_stash instead of on the stack.
 * The stash is reloaded from memory after every bl.
 *
 * Thread safety
 * -------------
 * The stash is a single global area, not per-CPU.  This matches the
 * upstream crash_console_reg_stash pattern in crash_console_helpers.S
 * which carries the same caveat.  Concurrent use by multiple CPUs may
 * produce interleaved output but will not corrupt the ring buffer itself
 * (each individual strb to buf[head] is atomic at the byte level).
 */

/* -----------------------------------------------------------------------
 * .data.ringbuf_putc_stash
 *
 * Scratch area used by console_ringbuf_putc to survive across bl calls
 * without touching the stack.
 *
 * Offset  Size  Contents
 * ------  ----  --------
 *  [0]     8    x30  - return address of the console_ringbuf_putc caller
 *  [8]     8    x1   - console_t* passed by the caller
 *  [16]    8    x0   - original character passed by the caller
 *  [24]    8    cntpct_el0 captured at the start of the line
 *  [32]    8    shift - nibble shift value (60 down to 0, step -4)
 * ----------------------------------------------------------------------- */
.section .data.ringbuf_putc_stash
	.align	3
ringbuf_putc_stash:
	.quad	0	/* [0]  x30  (return address) */
	.quad	0	/* [8]  x1   (console_t*)    */
	.quad	0	/* [16] x0   (original char) */
	.quad	0	/* [24] cntpct_el0           */
	.quad	0	/* [32] shift counter        */

/* -----------------------------------------------------------------------
 * .data.ringbuf_start_of_str
 *
 * Single-byte flag that tracks whether the next character to be written
 * is the first character of a new line.
 *
 *   1 (initial value) - next char starts a new line; prepend timestamp
 *   0                 - mid-line; write character directly
 *
 * Set to 0 when a timestamp is prepended; set back to 1 when '\n' is
 * written.
 * ----------------------------------------------------------------------- */
.section .data.ringbuf_start_of_str
	.align	0
ringbuf_start_of_str:
	.byte	1


	.globl	qti_console_ringbuf_register
	.globl	console_ringbuf_putc

/* -----------------------------------------------------------------------
 * int qti_console_ringbuf_register(console_t *console,
 *                                  uintptr_t ringbuf_base_addr)
 *
 * Initialises a console_t struct and registers it with the TF-A multi-
 * console framework.  The ringbuf pointer is stored in console_t.base so
 * that the putc/flush callbacks can retrieve it later.
 *
 * The finish_console_register macro sets the default scope to
 * CONSOLE_FLAG_BOOT | CONSOLE_FLAG_CRASH; the caller (qti_bl31_setup.c)
 * subsequently ORs in CONSOLE_FLAG_RUNTIME.
 *
 * In:  x0 - pointer to an uninitialised console_t struct (must be in
 *            persistent memory, NOT on the stack)
 *      x1 - base address of the console_ringbuf_t block
 * Out: x0 - 1 on success
 * Clobber list: x0, x1, x14
 * ----------------------------------------------------------------------- */
func qti_console_ringbuf_register
	str	x1, [x0, #CONSOLE_T_BASE]	/* console.base = ringbuf* */
	finish_console_register ringbuf putc=1, flush=0
endfunc qti_console_ringbuf_register

/* -----------------------------------------------------------------------
 * void console_ringbuf_putc_internal(int c, console_t *console)
 *
 * Internal helper: writes a single byte into the ring buffer and
 * advances the write head.  When the head reaches buf_size it wraps
 * back to zero and the wrap counter is incremented so that readers can
 * detect that the buffer has overflowed.
 *
 * This function is NOT exported (.globl is intentionally absent) because
 * it is only called from console_ringbuf_putc within this file.
 *
 * In:  w0 - character to store
 *      x1 - pointer to console_t struct
 * Clobber list: x1, x2, x16, x17
 *
 * Register usage:
 *   x1  - console_t* -> ringbuf* (overwritten after first ldr)
 *   w2  - buf_size   (CONSOLE_RINGBUF_T_BUF_SIZE)
 *   w16 - head       (CONSOLE_RINGBUF_T_HEAD)
 *   x17 - &buf[0]    (CONSOLE_RINGBUF_T_LOG_BUF), then wrap counter
 * ----------------------------------------------------------------------- */
func console_ringbuf_putc_internal
	ldr	x1,  [x1, #CONSOLE_T_BASE]		/* x1  = ringbuf*        */
	ldr	w2,  [x1, #CONSOLE_RINGBUF_T_BUF_SIZE]	/* w2  = buf_size        */
	ldr	w16, [x1, #CONSOLE_RINGBUF_T_HEAD]	/* w16 = head            */
	add	x17, x1, #CONSOLE_RINGBUF_T_LOG_BUF	/* x17 = &buf[0]         */
	strb	w0,  [x17, x16]				/* buf[head] = c         */
	add	w16, w16, #1				/* head++                */
	cmp	w16, w2					/* head == buf_size?     */
	b.lt	1f
	mov	w16, wzr				/* head = 0  (wrap)      */
	ldr	w17, [x1, #CONSOLE_RINGBUF_T_WRAP]	/* w17 = wrap            */
	add	w17, w17, #1				/* wrap++                */
	str	w17, [x1, #CONSOLE_RINGBUF_T_WRAP]	/* store wrap            */
1:
	str	w16, [x1, #CONSOLE_RINGBUF_T_HEAD]	/* store head            */
	ret
endfunc console_ringbuf_putc_internal

/* -----------------------------------------------------------------------
 * int console_ringbuf_putc(int c, console_t *console)
 *
 * Registered putc callback for the ringbuf console.  Called by the TF-A
 * multi-console framework for every character destined for this console.
 *
 * Behaviour
 * ---------
 * If start_of_str == 1 (first character of a new line):
 *   1. Clear start_of_str.
 *   2. Capture cntpct_el0.
 *   3. Write '[' to the ring buffer.
 *   4. Write all 16 hex digits of cntpct_el0 (zero-padded, fixed width).
 *   5. Write ']' to the ring buffer.
 * Then (always):
 *   6. Write the original character to the ring buffer.
 *   7. If the character is '\n', set start_of_str = 1.
 *
 * Timestamp format: [<16 hex digits>]  e.g. [0000ab12cdef5678]
 * The timestamp is always exactly 16 digits so log parsers can rely on
 * a fixed-width prefix.
 *
 * In:  w0 - character to store
 *      x1 - pointer to console_t struct
 * Out: w0 - character written (unchanged; putc_internal does not modify w0)
 * Clobber list: x1, x2, x16, x17
 *
 * Crash-safety
 * ------------
 * This function must be safe to call from plat_crash_console_putc
 * (crash_console_helpers.S), which iterates the console list in assembly
 * with no real stack.  Specifically:
 *   - x15 (console list pointer used by the caller) must not be clobbered.
 *   - Only x0, x1, x2, x16, x17 may be clobbered (porting guide (putc)).
 *   - The stack must not be used.
 *
 * Because this function calls console_ringbuf_putc_internal multiple
 * times (which clobbers x1/x2/x16/x17), all state that must survive
 * across those calls is saved to ringbuf_putc_stash (global memory).
 * The stash address is reloaded via adrp/add after every bl because x2
 * is clobbered by the callee.
 * ----------------------------------------------------------------------- */
func console_ringbuf_putc

	/* ------------------------------------------------------------------
	 * Step 1: Save the caller's link register and console_t* to the
	 * stash.  x30 must be preserved because the bl instructions below
	 * will overwrite it, and we cannot use the stack.
	 * ------------------------------------------------------------------ */
	adrp	x2, ringbuf_putc_stash
	add	x2, x2, :lo12:ringbuf_putc_stash
	str	x30, [x2, #0]		/* stash[0]  = caller's x30          */
	str	x1,  [x2, #8]		/* stash[8]  = console_t*            */

	/* ------------------------------------------------------------------
	 * Step 2: Check start_of_str.
	 * If 0 we are mid-line: skip the timestamp and write the character.
	 * ------------------------------------------------------------------ */
	adrp	x16, ringbuf_start_of_str
	ldrb	w17, [x16, :lo12:ringbuf_start_of_str]
	cbz	w17, putc_write_char	/* mid-line -> skip timestamp         */

	/* ------------------------------------------------------------------
	 * Step 3: Timestamp path.
	 * Clear start_of_str, save the original character, capture the
	 * counter, then write '[' followed by 16 hex digits and ']'.
	 * ------------------------------------------------------------------ */

	/* Clear start_of_str so mid-line characters skip this block */
	mov	w17, wzr
	strb	w17, [x16, :lo12:ringbuf_start_of_str]

	/* Save original character; x0 will be reused for timestamp chars */
	str	x0, [x2, #16]		/* stash[16] = original char         */

	/* Capture the system counter.  mrs does not clobber x1/x2. */
	mrs	x16, cntpct_el0
	str	x16, [x2, #24]		/* stash[24] = cntpct_el0            */

	/* Write '['.  x1 still holds console_t* from function entry. */
	mov	w0, #'['
	bl	console_ringbuf_putc_internal
	/* x1, x2, x16, x17 are now clobbered; reload stash address. */

	/* ------------------------------------------------------------------
	 * Step 4: Write all 16 hex digits of cntpct_el0 (fixed-width,
	 * zero-padded).  Shift starts at 60 and decrements by 4 each
	 * iteration, covering nibbles [60:56], [56:52], ..., [3:0].
	 *
	 * Each nibble is converted to its ASCII hex character:
	 *   0-9  ->  '0'-'9'  (add #'0')
	 *   10-15 -> 'a'-'f'  (add #('a'-10))
	 *
	 * The loop always executes exactly 16 times, producing a fixed-
	 * width timestamp regardless of the counter value.
	 * ------------------------------------------------------------------ */
	adrp	x2, ringbuf_putc_stash
	add	x2, x2, :lo12:ringbuf_putc_stash
	mov	x17, #60
	str	x17, [x2, #32]		/* stash[32] = shift (initial = 60)  */

putc_ts_hex_loop:
	/* Load shift and cntpct from stash (both may have been clobbered) */
	ldr	x17, [x2, #32]		/* shift                             */
	ldr	x16, [x2, #24]		/* cntpct_el0                        */

	/* Extract the nibble at the current shift position */
	lsr	x0,  x16, x17		/* x0 = cntpct >> shift              */
	and	w0,  w0,  #0xf		/* w0 = nibble (0..15)               */

	/* Convert nibble to ASCII hex character */
	cmp	w0,  #10
	b.lt	1f
	add	w0,  w0,  #('a' - 10)	/* 10..15 -> 'a'..'f'                 */
	b	2f
1:	add	w0,  w0,  #'0'		/* 0..9   -> '0'..'9'                 */
2:
	/* Write the hex character */
	ldr	x1, [x2, #8]		/* reload console_t* from stash      */
	bl	console_ringbuf_putc_internal
	/* x1, x2, x16, x17 clobbered; reload stash address. */

	adrp	x2, ringbuf_putc_stash
	add	x2, x2, :lo12:ringbuf_putc_stash
	ldr	x17, [x2, #32]		/* reload shift                      */
	cbz	x17, putc_ts_close	/* shift was 0 -> last digit written  */
	sub	x17, x17, #4		/* shift -= 4 (next nibble)          */
	str	x17, [x2, #32]		/* save updated shift                */
	b	putc_ts_hex_loop

	/* ------------------------------------------------------------------
	 * Step 5: Write ']' to close the timestamp bracket.
	 * ------------------------------------------------------------------ */
putc_ts_close:
	ldr	x1, [x2, #8]		/* reload console_t*                 */
	mov	w0, #']'
	bl	console_ringbuf_putc_internal

	/* Restore original character and console_t* from stash */
	adrp	x2, ringbuf_putc_stash
	add	x2, x2, :lo12:ringbuf_putc_stash
	ldr	x1, [x2, #8]		/* console_t*                        */
	ldr	x0, [x2, #16]		/* original char                     */

	/* ------------------------------------------------------------------
	 * Step 6: Write the original character.
	 * Both the timestamp path and the mid-line path converge here.
	 * x0 = character to write, x1 = console_t*
	 * ------------------------------------------------------------------ */
putc_write_char:
	/* Step 7: If '\n', re-arm the timestamp for the next line */
	cmp	w0, #'\n'
	b.ne	putc_do_write
	adrp	x2, ringbuf_start_of_str
	mov	w16, #1
	strb	w16, [x2, :lo12:ringbuf_start_of_str]

putc_do_write:
	/*
	 * Restore the caller link register from the stash, then
	 * tail-call putc_internal to write the character and return
	 * directly to the original caller (no extra stack frame).
	 */
	adrp	x2, ringbuf_putc_stash
	add	x2, x2, :lo12:ringbuf_putc_stash
	ldr	x30, [x2, #0]		/* restore caller x30 */
	b	console_ringbuf_putc_internal	/* tail call */
endfunc console_ringbuf_putc

/* -----------------------------------------------------------------------
 * int console_ringbuf_flush(console_t *console)
 *
 * The ring buffer is in DRAM/IMEM and writes are immediately visible to
 * readers, so there is nothing to flush.
 *
 * In:  x0 - pointer to console_t struct (unused)
 * Out: x0 - 0 (success)
 * Clobber list: x0
 * ----------------------------------------------------------------------- */
func console_ringbuf_flush
	mov	w0, #0
	ret
endfunc console_ringbuf_flush
