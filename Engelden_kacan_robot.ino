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


}

void loop() {
digitalWrite(trig,HIGH);
delayMicroseconds(1000);
digitalWrite(trig,LOW);

sure=pulseIn(echo,HIGH);
mesafe=(sure)/2/29.1;


if(mesafe<40)
{
analogWrite(ena,255);
analogWrite(enb,255);

digitalWrite(in1,LOW);
digitalWrite(in2,HIGH);
digitalWrite(in3,HIGH);
digitalWrite(in4,LOW);

}
else
{
analogWrite(ena,255);
analogWrite(enb,255);

Serial.println(mesafe);
  
digitalWrite(in1,HIGH);
digitalWrite(in2,LOW);
digitalWrite(in3,HIGH);
digitalWrite(in4,LOW);
  
}

  
}
