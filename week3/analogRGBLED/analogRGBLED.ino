int lightR = 3;
int lightG = 5;
int lightB = 6;

int inputR = A0;
int inputG = A1;
int inputB = A2;

void setup() {
  // put your setup code here, to run once:
  pinMode(lightR, OUTPUT);
  pinMode(lightG, OUTPUT);
  pinMode(lightB, OUTPUT);
  pinMode(inputR, OUTPUT);
  pinMode(inputG, OUTPUT);
  pinMode(inputB, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(lightR, analogRead(inputR)/4);
  analogWrite(lightG, analogRead(inputG)/4);
  analogWrite(lightB, analogRead(inputB)/4);
  Serial.print(analogRead(inputR));
  Serial.print(analogRead(inputG));
  Serial.println(analogRead(inputB));
}
