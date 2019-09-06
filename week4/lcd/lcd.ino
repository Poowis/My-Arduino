#include <LiquidCrystal.h>

LiquidCrystal lcd(2, 3, 4, 5, 6, 7);

const int trig = 8;
const int echo = 9;

void setup() {
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  lcd.begin(16, 2);
  Serial.begin(9600);
}

void loop() {
  
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);
  int pulse = pulseIn(echo, HIGH);
  lcd.clear();
  lcd.print(pulse/29/2);
  Serial.print(analogRead(A0));
  delay(100);
} 
