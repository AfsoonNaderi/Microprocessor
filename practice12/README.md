# 🌡️ دماسنج و رطوبت‌سنج دیجیتال با آردوینو و DHT11

پروژه‌ای ساده اما کاربردی برای اندازه‌گیری دما و رطوبت محیط با استفاده از سنسور DHT11 و نمایش اطلاعات در Serial Monitor. این پروژه پایه‌ای عالی برای یادگیری کار با سنسورهای دیجیتال در آردوینو محسوب می‌شود.

---

## 📦 تجهیزات مورد نیاز

| قطعه                  | تعداد | توضیحات                  |
|-----------------------|--------|---------------------------|
| Arduino UNO           | 1      | میکروکنترلر اصلی پروژه   |
| DHT11 Sensor          | 1      | سنسور دما و رطوبت        |
| Breadboard            | 1      | برای ساخت مدار بدون لحیم |
| Jumper Wires          | چند عدد| برای اتصال قطعات         |

---

## ⚙️ اتصالات

- `VCC` سنسور DHT11 → پین 5V آردوینو  
- `GND` سنسور DHT11 → پین GND آردوینو  
- `DATA` سنسور DHT11 → پین دیجیتال شماره 2 آردوینو

---

## 💻 کد آردوینو

```cpp
#include <DHT.h> 

#define DHTPIN 2         // پایه‌ای که به DATA سنسور وصل شده
#define DHTTYPE DHT11    // نوع سنسور

DHT dht(DHTPIN, DHTTYPE);

void setup() { 
  Serial.begin(9600); 
  dht.begin(); 
} 

void loop() { 
  delay(2000);  // تأخیر بین قرائت‌ها

  float h = dht.readHumidity(); 
  float t = dht.readTemperature(); 
  
  if (isnan(h) || isnan(t)) { 
    Serial.println("Failed to read from sensor!"); 
    return; 
  } 

  Serial.print("Humidity: "); 
  Serial.print(h); 
  Serial.print("% Temperature: "); 
  Serial.print(t); 
  Serial.println("°C"); 
}
