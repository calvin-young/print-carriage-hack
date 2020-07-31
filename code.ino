// Written by Tixin Xue 2017

#include <Stepper.h>

Stepper stepper1(STEPS, 2,3,4,5);
Stepper stepper2(STEPS, 6,7,8,9);
Stepper stepper3(STEPS, 10,11,12,13);

int n = 0;

void setup()
{
  Serial.begin(9600);
  stepper1.setSpeed(100);
  stepper2.setSpeed(40);
  stepper3.setSpeed(100);
}

void loop()
{
  if ( n == 0){
    stepper1.step(1350);
    delay(1000);
    stepper2.step(335);
    delay(1000);
    stepper1.step(-170);
    delay(1000);
    stepper3.step(1000);
    delay(1000);
    stepper1.step(170);
    delay(1000);
    stepper2.step(-150);
    delay(1000);
    stepper1.step(-1340);
    delay(1000);
    stepper3.step(-1000);
    delay(1000);
    stepper2.step(-190);
    
    n = n+1;
}
