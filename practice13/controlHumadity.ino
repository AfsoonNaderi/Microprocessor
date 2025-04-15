#include <DHT.h>

#define DHTPIN 2
#define DHTTYPE DHT11
#define COOLER_LED 8  // LED سبز
#define HEATER_LED 9  // LED قرمز

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
  dht.begin();
  pinMode(COOLER_LED, OUTPUT);
  pinMode(HEATER_LED, OUTPUT);
}

void loop() {
  delay(2000);  // تأخیر بین قرائت‌ها
  
  float h = dht.readHumidity();
  float t = dht.readTemperature();  // دما بر حسب سلسیوس
  
  if (isnan(h) || isnan(t)) {
    Serial.println("Failed to read from sensor!");
    return;
  }

  Serial.print("Humidity: ");
  Serial.print(h);
  Serial.print("% Temperature: ");
  Serial.print(t);
  Serial.println("°C");

  if (t > 25) {
    Serial.println("Cooler is ON");
    digitalWrite(COOLER_LED, HIGH);
    digitalWrite(HEATER_LED, LOW);
  } else if (t < 24) {
    Serial.println("Heater is ON");
    digitalWrite(COOLER_LED, LOW);
    digitalWrite(HEATER_LED, HIGH);
  } else {
    Serial.println("Temperature is normal, both are OFF");
    digitalWrite(COOLER_LED, LOW);
    digitalWrite(HEATER_LED, LOW);
  }
}