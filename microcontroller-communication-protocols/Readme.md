# Microcontroller Communication Protocols 
An AVR-based RFID security access control system in which only authorised personnel are allowed access to a secure area, developed during embedded system design training. Using this system, authorization of personnel is carried out with an RFID card and only those with access can enter a secured area.

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
This project was completed via online training during Covid-19, with functionality verified through trainer-led Proteus and AVR co-simulation demonstrations. 

--- 

## Functional Description 

--- 

## Hardware and Software 

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

--- 

## License 
This project is licensed under the MIT License [license](./license.txt)
