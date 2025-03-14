//تاس و درست کردن عدد رندوم

int led1 = 2;
int led2 = 3;
int led3 = 4;
int led4 = 5;
int led5 = 6;
int led6 = 7;

int long unsigned randNumber;
int val, i = 0;

void setup() {
  Serial.begin(9600);
  randomSeed(analogRead(0));
  pinMode(led1, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);

}

void loop() {
  randNumber = random(2, 8);
  Serial.print("randNumber=");
  Serial.println(randNumber - 1);
  for (int i = 2 ; i <= randNumber ; i++) {
    digitalWrite(i, HIGH);
  }
  while (1);

}
