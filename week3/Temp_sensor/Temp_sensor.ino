int input = A0;

void setup() {
  // put your setup code here, to run once:
  pinMode(input, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
//  Serial.println(analogRead(input)*5.0/1023);
  Serial.println((750.0/7.0)*(analogRead(input)*(5.0/1023.0)-1.0)+50.0);
  delay(100);
}
