# Helper Robo 
Helper Robo is an Arduino-based robot prototype designed to detect and measure harmful gases in hazardous environments like underground mines and landfills. It addresses critical safety needs. 

## Table of Contents
- [Project Context](#project-context)
- [Functional Description](#functional-description)
- [Hardware and Software](#hardware-and-software)
- [Current Validation 2026](#current-validation-2026)
- [System Design and Testing](#system-design-and-testing)
- [Future Enhancement](#future-enhancement)
- [Key Contributions](#key-contributions)
- [Repository Structure](#repository-structure)
- [Credits and Acknowledgement](#credits-and-acknowledgement)
- [License](#license)

---

## Project Context 
This group project was designed during the 6th semester of the undergraduate program in the 2019–2020 academic year. Due to the COVID-19 pandemic, college laboratories were closed, and access to certain hardware components was restricted. Core functionalities such as remote navigation control and environmental monitoring were successfully verified.

The live location visualisation module was tested at the code and communication level; however, the absence of a TFT LCD shield limited full visual output validation. The camera sensor module was implemented and tested; while the code compiled and uploaded successfully, image output could not be fully validated during testing. 

As a result, the project could not be fully assembled, and a single combined program for the complete system could not be implemented. However, 80% of the planned project components were interfaced with Arduino UNO R3, combined into a single program and tested. The final system integration described in the project documentation is based on the intended design and planned assembly of all components.  

### Project Declaration
I hereby declare that the work, which is being presented in the Project, entitled “Helper Robo” in partial fulfillment for the award of Degree of “Bachelor of Technology” with Specialization in Electronics and Communication Engineering and submitted to the Department of Electronics, Banasthali Vidyapith, Rajasthan is a record of my own investigations carried under the guidance of “Mr. Hemant Kumar”, Department of Electronics, Banasthali Vidyapith. 

I have not submitted the matter presented in this report anywhere for the award of any other Degree.

---

## Functional Description 
**Scope: Three primary operational modes were designed and partially implemented.** 

### Remote Navigation Control
- Smartphone Bluetooth connection with button interface for movement and direction commands
- Two-wheel primary drive system (chassis constraints)
- Speed adjustment capability

### Environmental Monitoring 

### Live Location Visualisation

---

## Hardware and Software 
### Hardware 
- Microcontroller: Arduino UNO R3
- Sensors: MQ-7 CO gas sensor module, MQ-135 air quality detector module, HC-SR04 ultrasonic sensor module, OV7670 camera sensor module
- Wireless Module: HC-05 bluetooth module
- Actuator: DC gear motor
- Power: Hi-Watt 9V battery (external)
- Motor Driver IC: L293D (16 pin)
- Resistor: 4.7k ohm, 10k ohm 
- Miscellaneous: wheels, breadboard (830 points), chassis, jumper wires 

### Software 
- Software: Arduino IDE 1.8.7, Proteus 7 Professional (for schematic capture), OV7670 Serial Port Reader (for camera sensor)
- Port: Com 3 Serial Port (USB)
- Library: NewPing (for ultrasonic sensor)
- Application: Arduino Bluetooth Controller (android app play store)

---

## Current Validation 2026
To demonstrate the working functionality of this 2020 academic project, I recently tested the original hardware and code: 

- **Sensor Verification:** Gas and ultrasonic sensor outputs
- **Hardware Functionality:** Complete system operational check 

*These 2026 validations confirm the functionality of the original 2020 design and implementation.* 

---

## System Design and Testing
Documentation, including schematic captures, testing images, serial monitor outputs and block diagram available in [System Design and Testing](/helper-robo/system-design-and-testing/)

--- 

## Future Enhancement: 
While the initial design utilised a Bluetooth module, which limits operational range. This project has inspired potential improvements, such as adapting it into a radar-based drone for broader applications. 

Other future enhancements can be as: 
- Detection of chemicals and toxicants in rivers also for reduction of water pollution.
- Detection of chemicals in human body with Human Area Networking Technology.

---

## Key Contributions 
- Integrated the Arduino Uno R3 with L293D motor driver IC, DC gear motors, HC-05 Bluetooth module, MQ-7 & MQ-135 gas sensors and HC-SR04 ultrasonic sensor into a single, functional prototype.
- Programmed gas sensors and ultrasonic sensor with the Arduino Uno R3 to measure and output precise concentration (in ppm) and readings to the Arduino IDE Serial Monitor.
- Implemented wireless control for the DC gear motors via HC-05 Bluetooth module and smartphone app for controlling direction, movement and speed.
- Documented the project comprehensively in a final report for academic evaluation.

---

## Repository Structure 

---

## Credits and Acknowledgement 
I would like to acknowledge to great measure of our Head of Department “Mrs Ritu Vijay”, our Associate Professor “Dr. C.M.S. Negi” and our Dean of Aviation Science “Seema Verma” for giving me this opportunity and technical support, whose valuable guidance keen interest encourage me to complete the project in successful manner. 

### Team Members
- Akshita Gupta – BTBTE17143
- Shambhavi Mishra – BTBTE17031
- Shivanshi Gupta – BTBTE17072
- Shivani Pathak – BTBTE17082

---

## License
This project is licensed under the MIT License [license](./license.txt)
