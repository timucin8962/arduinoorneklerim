#include <StepperMotor.h>
#include <SoftwareSerial.h>

SoftwareSerial bt(3,4);
StepperMotor motor(8,9,10,11);

void setup() {
Serial.begin(9600);
bt.begin(9600);
motor.setStepDuration(1);

}
void loop() {
if(bt.available())
{
int deger=bt.parseInt();  
if(deger==1)
{
motor.step(1000);  
}

if(deger==2)
{
motor.step(-1000);  
}




} 
}
