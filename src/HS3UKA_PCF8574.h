#ifndef HS3UKA_PCF8574_h
#define HS3UKA_PCF8574_h

#include <Wire.h>

class HS3UKA_PCF8574 {
public:
    HS3UKA_PCF8574();
    bool begin(int address);
    int digitalRead(int pin);
    void digitalWrite(int pin, int value);

private:
    int _address;
    int _PinVal;
};

#endif
