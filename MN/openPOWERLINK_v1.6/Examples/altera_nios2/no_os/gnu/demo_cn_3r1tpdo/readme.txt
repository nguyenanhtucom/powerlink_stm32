  (c) SYSTEC electronic GmbH, D-07973 Greiz, August-Bebel-Str. 29
        www.systec-electronic.com
	openPOWERLINK.sourceforge.net


	openPOWERLINK - Extended Demo for EBV DBC3C40 with openMAC
	===========================================================


Contents
---------

- Extended Demo for Controlled Node as standalone program on Nios II CPU.

Performance Data
-----------------

- Minimum cycle length: 400 ?s
- PReq-PRes Latency: 1 ?s
- Process data: 50 bytes input and 50 bytes output
- There are 3 RPDOs and 1 TPDO available. Cross-traffic is enabled.


Requirements
-------------

- Development Board EBV DBC3C40 (Mercury Board)

- Altera Quartus II v9.0 or newer (Web Edition is also possible)

- Altera Nios II Embedded Design Suite v9.0 or newer

- Experiences with this development environment are required

- POWERLINK network with Configuration Manager.
  The corresponding XDD for this node can be found in the subdirectory
  ObjDicts\CiA401_3r1tpdo_CN of the openPOWERLINK main directory.


How to build the binary
------------------------

1. Open "Nios II Command Shell"

2. Go to this subdirectory of openPOWERLINK:

    $ cd Examples\altera_nios2\no_os\gnu\demo_cn_3r1tpdo

3. Run script create-this-app to create the Makefile for
   the demo application and the necessary BSP.
   (This step is only necessary once)

    $ ./create-this-app

4. Run make to build the ELF file after changing the sources.
   (The script create-this-app will do this automatically)

    $ make

5. Rebuild the Makefile for the demo application and the
   BSP, if the Nios II Design was changed inside the SOPC Builder.

    $ ./create-this-app --rebuild


How to run the demo
--------------------

1. Setup the POWERLINK network as described in main readme.txt located in
   openPOWERLINK main directory.

2. Program SOF file with Quartus II Programmer into FPGA.
   It is located in the following subdirectory of openPOWERLINK
   main directory:
   \Examples\altera_nios2\EBV_DBC3C40\design_nios2_openmac\nios_openMac.sof

3. Download the ELF file to the target:

    $ cd Examples\altera_nios2\no_os\gnu\demo_cn_3r1tpdo
    $ make download-elf

4. Enjoy the running POWERLINK network.


How to import the project into Nios II IDE for debugging purposes
------------------------------------------------------------------

Requirement: Steps in the previous section "How to build the binary" are completed.

1. Start the "Nios II IDE"

2. Select menu "File" -> "Import..."

3. Select the import source "Altera Nios II" ->
   "Existing Nios II software build tools project or folder into workspace"

4. Browse to the main directory of openPOWERLINK
   (via the button "Browse...")

5. Press the button "Finish".

6. Select menu "File" -> "Import..."

7. Select the import source "Altera Nios II" ->
   "Existing Nios II software build tools project or folder into workspace"

8. Browse to the subdirectory
   Examples\altera_nios2\no_os\gnu\demo_cn_3r1tpdo
   of openPOWERLINK (via the button "Browse...")

9. Press the button "Finish".

