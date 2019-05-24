 int ldrPin=A2;
int ldrDeger=0;
int esikDeger=50;

void setup(){
  pinMode(12, OUTPUT);
  pinMode(ldrPin,INPUT);
}
void loop(){
  
  ldrDeger=analogRead(ldrPin);
  if(ldrDeger<esikDeger){
    digitalWrite(12, HIGH);
  }
  else{
    digitalWrite(12, LOW);
  }
  Serial.begin(9600);
  Serial.println(ldrDeger);
}
