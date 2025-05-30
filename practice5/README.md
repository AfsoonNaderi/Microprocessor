# README برای پروژه INPUT_PULLUP در آردوینو

## 📝 عنوان آزمایش:
کنترل LED با دکمه و استفاده از مقاومت داخلی PULLUP در آردوینو

---

## 🎧 وسایل مورد نیاز:

| نام قطعه          | تعداد | توضیحات |
|------------------|------|---------|
| برد آردوینو     | 1    | مدل Uno یا مشابه |
| دکمه فشاری      | 1    | جهت روشن و خاموش کردن LED |
| LED            | 1    | جهت نمایش وضعیت دکمه |
| مقاومت 220Ω    | 1    | برای محدود کردن جریان LED |
| سیم جامپر      | چند عدد | برای اتصال قطعات |
| برد بورد        | 1    | برای بستن مدار بدون لحیم‌کاری |

---

## 🎯 هدف آزمایش:
هدف این پروژه، **روشن و خاموش کردن LED** با استفاده از یک **دکمه فشاری** است. اما به جای استفاده از یک **مقاومت خارجی Pull-down**، از **مقاومت داخلی Pull-up آردوینو** استفاده می‌کنیم تا مدار ساده‌تر شود.

---

## 🔧 شرح آزمایش و نحوه‌ی عملکرد:
1. آردوینو دارای مقاومت‌های داخلی **Pull-up** است که می‌توان آن‌ها را با **`INPUT_PULLUP`** فعال کرد.
2. وقتی دکمه **فشرده نمی‌شود**، ورودی به دلیل مقاومت داخلی در سطح **HIGH (1)** قرار دارد.
3. وقتی دکمه **فشرده شود**، مسیر به **GND متصل می‌شود** و مقدار ورودی به **LOW (0)** تغییر می‌کند.
4. در این برنامه، وقتی دکمه فشرده شود، LED روشن می‌شود و وقتی رها شود، LED خاموش می‌شود.

---

## 🖥 کد آردوینو:

```cpp
int buttonPin = 8;  // پین متصل به دکمه
int ledPin = 2;     // پین متصل به LED

void setup() {
  pinMode(buttonPin, INPUT_PULLUP);  // فعال کردن مقاومت داخلی Pull-up
  pinMode(ledPin, OUTPUT);
}

void loop() {
  int buttonState = digitalRead(buttonPin); // خواندن وضعیت دکمه

  if (buttonState == LOW) {  // اگر دکمه فشرده شده بود
    digitalWrite(ledPin, HIGH); // روشن کردن LED
  } else {
    digitalWrite(ledPin, LOW);  // خاموش کردن LED
  }
}
```

---

## 🔐 نحوه‌ی بستن مدار در Tinkercad یا برد بورد فیزیکی:
1. **پایه یکی از دکمه را به GND وصل کنید.**
2. **پایه دیگر دکمه را به پین 8 آردوینو متصل کنید.**
3. **LED را به پین 2 آردوینو متصل کنید.**
4. **یک مقاومت 220Ω بین پایه مثبت LED و پین 2 قرار دهید.**
5. **نیازی به مقاومت Pull-down نیست، چون از Pull-up داخلی آردوینو استفاده می‌کنیم.**

---

## 🎬 نتیجه‌ی نهایی:
✅ **با فشردن دکمه، LED روشن می‌شود.**
✅ **با رها کردن دکمه، LED خاموش می‌شود.**
✅ **مدار ساده‌تر شده و نیازی به مقاومت خارجی Pull-down ندارد.**


