const int R1 = 9;
const int R2 = 8;
const int R3 = 7;
const int R4 = 6;
const int C1 = 5;
const int C2 = 4;
const int C3 = 3;
const int C4 = 2;

void setup() {
  // put your setup code here, to run once:
  pinMode(R1, INPUT);
  pinMode(R2, INPUT);
  pinMode(R3, INPUT);
  pinMode(R4, INPUT);
  pinMode(C1, OUTPUT);
  pinMode(C2, OUTPUT);
  pinMode(C3, OUTPUT);
  pinMode(C4, OUTPUT);
  Serial.begin(9600);

}

char numPad[4][4] = {
  {'1', '2', '3', 'A'},
  {'4', '5', '6', 'B'},
  {'7', '8', '9', 'C'},
  {'*', '0', '#', 'D'}
};

char getNumPad() {
  int col[4] = {C1, C2, C3, C4};
  for (int i = 0; i < 4; i++) {
    digitalWrite(C1, HIGH);
    digitalWrite(C2, HIGH);
    digitalWrite(C3, HIGH);
    digitalWrite(C4, HIGH);
    digitalWrite(col[i], LOW);
    if (digitalRead(R1) == LOW) {
      return numPad[0][i];
    } else if (digitalRead(R2) == LOW) {
      return numPad[1][i]; 
    } else if (digitalRead(R3) == LOW) {
      return numPad[2][i];
    } else if (digitalRead(R4) == LOW) {
      return numPad[3][i];
    }
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(getNumPad());
//  Serial.println(digitalRead(C2));
}
