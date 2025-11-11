Renesas RZ/A3
=============

The RZ/A series is an RTOS-based microprocessor (MPU) combining excellent real-time performance
and fast boot time based on Renesas' proprietary technology and Arm® ecosystem, and
is as user-friendly as Renesas MCUs.

The high-speed performance of the RZ/A MPU can quickly process graphics and high-load applications
especially in the third generation RZ/A3M MPU powered by the 64-bit Arm® Cortex®-A55 CPU
core with a maximum operating frequency of 1 GHz.

Renesas RZ/A3 reference platforms:
----------------------------------

+------------------------------+------------------------------------------------------------------+
| Board                        | Details                                                          |
+==============================+==================================================================+
| EK-RZ/A3M                    | Evaluation Kit for RZ/A3M MPU                                    |
+------------------------------+------------------------------------------------------------------+

Boot Sequence
-------------

RZ/A3 SoCs implements its internal boot ROM; which loads an image
from a non-volatile storage to the on-chip RAM, and jumps over to it.
TF-A provides a special mode, BL2-AT-EL3, which enables BL2 to execute
at EL3 and small enough to fit on-chip RAM.

Once BL2 boots, it initializes DDR before copying the next image
from flash to DDR, then transfer the excution to it which is usually
required at EL3 at the entry point to run a RTOS (such as Zephyr or FreeRTOS).
That is the reason why only BL2 is supported.

BootROM --> BL2 --> RTOS (Zephyr/FreeRTOS)

TF-A Build Procedure
--------------------

The TF-A build options depend on the target board so you will have to
refer to those specific instructions. What follows is customized to
the EK-RZ/A3M used in this port.

.. code:: shell

    make CROSS_COMPILE=aarch64-linux-gnu- PLAT=rza3m_ek_nor all
