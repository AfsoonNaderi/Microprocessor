const int ldrPin = A0; 
const int buzzerPin = 8; 
const int ledPin = 9; 
 
void setup() { 
  pinMode(buzzerPin, OUTPUT); 
  pinMode(ledPin, OUTPUT); 
  Serial.begin(9600); 
} 
 
void loop() { 
  int ldrValue = analogRead(ldrPin); 
  Serial.println(ldrValue); 
 
  if (ldrValue > 800) { 
    digitalWrite(ledPin, LOW); 
    tone(buzzerPin, 1000); 
  } else { 
    digitalWrite(ledPin, HIGH); 
    noTone(buzzerPin); 
  } 
 
  delay(200); 
}