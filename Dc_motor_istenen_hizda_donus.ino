int motorPin = 3;
 
void setup() 
{ 
  pinMode(motorPin, OUTPUT);
  Serial.begin(9600);
  while (! Serial);
  Serial.println("0 ile 255 arasi hiz giriniz");
} 
  
void loop() 
{ 
  if (Serial.available())
  {
    int hiz = Serial.parseInt();
    if (hiz >= 0 && hiz <= 255)
    {
      analogWrite(motorPin, hiz);
    }
  }
}
