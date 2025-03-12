//Dancing light

#define key1 digitalRead(A0)
#define key2 digitalRead(A1)

void setup() {
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);

  pinMode(0, OUTPUT);
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
}

void loop() {
  int i, a;
  int dancingLight1[4][4] = {
    { 0, 0, 0, 1 },
    { 0, 0, 1, 0 },
    { 0, 1, 0, 0 },
    { 1, 0, 0, 0 }
  };

  int dancingLight2[2][4] = {
    { 0, 1, 1, 0 },
    { 1, 0, 0, 1 }
  };

  for (i = 0; i <= 3; i++) {
    digitalWrite(i, 0);
  }

  if (key1 == 0) {
    for (a = 0; (a <= 3) & (key2 == 1); a++) {
      for (i = 0; i <= 3; i++) {
        digitalWrite(i, dancingLight1[a][i]);
      }

      delay(200);
    }
  }

  if (key2 == 0) {
    for (a = 0; (a <= 1) & (key1 == 1); a++) {
      for (i = 0; i <= 3; i++) {
        digitalWrite(i, dancingLight2[a][i]);
      }

      delay(300);
    }
  }
}