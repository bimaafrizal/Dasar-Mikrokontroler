void setup() {
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);

}

void loop() {
  int i = 13;
  while (i >= 6) {
    digitalWrite(i, HIGH);
    delay(500);
    digitalWrite(i, LOW);
    i--;
  }
  int a = 7;
  while(a <= 13) {
    digitalWrite(a, HIGH);
    delay(500);
    digitalWrite(a, LOW);
    a++;
  }
}
