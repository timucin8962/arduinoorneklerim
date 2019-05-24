#include <Servo.h>;
Servo servo;
int ldr1=A0;
int ldr2=A1;
int deger1,deger2;
int led1=3;
int led2=7;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(ldr1,INPUT);
pinMode(ldr2,INPUT);
pinMode(led1,OUTPUT);
pinMode(led2,OUTPUT);

servo.attach(9);
 
}

void loop() {

  
deger1=analogRead(ldr1);
deger1=map(deger1,0,1023,0,180);

deger2=analogRead(ldr2);
deger2=map(deger2,0,1023,0,180);


Serial.println(deger1);
Serial.println(deger2);



if(deger1>deger2)
{
servo.write(0);  
digitalWrite(led1,HIGH);
digitalWrite(led2,LOW);

}
if(deger2>deger1)
{
servo.write(180);
digitalWrite(led2,HIGH);
digitalWrite(led1,LOW);
}
if(deger1==deger2)
{
servo.write(90);
digitalWrite(led1,HIGH);
digitalWrite(led2,HIGH);
  
}

}
