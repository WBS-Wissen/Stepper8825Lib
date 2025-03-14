#include <Arduino.h>
#include "Stepper8825Lib.h"

StepperMotor motor(2, 3, 4);

void setup() {
    Serial.begin(115200);
    motor.enable();
}

void loop() {
    motor.setDirection(true);
    motor.step(400);
    delay(2000);
}
