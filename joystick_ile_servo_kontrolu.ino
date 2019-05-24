#include <Servo.h>
Servo motor;
int x=A0;
int y=A1;
int buton=7;

int x_pos,y_pos,button_durum;

void setup() {
motor.attach(3);
Serial.begin(9600);
}

void loop() {

x_pos=analogRead(x);
y_pos=analogRead(y);
button_durum=digitalRead(7);

x_pos=map(x_pos,0,1023,0,180);
y_pos=map(y_pos,0,1023,0,180);


Serial.println(y_pos);


motor.write(y_pos);
delay(200);


}
