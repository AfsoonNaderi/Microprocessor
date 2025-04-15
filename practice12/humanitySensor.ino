#include <DHT.h> 
#define DHTPIN 2 
#define DHTTYPE DHT11 
DHT dht(DHTPIN, DHTTYPE); 
void setup() { 
 Serial.begin(9600); 
dht.begin(); 
} 
void loop() { 
 // Delay before reading data 
 delay(2000); 
 // Read humidity and temperature 
 float h = dht.readHumidity(); 
 float t = dht.readTemperature(); 
  
// Check if reading was successful 
 if (isnan(h) || isnan(t)) { 
 Serial.println("Failed to read from sensor!"); 
 return; 
 } 
 // Display data in the serial monitor 
 Serial.print("Humidity: "); 
 Serial.print(h); 
 Serial.print("% Temperature: "); 
 Serial.print(t); 
 Serial.println("°C"); 
} 