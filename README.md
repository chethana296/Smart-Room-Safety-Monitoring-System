# Smart Room Safety Monitoring System Using Arduino

## Internship Capstone Project

### Student Details

**Name:** Chethana R  
**Roll No:** 20241CIT0158  
**Program:** B.Tech Computer Science and Engineering (Internet of Things)  
**University:** Presidency University, Bengaluru  
**Academic Year:** 2026–2027  

### Internship Guide

**Dr. Ranjitha P.**

---

## Project Overview

The **Smart Room Safety Monitoring System Using Arduino** is an Arduino-based safety monitoring system developed to monitor important environmental and proximity conditions inside a room.

The system monitors:

- Gas level
- Temperature
- Distance/proximity

Based on the sensor readings, the system provides visual and audio alerts using LEDs and a buzzer.

The project was developed and tested through simulation and hardware implementation.

---

## Objectives

The main objectives of the project are:

1. To monitor gas levels in a room.
2. To monitor room temperature.
3. To detect nearby objects using an ultrasonic sensor.
4. To indicate the safe condition using a green LED.
5. To provide warning indications using yellow and red LEDs.
6. To provide an audio alert using a buzzer.
7. To display real-time sensor readings through the Serial Monitor.
8. To implement a low-cost room safety monitoring system using Arduino.

---

## Hardware Components

| Component | Purpose |
|---|---|
| Arduino Uno | Main controller |
| Gas Sensor | Gas level detection |
| Temperature Sensor | Temperature monitoring |
| Ultrasonic Sensor | Distance/proximity detection |
| Green LED | Safe condition indication |
| Yellow LED | High-temperature warning |
| Red LED | Critical alert indication |
| Buzzer | Audio warning |
| Breadboard | Circuit prototyping |
| Jumper Wires | Connections |

---

## Pin Configuration

| Component | Arduino Pin |
|---|---|
| Gas Sensor | A0 |
| Temperature Sensor | A1 |
| Ultrasonic Trig | D9 |
| Ultrasonic Echo | D10 |
| Green LED | D3 |
| Yellow LED | D4 |
| Red LED | D5 |
| Buzzer | D6 |

---

## System Working

The Arduino continuously reads the connected sensors and evaluates the readings against predefined safety conditions.

### Safe Condition

When the monitored values are within the safe range:

- Green LED is ON.
- Yellow LED is OFF.
- Red LED is OFF.
- Buzzer is OFF.
- Serial Monitor displays `STATUS : SAFE`.

### Gas Leak Detection

When the gas sensor reading exceeds the defined threshold:

- Green LED is turned OFF.
- Red LED is activated.
- Buzzer is activated.
- Serial Monitor displays `STATUS : GAS LEAK DETECTED`.

### High Temperature

When the measured temperature exceeds the defined threshold:

- Green LED is turned OFF.
- Yellow LED is activated.
- Buzzer is activated.
- Serial Monitor displays `STATUS : HIGH TEMPERATURE`.

### Object Detection

When an object is detected within the defined distance:

- Green LED is turned OFF.
- Red LED is activated.
- Buzzer is activated.
- Serial Monitor displays `STATUS : OBJECT DETECTED`.

---

## Safety Thresholds

The implemented program uses the following threshold values:

| Parameter | Threshold |
|---|---|
| Gas Sensor | Greater than 450 |
| Temperature | Greater than 35 °C |
| Distance | Less than 15 cm |

These values are used by the Arduino program to determine the system status.

---

## Software and Tools

The project uses:

- Arduino IDE
- Arduino C/C++ programming
- Tinkercad Circuits
- Serial Monitor

---

## Simulation

The circuit was designed and tested using Tinkercad before/alongside the physical hardware implementation.

The simulation was used to verify:

- Circuit connections
- LED indications
- Buzzer operation
- Sensor-based conditions
- Arduino program logic

The Tinkercad circuit image is included in this repository.

---

## Hardware Implementation

The project was also implemented using physical hardware.

The hardware setup consists of the Arduino board, sensors, LEDs, buzzer, breadboard and connecting wires.

The physical implementation was tested under different conditions to verify the safety indications and alerts.

---

## Results

The system provides different outputs according to the detected condition.

| Condition | LED Indication | Buzzer | Serial Monitor |
|---|---|---|---|
| Safe | Green | OFF | SAFE |
| Gas Leak | Red | ON | GAS LEAK DETECTED |
| High Temperature | Yellow | ON | HIGH TEMPERATURE |
| Object Detected | Red | ON | OBJECT DETECTED |

---

## Project Demonstration

The project demonstrates:

- Arduino programming
- Sensor interfacing
- Gas monitoring
- Temperature monitoring
- Ultrasonic distance measurement
- LED-based status indication
- Buzzer-based alerting
- Serial Monitor monitoring
- Condition-based control

---

## Repository Contents

### Arduino Code

The complete Arduino source code is available in:

`Arduino_Code/Smart_Room_Safety_Monitoring_System.ino`

### Circuit

The Tinkercad circuit image is available in:

`Tinkercad_Circuit.png`

### Hardware

The physical hardware implementation photograph is included in the repository.

### Documentation

The complete internship report is included as a PDF.

---

## Future Scope

The system can be further enhanced by adding:

- Wi-Fi connectivity
- Cloud-based monitoring
- Mobile application integration
- Remote notifications
- LCD/OLED display
- Automatic exhaust fan control
- Relay-based appliance control
- Remote safety monitoring

---

## Author

**Chethana R**  
**Roll No:** 20241CIT0158  
**B.Tech CSE (IoT)**  
**Presidency University, Bengaluru**
