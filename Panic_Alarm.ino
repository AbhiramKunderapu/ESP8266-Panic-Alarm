#include "panic_Alarm.h"
#include <SPI.h> 
#include <ESP8266WiFi.h>
#include <ThingerWifi.h>

// Thinger.io credentials: username, device ID, device token
ThingerWifi thing(THINGER_USERNAME, THINGER_DEVICE_ID, THINGER_DEVICE_TOKEN);

// GPIO pins
int pushPin = PUSH_PIN;  // D5 on NodeMCU, button input
int ledPin = LED_PIN;    // D2 on NodeMCU, LED output

void setup() {
  pinMode(ledPin, OUTPUT);       // LED as output
  pinMode(pushPin, INPUT_PULLUP); // Button as input
  Serial.begin(9600);

  // Connect to Wi-Fi
  thing.add_wifi(WIFI_SSID, WIFI_PASSWORD);

  Serial.println("Device ready. Waiting for button press...");
}

void loop() {
  int val = digitalRead(pushPin);

  if (val == LOW) {
    digitalWrite(ledPin, HIGH);  // Flash LED when pressed
    delay(1000);
    digitalWrite(ledPin, LOW);

    thing.handle();  // Maintain Thinger.io connection
    thing.call_endpoint("email");  // Call your configured Thinger.io email endpoint

    delay(5000);  // Avoid repeated spamming
  } else {
    digitalWrite(ledPin, LOW);  // Keep LED off
  }
}
