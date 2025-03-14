#ifndef MYSTEPPERLIB_H
#define MYSTEPPERLIB_H

#include <Arduino.h>

class StepperMotor {
public:
    StepperMotor(int stepPin, int dirPin, int enablePin);
    
    void setSpeed(float rpm);
    void setDirection(bool direction);
    void step(int steps);
    void enable();
    void disable();

private:
    int _stepPin, _dirPin, _enablePin;
    float _speed = 500;
};

#endif // MYSTEPPERLIB_H
