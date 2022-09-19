//Sarah Spalding  Arduino 11 part 2   4/26/22
// blink blue LEDat a 3 Hz rate, blink green led at 6 Hz rate

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);      //initialize digital pin LED_BUILTIN as an output, green LED
  pinMode(12,OUTPUT);                //initialize pin 12 as output, Blue LED
}
void loop() {
  digitalWrite(LED_BUILTIN, HIGH);   //turn the green LED on
  digitalWrite(12,HIGH);             //turn the Blue LED on
  delay(1000.0/12.0);                //wait 1/12 s 
  digitalWrite(12, LOW);             //turn the blue LED off 
  delay(1000.0/12.0);                //wait 1/12 s 
  digitalWrite(LED_BUILTIN, LOW);    //turn the green LED off
  digitalWrite(12,HIGH);             //turn the Blue LED on
  delay(1000.0/12.0);                //wait 1/12 s 
  digitalWrite(12,LOW);              //turn the blue LED off
  delay(1000.0/12.0);                //wait 1/12 s   
}
