# 🚦 پروژه چراغ راهنمایی با آردوینو

## 🎯 هدف آزمایش
در این پروژه، یک سیستم چراغ راهنمایی پیاده‌سازی شده است که طبق یک سیکل مشخص، چراغ‌های سبز، زرد و قرمز را کنترل می‌کند.

## 🛠 وسایل مورد نیاز
- آردوینو (Arduino Uno)
- LED سبز، زرد و قرمز
- مقاومت 220 اهم (برای هر LED)
- برد بورد و سیم جامپر

## 📝 شرح آزمایش
1. **اتصالات مدار:**
   - LED سبز را به پین **4** آردوینو متصل کنید.
   - LED زرد را به پین **5** آردوینو متصل کنید.
   - LED قرمز را به پین **6** آردوینو متصل کنید.
   - هر LED را از طریق یک مقاومت 220 اهم به زمین (GND) متصل کنید.

2. **نحوه عملکرد:**
   - چراغ **سبز** به مدت 2 ثانیه روشن می‌شود.
   - سپس، چراغ **زرد** به مدت 1 ثانیه روشن شده و چراغ سبز خاموش می‌شود.
   - در نهایت، چراغ **قرمز** به مدت 2 ثانیه روشن شده و چراغ زرد خاموش می‌شود.
   - این چرخه به طور مداوم تکرار می‌شود.

## 📜 کد آردوینو
```cpp
const int GREEN_LED = 4;
const int YELLOW_LED = 5;
const int RED_LED = 6;

void setup() {
  pinMode(GREEN_LED, OUTPUT);
  pinMode(YELLOW_LED, OUTPUT);
  pinMode(RED_LED, OUTPUT);
}

void loop() {
  digitalWrite(GREEN_LED, HIGH);
  digitalWrite(YELLOW_LED, LOW);
  digitalWrite(RED_LED, LOW);
  delay(2000);

  digitalWrite(GREEN_LED, LOW);
  digitalWrite(YELLOW_LED, HIGH);
  digitalWrite(RED_LED, LOW);
  delay(1000);

  digitalWrite(GREEN_LED, LOW);
  digitalWrite(YELLOW_LED, LOW);
  digitalWrite(RED_LED, HIGH);
  delay(2000);
}
```

## 📌 نکات مهم
- حتماً از مقاومت برای LEDها استفاده کنید تا از آسیب دیدن آن‌ها جلوگیری شود.
- ترتیب خاموش و روشن شدن LEDها باید دقیق رعایت شود تا عملکرد چراغ راهنمایی صحیح باشد.
