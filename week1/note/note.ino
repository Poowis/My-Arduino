int speaker = 8;

int 
a = 440,
b = 495,
c = 262,
d = 294,
e = 330,
f = 349,
g = 392;

int melody[] = {e,e,e,e,e,e,e,g,c,d,e,f,f,f,f,f,e,e,e,e,d,d,e,d,g};
int noteDurations[] = { 1, 1, 2, 1, 1, 2, 1, 1, 1, 1, 4, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2};

void setup() {
  pinMode(speaker, OUTPUT);

  for (int i =0; i < 26; i++) {
    int noteDuration = 1000/noteDurations[i];
    tone(speaker, melody[i], noteDuration);
    int pause = noteDuration * 1.30;
    delay(pause);
    noTone(8);
  }
}

void loop() {

}
