# روشن و خاموش کردن LED با دکمه در آردوینو

این پروژه با استفاده از **یک دکمه فشاری (Push Button)**، **LED داخلی آردوینو (LED_BUILTIN)** را خاموش و روشن می‌کند.  
از مقاومت‌های خارجی استفاده نشده و به جای آن، از **Pull-up داخلی آردوینو** استفاده شده است.  

## 🚀 نحوه عملکرد  
- **وقتی دکمه فشار داده شود** → LED روشن می‌شود.  
- **وقتی دکمه رها شود** → LED خاموش می‌شود.  

## 🔧 قطعات مورد نیاز  
- **Arduino Uno**  
- **Push Button**  
- **سیم‌های اتصال**  

## 📜 کد آردوینو  

```cpp
int LedPin = 8;  
int val;

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);  
  pinMode(LedPin, INPUT_PULLUP);
}

void loop() {
  val = digitalRead(LedPin);  
  digitalWrite(LED_BUILTIN, val);
}
