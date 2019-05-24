#include <SoftwareSerial.h>
SoftwareSerial bt(8,9); // RX TX
#include <Servo.h>
Servo motor1;
Servo motor2;
Servo motor3;
Servo motor4;

int deger=0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  bt.begin(9600);
 
  motor1.attach(3);
  motor2.attach(4);
  motor3.attach(5);
  motor4.attach(2);

}

void loop() {
  // put your main code here, to run repeatedly:
  if(bt.available())
  {
   deger= bt.parseInt(); 
   while(deger=1)
   {
       ileri();
      
     if(bt.available())
      { 
      deger=bt.parseInt();
      if(deger==0)break;
      }   
    }    
    
    while(deger==2) //İkinci Hız modu
    {
    sag();

     if(bt.available())
      { 
      deger=bt.parseInt();
      if(deger==0)break;
      } 
    }

        while(deger==3) //İkinci Hız modu
    {
    sol();

     if(bt.available())
      { 
      deger=bt.parseInt();
      if(deger==0)break;
      } 
    }

        while(deger==4) //İkinci Hız modu
    {
      dur();
      
     if(bt.available())
      { 
      deger=bt.parseInt();
      if(deger==0)break;
      } 
    }



}
}



void ileri()
{
  
motor1.write(105);
motor2.write(105);
motor3.write(75);
motor4.write(75); 
delay(600);

motor1.write(75);
motor2.write(75); 
motor3.write(105);
motor4.write(105);
delay(600);

}

void dur()
{
motor1.write(90);
motor2.write(90); 

motor3.write(90);
motor4.write(90);    
  
}
void sag()
{

motor1.write(120);
motor2.write(110); 
motor3.write(120);
motor4.write(80); 
delay(600);

motor1.write(90);
motor2.write(85); 
motor3.write(90);
motor4.write(85);
delay(600);
  
}

void sol()
{

motor1.write(70);
motor2.write(60); 
motor3.write(100);
motor4.write(60); 
delay(600);

motor1.write(85);
motor2.write(90); 
motor3.write(85);
motor4.write(90);
delay(600);

  
 
}
