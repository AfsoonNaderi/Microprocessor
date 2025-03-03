void setup() {
  pinMode (LED-BUILTIN , OUTPUT);

}

void loop() {
  digitalWrite (LED-BUILTIN , HIGH);
  delay(1000);

  digitalWrite(LED-BUILTIN , LOW);
  delay(1000);
}
