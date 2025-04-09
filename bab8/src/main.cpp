#include <Arduino.h>

// Pin untuk LED merah, kuning, dan hijau pada ESP32
const int redPin = 32;
const int yellowPin = 33;
const int greenPin = 26;

void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(yellowPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
}

void loop() {
  // Lampu hijau menyala selama 5 detik
  digitalWrite(greenPin, HIGH);
  delay(5000);
  digitalWrite(greenPin, LOW);

  // Lampu kuning menyala selama 2 detik
  digitalWrite(yellowPin, HIGH);
  delay(2000);
  digitalWrite(yellowPin, LOW);

  // Lampu merah menyala selama 5 detik
  digitalWrite(redPin, HIGH);
  delay(5000);
  digitalWrite(redPin, LOW);
}
