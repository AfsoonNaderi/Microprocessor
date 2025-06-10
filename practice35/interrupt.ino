int pin = 2; // interrupt pin
volatile int state = LOW;

void setup() {
  pinMode(13, OUTPUT);
  pinMode(pin, INPUT_PULLUP); // استفاده از مقاومت pull-up داخلی
  Serial.begin(9600); // شروع ارتباط سریال
  attachInterrupt(digitalPinToInterrupt(pin), blink, CHANGE);
}

void loop() {
  digitalWrite(13, state);
}

void blink() {
  state = !state;
  Serial.print("Interrupt! State is now: ");
  Serial.println(state == HIGH ? "HIGH" : "LOW");
}