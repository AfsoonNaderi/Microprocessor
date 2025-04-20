#include<LiquidCrystal.h> 
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2; 
LiquidCrystal lcd(rs, en, d4, d5, d6, d7); 
 
byte Heart[8] = { 
  0b00000, 
  0b01010, 
  0b11111, 
  0b11111, 
  0b01110, 
  0b00100, 
  0b00000, 
  0b00000 
}; 
byte Bell[8] = { 
  0b00100, 
  0b01110, 
  0b01110, 
  0b01110, 
  0b11111, 
  0b00000, 
  0b00100, 
  0b00000 
}; 
byte Alien[8] = { 
  0b11111, 
  0b10101, 
  0b11111, 
  0b11111, 
  0b01110, 
  0b01010, 
  0b11011, 
  0b00000 
}; 
byte Check[8] = { 
  0b00000, 
  0b00001, 
  0b00011, 
  0b10110, 
  0b11100, 
  0b01000, 
  0b00000, 
  0b00000 
}; 
byte Speaker[8] = { 
  0b00001, 
  0b00011, 
  0b01111, 
  0b01111, 
  0b01111, 
  0b00011, 
  0b00001, 
  0b00000 
}; 
byte Sound[8] = { 
  0b00001, 
  0b00011, 
  0b00101, 
  0b01001, 
  0b01001, 
  0b01011, 
  0b11011, 
  0b11000 
}; 
byte Skull[8] = { 
  0b00000, 
  0b01110, 
  0b10101, 
  0b11011, 
  0b01110, 
  0b01110, 
  0b00000, 
  0b00000 
}; 
byte Lock[8] = { 
  0b01110, 
  0b10001, 
  0b10001, 
  0b11111, 
  0b11011, 
  0b11011, 
  0b11111, 
  0b00000 
}; 
 
 
void setup() { 
  lcd.begin(16, 2); 
  lcd.createChar(0, Heart); 
  lcd.createChar(1, Bell); 
  lcd.createChar(2, Alien); 
  lcd.createChar(3, Check); 
  lcd.createChar(4, Speaker); 
  lcd.createChar(5, Sound); 
  lcd.createChar(6, Skull); 
  lcd.createChar(7, Lock); 
  lcd.clear(); 
  lcd.print("Custom Character"); 
 
} 
 
void loop() { 
  lcd.setCursor(0, 1); 
  lcd.write(byte(0)); 
  lcd.setCursor(2, 1); 
  lcd.write(byte(1)); 
  lcd.setCursor(4, 1); 
  lcd.write(byte(2)); 
  lcd.setCursor(6, 1); 
  lcd.write(byte(3)); 
  lcd.setCursor(8, 1); 
  lcd.write(byte(4)); 
  lcd.setCursor(10, 1); 
  lcd.write(byte(5)); 
  lcd.setCursor(12, 1); 
  lcd.write(byte(6)); 
  lcd.setCursor(14, 1); 
  lcd.write(byte(7)); 
 
}