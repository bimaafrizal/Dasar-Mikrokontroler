void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);//merah1
  pinMode(12, OUTPUT);//kuning1
  pinMode(11, OUTPUT);//hijau2

  pinMode(10, OUTPUT);//merah3
  pinMode(9, OUTPUT);//kuning3
  pinMode(8, OUTPUT);//hijau23

  pinMode(4, OUTPUT);//merah2
  pinMode(3, OUTPUT);//kuning2
  pinMode(2, OUTPUT);//hijau2

  pinMode(7, OUTPUT);//merah4
  pinMode(6, OUTPUT);//kuning4
  pinMode(5, OUTPUT);//hijau4
}

void loop() {
  // put your main code here, to run repeatedly:
  //Lampu 1 Hijau
  digitalWrite(13,0);
  digitalWrite(12,0);
  digitalWrite(11,1);
  digitalWrite(10,1);
  digitalWrite(4,1);
  digitalWrite(7,1);
  delay(1000);

  //Lampu 1 Hijau Kuning
  digitalWrite(12,1);
  digitalWrite(11,1);
  digitalWrite(10,1);
  digitalWrite(4,1);
  digitalWrite(7,1);  
  delay(1000);

  //Lampu 1 Merah
  digitalWrite(13,1);
  digitalWrite(12,0);
  digitalWrite(11,0);
  digitalWrite(10,1);
  digitalWrite(4,1);
  digitalWrite(7,1);  
  delay(1000);

  //Lampu 2 Kuning Merah
  digitalWrite(13,1);
  digitalWrite(10,1);
  digitalWrite(4,1);
  digitalWrite(3,1);
  digitalWrite(7,1);  
  delay(1000);

  //Lampu 2 Hijau
  digitalWrite(13,1);
  digitalWrite(10,1);
  digitalWrite(4,0);
  digitalWrite(3,0);
  digitalWrite(2,1);
  digitalWrite(7,1);  
  delay(1000);

  //Lampu 2 Hijau Kuning
  digitalWrite(13,1);
  digitalWrite(10,1);
  digitalWrite(3,1);
  digitalWrite(2,1);
  digitalWrite(7,1);  
  delay(1000);

  //Lampu 2 Merah
  digitalWrite(13,1);
  digitalWrite(10,1);
  digitalWrite(4,1);
  digitalWrite(3,0);
  digitalWrite(2,0);
  digitalWrite(7,1);  
  delay(1000);

  //Lampu 3 Kuning Merah
  digitalWrite(13,1);
  digitalWrite(10,1);
  digitalWrite(9,1);
  digitalWrite(4,1);
  digitalWrite(7,1);  
  delay(1000);

  //Lampu 3 Hijau
  digitalWrite(13,1);
  digitalWrite(10,0);
  digitalWrite(9,0);
  digitalWrite(8,1);
  digitalWrite(4,1);
  digitalWrite(7,1);  
  delay(1000);

  //Lampu 3 Hijau Kuning
  digitalWrite(13,1);
  digitalWrite(9,1);
  digitalWrite(8,1);
  digitalWrite(4,1);
  digitalWrite(7,1);  
  delay(1000);

  //Lampu 3 Merah
  digitalWrite(13,1);
  digitalWrite(10,1);
  digitalWrite(9,0);
  digitalWrite(8,0);
  digitalWrite(4,1);
  digitalWrite(7,1);  
  delay(1000);

  //Lampu 4 Merah Kuning
  digitalWrite(13,1);
  digitalWrite(10,1);
  digitalWrite(4,1);
  digitalWrite(7,1);
  digitalWrite(6,1);  
  delay(1000);

  //Lampu 4 Hijau
  digitalWrite(13,1);
  digitalWrite(10,1);
  digitalWrite(4,1);
  digitalWrite(7,0);
  digitalWrite(6,0);
  digitalWrite(5,1);  
  delay(1000);

  //lampu 4 Hijau Kuning
  digitalWrite(13,1);
  digitalWrite(10,1);
  digitalWrite(4,1);
  digitalWrite(6,1);
  digitalWrite(5,1);  
  delay(1000);

  //Lampu 4 Merah
  digitalWrite(13,1);
  digitalWrite(10,1);
  digitalWrite(4,1);
  digitalWrite(7,1);
  digitalWrite(6,0);
  digitalWrite(5,0);  
  delay(1000);

  //Lampu 1 Merah Kuning
  digitalWrite(13,1);
  digitalWrite(12,1);
  digitalWrite(10,1);
  digitalWrite(4,1);
  digitalWrite(7,1);
  delay(1000);
}
