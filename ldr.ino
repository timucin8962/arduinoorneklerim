int ldr=A0;
int deger;
int led=3;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(ldr,INPUT);
pinMode(led,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
deger=analogRead(ldr);

if(deger<700)
{
digitalWrite(led,HIGH);  
  
}
else
{
digitalWrite(led,LOW);  

}
}
