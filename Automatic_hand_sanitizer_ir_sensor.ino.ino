void setup()
{
  pinMode(2,INPUT); //IRsensor
  pinMode(8,OUTPUT); //Water Pump
  Serial.begin(9600);
}
int readPin=1;
void loop()
{
  readPin = digitalRead(2);
  if(readPin == HIGH)
  {
    digitalWrite(8,LOW);
    Serial.println("Water pump is OFF");
    delay(500);
  }
  else
  {
    digitalWrite(8,HIGH );
    Serial.println("Water Pump is ON");
    delay(500);
  }
}
