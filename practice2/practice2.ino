//روشن کردن ال ای دی با دکمه
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