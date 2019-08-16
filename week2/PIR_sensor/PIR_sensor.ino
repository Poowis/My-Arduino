void setup() {
  // put your setup code here, to run once:
  pinMode(2, INPUT);
  pinMode(8, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(2)==LOW) {
    digitalWrite(8, HIGH);
  } else {
    digitalWrite(8,LOW);
  }
  delay(50);
//digitalWrite(8, LOW);
}
