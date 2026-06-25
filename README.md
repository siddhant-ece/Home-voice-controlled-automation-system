# 🏠 Home Voice Controlled Automation System
### 8051 Microcontroller | HC-05 Bluetooth | Assembly Language | Keil uVision

## 📌 Overview
A cost-effective Home Automation System built using the 8051 Microcontroller that allows users 
to control household appliances like lights and fans using voice commands sent via a mobile 
Bluetooth application through the HC-05 module.

## ⚙️ Technologies Used
- **Microcontroller:** AT89C51 / AT89S52 (8051 Architecture)
- **Communication Module:** HC-05 Bluetooth Module (UART)
- **Programming Language:** Assembly Language (8051 Instruction Set)
- **IDE/Tool:** Keil uVision

## 🔌 Hardware Components
- 8051 Microcontroller
- HC-05 Bluetooth Module
- Relay Module (for Light & Fan)
- Mobile App (Bluetooth Voice Controller)
- 11.0592 MHz Crystal Oscillator
- Power Supply (5V)

## 📡 How It Works
1. User gives a voice command on the mobile app
2. The app converts voice to text and sends a character via Bluetooth
3. HC-05 receives the character and sends it to 8051 via UART (9600 baud)
4. The 8051 decodes the command in the Serial ISR and switches relays ON/OFF

## 🎮 Command Table
| Command Sent | Action       |
|-------------|--------------|
| A           | Light ON     |
| a           | Light OFF    |
| B           | Fan ON       |
| b           | Fan OFF      |
| C           | All ON       |
| c           | All OFF      |

## 🗂️ Repository Structure
home-voice-automation-8051/
├── home_automation_8051.asm   # Main Assembly Source Code
└── README.md                  # Project Documentation

## 👤 Author
**Siddhant Singh**
B.Tech — Electronics & Communication Engineering
Lovely Professional University
