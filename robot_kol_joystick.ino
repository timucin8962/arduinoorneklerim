#include <Servo.h>
Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;
int joy1X=A0;
int joy1Y=A1;

int joy2X=A4;
int joy2Y=A5;


void setup() {
  // put your setup code here, to run once:
servo1.attach(6);
servo2.attach(9);
servo3.attach(10);
servo4.attach(11);



}

void loop() {
  // put your main code here, to run repeatedly:

int pos1=analogRead(joy1X);
pos1=map(pos1,0,1023,0,180);
servo1.write(pos1);

int pos2=analogRead(joy1Y);
pos2=map(pos2,0,1023,0,180);
servo2.write(pos2);

int pos3=analogRead(joy2X);
pos3=map(pos3,0,1023,0,180);
servo3.write(pos3);

int pos4=analogRead(joy2Y);
pos4=map(pos4,0,1023,0,180);
servo4.write(pos4);






}
