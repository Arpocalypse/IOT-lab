// C++ code
//

const int ledPin=13;
const int regPin=A0;
int sensorValue=0;

void setup()
{
  pinMode(regPin, INPUT);
  pinMode(ledPin, OUTPUT);
}

void loop()
{
  sensorValue=analogRead(regPin);
  
  digitalWrite(ledPin, HIGH);
  delay(sensorValue); // Wait for 1000 millisecond(s)
  digitalWrite(ledPin, LOW);
  delay(sensorValue); // Wait for 1000 millisecond(s)
}