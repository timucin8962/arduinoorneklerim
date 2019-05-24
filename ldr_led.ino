int led=3;
int ldr=A0;
int ldrDeger=0;

void setup() {
  // put your setup code here, to run once:
pinMode(led,OUTPUT);
pinMode(ldr,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
ldrDeger= digitalRead(ldr);
map(ldrDeger,0,1023,0,255);

analogWrite(led,ldrDeger);
delay(50);
Serial.begin(9600);
Serial.println(ldrDeger);
delay(100);



}
