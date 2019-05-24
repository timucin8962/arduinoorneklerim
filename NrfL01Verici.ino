#include  <SPI.h> 
#include "nRF24L01.h"
#include "RF24.h"     //Modül ile ilgili kütüphaneleri ekliyoruz
int mesaj[1];      //mesaj isminde bir dizi tanımlıyoruz
RF24 verici(9,10);     //kütüphane tarafından kullanılacak pinleri tanımlıyoruz
const uint64_t kanal = 0xE8E8F0F0E1LL; //kanalı tanımlıyoruz  
int buton = 7;      //butonun bağlı olduğu dijital pin

void setup(void)
{
 verici.begin();       //nrf yi başlatıyoruz
 verici.openWritingPipe(kanal);  //kanal id sı tanımlanıyor
}


void loop(void)
{
 if (digitalRead(buton) == HIGH)
 { 
 mesaj[0] = 123; 
 verici.write(mesaj, 1);   //mesaj değişkeni yollanıyor
 }
 }
