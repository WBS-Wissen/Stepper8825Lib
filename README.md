
# Stepper8825Lib 🎛️  
A simple **Arduino library** for controlling stepper motors with **DRV8825 / A4988** drivers.

## 📌 Features  
- Supports **DRV8825 / A4988** stepper drivers  
- Easy control of speed & direction  
- Enable/disable motor function  
- Compatible with **Arduino UNO, Mega, Nano**  

---

## 📥 Installation  
### Arduino IDE  
1. Download the repository as `.zip`  
2. Extract and move it to `Documents/Arduino/libraries/Stepper8825Lib`  
3. In Arduino IDE: `Sketch -> Include Library -> Add .ZIP Library`  

### PlatformIO  
```sh
pio lib install "Stepper8825Lib"
```

---

## 🚀 Usage  
**Basic example:**
```cpp
#include <Arduino.h>
#include "Stepper8825Lib.h"

#define STEP_PIN 2
#define DIR_PIN 3
#define ENABLE_PIN 4

StepperMotor motor(STEP_PIN, DIR_PIN, ENABLE_PIN);

void setup() {
    motor.enable();
    motor.setSpeed(500);
}

void loop() {
    motor.setDirection(true);
    motor.step(200);
    delay(1000);

    motor.setDirection(false);
    motor.step(200);
    delay(1000);
}
```

---

## 📖 API  

### 🔹 `StepperMotor(int stepPin, int dirPin, int enablePin)`
Creates a stepper motor instance.

### 🔹 `void setSpeed(float rpm)`
Sets motor speed in **µs per step**.

### 🔹 `void setDirection(bool direction)`
Sets **rotation direction** (`true` = CW, `false` = CCW).

### 🔹 `void step(int steps)`
Moves the motor by a given **number of steps**.

### 🔹 `void enable() / void disable()`
Enables or disables the motor.

---

## 📜 License  
Licensed under the **Apache 2.0 License**. See `LICENSE` for details.

---

## ⭐ Contribute  
Feel free to **open issues** or **submit pull requests**! If you like this project, consider **starring** the repo. 🚀  
