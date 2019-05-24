#include <Servo.h>
Servo motor;
int donus=0;
void setup() {
  // put your setup code here, to run once:
  motor.attach(5);


  Serial.begin(9600);
}

void loop() {
  if (Serial.available())
  {
    donus = Serial.parseInt();
    if (donus >= 0 && donus <= 180 )
    {
      Serial.println(donus);
      motor.write(donus);
      
    }
  }

}
