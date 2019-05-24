#include <SoftwareSerial.h>
#include <Stepper.h>
const int stepsPerRevolution = 200;  
SoftwareSerial bt(5,6);

Stepper myStepper(stepsPerRevolution, 8, 9, 10, 11);
int deger=0;
void setup() {
  // set the speed at 60 rpm:
  myStepper.setSpeed(60);
  Serial.begin(9600);
  bt.begin(9600);
  
}
void loop() {  
if(bt.available())
{
  deger=bt.parseInt();
  while(deger==1) //Birinci Hız modu
  { 
  myStepper.setSpeed(60); 
  myStepper.step(stepsPerRevolution);
  myStepper.step(-stepsPerRevolution);
  if(bt.available())
    { 
      deger=bt.parseInt();
      if(deger==0)break;
    } 
  }  
 while(deger==2) //İkinci Hız modu
  { 
  myStepper.setSpeed(80); 
  myStepper.step(stepsPerRevolution);
  myStepper.step(-stepsPerRevolution);
  if(bt.available())
    { 
      deger=bt.parseInt();
      if(deger==0)break;
    } 
  }

 while(deger==3) //Üçüncü Hız modu
  { 
  myStepper.setSpeed(100); 
  myStepper.step(stepsPerRevolution);
  myStepper.step(-stepsPerRevolution);
  if(bt.available())
    { 
      deger=bt.parseInt();
      if(deger==0)break;
    } 
  }  
  
 while(deger==4) //Dördüncü Hız modu
  { 
  myStepper.setSpeed(120); 
  myStepper.step(stepsPerRevolution);
  myStepper.step(-stepsPerRevolution);
  if(bt.available())
    { 
      deger=bt.parseInt();
      if(deger==0)break;
    } 
  }  

  
}
}
