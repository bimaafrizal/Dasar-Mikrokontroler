const int pingPin = 7; // Trigger Pin of Ultrasonic Sensor
const int echoPin = 6; // Echo Pin of Ultrasonic Sensor
int LED = 13;

void setup()
{
  Serial.begin(9600); // Starting Serial Terminal
  pinMode(LED, OUTPUT);
}
void loop()
{
  long duration, inches, cm;
  pinMode(pingPin, OUTPUT);
  
  digitalWrite(pingPin, LOW);
  delayMicroseconds(2);
  digitalWrite(pingPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(pingPin, LOW);
  pinMode(echoPin, INPUT);

  duration = pulseIn(echoPin, HIGH);
  inches = microsecondsToInches(duration);
  cm = microsecondsToCentimeters(duration);
  
  Serial.print(inches);
  Serial.print("in, ");
  Serial.print(cm);
  Serial.print("cm");
  Serial.println();
  delay(100);

  if(cm >= 901){
    digitalWrite(LED, HIGH);
    delay(1200);
    digitalWrite(LED, LOW);
    delay(1200);
  }
  if(cm <= 900 && cm >= 791){
    digitalWrite(LED, HIGH);
    delay(1000);
    digitalWrite(LED, LOW);
    delay(1000);
  }
  if(cm <= 790 && cm >= 676){
    digitalWrite(LED, HIGH);
    delay(800);
    digitalWrite(LED, LOW);
    delay(800);
  }
  if(cm <= 675 && cm >= 566){
    digitalWrite(LED, HIGH);
    delay(600);
    digitalWrite(LED, LOW);
    delay(600);
  }
  if(cm <= 565 && cm >= 451){
    digitalWrite(LED, HIGH);
    delay(500);
    digitalWrite(LED, LOW);
    delay(500);
  }
  if(cm <= 450 && cm >= 341){
    digitalWrite(LED, HIGH);
    delay(400);
    digitalWrite(LED, LOW);
    delay(400);
  }
  if(cm <= 340 && cm >= 231){
    digitalWrite(LED, HIGH);
    delay(300);
    digitalWrite(LED, LOW);
    delay(300);
  }
  if(cm <= 230 && cm >= 121){
    digitalWrite(LED, HIGH);
    delay(200);
    digitalWrite(LED, LOW);
    delay(200);
  }
  if(cm <= 120 && cm >= 1){
    digitalWrite(LED, HIGH);
    delay(100);
    digitalWrite(LED, LOW);
    delay(100);
  }
  
}
long microsecondsToInches(long microseconds)
{
  return microseconds / 74 / 2;
}
long microsecondsToCentimeters(long microseconds)
{
  // The speed of sound is 340 m/s or 29 microseconds per centimeter.
  // The ping travels out and back, so to find the distance of the object we
  // take half of the distance travelled.
  return microseconds / 29 / 2;
}
