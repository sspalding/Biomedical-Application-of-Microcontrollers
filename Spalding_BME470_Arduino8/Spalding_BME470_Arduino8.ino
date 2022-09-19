//Sarah Spalding  4/15/22   Ardiono 8
#define E1 5                  // Enable Pin for motor - connected to Enable1 of the chip
#define I2 3                  // Control pin 1 for motor - connected to input2 of the chip
#define I1 4                  // Control pin 2 for motor - connected to input1 of the chip

void setup() {                //set all three pins as outputs
  pinMode(E1, OUTPUT);
  pinMode(I1, OUTPUT);
  pinMode(I2, OUTPUT);
}

void loop() {
  analogWrite(E1, 165);       //PWM: duty cycle of 153, Run in half speed
  digitalWrite(I2, HIGH);     //motor spins backwards (controls H bridge in the L293d chip)
  digitalWrite(I1, LOW);
  delay(10000);               //Delay for 10 seconds           
  digitalWrite(E1, LOW);      //turn motor off
  delay(2000);                //delay for 2 seconds
  analogWrite(E1, 255);       //PWM: duty cycle of 255, Run in full speed
  digitalWrite(I2, LOW);      //motor spins forwards (controls H bridge in the L293d chip)
  digitalWrite(I1, HIGH);
  delay(10000);               //delay for 10 seconds
}
