// C++ code
//
const int LM35Pin=A2;
int val;
int data;

void setup()
{
  pinMode(LM35Pin, INPUT);
  Serial.begin(9600);
}

void loop()
{
  val=analogRead(LM35Pin);
  data=(val*5)/10;
  Serial.print("Temp in Celcius: ");
  Serial.print(data);
  Serial.println("C");
  delay(5000);
}