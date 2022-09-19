//Sarah Spalding  Arduino 11 part 1   4/26/22
// blink at a 2 Hz rate, period of .5 s,

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);      // initialize digital pin LED_BUILTIN as an output.
}
void loop() {
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on
  delay(250);                        // wait for 0.25 s
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off 
  delay(250);                        // wait for 0.25 s
}
