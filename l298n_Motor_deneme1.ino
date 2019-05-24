#include <SoftwareSerial.h>
int veri;

SoftwareSerial bt(11,12);

const int ena=9;
const int enb=3;
const int in1=7;
const int in2=6;
const int in3=5;
const int in4=4;

void setup() {
  // put your setup code here, to run once:
pinMode(ena,OUTPUT);
pinMode(enb,OUTPUT);
pinMode(in1,OUTPUT);
pinMode(in2,OUTPUT);
pinMode(in3,OUTPUT);
pinMode(in4,OUTPUT);

Serial.begin(9600);
bt.begin(9600);

}

void loop() {
if(bt.available())
{  
veri=bt.parseInt();

if(veri==0)
{
digitalWrite(in1,LOW);
digitalWrite(in2,LOW);
}
else if(veri==1)
{
digitalWrite(in1,HIGH);
digitalWrite(in2,LOW);
analogWrite(ena,100);
}
else if(veri==3)
{
digitalWrite(in1,LOW);
digitalWrite(in2,HIGH);
analogWrite(ena,100);
}


 
}



}
