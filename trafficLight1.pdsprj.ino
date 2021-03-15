void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);//merah1
  pinMode(12, OUTPUT);//kuning1
  pinMode(11, OUTPUT);//hijau2

  pinMode(10, OUTPUT);//merah2
  pinMode(9, OUTPUT);//kuning2
  pinMode(8, OUTPUT);//hijau2
}

void loop() {
  // put your main code here, to run repeatedly:
  //LAMPU 1 HIJAU
  digitalWrite(11, 1);
  digitalWrite(10, 1);
  digitalWrite(13, 0);
  digitalWrite(8,0);
  digitalWrite(12, 0);
  digitalWrite(9, 0);
  delay(1000);

  //LAMPU 1 HUIJAU KUNING
  digitalWrite(11, 1);
  digitalWrite(10, 1);
  digitalWrite(12, 1);
  digitalWrite(9, 1);
  delay(1000);

  //LAMPU 2 HIJAU
  digitalWrite(13, 1);
  digitalWrite(8,1);
  digitalWrite(11, 0);
  digitalWrite(10, 0);
  digitalWrite(12, 0);
  digitalWrite(9, 0);
  delay(1000);

  //LAMPU 2 HIJAU KUNING
  digitalWrite(13, 1);
  digitalWrite(8,1);
  digitalWrite(12, 1);
  digitalWrite(9, 1);
  delay(1000);
}
