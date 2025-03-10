// C++ code
int buttonPin = 8 ;
int ledPin = 2 ;

void setup() {
  pinMode(buttonPin , INPUT_PULLUP);
  pinMode(ledPin , OUTPUT);
}

void loop() {
  int buttonState = digitalRead(buttonPin);

  if (buttonState == LOW) {
    digitalWrite(ledPin , HIGH);
  } else {
    digitalWrite(ledPin , LOW);
  }
}
