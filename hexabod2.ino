#include <Servo.h>
Servo motor1;
Servo motor2;
Servo motor3;
Servo motor4;


void setup() {
motor1.attach(3);
motor2.attach(4);
motor3.attach(5);
motor4.attach(2);

Serial.begin(9600);

}

void loop() {
if(Serial.available())
{
int durum=Serial.parseInt();

if(durum==1) //10 adım ileri gidiyor
{
ileri();

}

if(durum==0) //Duruyor
{
dur();
} 
  
if(durum==2) //Sağa dön
{
sol();

  }
  
if(durum==3) //Sola dön
{
sağa();

  }


} 
  
}

void ileri()
{
  for(int i=0; i<10;i++)
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
motor1.write(90);
motor2.write(90);

motor3.write(90);
motor4.write(90); 
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
for(int i=0; i<5;i++) // 5 defa sağa dönüyor
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
motor1.write(90);
motor2.write(90); 

motor3.write(90);
motor4.write(90);   
  
 
}

void sol()
{
for(int i=0; i<5;i++) // 5 defa sola dönüyor
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
motor1.write(90);
motor2.write(90); 

motor3.write(90);
motor4.write(90);   
  
 
}



