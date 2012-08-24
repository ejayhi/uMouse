#include <AnalogSensor.h>

AnalogSensor sensor(0);

void setup() {
    Serial.begin(9600);
}

void loop() {
    sensor.response();
}
