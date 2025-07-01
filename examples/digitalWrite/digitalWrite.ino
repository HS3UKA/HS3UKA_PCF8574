#include <Wire.h>
#include <HS3UKA_PCF8574.h>

HS3UKA_PCF8574 pcf8574;

void setup() {
    Serial.begin(115200);
    Wire.begin(); //For ESP32
    //Wire.begin(I2C_SDA, I2C_SCL); //For ESP8266
    pcf8574.begin(0x20);  // Set the PCF8574 address
}

void loop() {
    pcf8574.digitalWrite(0, LOW);
    delay(1000);
    pcf8574.digitalWrite(1, LOW);
    delay(1000);
    pcf8574.digitalWrite(0, HIGH);
    delay(1000);
    pcf8574.digitalWrite(1, HIGH);
    delay(1000);
}