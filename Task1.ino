const int probePin = 2;
const int ledPin = 8;

void setup() {
  pinMode(probePin, INPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  int continuity = digitalRead(probePin);

  if (continuity == HIGH) {
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  }
}