const int pinSuhu = A0;
float suhu, data;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(pinSuhu, INPUT);
  pinMode(13, OUTPUT); //merah
  pinMode(12, OUTPUT); //kuning
  pinMode(11, OUTPUT); //biru
}

void loop() {
  // put your main code here, to run repeatedly:
  data = analogRead(pinSuhu);
  suhu = (data * 500 / 1023);
  Serial.print("data: ");
  Serial.print(data);
  Serial.print(", suhu: ");
  Serial.print(suhu);
  Serial.println();
  delay(1000);

  if (suhu >= 60) {
    digitalWrite(13,1);
    digitalWrite(12,0);
    digitalWrite(11,0);
  }
  if (suhu >= 27 && suhu <=59) {
    digitalWrite(13,0);
    digitalWrite(12,1);
    digitalWrite(11,0);
    }
   if (suhu < 27) {
    digitalWrite(13,0);
    digitalWrite(12,0);
    digitalWrite(11,1);
    }
}
