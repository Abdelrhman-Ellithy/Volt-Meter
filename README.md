# 🔋 Volt Meter Project

**A volt meter project built using the AVR ATmega32 microcontroller.**

---

## 📃 Project Overview

This project implements a digital volt meter using the AVR ATmega32 microcontroller. It reads analog voltage values, converts them using the ADC, and displays the measured voltage on an LCD.

---

## 📂 Project Structure

Here's an overview of the project structure and key files:

```
├── .vs
│   ├── Task_2_ADC
│   │   ├── v14
│   │   │   └── .atsuo
├── Task_2_ADC
│   │   └── Makefile
│   │   └── Task_2_ADC.eep
│   │   └── Task_2_ADC.elf
│   │   └── Task_2_ADC.hex
│   │   └── Task_2_ADC.lss
│   │   └── Task_2_ADC.map
│   │   └── Task_2_ADC.srec
│   │   └── main.d
│   │   └── main.o
│   │   └── makedep.mk
│   ├── HAL
│   │   ├── LCD Driver
│   │   │   └── CLCD_config.h
│   │   │   └── CLCD_extrachar.h
│   │   │   └── CLCD_interface.h
│   │   │   └── CLCD_private.h
│   │   │   └── CLCD_program.c
│   ├── LIB
│   │   └── BIT_OPERATIONS.h
│   │   └── Types.h
│   ├── MCAL
│   │   ├── ADC Driver
│   │   │   └── ADC_Config.h
│   │   │   └── ADC_Interface.h
│   │   │   └── ADC_Private.h
│   │   │   └── ADC_Program.c
│   │   ├── DIO Driver
│   │   │   └── BIT_OPERATIONS.h
│   │   │   └── DIO_Config.h
│   │   │   └── DIO_Interface.h
│   │   │   └── DIO_Private.h
│   │   │   └── DIO_Program.c
│   │   ├── PORT Driver
│   │   │   └── PORT_config.h
│   │   │   └── PORT_interface.h
│   │   │   └── PORT_private.h
│   │   │   └── PORT_program.c
│   └── Task_2_ADC.componentinfo.xml
│   └── Task_2_ADC.cproj
│   └── main.c
├── protues
│   ├── Project Backups
│   │   └── New Project [Autosaved].pdsprj
│   └── New Project.pdsprj
│   └── New Project.pdsprj.ABDELRHMAN-LAPT.lenovo.workspace
└── LICENSE
└── README.md
└── Task_2_ADC.atsln
```

---

## 📅 Key Features

- **📈 Voltage Measurement:** Measures DC voltages up to 5V with high accuracy.
- **👁 LCD Display:** Real-time display of measured voltage on an LCD screen.
- **🔋 ADC Integration:** Utilizes the 10-bit ADC of the ATmega32 for analog-to-digital conversion.
- **🧮 User-Friendly Interface:** Clear and intuitive display for voltage readings.
- **🛠️ Modular Code:** Organized structure with ADC and LCD components separated for easy maintenance.

---

## 🛠️ Dependencies

- **Development IDE:** [Atmel Studio](https://www.microchip.com/en-us/tools-resources/develop/microchip-studio) or [AVR-GCC](https://www.microchip.com/en-us/development-tools-tools-and-software/gcc-compilers) for compiling.
- **Programmer:** USBasp, AVRISP, or any compatible ISP programmer.
- **LCD:** 16x2 LCD display module.

---

## 🚀 Getting Started

1. **Clone the Repository:**
   ```bash
   git clone https://github.com/Abdelrhman-Ellithy/Volt-Meter.git
   ```

2. **Compile the Project:**
   - If using AVR-GCC:
     ```bash
     make
     ```

3. **Flash the HEX File:**
   - Use `avrdude` with USBasp:
     ```bash
     avrdude -c usbasp -p m32 -U flash:w:VoltMeter.hex
     ```

4. **Connect the Circuit:**
   - Connect the LCD and voltage input as per the schematics.

---

## 📜 License

This project is licensed under the [MIT License](LICENSE).

---
---

## 💬 Contact

- **Author:** Abdelrhman Ellithy  