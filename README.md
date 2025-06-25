# ESP8266 Panic Alarm

A simple IoT-based panic alarm system for elderly care, built using NodeMCU ESP8266, a push button, and Thinger.io for real-time email alerts. Pressing the button flashes an LED and sends an emergency email to a configured address.

---

## Features
- One-touch emergency alert
- Real-time email notification via Thinger.io
- Visual feedback with LED
- Portable and battery-powered

---

## Hardware Required
- NodeMCU ESP8266
- Push Button
- LED
- Battery Pack
- Jumper Wires

---

## Circuit Diagram
- **Button:** One terminal to GND, other to D5 (GPIO14)
- **LED:** Anode to D2 (GPIO4), cathode to GND
- **Battery:** Positive to Vin, Negative to GND

Refer to the [video guide](https://youtu.be/X_TOHqVL1hA?si=ABMNn59pU-xBno3u) or the [reference article](https://iotprojectsideas.com/esp8266-based-iot-health-care-panic-alarm-for-elderly-folks/) for visuals.

---

## Getting Started

### 1. Thinger.io Setup
- Register at [Thinger.io](https://thinger.io/)
- Add a new device and note the credentials
- Create an email endpoint (see `SETUP_GUIDE.md` for details)

### 2. Project Setup
- Clone or download this repository
- Copy `panic_Alarm_example.h` to `panic_Alarm.h` and fill in your Wi-Fi and Thinger.io credentials
- Open `Panic_Alarm.ino` in Arduino IDE
- Install required libraries: `ESP8266WiFi`, `Thinger.io`, `SPI`
- Select the correct board (NodeMCU 1.0 ESP-12E) and port
- Upload the code to your ESP8266

### 3. Usage
- Power the device
- Press the button to trigger the alarm: the LED will flash and an email will be sent

---

## Security Note
- **Do not share your real credentials.**
- `panic_Alarm.h` is excluded from version control via `.gitignore`.
- Share only `panic_Alarm_example.h` for others to use as a template.

---

## Documentation & References
- [Complete Setup Guide](SETUP_GUIDE.md)
- [Video Presentation](https://youtu.be/X_TOHqVL1hA?si=ABMNn59pU-xBno3u)
- [Reference Article](https://iotprojectsideas.com/esp8266-based-iot-health-care-panic-alarm-for-elderly-folks/)

---

## License
This project is for educational and personal use. See LICENSE for more information (add a license file if needed).

---

## Credits
Developed by [Your Name]. Inspired by open-source IoT projects and the Thinger.io community. 