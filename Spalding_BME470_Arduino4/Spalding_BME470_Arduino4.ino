//Sarah Spalding
//3-16-22
int buzzer = 12;                     // pin the buzzer is connected to
void setup() 
{
  pinMode(buzzer,OUTPUT);           //set the buzzer pin as an output

}
void loop() {
  unsigned char i;
  while(1)
  {
    for(i=0;i<80;i++)               //output a freq
    {
      digitalWrite(buzzer,HIGH);
      delay(1);                     //wait 1 ms
      digitalWrite(buzzer,LOW);
      delay(1);                     //wait 1 ms
    }
    for(i=0;i<100;i++)              //output another freq
    {
      digitalWrite(buzzer,HIGH);
      delay(2);                     //wait 2 ms
      digitalWrite(buzzer,LOW);
      delay(2);                     //wait 2 ms
    }
  }
  }
