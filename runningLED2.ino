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
  int i = 6, j = 13;
  while (i < 9 && j > 10) {
    digitalWrite(i, HIGH);
    digitalWrite(j, HIGH);
    delay(500);
    digitalWrite(i, LOW);
    digitalWrite(j, LOW);
    i++;
    j--;
  }
  int a = 9, b = 10;
  while (a > 6 && b < 13) {
    digitalWrite(a, HIGH);
    digitalWrite(b, HIGH);
    delay(500);
    digitalWrite(a, LOW);
    digitalWrite(b, LOW);
    a--;
    b++;
  }
}
