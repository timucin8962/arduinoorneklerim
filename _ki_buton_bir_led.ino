void setup() {
  // put your setup code here, to run once:
int buton1=9;
int buton2=10;
int led=3;

pinMode(buton1,INPUT_PULLUP);  
pinMode(buton2,INPUT_PULLUP);
pinMode(led,OUTPUT);


}

void loop() {
  // put your main code here, to run repeatedly:
if(digitalRead(buton1)==LOW)
{
  digitalWrite(led,HIGH);
}
else
{
digitalWrite(led,LOW);  
}
  
}
