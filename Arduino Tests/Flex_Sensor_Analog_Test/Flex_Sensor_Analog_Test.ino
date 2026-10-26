const int sensorPin = A0;

void setup() {
  Serial.begin(115200);
}

void loop() {
  Serial.println(analogRead(sensorPin) / 100);
  delay(20);
}
