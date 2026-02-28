/**
* @file main.cpp
 * @brief Simple Arduino sketch to read an analog force/pressure sensor and print raw ADC values.
 *
 * @details
 * This minimal example reads the analog input connected to the sensor (A0) and prints the
 * 10-bit ADC value (0-1023) to the serial console at 9600 baud every SAMPLE_MS milliseconds.
 * It's intended as a starting point for force/pressure sensors; convert the ADC reading to
 * engineering units using a calibration curve for your specific sensor.
 *
 * @author Lavanya
 * @date 2026-02-28
 * @version 0.1
 */
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