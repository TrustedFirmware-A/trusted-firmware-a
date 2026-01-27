/***********************license start***********************************
* Copyright (C) 2021-2026 Marvell.
* SPDX-License-Identifier: BSD-3-Clause
* https://spdx.org/licenses
***********************license end**************************************/

/**
 * @file
 *
 * Functions and macros to control what parts of the ODY are linked in
 *
 * <hr>$Revision: 49448 $<hr>
 * @defgroup require Component linking control
 * @{
 */

/**
 * Optional parts of the ODY code are pulled in by adding
 * REQUIRE() lines to the function ody_require_depends().
 * Component symbols are defined as weak so that they are not
 * linked in unless a REQUIRE() pulls them in.
 */
#define REQUIRE(component)                                  \
do {                                                          \
	extern char __ody_require_symbol_##component;           \
	ody_warn_if(__ody_require_symbol_##component,           \
	    "Require of %s failed\n", #component);              \
} while (0)

/**
 * The following macro defines a special symbol in a C file to
 * define it as a require component. Referencing this symbol
 * causes all objects defined in the C file to be pulled in. This
 * symbol should only be referenced by using the REQUIRE()
 * macro in the function ody_require_depends().
 */
#define REQUIRE_DEFINE(component)           \
	char __ody_require_symbol_##component;      \
	char __ody_is_required_symbol_##component

/**
 * Return if a component has been required. Useful for if
 * statements around referencing of weak symbols.
 */
#define IS_REQUIRED(component)                                          \
({int is_required;                                                      \
do {                                                                      \
	extern char __ody_is_required_symbol_##component __attribute__((weak));\
	is_required = (&__ody_is_required_symbol_##component != NULL);      \
} while (0);                                                            \
is_required; })


/**
 * The require macros use weak symbols to control if components
 * are linked in. All directly referenced symbols in a component
 * must be defined a weak. This causes the component to only be
 * pulled in by the linker if the symbol defined by
 * REQUIRE_DEFINE is used.
 */
#define WEAK __attribute__((weak))

/**
 * This function is not defined by the ODY libraries. It must be
 * defined by all ODY applications. It should be empty except for
 * containing REQUIRE() lines. The ody-init code has a strong
 * reference to ody_requires_depends() which then contains strong
 * references to all needed components.
 */
extern void __ody_require_depends(void);

/** @} */
