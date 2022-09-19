//Sarah Spaling  4/1/22   Arduino 7
//Goal: read the voltage using A/D converter
void setup() {
  Serial.begin(9600);     //set baud rate
}

void loop() {
  int pinOne = analogRead(A0);                                                                                            //setup pin A0 as an analog read
  Serial.print("Top Connection: ");Serial.println();                                                                      //put in pretty words
  Serial.print('\t');Serial.print("Number returned = "); Serial.print(pinOne); Serial.println();                          //print what the pin is reading
  delay(750);                                                                                                             //delay 0.75 seconds
  float voltageOne = pinOne*(5.0/1023.0);                                                                                 //calculate voltage
  Serial.print('\t');Serial.print("Voltage = ");Serial.print(voltageOne);Serial.print(" V");Serial.println();             //print voltage
  delay(750);                                                                                                             //delay 0.75 seconds
  
  int pinTwo = analogRead(A1);                                                                                            //setup pin A1 as an analog read
  Serial.print("Second Connection: ");Serial.println();                                                                   //put in pretty words
  Serial.print('\t');Serial.print("Number returned = "); Serial.print(pinTwo);Serial.println();                           //print what the pin is reading
  delay(750);                                                                                                             //delay 0.75 seconds
  float voltageTwo = pinTwo*(5.0/1023.0);                                                                                 //calculate voltage
  Serial.print('\t');Serial.print("Voltage = ");Serial.print(voltageTwo);Serial.print(" V");Serial.println();             //print voltage
  delay(750);                                                                                                             //delay 0.75 seconds
  
  int pinThree = analogRead(A2);                                                                                          //setup pin A2 as an analog read
  Serial.print("Third Connection: ");Serial.println();                                                                    //put in pretty words
  Serial.print('\t');Serial.print("Number returned = ");Serial.print(pinThree);Serial.println();                          //print what the pin is reading
  delay(750);                                                                                                             //delay 0.75 seconds
  float voltageThree = pinThree*(5.0/1023.0);                                                                             //calculate voltage
  Serial.print('\t');Serial.print("Voltage = "); Serial.print(voltageThree);Serial.print(" V");Serial.println();          //print voltage
  delay(750);                                                                                                             //delay 0.75 seconds
  
  int pinFour = analogRead(A3);                                                                                           //setup pin A3 as an analog read
  Serial.print("Bottom Connection: "); Serial.println();                                                                  //put in pretty words
  Serial.print('\t');Serial.print("Number returned = "); Serial.print(pinFour); Serial.println();                         //print what the pin is reading
  delay(750);                                                                                                             //delay 0.75 seconds
  float voltageFour = pinFour*(5.0/1023.0);                                                                               //calculate voltage
  Serial.print('\t');Serial.print("Voltage = "); Serial.print(voltageFour); Serial.print(" V");Serial.println();          //print voltage
  delay(750);                                                                                                             //delay 0.75 seconds
  
  Serial.println();Serial.println();                                                                                      //put in some lines between
}
