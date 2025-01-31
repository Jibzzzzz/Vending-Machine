# Sugarcane Vending Machine 

## 📌 Overview
This project showcases a smart vending machine prototype powered by an AVR microcontroller with modern QR-based payment integration. The system allows users to purchase flavored sugarcane juice using a contactless UPI payment method. Developed under the guidance of **Vamshi Sir**, this project aims to blend embedded systems with IoT-based payment solutions.

## 🌟 Key Features
### **QR Code Payment System**
- A machine-generated QR code is displayed for the user.
- UPI/payment app integration for seamless transactions.
- Payment verification with visual/audio feedback via LED, LCD, and buzzer.

### **Flavor Selection**
- Users can choose between three flavors: **Sugarcane+Ginger, Sugarcane+Lime, and regular Sugarcane **.
- A simple three-button interface enables selection.
- LCD menu displays the available flavors and guides the user through the selection process.

### **Automated Dispensing Mechanism**
- Motor-controlled sugarcane crushing for fresh juice extraction.
- Solenoid valves inject selected flavors automatically.
- A built-in sanitization cycle ensures hygiene after each transaction.

## 🔧 Hardware Components
### **Payment System:**
- **ESP8266 WiFi Module** – Handles payment confirmation via cloud API.
- **128x64 OLED Display** – Displays the dynamically generated QR code.
- **Buzzer** – Provides audio feedback for successful or failed transactions.

### **Core Components:**
- **ATmega2560** – Main microcontroller unit handling all operations.
- **HC-05 Bluetooth Module** – Enables communication with the mobile app.
- **IR Sensors** – Detects the presence of a cup for dispensing.
- **16x2 LCD with I2C Interface** – Displays status messages and user instructions.

## 🔄 System Workflow
1. **User selects a flavor** using one of the three physical buttons.
2. The system **generates and displays a QR code** on the OLED screen.
3. The user **scans the QR code** with a mobile payment app.
4. **ESP8266 verifies the payment** via cloud-based authentication.
5. Upon successful payment confirmation:
   - The system **activates the crushing mechanism** to extract fresh sugarcane juice.
   - The selected **flavor is injected** into the juice.
   - The LCD **displays a 'Thank You' message**, and the buzzer provides confirmation.



## 🙏 Acknowledgments
This project would not have been possible without the invaluable support and mentorship of **Vamshi Sir**, whose guidance helped shape and refine our work. A special thanks to **Anil Achoora**, who introduced us to Vamshi Sir and made this internship opportunity possible.

