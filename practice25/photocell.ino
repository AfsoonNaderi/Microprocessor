const int photoResistorPin = A0; 
const int ledPin = 9;            
 
void setup() { 
  pinMode(ledPin, OUTPUT); 
  Serial.begin(9600); 
} 
 
void loop() { 
  int sensorValue = analogRead(photoResistorPin);  
 
   
  int ledBrightness = map(sensorValue, 0, 1023, 255, 0); 
 
  analogWrite(ledPin, ledBrightness);  
 
  Serial.print("Light: "); 
  Serial.print(sensorValue); 
  Serial.print("  Brightness: "); 
  Serial.println(ledBrightness); 
 
  delay(100); 
}