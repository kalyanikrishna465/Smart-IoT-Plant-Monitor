**Smart-IoT-Plant-Monitor**

**ESP8266 DHT11 & Soil Moisture Sensor with Blynk**

This project monitors temperature, humidity, and soil moisture using an ESP8266, DHT11 sensor, and a soil moisture sensor. Data is sent to the Blynk app.

**Components**
- ESP8266 (e.g., NodeMCU)
- DHT11 Temperature and Humidity Sensor
- Soil Moisture Sensor
- Blynk App

**Connections**
- DHT11 Pinout:
  - VCC to 3.3V
  - GND to GND
  - Data to GPIO D2
- Soil Moisture Sensor:
  - Analog output to A0

**How to Use**
1. Install the required libraries:
   - DHT sensor library
   - Blynk library
   - ESP8266WiFi library

2. Replace the `auth`, `ssid`, and `pass` values in the code with your own Blynk authorization token, Wi-Fi SSID, and password.

3. Upload the code to your ESP8266.

4. View the data on the Blynk app.

**Libraries**
- [Blynk Library](https://github.com/blynkkk/blynk-library)
- [DHT Sensor Library](https://github.com/adafruit/DHT-sensor-library)

