// C++ code
//
const int LM35Pin=A2;
const int GREEN = 13;   // Green LED pin
const int BLUE = 12;    // Blue LED pin
const int RED = 11;
int val;
int data;

void setup()
{
  pinMode(LM35Pin, INPUT);
  pinMode(GREEN,OUTPUT);
  pinMode(BLUE,OUTPUT);
  pinMode(RED,OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  val=analogRead(LM35Pin);
  data=(val*5)/10;
  
  if(data>=10 && data<=60)
  {
    digitalWrite(RED, HIGH);
    
     digitalWrite(BLUE, LOW);
     digitalWrite(GREEN, LOW);
  }
  
   if(data>=61 && data<=120)
  {
    digitalWrite(RED, LOW);
    
     digitalWrite(BLUE, HIGH);
     digitalWrite(GREEN, LOW);
  }
  
     if(data>=121 && data<=180)
  {
    digitalWrite(RED, LOW);
    
     digitalWrite(BLUE, LOW);
     digitalWrite(GREEN, HIGH);
  }
  
 
  Serial.print("Temp in Celcius: ");
  Serial.print(data);
  Serial.println("C");
  delay(1000);
}