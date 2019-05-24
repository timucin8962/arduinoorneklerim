#include <SoftwareSerial.h>
 int gelenVeri;
 SoftwareSerial bt(7,6);
 int buzzer=11;
void setup() {
  Serial.begin(9600);
  bt.begin(9600);
  pinMode(buzzer,OUTPUT);
}

void loop() {
  if(bt.available()>0){
    gelenVeri=bt.parseInt();
  }

  if(gelenVeri==0){
    digitalWrite(13, LOW);
  }
  if(gelenVeri==1)
    digitalWrite(13, HIGH);
  
  if(gelenVeri==2)
    tone(buzzer, 500);
    
  if(gelenVeri==3)
    noTone(buzzer);
  

     
}
