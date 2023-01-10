#include <dht.h>
#include <LiquidCrystal.h>
int Contrast=76;
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

dht DHT;

#define DHT11_PIN 7

void setup(){
  analogWrite(6,Contrast);
  lcd.begin(16, 2);
  Serial.begin(9600);
}

void loop(){
  int chk = DHT.read11(DHT11_PIN);
  lcd.setCursor(0,0); 
  lcd.print("Temp: ");
  lcd.print(DHT.temperature);
  lcd.print((char)223);
  lcd.print("C");
  delay(1000);
  lcd.setCursor(0,1);
  lcd.print("Humidity: ");
  lcd.print(DHT.humidity);
  lcd.print("%");
  delay(1000);
  lcd.clear();
  delay(250);
  //delay(1000);

  /*int chk = DHT.read11(DHT11_PIN);
  Serial.print("Temperature = ");
  Serial.println(DHT.temperature);
  Serial.print("Humidity = ");
  Serial.println(DHT.humidity);
  delay(1000);*/
}