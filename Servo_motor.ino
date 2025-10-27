// C++ code
//
#include<Servo.h>

Servo myservo;
int pos=0;


void setup()
{
  myservo.attach(9);// because we attach yellow wire in 9no. digital pin
}

void loop()
{
  for( pos=0; pos<=180; pos+= 5)// Turn in 5 degree angle 
  {
    myservo.write(pos);
    delay(500);
  }
  delay(2000);
  
  for( pos=180; pos<=0; pos+= 10)// Turn in 10 degree angle in reverse side 
  {
    myservo.write(pos);
    delay(800)
  }
  delay(2000);
   
}