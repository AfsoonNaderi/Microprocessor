int led = 2 ;
void setup() {
 pinMode (A0 , INPUT);
 pinMode (led , OUTPUT);
 Serial.begin(9600);
}
void loop() {
 int IR;
 IR = digitalRead(A0);
 if (IR == 0)
 {
 Serial.print("Object detected = ");
 Serial.println (IR);
 digitalWrite(led , HIGH);
 }
 else {
 Serial.print("Not detected = ");
 Serial.println (IR);
 digitalWrite(led , LOW);
 }
 delay(300);
}