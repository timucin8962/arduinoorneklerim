#include <LiquidCrystal.h>

int lm35analogPin = A0;
float sicaklik;
float analogDeger;

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
 
void setup(){
  Serial.begin(9600);
  lcd.begin(16, 2);
  
}
 
void loop(){
   
  analogDeger = analogRead(lm35analogPin);
  analogDeger = (analogDeger / 1024.0)*5000;
   
  sicaklik = analogDeger / 10.0;
   
  lcd.print("Sicaklik");
  lcd.setCursor(0,1);
  lcd.print(sicaklik);
  lcd.print("c derece");
   
  Serial.print("Sıcaklık: ");
  Serial.print(sicaklik);
  Serial.println(" C derece");
  delay(3000);
  lcd.clear();
   
}
