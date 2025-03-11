//برنامه ای بنویسید که یک چراغ راهنمایی را اجرا کند
// دو ثانیه سبز ، یک ثانیه زرد و دو ثانیه قرمز

const int GREEN_LED = 4;
const int YELLOW_LED = 5;
const int RED_LED = 6;

void setup() {
  pinMode(GREEN_LED, OUTPUT);
  pinMode(YELLOW_LED, OUTPUT);
  pinMode(RED_LED, OUTPUT);
}

void loop() {

  digitalWrite(GREEN_LED, HIGH);
  digitalWrite(YELLOW_LED, LOW);
  digitalWrite(RED_LED, LOW);

  delay(2000);

  ///////////////////////////////

  digitalWrite(GREEN_LED, LOW);
  digitalWrite(YELLOW_LED, HIGH);
  digitalWrite(RED_LED, LOW);

  delay(1000);

  ///////////////////////////////

  digitalWrite(GREEN_LED, LOW);
  digitalWrite(YELLOW_LED, LOW);
  digitalWrite(RED_LED, HIGH);

  delay(2000);

}
