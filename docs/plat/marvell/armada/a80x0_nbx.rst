Marvell Armada 8040 NBX Platform
================================

The a80x0_nbx platform provides TF-A support for the Free Mobile Nodebox10G
(NBX), a network appliance based on the Marvell Armada 8040 SoC with dual
CP110 companion processors.

Hardware Configuration
----------------------

- SoC: Marvell Armada 8040 (AP806 + 2x CP110)
- CPU: Quad-core ARM Cortex-A72 @ 1.3GHz
- DDR4 memory with ECC support (single channel, 32-bit)
- Dual CP110 companion processors (CP0 and CP1)
- SGMII 1G Ethernet on CP0 lane 5
- I2C buses for peripheral access (CP0: 100kHz, CP1: 400kHz)
- NS16550 UART console at 115200 baud
- eMMC boot via Xenon SDHCI controller

Building
--------

For general build instructions (toolchain, environment variables, build
options), refer to :ref:`TF-A Build Instructions for Marvell Platforms
<build_marvell>`.

.. code:: shell

    make PLAT=a80x0_nbx DEBUG=1 LOG_LEVEL=40 USE_COHERENT_MEM=0 \
        PLAT_RECOVERY_IMAGE_ENABLE=1 all fip mrvl_flash

The final flash image is located at
``build/a80x0_nbx/<debug|release>/flash-image.bin``.

Platform-Specific Features
--------------------------

Ramoops Buffer Preservation (ramoopsies)
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

On ECC-enabled DDR configurations, the memory controller must scrub all
memory during initialization to establish valid parity bits. This would
normally destroy the Linux kernel ramoops buffer containing crash logs
from the previous boot.

The ramoopsies driver intercepts the DDR scrubbing function using the
GNU linker ``--wrap`` feature, saving the 32KB ramoops buffer to SRAM
before scrubbing and restoring it afterward. The driver also handles
pending SError exceptions that occur when reading uninitialized ECC
memory by installing a minimal exception vector that acknowledges and
clears them.

This is implemented using ``--wrap=mv_ddr_mem_scrubbing`` without
modifying the upstream mv-ddr-marvell repository.

Source: ``plat/marvell/armada/a8k/a80x0_nbx/board/ramoopsies.c``

Memory layout:

::

    Ramoops buffer address:   0x3FFF8000
    Ramoops buffer size:      32 KB (0x8000)
    End address:              0x3FFFFFFF (just below 1GB boundary)

Linux kernel configuration:

::

    CONFIG_PSTORE=y
    CONFIG_PSTORE_RAM=y
    CONFIG_PSTORE_CONSOLE=y      # Optional: capture kernel console
    CONFIG_PSTORE_PMSG=y         # Optional: capture userspace messages

Device tree configuration:

.. code:: dts

    / {
        reserved-memory {
            #address-cells = <2>;
            #size-cells = <2>;
            ranges;

            ramoops@3fff8000 {
                compatible = "ramoops";
                reg = <0x0 0x3fff8000 0x0 0x8000>;
                record-size     = <0x2000>;
                console-size    = <0x2000>;
                pmsg-size       = <0x2000>;
                ftrace-size     = <0x0>;
                ecc-size        = <0x0>;
            };
        };
    };

Alternatively, pass via kernel command line:

.. code:: shell

    ramoops.mem_address=0x3fff8000 ramoops.mem_size=0x8000 \
        ramoops.record_size=0x2000

After a kernel crash and reboot, logs are available via pstore:

.. code:: shell

    mount -t pstore pstore /sys/fs/pstore
    cat /sys/fs/pstore/dmesg-ramoops-0

.. note::

   Only cold boot (power cycle) triggers DDR scrubbing; warm reboot
   preserves RAM content without this mechanism.

UART Skip Image Recovery
~~~~~~~~~~~~~~~~~~~~~~~~

The platform uses the ``USER_DEFINED`` skip image detection callback
to implement software-based boot recovery without requiring a dedicated
GPIO button. Users can trigger recovery mode by holding the ``s`` key
during early boot, causing the bootloader to load from the
secondary/recovery image instead of the primary firmware.

Enabled with ``PLAT_RECOVERY_IMAGE_ENABLE=1``.

Usage:

1. Connect serial console (115200 8N1)
2. Power on or reset the board
3. Hold ``s`` key during boot
4. System will skip to recovery/secondary image

DDR Configuration
~~~~~~~~~~~~~~~~~

Memory is configured dynamically via SPD (Serial Presence Detect) EEPROM:

====================  ===========================
SPD I2C Address       0x53
SPD Page Select       0x36
I2C Controller        CP0 I2C (MPP 37/38)
Bus Width             64-bit with ECC
Speed Bin             DDR4-2400T
====================  ===========================

The topology defaults to Micron 8Gbit x8 devices but actual
configuration is read from the DIMM SPD at runtime.

Flashing
--------

Via SPI (from U-Boot):

.. code:: shell

    tftpboot $loadaddr flash-image.bin
    sf probe
    sf erase 0 0x100000
    sf write $loadaddr 0 $filesize

For UART recovery, use the Marvell WTP tools or a compatible UART
download script when the board is in UART boot mode.
See :doc:`uart-booting` for details.

Board Files
-----------

Platform-specific source files are located under
``plat/marvell/armada/a8k/a80x0_nbx/board/``:

- ``dram_port.c`` - DDR topology and SPD configuration
- ``marvell_plat_config.c`` - Memory maps, power management, skip image
- ``phy-porting-layer.h`` - SerDes PHY parameters
- ``ramoopsies.c`` - ECC memory crash log preservation
