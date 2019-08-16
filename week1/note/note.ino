int speaker = 9;

int 
a = 1136,
b = 1014,
c = 1915,
d = 1700,
e = 1519,
f = 1432,
g = 1275;

int melody[] = {e,e,e,e,e,e,e,g,c,d,e,f,f,f,f,f,e,e,e,e,d,d,e,d,g};
int noteDurations[] = { 1, 1, 2, 1, 1, 2, 1, 1, 1, 1, 4, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2};

void setup() {
  pinMode(speaker, OUTPUT);

  for (int i =0; i < 26; i++) {
    int noteDuration = 1000/(noteDurations[i]*2);
    tone(speaker, melody[i], noteDuration);
    int pause = noteDuration * 1.30;
    delay(pause);
    noTone(8);
  }
}

void loop() {

}
