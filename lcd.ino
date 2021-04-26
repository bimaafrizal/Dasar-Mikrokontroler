#include <LiquidCrystal.h>
LiquidCrystal lcd(8,9,4,5,6,7);
void setup() {
  // put your setup code here, to run once:
  lcd.begin(16,2);
  lcd.setCursor(0,0);
  lcd.print("Lab Mikrokontroller");
  lcd.setCursor(0,1);
  lcd.print("Praktikum Mikrokontroller");
}

void loop() {
  // put your main code here, to run repeatedly:
  text1();
  text2();
}
void text2() {
  lcd.setCursor(0,1);
  lcd.print("Praktikum Mikrokontroller");
  delay(300);
  blink();
  lcd.clear();
}

void text1() {
  for (int i = 16; i > 0 ;i--) {
  lcd.setCursor(i, 0);
  lcd.print("Lab Mikrokontroller");
  delay(300);
  blink();
  lcd.clear();
  }
}

void blink() {
  lcd.noDisplay();
  delay(500);
  lcd.display();
  delay(500);
}
