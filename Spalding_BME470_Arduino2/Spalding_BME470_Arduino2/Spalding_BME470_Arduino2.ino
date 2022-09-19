//Sarah Spalding
//3-8-22
//Arduino 2, blink an LED with two buttons

int ledPin = 5;                           //Anode of LED to pin 5
int buttonApin = 9;                       //Button to pin 9, this button turns the LED on
int buttonBpin = 8;                       //Button to pin 8, this button turns the LED off
byte leds = 0;

void setup()
  {
  pinMode(ledPin, OUTPUT);                //Define LED pin as ouput
  pinMode(buttonApin, INPUT_PULLUP);      //Define button pin as input, pullup means the default state is HIGH
  pinMode(buttonBpin, INPUT_PULLUP);      //Define button pin as input, pullup means the default state is HIGH
  } 
  
void loop(){
  if (digitalRead(buttonApin) == LOW)     //if the first button is pressed then the input is connected to ground and the input is then LOW
    {
    digitalWrite(ledPin, HIGH);           //if the input is low write HIGH to the LED, turning it on
    }
  if (digitalRead(buttonBpin) == LOW)     //if the second button is pressed then the input is connected to ground and the input is then LOW
    {
    digitalWrite(ledPin, LOW);            //if the input is low write LOW to the LED, turning it off
    }
  }
