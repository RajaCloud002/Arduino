#include <LiquidCrystal.h> 
int led1=7;
int Contrast=76;
 LiquidCrystal lcd(12, 11, 5, 4, 3, 2); 

 void setup()
 {
     analogWrite(6,Contrast);
     lcd.begin(16, 3);
     pinMode(7,OUTPUT);
 } 
  void loop()
 {
   
  digitalWrite(led1,HIGH);
  delay(750);
  digitalWrite(led1,LOW);
  delay(150);

  lcd.setCursor(4, 0);
  lcd.print("Hi Kousik");
  delay(5000);
  lcd.clear();
  delay(500);
}
