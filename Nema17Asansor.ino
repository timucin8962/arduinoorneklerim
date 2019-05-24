
#include <Stepper.h>

const int stepsPerRevolution = 200;  // change this to fit the number of steps per revolution
// for your motor

// initialize the stepper library on pins 8 through 11:
Stepper myStepper(stepsPerRevolution, 8, 9, 10, 11);

void setup() {
  // set the speed at 60 rpm:
  myStepper.setSpeed(120);
  // initialize the serial port:
  Serial.begin(9600);
}

void loop() {
if(Serial.available())
{
  int deger=Serial.parseInt();
  if(deger==1)
  {
  myStepper.step(2*stepsPerRevolution);
  }
  
   if(deger==2)
  {
  myStepper.step(-2*stepsPerRevolution);
  }
}

}
