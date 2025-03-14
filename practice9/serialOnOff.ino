int ledPin = 13;

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  if (Serial.available() > 0) {
    String command = Serial.readStringUntil('\n');
    if (command == "ON") {
      digitalWrite(ledPin, HIGH);


    } else if (command == "OFF") {
      digitalWrite(ledPin, LOW);
    }
  }
}