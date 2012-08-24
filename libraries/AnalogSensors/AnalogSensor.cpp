#include "Arduino.h"
#include "AnalogSensor.h"

AnalogSensor::AnalogSensor(int in) {
    this->pin = in;
}

int AnalogSensor::response() {
    return analogRead(this->pin);
}
