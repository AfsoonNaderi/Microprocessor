const int lm35pin = A0;
void setup()
{
  Serial.begin(9600);
}

void loop()
{
  int sensorValue = analogRead(lm35pin);
  float voltage = sensorValue* (5.0/1023.0);
  float tempretureC = voltage*100;
  Serial.print ("Tempreture : ");
  Serial.print(tempretureC);
  Serial.println("*C");
  delay(1000);
}