#include <dht11.h>
int DHT11pin=2;

dht11 DHT11;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:

int chk=DHT11.read(DHT11pin);

Serial.println("");
Serial.println("Nem değeri");
Serial.print((float)DHT11.humidity,2);
Serial.println("");
Serial.println("Sıcaklık değeri");
Serial.print((float)DHT11.temperature,2);

delay(2000);


}
