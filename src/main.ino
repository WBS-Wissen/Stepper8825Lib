#include <Stepper8825Lib.h>

StepperMotor motor(2, 5, 8); // Pins für Step, Dir, Enable

void setup() {
    motor.enable();
    motor.setSpeed(60);
    motor.setDirection(true);
    motor.setSpeed(600);
}

void loop() {
    motor.step(200);  // Eine Umdrehung (bei 1.8° Schrittmotor)
    delay(1000);
    motor.setDirection(false);
    motor.step(200);
    delay(1000);
}
