
const int MAX_CURL = 4095;
const int STEP_SIZE = 25;
const int STEP_DELAY_MS = 20;

void setup() {
  Serial.begin(115200);
  delay(2000);
}

void sendFingerValues(int value) {
  Serial.print("A"); Serial.print(value); // Thumb
  Serial.print("B"); Serial.print(value); // Index
  Serial.print("C"); Serial.print(value); // Middle
  Serial.print("D"); Serial.print(value); // Ring
  Serial.print("E"); Serial.println(value); // Pinky
}

void loop() {
  // Curl fingers.
  for (int value = 0; value <= MAX_CURL; value += STEP_SIZE) {
    sendFingerValues(value);
    delay(STEP_DELAY_MS);
  }

  // Ensure the fingers reach the maximum value.
  sendFingerValues(MAX_CURL);
  delay(500);

  // Extend fingers.
  for (int value = MAX_CURL; value >= 0; value -= STEP_SIZE) {
    sendFingerValues(value);
    delay(STEP_DELAY_MS);
  }

  // Ensure the fingers return to zero.
  sendFingerValues(0);
  delay(500);
}
