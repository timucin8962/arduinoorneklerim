int pot=A0;
int zil=3;
void setup()
{

pinMode(pot,INPUT);
pinMode(zil,OUTPUT);  

}

void loop(){
int konum=analogRead(pot);
konum= map(konum,0,1023,0,255);



analogWrite(zil,konum);


}
