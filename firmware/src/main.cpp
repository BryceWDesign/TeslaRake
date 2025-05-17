#include <Arduino.h>

void setup() {
  Serial.begin(115200);
  Serial.println("TeslaRake firmware starting...");
  // Add your init code here
}

void loop() {
  Serial.println("Running main loop...");
  delay(1000);
}
