//Sarah Spalding, 3-8-22
/*  - Print out your name and the date on the screen. 
    - print out the integer values  0, 2, 4, 6, 8, 10,...... 
    - Print the integer values: 0.00, 2.00, 4.00, 6.00, 8.00, 10.00 ...... 
    - The 0 and 0.00 should be on one line followed on a new line by  2 and 2.00, followed on the next line by 4 and 4.00, etc.  
    - Note: each line must be prefaced with the actual Atmega 328 run time. 
    - Each line should be displayed at a 2 Hz rate. 
 */
int number = 0;

void setup() {                                  //will only happen once at the beginning
  Serial.begin(9600);                           //tells to microcontroller what baud rate to transmit data at
  Serial.print(millis());                       //displays the run time
  Serial.print(" ");                            //puts a space between run time and my name
  Serial.println("Sarah Spalding, 3-8-2022");   //displays my name and the date      
}

void loop() {                                   //will loop continously while the code runs
  Serial.print(millis());                       //dispalys the tun time
  Serial.print(" ");                            //puts a space between the run time and the first number
  Serial.print(number);                         //prints the first number
  Serial.print(" ");                            //puts a space between the first and second number
  Serial.print(number);                         //Prints the number again
  Serial.print(".00");                          //puts .00 after the second number
  Serial.println();                             //starts a new line
  number = number+2;                            //increases the number by two 
  delay(500);                                   //delay for half a second, 2 hz frequency
}
