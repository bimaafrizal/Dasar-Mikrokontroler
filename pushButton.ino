const int button = 3;
int buttonSaya = 0;
void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT); //Merah1
  pinMode(12, OUTPUT);  //Kuning1
  pinMode(11, OUTPUT);  //Hijau1
  pinMode(10, OUTPUT);  //Merah2
  pinMode(9, OUTPUT);   //Hijau2
  pinMode(8, OUTPUT); //kUNING
  pinMode(3, INPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  buttonSaya = digitalRead(button);
  if(buttonSaya == 1)
  {
  digitalWrite(13,1);
  digitalWrite(12,0);
  digitalWrite(11,0);
  digitalWrite(10,0);
  digitalWrite(9,1);
  digitalWrite(8,0);
  delay(5000);
  digitalWrite(9,0);
  }
  else if(buttonSaya == 0)
  {
  //Merah
  digitalWrite(13,1);
  digitalWrite(12,0);
  digitalWrite(11,0);
  digitalWrite(10,1);
  digitalWrite(9,0);
  digitalWrite(8,0);
  delay(3000);

  //Kuning
  digitalWrite(13,0);
  digitalWrite(12,1);
  digitalWrite(11,0);
  digitalWrite(10,1);
  digitalWrite(9,0);
  digitalWrite(8,0);
  delay(3000);

 //Hijau
  digitalWrite(13,0);
  digitalWrite(12,0);
  digitalWrite(11,1);
  digitalWrite(10,1);
  digitalWrite(9,0);
  digitalWrite(8,0);
  delay(3000);
  }
}
