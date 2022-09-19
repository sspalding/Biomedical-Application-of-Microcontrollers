//Sarah Spalding  4/20/22   Arduino 9
#include <Servo.h>
Servo myservo;                                // create servo object to control a servo,can get to eight
int pos = 0;                                  // variable to store the servo position
void setup() {
  myservo.attach(9);                          // attaches the servo on pin 9 to the servo object
  myservo.write(90);                          //start at the center, servo goes from 0 to 180, so 90 is center
  delay(1000);                                //Wait 1 second
}
void loop() {
  for (pos = 90; pos <= 135; pos += 1) {      // goes from 0 degrees to 180 degrees, increment in steps of 1 degree
    myservo.write(pos);
    delay(15);                                // waits 15ms for the servo to reach the position
  }
  delay(1000);                                //wait 1 second
  for (pos = 135; pos >= 45; pos -= 1) {      // goes from 180 degrees to 0 degrees decrement
    myservo.write(pos);
    delay(15);                                // waits 15ms for the servo to reach the position
  }
  delay(1000);                                //wait 1 second
  for (pos = 45; pos <= 180; pos += 1) {      // goes from 180 degrees to 0 degrees
    myservo.write(pos);
    delay(15);                                // waits 15ms for the servo to reach the position
  }
  delay(1000);                                //wait 1 second  
  for (pos = 180; pos >= 0; pos -= 1) {       // goes from 180 degrees to 0 degrees
    myservo.write(pos);
    delay(15);                                // waits 15ms for the servo to reach the position
  }
  delay(1000);                                //wait 1 second
  for (pos = 0; pos <= 90; pos += 1) {        // goes from 180 degrees to 0 degrees
    myservo.write(pos);
    delay(15);                                // waits 15ms for the servo to reach the position
  }
  delay(1000);                                //wait 1 second
}
