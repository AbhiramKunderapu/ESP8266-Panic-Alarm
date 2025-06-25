# ESP8266 Panic Alarm Project: Complete Setup Guide

This guide will walk you through all the steps required before uploading the code to your NodeMCU ESP8266, including Thinger.io setup, hardware wiring, and Arduino IDE preparation. For a visual walkthrough, see the [reference video presentation](https://youtu.be/X_TOHqVL1hA?si=ABMNn59pU-xBno3u).

---

## 1. Thinger.io Platform Setup

### a. Register on Thinger.io
1. Go to [Thinger.io](https://thinger.io/).
2. Click **Sign Up** and create a free account using your email.
3. Verify your email and log in.

### b. Add a New Device
1. In the Thinger.io dashboard, go to **Devices** > **Add Device**.
2. Enter a **Device ID** (e.g., `PanicAlarm`), a description, and note the **Device Credentials** (token).
3. Save these credentials—you'll need them in your code.

### c. Create an Email Endpoint
1. Go to **Endpoints** > **Add Endpoint**.
2. Choose **Email** as the endpoint type.
3. Set an **Endpoint ID** (e.g., `email`).
4. Enter the recipient email address (where alerts will be sent).
5. Customize the subject and message body (e.g., "Attention! Urgent Assistance Needed!").
6. Save the endpoint.

---

## 2. Hardware Preparation

- **NodeMCU ESP8266**
- **Push Button**
- **LED**
- **Battery Pack** (for portability)
- **Jumper Wires**

**Wiring:**
- Button: One terminal to GND, other to D5 (GPIO14)
- LED: Anode to D2 (GPIO4), cathode to GND
- Battery: Positive to Vin, Negative to GND

Refer to the [video guide](https://youtu.be/X_TOHqVL1hA?si=ABMNn59pU-xBno3u) or the [reference article](https://iotprojectsideas.com/esp8266-based-iot-health-care-panic-alarm-for-elderly-folks/) for circuit diagrams.

---

## 3. Arduino IDE Preparation

1. **Install Arduino IDE** (if not already installed).
2. **Add ESP8266 Board Support:**
   - Go to **File > Preferences**.
   - In "Additional Boards Manager URLs", add: `http://arduino.esp8266.com/stable/package_esp8266com_index.json`
   - Go to **Tools > Board > Boards Manager**, search for "ESP8266", and install it.
3. **Install Required Libraries:**
   - Go to **Sketch > Include Library > Manage Libraries...**
   - Search for and install:
     - `ESP8266WiFi`
     - `Thinger.io` (or `ThingerWifi.h`)
     - `SPI`

---

## 4. Project Code Preparation

1. **Clone or Download the Project Repository.**
2. **Configure Credentials:**
   - Copy `panic_Alarm_example.h` to `panic_Alarm.h`.
   - Fill in your Wi-Fi and Thinger.io credentials in `panic_Alarm.h`.
3. **Open `Panic_Alarm.ino` in Arduino IDE.**

---

## 5. Uploading the Code

1. Connect your NodeMCU ESP8266 to your computer via USB.
2. Select the correct board (**NodeMCU 1.0 (ESP-12E Module)**) and port in **Tools**.
3. Click **Upload**.
4. Open the Serial Monitor (baud rate: 9600) to check for connection status.

---

## 6. Testing

- Press the button. The LED should flash, and you should receive an email alert at the address configured in Thinger.io.
- If you encounter issues, double-check your wiring, credentials, and Thinger.io endpoint setup.

---

For more details, see the [video presentation](https://youtu.be/X_TOHqVL1hA?si=ABMNn59pU-xBno3u) and the [reference article](https://iotprojectsideas.com/esp8266-based-iot-health-care-panic-alarm-for-elderly-folks/). 