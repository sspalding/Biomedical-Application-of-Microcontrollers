//Sarah Spalding  4/24/22 Arduino 10.2
#include <LiquidCrystal.h>                                      //include the library code
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;     //arduino pin number it is connected to
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);                      //initialize the library by associating any needed LCD interface pin

void setup() {
  Serial.begin(9600);                                           //set baud rate
  lcd.begin(16, 2);                                             //tell computer number of rows and columns on the LCD
}

void loop() {
  lcd.setCursor(0,0);                                           //set cursor to top left
  int pinOne = analogRead(A0);                                  //setup pin A0 as an analog read
  lcd.print("Top Integer: ");                                    //print the description
  lcd.print(pinOne);                                            //print what the pin is reading                                                                                                           
  float voltageOne = pinOne*(5.0/1023.0);                       //calculate voltage
  lcd.setCursor(0,1);                                           //set the cursor to the second line far left
  lcd.print("Voltage1: ");                                        //print description
  lcd.print(voltageOne);                                        //print voltage
  lcd.print(" V");                                              //print units
  delay(1500);                                                  //delay 1.5 seconds

  lcd.clear();                                                  //clear the screen
  
  lcd.setCursor(0,0);                                           //set cursor to top left
  int pinTwo = analogRead(A1);                                  //setup pin A1 as an analog read
  lcd.print("Bottom Int:  ");                                     //print the description
  lcd.print(pinTwo);                                            //print what the pin is reading  
  float voltageTwo = pinTwo*(5.0/1023.0);                       //calculate voltage
  lcd.setCursor(0,1);                                           //set the cursor to the second line far left
  lcd.print("Voltage2: ");                                        //print description
  lcd.print(voltageTwo);                                        //print voltage
  lcd.print(" V");                                              //print units
  delay(1500);                                                  //delay 1.5 seconds
}
