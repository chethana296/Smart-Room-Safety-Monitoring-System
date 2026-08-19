<div align="center">

# 🏠 Smart Room Safety Monitoring System

### Arduino-Based Environmental & Proximity Safety Monitoring

<p>
  <b>Gas Detection</b> •
  <b>Temperature Monitoring</b> •
  <b>Object Detection</b> •
  <b>LED Alerts</b> •
  <b>Buzzer Alert</b>
</p>

</div>

---

## 📸 Project Preview

<div align="center">

<img src="hardware screenshot.jpeg" alt="Smart Room Safety Monitoring System Hardware" width="800">

</div>

---

## 🛠️ Technologies & Tools

<p align="center">

<img src="https://img.shields.io/badge/Arduino-00979D?style=for-the-badge&logo=arduino&logoColor=white">

<img src="https://img.shields.io/badge/C%2FC%2B%2B-00599C?style=for-the-badge&logo=cplusplus&logoColor=white">

<img src="https://img.shields.io/badge/IoT-0A0A0A?style=for-the-badge">

<img src="https://img.shields.io/badge/Tinkercad-1479FF?style=for-the-badge&logo=autodesk&logoColor=white">

<img src="https://img.shields.io/badge/Embedded%20Systems-333333?style=for-the-badge">

</p>

---

# 📌 About The Project

The **Smart Room Safety Monitoring System Using Arduino** is an Arduino-based safety monitoring system designed to monitor important environmental and proximity conditions inside a room.

The system continuously monitors:

- 🌫️ Gas level
- 🌡️ Temperature
- 📏 Distance / proximity

Based on the sensor readings, the Arduino determines the current safety condition and provides **visual and audio alerts** using LEDs and a buzzer.

The project was developed using **Arduino programming**, tested using **Tinkercad simulation**, and implemented using physical hardware.

---

# 🎯 Objectives

- Monitor gas levels inside a room.
- Monitor room temperature.
- Detect nearby objects using an ultrasonic sensor.
- Indicate a safe condition using a green LED.
- Provide warning indication using a yellow LED.
- Provide critical alert indication using a red LED.
- Generate an audio warning using a buzzer.
- Display real-time sensor readings through the Serial Monitor.
- Develop a low-cost room safety monitoring system using Arduino.

---

# ✨ Key Features

| Feature | Description |
|---|---|
| 🌫️ Gas Monitoring | Monitors gas sensor readings |
| 🌡️ Temperature Monitoring | Measures room temperature |
| 📏 Proximity Detection | Detects nearby objects |
| 🟢 Safe Indication | Green LED indicates safe condition |
| 🟡 Temperature Warning | Yellow LED indicates high temperature |
| 🔴 Critical Alert | Red LED indicates critical conditions |
| 🔊 Audio Alert | Buzzer provides warning sound |
| 📟 Serial Monitoring | Displays sensor values and system status |

---

# 🔌 Hardware Components

| Component | Purpose |
|---|---|
| Arduino Uno | Main controller |
| Gas Sensor | Gas level detection |
| Temperature Sensor | Temperature monitoring |
| HC-SR04 Ultrasonic Sensor | Distance/proximity detection |
| Green LED | Safe condition |
| Yellow LED | High-temperature warning |
| Red LED | Critical alert |
| Buzzer | Audio warning |
| Breadboard | Circuit prototyping |
| Jumper Wires | Electrical connections |

---

# 📍 Pin Configuration

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

# ⚙️ System Architecture

<div align="center">

**Sensors**

⬇️

🌫️ Gas Sensor  
🌡️ Temperature Sensor  
📏 Ultrasonic Sensor

⬇️

**Arduino Uno**

⬇️

**Condition Evaluation**

⬇️

🟢 Safe  
🟡 Warning  
🔴 Critical Alert

⬇️

💡 LEDs + 🔊 Buzzer + 📟 Serial Monitor

</div>

---

# 🔄 How The System Works

The Arduino continuously reads values from the connected sensors.

The sensor readings are then compared with predefined safety thresholds.

### 🟢 Safe Condition

When all monitored values remain within the safe range:

- Green LED → ON
- Yellow LED → OFF
- Red LED → OFF
- Buzzer → OFF
- Serial Monitor → `STATUS : SAFE`

---

### 🔴 Gas Leak Detection

When the gas sensor reading exceeds the defined threshold:

- Green LED → OFF
- Red LED → ON / alert indication
- Buzzer → ON
- Serial Monitor → `STATUS : GAS LEAK DETECTED`

**Gas threshold:**

`Gas Value > 450`

---

### 🟡 High Temperature

When the measured temperature exceeds the defined threshold:

- Green LED → OFF
- Yellow LED → ON / warning indication
- Buzzer → ON
- Serial Monitor → `STATUS : HIGH TEMPERATURE`

**Temperature threshold:**

`Temperature > 35°C`

---

### 🔴 Object Detection

When an object is detected within the defined distance:

- Green LED → OFF
- Red LED → ON / alert indication
- Buzzer → ON
- Serial Monitor → `STATUS : OBJECT DETECTED`

**Distance threshold:**

`Distance < 15 cm`

---

# 📊 Safety Conditions

| Condition | Threshold | LED | Buzzer |
|---|---:|---|---|
| 🟢 Safe | Normal values | Green | OFF |
| 🔴 Gas Leak | Gas > 450 | Red | ON |
| 🟡 High Temperature | > 35°C | Yellow | ON |
| 🔴 Object Detected | < 15 cm | Red | ON |

---

# 🖥️ Tinkercad Simulation

The circuit was designed and tested using **Tinkercad Circuits** to verify the circuit connections and Arduino program logic.

### Simulation Circuit

<div align="center">

<img src="Screenshot 2026-08-18 201519.png" alt="Tinkercad Circuit Simulation" width="900">

</div>

The simulation was used to verify:

- Arduino connections
- Sensor interfacing
- LED indications
- Buzzer operation
- Sensor-based conditions
- Program logic

---

# 🔧 Hardware Implementation

The project was also implemented using physical hardware.

The setup contains:

- Arduino Uno
- Gas sensor
- Temperature sensor
- Ultrasonic sensor
- LEDs
- Buzzer
- Breadboard
- Jumper wires

### Hardware Setup

<div align="center">

<img src="hardware screenshot.jpeg" alt="Physical Hardware Implementation" width="900">

</div>

---

# 📟 Serial Monitor

The Arduino Serial Monitor provides real-time information about the sensor readings and current safety status.

Example:

```text
Gas: 91 | Temperature: 24.71 C | Distance: 80.31 cm
STATUS : SAFE
