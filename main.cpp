#include <DHT.h>
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
#define DHTPIN D2
#define DHTTYPE DHT11
DHT dht(DHTPIN, DHTTYPE);
#define SOILPIN A0
char auth[] = "f4HvEa2zggcIxDmPfex7JVEn4y6Bnz7L";
char ssid[] = "SSN";
char pass[] = "Ssn1!Som2@Sase3#";
void setup()
{
 Serial.begin(9600);
 pinMode(SOILPIN, INPUT);
 dht.begin();
 Blynk.begin(auth, ssid, pass);
}
void loop()
{
 Blynk.run();
 float h = dht.readHumidity();
 float t = dht.readTemperature();
 if (isnan(h) || isnan(t)) {
 Serial.println("Failed to read from DHT sensor!");
 return;
 }
 int soil = analogRead(SOILPIN);
 soil = map(soil, 0, 1023, 100, 0);

 Blynk.virtualWrite(V1, t);
 Blynk.virtualWrite(V2, h);
 Blynk.virtualWrite(V3, soil);

 delay(2000);
} 