const int interval = 100;

const int A = 4;
const int B = 5;
const int C = 10;
const int D = 9;
const int E = 8;
const int F = 3;
const int G = 2;
const int COM1 = 12;
const int COM2 = 13;

const int numbers[][7] = {
  {A, B, C, D, E, F},
  {B, C},
  {A, B, D, E, G},
  {A, B, C, D, G},
  {B, C, G, F},
  {A, C, D, F, G},
  {A, C, D, E, F, G},
  {A, B, C},
  {A, B, C, D, E, F, G},
  {A, B, C, D, F, G},
};

void allLow() {
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  digitalWrite(E, LOW);
  digitalWrite(F, LOW);
  digitalWrite(G, LOW);
  digitalWrite(COM1, LOW);
  digitalWrite(COM2, LOW);
}

void setSegment(int COM, int num) {
  allLow();
  digitalWrite(COM, HIGH);
  for (int i : numbers[num]) {
    digitalWrite(i, HIGH);
  } 
}

int number = 0;
  
void setup() {
  // put your setup code here, to run once:
  pinMode(A, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(C, OUTPUT);
  pinMode(D, OUTPUT);
  pinMode(E, OUTPUT);
  pinMode(F, OUTPUT);
  pinMode(G, OUTPUT);
  pinMode(COM1, OUTPUT);
  pinMode(COM2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int i = 0; i < interval/5; i++) {
     setSegment(COM1, number%10);
     delay(5);
     setSegment(COM2, number/10);
     delay(5);
  }
  if (++number == 100) {
    number = 0;
  }
}

  
