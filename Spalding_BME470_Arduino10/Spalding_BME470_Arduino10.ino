//Sarah Spalding  4/24/22 Arduino 10
#include <LiquidCrystal.h>                                      // include the library code:

const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;     // with the arduino pin number it is connected to
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);                      // initialize the library by associating any needed LCD interface pin

void setup() {
  lcd.begin(16, 2);                                             // tell computer number of rows and columns on the LCD
  lcd.print("Sarah Spalding");                                  // Print my name to the LCD
  lcd.setCursor(0,1);                                           // set the cursor to column 0, line 1
  lcd.print("4/24/22");                                         // print the date to the LCD
}

void loop() {
                                                                //leave loop empty
}
