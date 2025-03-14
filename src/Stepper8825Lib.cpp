#include "Stepper8825Lib.h"

StepperMotor::StepperMotor(int stepPin, int dirPin, int enablePin)
    : _stepPin(stepPin), _dirPin(dirPin), _enablePin(enablePin) {
    
    pinMode(_stepPin, OUTPUT);
    pinMode(_dirPin, OUTPUT);
    pinMode(_enablePin, OUTPUT);
    
    disable();
}

void StepperMotor::setSpeed(float rpm) {
    _speed = rpm;
}

void StepperMotor::setDirection(bool direction) {
    digitalWrite(_dirPin, direction ? HIGH : LOW);
}

void StepperMotor::step(int steps) {
    for (int i = 0; i < steps; i++) {
        digitalWrite(_stepPin, HIGH);
        delayMicroseconds(_speed);
        digitalWrite(_stepPin, LOW);
        delayMicroseconds(_speed);
    }
}

void StepperMotor::enable() {
    digitalWrite(_enablePin, LOW);
}

void StepperMotor::disable() {
    digitalWrite(_enablePin, HIGH);
}
