int ledPin = 3;
int analogPin = A0;
int period = 0;

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  period = (1023 - analogRead(analogPin))/2+25;
  digitalWrite(ledPin, HIGH);
  delay(period);
  digitalWrite(ledPin, LOW);
  delay(period);
}
