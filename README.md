# Pervasive Displays Library Suite - Driver for screens with wide temperature and embedded fast update

[![Release](https://img.shields.io/github/v/release/pervasivedisplays/Pervasive_Wide_Small)](https://github.com/pervasivedisplays/Pervasive_Wide_Small/releases) [![Codacy Badge](https://app.codacy.com/project/badge/Grade/9f09780839f7479285cb931ffe4954d7)](https://app.codacy.com/gh/pervasivedisplays/Pervasive_Wide_Small/dashboard?utm_source=gh&utm_medium=referral&utm_content=&utm_campaign=Badge_grade) ![Arduino lint](https://github.com/pervasivedisplays/Pervasive_Wide_Small/actions/workflows/main.yml/badge.svg) [![GitHub issues](https://img.shields.io/github/issues/pervasivedisplays/Pervasive_Wide_Small)](https://github.com/pervasivedisplays/Pervasive_Wide_Small/issues)

[![](https://img.shields.io/badge/-Knowledge_Base-orange)](https://docs.pervasivedisplays.com/knowledge/)

The driver is specifically designed for the [Pervasive Displays](https://www.pervasivedisplays.com) e-paper screens, extension boards and evaluation kits.

![](https://pdls.pervasivedisplays.com/userguide/img/Logo_PDI_text_320.png)

The **Pervasive_Wide_Small** supports the screens

* Pervasive Displays iTC monochrome [with wide temperature and embedded fast update](https://www.pervasivedisplays.com/products-e-ink-display/?_sft_etc_itc=pu&_sft_temperature_range=m15c-to-p60c&_sft_product_colour=black-white) (film `K`) with sizes of 1.52, 1.54, 2.06, 2.13, 2.66, 2.71, 2.90, 3.70, 4.17" and 4.37"; 

the extension boards

* Pervasive Displays [EPD Extension Kit Gen 3 (EXT3 or EXT3.1)](https://www.pervasivedisplays.com/product/epd-extension-kit-gen-3-EXT3/),
* Pervasive Displays [EPD Extension Kit Gen 4 (EXT4)](https://www.pervasivedisplays.com/product/epd-extension-kit-gen-4-EXT4/) and EXT4-to-Nano adapter boards;

the development kits

* [EPD Pico Kit (EPDK)](https://www.pervasivedisplays.com/product/epd-pico-kit-epdk/), which includes a Raspberry Pi Pico RP2040, an EXT3-1 extension board and a 2.66" monochrome panel,
* [EPD Pico Kit Touch (EPDK-271-Touch)](https://www.pervasivedisplays.com/product/touch-expansion-board-ext3-touch/#tab-3), which includes an EXT3.1 extension board, an EXT3-Touch expansion board, and a 2.71"-Touch monochrome panel with embedded fast update and capacitive touch,
* [E-Paper Development Kit for Matter (EPDK-Matter)](https://www.pervasivedisplays.com), which includes a Pervasive Displays [EPD Extension Kit Gen 4 (EXT4)](https://www.pervasivedisplays.com/product/epd-extension-kit-gen-3-EXT3/) and a Pervasive Displays EXT4-to-Nano adapter boards, a Pervasive Displays [2.9″ 384x168 E-ink monochrome high-definition](https://www.pervasivedisplays.com/product/2-9-e-ink-displays/) with embedded fast update and wide temperature display, an [Arduino Nano Matter](https://store.arduino.cc/pages/nano-matter) board based on [Silicon Labs MGM240S](https://www.silabs.com/wireless/zigbee/efr32mg24-series-2-modules).

## Features

The driver library can be used stand-alone or with the [Pervasive Displays Library Suite](https://pdls.pervasivedisplays.com/userguide/index.html). 

**Note**: This library requires [PDLS Common](https://github.com/PervasiveDisplays/PDLS_Common).

## Documentation

* [Application Note for 1.52" of wide temperature EPDs](https://www.pervasivedisplays.com/wp-content/uploads/2023/12/ApplicationNote_1.52-inch_wide-Temperature_EPD_v01_20231225_A.pdf)
* [Application Note for small sizes of wide temperature EPDs](https://www.pervasivedisplays.com/wp-content/uploads/2023/02/ApplicationNote_Small_Size_wide-Temperature_EPD_v03_20231031_B.pdf)
* [Pervasive Displays Technical Wiki](https://docs.pervasivedisplays.com/) 
* [Pervasive Displays, Inc. (龍亭新技股份有限公司)](https://www.pervasivedisplays.com/)
* [Product line](https://www.pervasivedisplays.com/products/)

## Support

* Please refer to the [Support Service](https://www.pervasivedisplays.com/technical-support/).

## Installation

Software

* [Arduino IDE](https://www.arduino.cc/en/software) or [Arduino CLI](https://arduino.github.io/arduino-cli/)
* [Installing Additional Arduino Libraries](https://www.arduino.cc/en/guide/libraries)

    + Using the Library Manager
    + Importing a `.zip` Library

Hardware

* [Connecting the Pervasive Displays e-Paper EPD Extension Kit Gen 3](https://embeddedcomputing.weebly.com/connecting-the-e-paper-epd-extension-kit-gen-3.html)

## Configuration

Software

* Arduino SDK
* SPI library
* Wire library

Hardware

* Pervasive Displays EPD Extension Kit Gen 3 (EXT3 or EXT3.1)
* Pervasive Displays EPD Extension Kit Gen 4 (EXT4)
* Pervasive Displays iTC screens wide temperature and embedded fast update (film `K`)

## Licence

**Copyright** &copy; Pervasive Displays, 2010-2025

*For exclusive use with Pervasive Displays screens*

**Licence** [Attribution-ShareAlike 4.0 International (CC BY-SA 4.0)](./LICENCE.md)

**Portions** &copy; Rei Vilo, 2010-2025

