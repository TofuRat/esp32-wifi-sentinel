#include <Arduino.h>

void setup() {
    Serial.begin(115200);
    delay(2000);

    Serial.println();
    Serial.println("==========================");
    Serial.println("     WiFi Sentinel");
    Serial.println("==========================");
    Serial.println("ESP32-S3 is running!");
}

void loop() {
    Serial.println("Sentinel heartbeat...");
    delay(2000);
}