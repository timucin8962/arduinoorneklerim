
#include <Servo.h>
int pot=A0;


Servo myservo;  // create servo object to control a servo
// twelve servo objects can be created on most boards

int pos = 0;    // variable to store the servo position

void setup() {
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object
}

void loop() {
int pos=analogRead(pot);
pos=map(pos,0,1023,0,180);

myservo.write(pos);

  
}

