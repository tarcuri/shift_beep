int beeped = 0;

void setup() {
  pinMode(13, OUTPUT);
  pinMode(6, INPUT);
}

void loop() {
  int light_on = digitalRead(6);
  if (!beeped && light_on == HIGH) {
    beep(60);
    beeped = 1;
  } else if (beeped && light_on == LOW) {
    beeped = 0;
  }
}

void beep(unsigned char delayms) {
  int beeps = 3;
  for (int i = 0; i < beeps; i++) {
    digitalWrite(13, HIGH);   // turn the LED on (HIGH is the voltage level)
    tone(3, 2800);
  
    delay(delayms);
    
    digitalWrite(13, LOW);    // turn the LED off by making the voltage LOW
    noTone(3);
  
    delay(delayms);
  }
}

