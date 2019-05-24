int lm35analogPin = A0;
float sicaklik;
float analogDeger;
 
 
void setup(){
  Serial.begin(9600);
  
}
 
void loop(){
   
  analogDeger = analogRead(lm35analogPin);
  analogDeger = (analogDeger / 1024.0)*5000;
   
  sicaklik = analogDeger / 10.0;
   

   
  Serial.print("Sıcaklık: ");
  Serial.print(sicaklik);
  Serial.println(" C derece");
  delay(2000);
   
}
