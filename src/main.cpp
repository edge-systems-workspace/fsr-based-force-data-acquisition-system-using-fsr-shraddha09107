#include <Arduino.h>
/**
 * @file main.ino
 * @brief Embedded Force Measurement System using FSR
 * @author Shraddha Singh
 * @date 21 February 2026
 *
 * @details
 * Reads analog force data from FSR sensor and
 * displays structured output via Serial Monitor.
 */

 // TODO 1:
 // Define FSR analog pin (Use A0)
int fsrPin = A0;

 // TODO 2:
 // Create variable to store sensor reading
int fsrReading = analogRead(fsrPin);


void setup() {

    // TODO 3:
    // Initialize Serial communication (9600 baud rate)
    Serial.begin(9600);

    // TODO 4:
    // Print system initialization message
    Serial.println("System Initialized...");
}

void loop() {

    // TODO 5:
    // Read analog value from FSR
    fsrReading = analogRead(fsrPin);

    // TODO 6:
    // Print raw ADC value
    Serial.print("FSR Reading: ");
    Serial.println(fsrReading);

    // TODO 7:
    // Apply simple threshold logic (e.g., detect pressure)


    // TODO 8:
    // Print pressure detection message


    // TODO 9:
    // Add delay (500ms or 1 second)

}
