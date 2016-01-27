### EM_174A Library for Arduino

This is a library designed for Arduino to make easy to work with EM_174A motor drivers.

### Version
1.0.1

### Introduction
EM-174A motor driver is designed for DC-motor speed control. Click on the link below for details: 
http://electromen.com/en/products/item/motor-controllers/dc-motor-below-10A/EM-174A

EM-174A allows you to control:
 - Speed of motors (Voltage): With a value between 0 and 255 (0: 0V - 255: Max V)
 - Current limit: With a value between 0 and 255 (0: 0A - 255: Max A)
 - Direction

>IMPORTANT: If you want to set current limit from Arduino, you must set to 0 position >the current limit trim on the driver.


With this library you can control your driver easly:
You can previously set driver parameters and then call methods Start() and Stop(). You can also set driver parameters while the driver is working.

### Installation

Coming soon...

### Usage
You need to include EM_174A library:

```Arduino
#include <EM_174A.h>
```

Now you can create a EM_174A object:

```Arduino
EM_174A myDriver = EM_174A(9, 10, 11);
```
Constructor's parameters are (in order):
 - Current limit (pin 5 on the driver, pin 9 on arduino in my example)
 - Speed set (pin 6 on the driver, pin 10 on arduino in my example)
 - Direction (pin 7 on the driver, pin 11 on arduino in my example)
 
> IMPORTANT: All pins on Arduino must be PWM.

After that you should set pin modes:

```Arduino
void setup() {
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
 }
```

Now you can set your parameters:

```Arduino
  myDriver.setCurrentLimit(255);
  myDriver.setSpeed(255);
  myDriver.setDirection(true);
```

Set direction to TRUE if you want motor to go FORWARD, and vice versa.

And then call method start():

```Arduino
  myDriver.start();
```

Or method stop():

```Arduino
  myDriver.stop();
```
