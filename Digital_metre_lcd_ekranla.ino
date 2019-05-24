#include <LiquidCrystal.h>
const int trig=9;
const int echo=10;

int sure;
int mesafe=0;

int led=13;
int buzzer=6;

LiquidCrystal lcd(12,11,5,4,3,2);

void setup() {
lcd.begin(16,2);
pinMode(9,OUTPUT);
pinMode(10,INPUT);
pinMode(13,OUTPUT);
pinMode(6,OUTPUT);


}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(trig,HIGH);
delayMicroseconds(1000);
digitalWrite(trig,LOW);

sure=pulseIn(echo,HIGH);
mesafe=(sure/2)/29.1;

if(mesafe<10)
{
lcd.print("Dikkat tehlike ");
lcd.print(mesafe);
lcd.print(" cm");

digitalWrite(led,HIGH);
tone(buzzer,1200);
delay(1000);
digitalWrite(led,LOW);
noTone(buzzer);



lcd.clear();
}
else
{
lcd.print("Mesafe ");
lcd.print(mesafe);
lcd.print(" cm");
delay(1000);
  
lcd.clear();
}

}
