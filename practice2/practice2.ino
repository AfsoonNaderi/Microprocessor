//روشن کردن ال ای دی با دکمه
int LedPin = 8 ;
int val ;

void setup() {
  // put your setup code here, to run once:
  pinMode (LED_BUILTIN , OUTPUT) ;
  pinMode (LedPin,INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  int val = digitalRead(LedPin);
  digitalWrite(LED_BUILIN,val);

}
