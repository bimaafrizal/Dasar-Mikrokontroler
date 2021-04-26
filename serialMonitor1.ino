  int no1= 1;
  int no2= 2;
  int no3= 3;
  int no4= 4;
  int no5= 5;
  int no6= 6;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("A"); 
  Serial.println(no1); 
  Serial.println(no2); 
  Serial.println(no3); 
  Serial.println("B"); 
  Serial.println(no4); 
  Serial.println(no5); 
  Serial.println(no6); 
}
