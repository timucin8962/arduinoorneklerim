int motorpin=3;
int hiz=0;

void setup() {
  // put your setup code here, to run once:
pinMode(motorpin,OUTPUT);
}

void loop() {

  for(hiz=0; hiz<255; hiz++)
  {
  analogWrite(motorpin,hiz);
  delay(20);  
  }
  for(hiz=255; hiz>=0; hiz-- )
  {
  analogWrite(motorpin,hiz);
  delay(20);  
  }

}
