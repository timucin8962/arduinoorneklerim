#include <StepperMotor.h>
int deger=0;
StepperMotor motor(8,9,10,11);
void setup() {
Serial.begin(9600);
motor.setStepDuration(1);  


}

void loop() {
  // put your main code here, to run repeatedly:
motor.step(10000);
delay(2000);
motor.step(-10000);
delay(2000);
}
