int buzzer = 9;
int notaSayisi = 8;
int C = 262;
int D = 294;
int E = 330;
int F = 349;
int G = 392;
int A = 440;
int B = 494;
int C_ = 523;
int notalar[] = {C, D, E, F, G, A, B, C_};

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);

for(int i=0; i<notaSayisi; i++)
{
  Serial.println(i);
tone(buzzer,notalar[i]);
delay(500);  
noTone(buzzer);
delay(20);
}
  noTone(buzzer);

}

void loop() {
  // put your main code here, to run repeatedly:

}
