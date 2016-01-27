#include <EM_174A.h>
EM_174A myDriver = EM_174A(9, 10, 11);

void setup() {
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop() {
  myDriver.setCurrentLimit(255);
  myDriver.setSpeed(191);
  myDriver.setDirection(true);
  
  myDriver.start();

  delay(2000);
  myDriver.setSpeed(255);
  delay(2000);
  myDriver.stop();
}
