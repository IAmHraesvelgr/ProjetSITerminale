int switchState = 0;

void setup() {
  pinMode(0, OUTPUT);
  pinMode(1, OUTPUT);
}

void loop() {
  if (switchState == 0) {
    digitalWrite(0, HIGH);
  }
}
