int sure=0;
int mesafe=0;
const int trig=9;
const int echo=10;
int buzzer=3;
int led=5;

void setup() {
pinMode(trig,OUTPUT);
pinMode(echo,INPUT);
pinMode(buzzer,OUTPUT);
pinMode(led,OUTPUT);

Serial.begin(9600);
}

void loop() {
  
digitalWrite(trig,HIGH);
delayMicroseconds(1000);
digitalWrite(trig,LOW);

sure=pulseIn(echo,HIGH);
mesafe=(sure/2)/29.1;

Serial.print("Mesafe : ");
Serial.println(mesafe);

if(mesafe<10)
{
  tone(buzzer,900);
  delay(250);
  noTone(buzzer);
  
  digitalWrite(led,HIGH);
  delay(250);
  digitalWrite(led,LOW);
  
}
else
{
  noTone(buzzer);
}


delay(500);


}
