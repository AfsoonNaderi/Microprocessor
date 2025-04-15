int ledPin = 9;  
int val = 0;  
void setup() { 
 pinMode(ledPin, OUTPUT);  
Serial.begin(9600); 
} 
void loop() { 
 val = analogRead(A0);  
analogWrite(ledPin, val / 4); 
Serial.print(val); 
}