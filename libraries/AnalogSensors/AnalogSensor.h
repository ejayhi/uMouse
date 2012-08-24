#ifndef ANALOG_SENSOR_H
#define ANALOG_SENSOR_H

#include "Arduino.h"

class AnalogSensor {
    private:
        int pin;

    public:
        AnalogSensor(int pin);
        int response();
};

#endif
