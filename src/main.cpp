#include <Arduino.h>
const uint8_t SENSOR_PIN = A0;
const unsigned long SAMPLE_MS = 500UL;
int value = 0;
void setup() {
    // Initialize serial for debugging/monitoring
    Serial.begin(9600);
    // Configure the sensor pin as input (analog pins on most boards are inputs by default,
    // but calling pinMode keeps the intent explicit).
    pinMode(SENSOR_PIN, INPUT);
}
void loop() {
    // Read the sensor and output the raw ADC value
    value = analogRead(SENSOR_PIN);
    Serial.println(value);

    // Simple blocking delay between samples
    delay(SAMPLE_MS);
}