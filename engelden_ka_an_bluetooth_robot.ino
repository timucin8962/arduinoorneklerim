#include <SoftwareSerial.h>
SoftwareSerial bt(12,13);

const int ena=10;
const int enb=5;

const int in1=8;
const int in2=9;
const int in3=7;
const int in4=6;

const int trig=3;
const int echo=4;

int sure;
int mesafe;
int veri;
void setup() {
  // put your setup code here, to run once:
pinMode(ena,OUTPUT);
pinMode(enb,OUTPUT);
pinMode(in1,OUTPUT);
pinMode(in2,OUTPUT);
pinMode(in3,OUTPUT);
pinMode(in4,OUTPUT);

pinMode(trig,OUTPUT);

pinMode(echo,INPUT);

bt.begin(9600);
Serial.begin(9600);
}

void loop() {
digitalWrite(trig,HIGH);
delayMicroseconds(50);
digitalWrite(trig,LOW);

sure=pulseIn(echo,HIGH);
mesafe=(sure)/2/29.1;


if(bt.available())
{ 
   
veri=bt.parseInt();

Serial.println(veri);
if(veri==0) // 0 gelirse dursun
{
dur();

}
else if(veri==1) //1 gelisrse ileri gitsin
{
ileri();

}

else if(veri==2) // 2 gelirse geri gitsin
{
geri();

}

else if(veri==3) // 3 gelirse sağa gitsin
{
sag();
delay(600);
dur();
}

else if(veri==4) // 4 gelirse  sola gitsin
{
  sol();
  delay(600);
  dur();
}

}

if(mesafe<40)
{
engel();
delay(500);
dur();
}

}


void engel()
{
analogWrite(ena,150);
analogWrite(enb,150);

digitalWrite(in1,LOW);
digitalWrite(in2,HIGH);
digitalWrite(in3,HIGH);
digitalWrite(in4,LOW);  
  
}
void dur()
{
analogWrite(ena,0);
analogWrite(enb,0);
  
digitalWrite(in1,LOW);
digitalWrite(in2,LOW);
digitalWrite(in3,LOW);
digitalWrite(in4,LOW);
}
void ileri()
{
analogWrite(ena,200);
analogWrite(enb,200);
  
digitalWrite(in1,HIGH);
digitalWrite(in2,LOW);
digitalWrite(in3,HIGH);
digitalWrite(in4,LOW);
}
void geri()
{
analogWrite(ena,150);
analogWrite(enb,150);
   
digitalWrite(in1,LOW);
digitalWrite(in2,HIGH);
digitalWrite(in3,LOW);
digitalWrite(in4,HIGH);
  
}
void sag()
{
analogWrite(ena,150);
analogWrite(enb,150);
  
digitalWrite(in1,HIGH);
digitalWrite(in2,LOW);
digitalWrite(in3,LOW);
digitalWrite(in4,HIGH);  
}
void sol()
{
  
analogWrite(ena,150);
analogWrite(enb,150);
  
digitalWrite(in1,LOW);
digitalWrite(in2,HIGH);
digitalWrite(in3,HIGH);
digitalWrite(in4,LOW);
  
}

