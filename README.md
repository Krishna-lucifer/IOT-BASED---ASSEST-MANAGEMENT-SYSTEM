# IOT-BASED---ASSEST-MANAGEMENT-SYSTEM
Here is a detailed and well-structured `README.md` file suitable for a GitHub project based on the "IoT Asset Tracking System" described in the uploaded PDF:

---

# 🛰️ IoT Asset Tracking System

A smart, efficient IoT-based asset tracking solution designed for hospitals and industrial environments to monitor equipment and safeguard critical resources using GPS, RFID, ESP8266, and real-time communication protocols.

---

## 📌 Table of Contents

* [Project Overview](#project-overview)
* [Features](#features)
* [Technologies Used](#technologies-used)
* [System Architecture](#system-architecture)
* [Hardware Components](#hardware-components)
* [Software Components](#software-components)
* [Experimental Setup](#experimental-setup)
* [Simulation Results](#simulation-results)
* [Future Scope](#future-scope)
* [How to Use](#how-to-use)
* [Contributors](#contributors)
* [References](#references)

---

## 📖 Project Overview

The **IoT Asset Tracking System** is a comprehensive solution for real-time monitoring and tracking of hospital assets such as medical equipment and patients. By leveraging **RFID**, **GPS**, and **IoT technologies**, it ensures operational efficiency, improves reporting transparency, and enhances safety.

This system uses an **Arduino Uno** for control logic, **ESP8266** for wireless communication, and **Blynk** for cloud-based monitoring. When an asset goes beyond the defined range, an alert is sent via **GSM** to the designated personnel.

---

## ✨ Features

* 🔐 **Secure tracking** of medical assets and people
* 📡 Real-time GPS-based location tracking
* 📶 Wireless communication using ESP8266 WiFi module
* 📱 Mobile notifications using Blynk app
* 🚨 Alert system via GSM module when asset is out of range
* 🧠 Easy-to-integrate web dashboard

---

## 🧰 Technologies Used

* **Arduino Uno (ATmega328)**
* **ESP8266 WiFi Module**
* **GPS Module**
* **RF Transmitter/Receiver**
* **Encoder/Decoder Circuits**
* **Rectifier Circuit**
* **Blynk Cloud Platform**
* **Proteus for Simulation**

---

## 🧱 System Architecture

The architecture consists of:

* RFID tags assigned to each asset
* RF transmitter on the asset and RF receiver on the system
* ESP8266 sending data to Blynk app
* GPS module tracking real-time location
* GSM module sending SMS alerts

![Block Diagram](#) <!-- Add actual diagram image link here -->

---

## 🔩 Hardware Components

| Component       | Description                                                |
| --------------- | ---------------------------------------------------------- |
| Arduino Uno     | Microcontroller board for controlling the hardware modules |
| ESP8266         | WiFi module for IoT communication                          |
| GPS Module      | Provides real-time geolocation                             |
| RF Transmitter  | Sends location data via radio frequency                    |
| RF Receiver     | Receives the radio signal from the asset                   |
| Encoder/Decoder | Used for data encoding/decoding in RF communication        |
| Rectifier       | Converts AC to DC power supply                             |

---

## 💻 Software Components

* **Arduino IDE** – for programming the microcontroller
* **Proteus** – for circuit simulation and testing
* **Blynk App** – for remote control and notifications
* **Web Dashboard** – for real-time visualization of asset locations (planned)

---

## 🧪 Experimental Setup

The hardware setup includes:

* Arduino Uno connected to ESP8266, GPS module, and GSM module.
* The RF module is configured to send signals to detect asset movements.
* Blynk app is configured to display asset location data.
* When an asset moves out of range, GPS coordinates are captured and alerts are sent.

![Setup Image](#) <!-- Replace with setup diagram if available -->

---

## 📊 Simulation Results

The simulation was carried out using **Proteus**. The coordinates of tracked objects are updated in real-time and displayed on the serial monitor and Blynk dashboard.

![Simulation Output](#) <!-- Replace with actual screenshot -->

---

## 🔮 Future Scope

* 📋 Integration with hospital databases to link patient records
* 📱 Development of a dedicated mobile application
* 🧠 Machine learning models to predict movement patterns
* 🔗 Blockchain for secure asset history tracking

---

## 🧪 How to Use

1. **Hardware Setup**: Connect Arduino Uno with GPS, ESP8266, and GSM modules.
2. **Firmware Upload**: Use Arduino IDE to flash the code to the board.
3. **Blynk Setup**:

   * Create a new project in the Blynk app.
   * Use the authentication token in your Arduino code.
4. **Testing**: Simulate the circuit in Proteus or test physically.
5. **Monitoring**: Track assets through the Blynk dashboard and receive alerts via GSM.

---

## 👨‍💻 Contributors

* **Mr. A. Shankar** – Assistant Professor, Sri Ramakrishna Institute of Technology
* **J. Sathishkumar, R. Tamilselvan, M. Vignesh** – UG Students, SRIT

---

## 📚 References

1. S. Brindha et al., *IoT Based Asset Tracking System*, IRJET, Mar 2020
2. Indira R et al., *IoT in Asset Tracking*, SSRG International Journal
3. Steven Chan et al., *RFID for Personal Asset Tracking*
4. Patel Krishna Harshadbhai, *GPS and GSM Based Vehicle Tracking*
5. Sabah Al-Fedaghi, *Enhancing Web Applications*
6. Gunther Eysenbach, *Web-Based Medical Systems*
7. S. Aswini & Divya Jain, *RFID-based Hospital Management System*

---

> 📝 *For educational and research use only. Contributions and pull requests are welcome!*

---

Would you like a downloadable `README.md` file or want this content customized further (e.g., adding setup instructions or images)?
