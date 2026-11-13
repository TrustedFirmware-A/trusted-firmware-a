BaseV2 Platform
===============

Some of the features of the BaseV2 platform referenced in TF-A include:

- A System Control Processor running `SCP-firmware`_ for power and system
  management.
- A Runtime Security Engine (RSE).
- GICv4.
- Trusted Board Boot.
- SCMI.
- MHUv3.

The BaseV2 TF-A currently supports only the ``AEMvA`` CPU.

Build Procedure (TF-A only)
---------------------------

-  Obtain `Arm toolchain`_ and set the CROSS_COMPILE environment variable to
   point to the toolchain path.

      export CROSS_COMPILE=<path_to_toolchain>/bin/aarch64-none-elf-

-  Build TF-A:

   .. code:: shell

      make PLAT=basev2 \
      ARM_GPT_SUPPORT=1 \
      BL33=<path_to_uboot.bin> \
      CSS_LOAD_SCP_IMAGES=0 \
      BASE_TARGET_DISTRO=buildroot \
      all fip

   Enable Trusted Board Boot by adding the following options to the make
   command:

   .. code:: shell

      TRUSTED_BOARD_BOOT=1 \
      GENERATE_COT=1 \
      ARM_ROTPK_LOCATION=devel_ecdsa \
      ROT_KEY=plat/arm/board/common/rotpk/arm_rotprivk_ecdsa.pem \
      KEY_ALG=ecdsa

Generating a flash image
-----------------------------

The ``basev2_flashimage`` target builds TF-A, signs the new AP BL1 for
RSE, adds supplied RSE and SCP payloads to the FIP, and generates a GPT flash
image.

Ensure required tools are in your environment:

* Install ``sgdisk``, ``uuidgen`` and the GNU core utilities used by the GPT
  helper (``dd``, ``stat`` and ``mktemp``).

Initialize MCUboot and install TF-A's optional BaseV2 Python dependencies from
the TF-A source directory:

.. code:: shell

   git submodule update --init contrib/mcuboot
   poetry install --no-root --with basev2

Run the packaging command below through ``poetry run`` so that signing and GPT
generation use these Python dependencies.

Prepare these inputs before invoking the target:

* Prebuilts: U-Boot, RSE BL2, signed SCP BL1, encrypted RSE secure firmware, signed
  RSE secure SIC tables and an AP BL1 signing key matching the RSE firmware.
* Supply the signing wrapper ``wrapper/wrapper.py`` and ``macro_parser.py``
  compatible with the supplied RSE firmware. These files come from TF-M's
  ``bl2/ext/mcuboot/scripts`` directory. Keep ``macro_parser.py`` in the parent
  directory of ``wrapper`` so that the wrapper can import it.
* The MCUboot submodule supplies the ``imgtool`` Python package. To use a
  different compatible checkout, set ``BASEV2_MCUBOOT_SCRIPTS`` to its
  ``scripts`` directory. The target adds this directory to ``PYTHONPATH``
  so that the wrapper imports its ``imgtool`` package.

Set ``BASEV2_RSE_BIN_DIR`` to a directory containing these RSE build outputs:

.. list-table::
   :header-rows: 1

   * - File
     - Path override
   * - ``bl2_signed.bin``
     - ``BASEV2_RSE_BL2``
   * - ``signed_scp-css.bin``
     - ``BASEV2_SCP_BL1``
   * - ``tfm_s_encrypted.bin``
     - ``BASEV2_RSE_S``
   * - ``tfm_s_sic_tables_signed.bin``
     - ``BASEV2_RSE_SIC_TABLES``

The override variables take precedence over the corresponding directory paths.
``BASEV2_RSE_BIN_DIR`` is not needed if all four paths are set individually.

AP BL1 signing defaults to image version ``1.5.0`` and security counter ``1``.
Override these with ``BASEV2_BL1_VERSION`` and ``BASEV2_BL1_SECURITY_COUNTER`` when invoking ``make``,
as required by your RSE configuration.

To build from the TF-A source directory, with ``CROSS_COMPILE`` set as above:

.. code:: shell

   rse_signing_scripts=/path/to/signing-scripts

   poetry run make PLAT=basev2 \
       ARM_GPT_SUPPORT=1 \
       BL33=/path/to/u-boot.bin \
       CSS_LOAD_SCP_IMAGES=0 \
       BASE_TARGET_DISTRO=buildroot \
       TRUSTED_BOARD_BOOT=1 GENERATE_COT=1 \
       ARM_ROTPK_LOCATION=devel_ecdsa KEY_ALG=ecdsa \
       ROT_KEY=plat/arm/board/common/rotpk/arm_rotprivk_ecdsa.pem \
       BASEV2_RSE_WRAPPER="$rse_signing_scripts/wrapper/wrapper.py" \
       BASEV2_BL1_SIGN_KEY=/path/to/ap-bl1-signing-key.pem \
       BASEV2_RSE_BIN_DIR=/path/to/rse/build/bin \
       basev2_flashimage

The flash image is written to `build/basev2/release/fip_gpt.bin` by default.
Each FIP partition reserves 12 MiB by default. Override ``BASEV2_FIP_SIZE``
to change this capacity in bytes; it must be a positive multiple of 8192 and
large enough to hold the combined FIP.

Running the model
-----------------

Supply a Linux FIT image, RSE ROM and provisioning message compatible with the
firmware used to generate the flash image. This configures two clusters of four
cores, matching the default BaseV2 TF-A topology.

.. code:: shell

   FVP_BaseV2_2xAEMvA \
       --data "board.dram=/path/to/linux-fit-image@0x20000000" \
       -C board.flashloader0.fname=build/basev2/release/fip_gpt.bin \
       -C "css.sms.rse.rom.raw_image=/path/to/rse-rom.bin" \
       --data "css.sms.rse.sram0=/path/to/rse-provisioning-message.bin@0x400" \
       -C css.sms.rse.sic.SIC_AUTH_ENABLE=1 \
       -C css.sms.rse.sic.SIC_DECRYPT_ENABLE=1 \
       -C css.sms.rse_pl011_uart.uart_enable=1 \
       -C css.terminal_uart_ap.start_port=5000 \
       -C css.terminal_uart1_ap.start_port=5001 \
       -C css.sms.scp.terminal_uart.start_port=5002 \
       -C css.sms.rse_terminal_uart.start_port=5003 \
       -C css.cluster0.NUM_CORES=4 \
       -C css.cluster1.NUM_CORES=4 \
       -C css.cluster0.has_internal_ppu_support=1 \
       -C css.cluster1.has_internal_ppu_support=1 \
       -C css.cluster0.has_arm_v8-4=1 \
       -C css.cluster1.has_arm_v8-4=1 \
       -C css.cluster0.cpu0.MPIDR-override=0x01000000 \
       -C css.cluster0.cpu1.MPIDR-override=0x01000100 \
       -C css.cluster0.cpu2.MPIDR-override=0x01000200 \
       -C css.cluster0.cpu3.MPIDR-override=0x01000300 \
       -C css.cluster1.cpu0.MPIDR-override=0x01010000 \
       -C css.cluster1.cpu1.MPIDR-override=0x01010100 \
       -C css.cluster1.cpu2.MPIDR-override=0x01010200 \
       -C css.cluster1.cpu3.MPIDR-override=0x01010300 \
       -C css.cluster0.gicv3.extended-interrupt-range-support=1 \
       -C css.cluster1.gicv3.extended-interrupt-range-support=1 \
       -C disable_visualisation=true

--------------

*Copyright (c) 2026, Arm Limited. All rights reserved.*

.. _SCP-firmware: https://github.com/ARM-software/SCP-firmware
.. _Arm toolchain: https://developer.arm.com/downloads/-/arm-gnu-toolchain-downloads
