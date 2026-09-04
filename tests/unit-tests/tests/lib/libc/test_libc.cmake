#
# Copyright (c) 2019-2025, Arm Limited. All rights reserved.
#
# SPDX-License-Identifier: BSD-3-Clause
#

include(UnitTest)

unit_test_add_suite(
	NAME memcmp
	SOURCES
		${UNIT_TEST_PROJECT_PATH}/lib/libc/memcmp.c
		${CMAKE_CURRENT_LIST_DIR}/test_memcmp.cpp
	INCLUDE_DIRECTORIES
		${PROJECT_SOURCE_DIR}/mocks/include/
		${PROJECT_SOURCE_DIR}/mocks/include/lib/libc/
)

target_compile_options(memcmp PRIVATE -fno-builtin-memcmp)

unit_test_add_suite(
	NAME memcpy
	SOURCES
		${UNIT_TEST_PROJECT_PATH}/lib/libc/memcpy.c
		${CMAKE_CURRENT_LIST_DIR}/test_memcpy.cpp
	INCLUDE_DIRECTORIES
		${PROJECT_SOURCE_DIR}/mocks/include/
		${PROJECT_SOURCE_DIR}/mocks/include/lib/libc/
)

target_compile_options(memcpy PRIVATE -fno-builtin-memcpy)

unit_test_add_suite(
	NAME memset
	SOURCES
		${UNIT_TEST_PROJECT_PATH}/lib/libc/memset.c
		${CMAKE_CURRENT_LIST_DIR}/test_memset.cpp
	INCLUDE_DIRECTORIES
		${PROJECT_SOURCE_DIR}/mocks/include/
		${PROJECT_SOURCE_DIR}/mocks/include/lib/libc/
)

target_compile_options(memcpy PRIVATE -fno-builtin-memset)

unit_test_add_suite(
	NAME snprintf
	SOURCES
		${UNIT_TEST_PROJECT_PATH}/lib/libc/snprintf.c
		${CMAKE_CURRENT_LIST_DIR}/test_snprintf.cpp
	INCLUDE_DIRECTORIES
		${PROJECT_SOURCE_DIR}/mocks/include/
		${PROJECT_SOURCE_DIR}/mocks/include/lib/libc/
		${PROJECT_SOURCE_DIR}/mocks/include/plat/host/include/
		${UNIT_TEST_PROJECT_PATH}/include/
		${UNIT_TEST_PROJECT_PATH}/include/lib/libc/aarch64/
)

target_compile_options(memcpy PRIVATE -fno-builtin-snprintf)

unit_test_add_suite(
	NAME memmove
	SOURCES
		${UNIT_TEST_PROJECT_PATH}/lib/libc/memmove.c
		${CMAKE_CURRENT_LIST_DIR}/test_memmove.cpp
	INCLUDE_DIRECTORIES
		${PROJECT_SOURCE_DIR}/mocks/include/
		${PROJECT_SOURCE_DIR}/mocks/include/lib/libc/
)

target_compile_options(memmove PRIVATE -fno-builtin-memmove)
# Need to intercept memcpy calls for some test-cases
set_property(SOURCE ${UNIT_TEST_PROJECT_PATH}/lib/libc/memmove.c APPEND
	PROPERTY COMPILE_DEFINITIONS memcpy=mock_memcpy)

unit_test_add_suite(
	NAME memrchr
	SOURCES
		${UNIT_TEST_PROJECT_PATH}/lib/libc/memrchr.c
		${CMAKE_CURRENT_LIST_DIR}/test_memrchr.cpp
)

target_compile_options(memrchr PRIVATE
	-fno-builtin-memrchr
	$<$<COMPILE_LANGUAGE:C>:-pedantic-errors>
)

# Strict C99 rejects arithmetic on void pointers. Keep extensions disabled and
# promote extension diagnostics to errors so this suite catches a regression
# to computing the initial address before converting src to a byte pointer.
set_target_properties(memrchr PROPERTIES
	C_STANDARD 99
	C_STANDARD_REQUIRED TRUE
	C_EXTENSIONS FALSE
)

if(CMAKE_C_COMPILER_ID MATCHES "Clang|GNU")
	# A return-value check alone cannot observe an invalid pointer formed for a
	# zero-length search. Pointer-overflow instrumentation makes that undefined
	# intermediate computation fail the regression test at runtime.
	target_compile_options(memrchr PRIVATE
		$<$<COMPILE_LANGUAGE:C>:-fsanitize=pointer-overflow>
		$<$<COMPILE_LANGUAGE:C>:-fno-sanitize-recover=pointer-overflow>
	)
	set_property(TARGET memrchr APPEND_STRING PROPERTY LINK_FLAGS
		" -fsanitize=pointer-overflow")
endif()
