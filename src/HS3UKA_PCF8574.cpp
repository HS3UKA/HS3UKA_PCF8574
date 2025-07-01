#include <Arduino.h>
#include <HS3UKA_PCF8574.h>

HS3UKA_PCF8574::HS3UKA_PCF8574() {
	// Constructor
	_PinVal = 0xFF;
}

bool HS3UKA_PCF8574::begin(int address) {
	_address = address;
	Wire.beginTransmission(_address);
	Wire.write(_PinVal);
	int result = Wire.endTransmission();
	return (result == 0);
}

int HS3UKA_PCF8574::digitalRead(int pin) {
	Wire.requestFrom(_address, 1);
	return (Wire.read() & (1 << pin)) ? HIGH : LOW;
}

void HS3UKA_PCF8574::digitalWrite(int pin, int value) {
	if (value == HIGH) {
		_PinVal |= (1 << pin);
	} else {
		_PinVal &= ~(1 << pin);
	}
	Wire.beginTransmission(_address);
	Wire.write(_PinVal);
	Wire.endTransmission();
}
