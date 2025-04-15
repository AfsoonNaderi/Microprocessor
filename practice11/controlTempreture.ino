const int lm35Pin = A0;
const int coolerLedPin = 8;  // LED سبز برای کولر
const int heaterLedPin = 9;  // LED قرمز برای هیتر

void setup() {
  Serial.begin(9600);
  pinMode(coolerLedPin, OUTPUT);
  pinMode(heaterLedPin, OUTPUT);
}

void loop() {
  int sensorValue = analogRead(lm35Pin); 
  float voltage = sensorValue * (5.0 / 1023.0); 
  float temperatureC = voltage * 100; 
  
  Serial.print("Temperature: "); 
  Serial.print(temperatureC); 
  Serial.println(" °C"); 

  if (temperatureC > 25) {
    Serial.println("Cooler is ON");
    digitalWrite(coolerLedPin, HIGH);  // روشن کردن LED سبز
    digitalWrite(heaterLedPin, LOW);   // خاموش کردن LED قرمز
  } else if (temperatureC < 24) {
    Serial.println("Heater is ON");
    digitalWrite(coolerLedPin, LOW);   // خاموش کردن LED سبز
    digitalWrite(heaterLedPin, HIGH);  // روشن کردن LED قرمز
  } else {
    Serial.println("Temperature is normal, both are OFF");
    digitalWrite(coolerLedPin, LOW);   // خاموش کردن هر دو
    digitalWrite(heaterLedPin, LOW);
  }

  delay(1000);
}