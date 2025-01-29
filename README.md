# Vending-Machine
# AVR Vending Machine Project with QR Payment



Smart vending machine prototype using AVR microcontroller with modern QR payment integration, developed under guidance of Vamshi Sir.

🌟 Key Features
- *QR Code Payment System*
  - User scans machine-generated QR
  - UPI/Payment app integration simulation
  - Payment verification feedback (LED/LCD)
  
- *Flavor Selection*
  - Three button interface for flavors
  - LCD menu display (Regular/Mango/Ginger)

- *Automated Dispensing*
  - Motor control for sugarcane crushing
  - Solenoid valves for flavor injection
  - Sanitization cycle after each transaction

 🔧 Updated Hardware Components
*Payment System:*
- ESP8266 WiFi module (Payment confirmation)
- 128x64 OLED display (QR generation)
- Buzzer for transaction alerts

*Core Components:*
- ATmega2560 Main Controller
- HC-05 Bluetooth (Mobile app comms)
- IR sensors (Cup detection)
- 16x2 LCD with I2C

🔄 System Workflow
1. User selects flavor (button press)
2. System generates QR code on OLED
3. User scans QR with mobile payment app
4. ESP8266 verifies payment via cloud API
5. On confirmation:
   - Activates crushing mechanism
   - Dispenses selected flavor
   - Shows "Thank You" message

Developed as part of embedded systems internship,
Special thanks to Vamshi Sir for mentorship

