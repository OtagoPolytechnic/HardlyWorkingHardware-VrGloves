const int sensorPin = A0;

//Change based on raw(second) value
const int minValue = 20;
const int maxValue = 300;

void setup() {
  Serial.begin(115200);
}

void loop() {
  int raw = analogRead(sensorPin);
  int value = constrain(raw, minValue, maxValue);
  Serial.print(value);
  Serial.print(", ");
  Serial.println(raw);
  delay(20);
}
