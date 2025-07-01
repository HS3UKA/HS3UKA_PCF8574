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
    int pinValue0 = pcf8574.digitalRead(0);  // Read the state of pin 0
    int pinValue1 = pcf8574.digitalRead(1);  // Read the state of pin 1
    int pinValue2 = pcf8574.digitalRead(2);  // Read the state of pin 2
    int pinValue3 = pcf8574.digitalRead(3);  // Read the state of pin 3
    int pinValue4 = pcf8574.digitalRead(4);  // Read the state of pin 4
    int pinValue5 = pcf8574.digitalRead(5);  // Read the state of pin 5
    int pinValue6 = pcf8574.digitalRead(6);  // Read the state of pin 6
    int pinValue7 = pcf8574.digitalRead(7);  // Read the state of pin 7

    Serial.println(String(pinValue0)+String(pinValue1)+String(pinValue2)+String(pinValue3)+String(pinValue4)+String(pinValue5)+String(pinValue6)+String(pinValue7));
    delay(2000);
}
