// C++ code
//

const int sensorPin= A0;
const int ledPin= 9;

//int lightCal;
int lightVal;

void setup()
{
  pinMode(ledPin, OUTPUT);
  pinMode(sensorPin, INPUT);
}

void loop()
{
  lightVal=analogRead(sensorPin);
    
  if(lightVal<50)
  {
    digitalWrite(ledPin, HIGH);
  }
  
  else
  {
  digitalWrite(ledPin, LOW);
  }
  
}