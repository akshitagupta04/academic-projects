# Microcontroller Communication Protocols 
<p align="justify">
An AVR-based RFID security access control system in which only authorised personnel are allowed access to a secure area, developed during embedded system design training. Using this system, authorization of personnel is carried out with an RFID card and only those with access can enter a secured area.
</p>

## Table of Contents
- [Project Context](#project-context)
- [Functional Description](#functional-description)
- [Hardware and Software](#hardware-and-software)
- [System Design](#system-design)
- [Future Enhancement](#future-enhancement)
- [Key Contributions](#key-contributions)
- [Repository Structure](#repository-structure)
- [Credits and Acknowledgement](#credits-and-acknowledgement)
- [License](#license)

--- 

## Project Context 
<p align="justify">
This project was developed during the 8th semester of the undergraduate program in the 2020–2021 academic year. Due to the COVID-19 pandemic, this project was implemented entirely in the software-based environment as part of the six-month online training program in Embedded System Design. The functionality was verified through trainer-led Proteus and AVR co-simulation demonstrations. 
</p>

--- 

## Functional Description 

--- 

## Hardware and Software 
*Note: Do not connect hardware until the USB setup from the Atmel Studio is complete.*

### Simulated Hardware (Proteus Co-simulation) 
- Microcontroller: ATmega16 AVR
- Module: EM-18 RFID reader module
- Transponder: Passive-type RFID tag (125 kHz)
- Integrated Circuit: L239D (16 pin)
- Display: LM016L 16×2 LCD
- Actuator: DC gear motor
- Resistor: 10kΩ
- Switch: Push-button

### Software
- Software: Atmel Studio V6.0.1843 AVR, ISIS Proteus 7 Professional (for schematic capture)
- USB drivers (for Atmel Studio installation): Jungo USB driver, Segger USB driver

--- 

## System Design 
Documentation, including schematic capture and block diagram available in [System Design](System%20Design)

--- 

## Future Enhancement 

--- 

## Key Contributions 
- Designed the circuit schematic in Proteus design suite software. 
- Programmed the ATmega16 microcontroller in AVR programming, utilising the UART communication protocol for system operation under trainer guidance. 
- Simulated the full system by performing co-simulation between schematic and AVR programming, loading the generated hex file to validate functionality. 
- Documented the project comprehensively in a final report and created the presentation for academic evaluation.

--- 

## Repository Structure 

```text
microcontroller-communication-protocols/
├── Project Code
│   ├── GccApplication1
│   │   ├── GccApplication1
│   │   │   ├── Debug                         # Debugging and other files
│   │   │   │   ├── GccApplication1.d
│   │   │   │   ├── GccApplication1.eep
│   │   │   │   ├── GccApplication1.elf
│   │   │   │   ├── GccApplication1.hex       # Co-simulation hex file generated from Atmel AVR Studio 6 to ISIS Proteus 7 Professional software
│   │   │   │   ├── GccApplication1.lss
│   │   │   │   ├── GccApplication1.map
│   │   │   │   ├── GccApplication1.o
│   │   │   │   ├── GccApplication1.srec
│   │   │   │   ├── Makefile
│   │   │   │   └── makedep.mk
│   │   │   └── GccApplication1.cproj
│   │   ├── GccApplication1.atsln
│   │   └── GccApplication1.atsuo
│   ├── GccApplication1.c                   # Project code file 
│   └── project.DSN                         # schematic capture file of project created in the ISIS Proteus 7 Professional software in co-simulation 
├── System Design
│   ├── block_diagram_working.jpg           # block diagram of working of the project
│   └── schematic_capture.jpg               # schematic capture of the project
├── presentation
│   └── Microcontroller_Communication_Protocol_presentation.pdf         # academic project presentation
├── report
│   └── Microcontroller_Communication_Protocol_Project_Report.pdf       # academic project documentation
├── Readme.md                                                           # Readme file
└── license.txt                                                         # license file 
```
--- 

## Credits and Acknowledgement 
<p align="justify">
I would like to acknowledge to people who have extended their kind co-operation and guidance and made this project successful. First I would like to thank “Mr. Vikas Kalra, Director, Cetpa Infotech Pvt. Ltd.” for giving me the opportunity to do an internship within the organization. I also would like to thank all the people that worked along with me at “Cetpa” with their patience and openness they created an enjoyable working environment. 
</p>

<p align="justify">
I am highly indebted to “Mr. Mohd. Shariq, Embedded Engineer, Cetpa,” for the facilities provided to accomplish this internship. I would like to thank “Prof. Mrs Ritu Vijay, Dean and Project & Placement Coordinator, Banasthali Vidyapith,” for her constructive criticism throughout my internship and for their support to complete internship in above said organization. 
</p>

--- 

## License 
This project is licensed under the MIT License [license](./license.txt)
