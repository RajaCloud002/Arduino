// include the library code:
#include <LiquidCrystal.h>

// initialize the library by associating any needed LCD interface pin
// with the arduino pin number it is connected to
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2, ct=9;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  // set up the LCD's number of columns and rows:
  analogWrite(ct,50);
  lcd.begin(16, 2);
  // Print a message to the LCD.
  lcd.print("hello, world!");
}

void loop() {
for (int Position = 0; Position < 15; Position++) {

lcd.scrollDisplayLeft();

delay(400);
}

for (int Position = 0; Position < 31; Position++) {

lcd.scrollDisplayRight();

delay(400);
}

for (int Position = 0; Position < 16; Position++) {

lcd.scrollDisplayLeft();
delay(150);
}

delay(700);
}

