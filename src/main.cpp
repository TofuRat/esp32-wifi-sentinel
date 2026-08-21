#include <Arduino.h>
#include <WiFi.h>

void setup() {
    Serial.begin(115200);
    delay(2000);

    WiFi.mode(WIFI_STA);
    WiFi.disconnect();
    delay(100);

    Serial.println();
    Serial.println(" WiFi Sentinel - WiFi Scanner");
    
}

void loop() {

    Serial.println();
    Serial.println("Scanning WiFi networks...");

    int networksFound = WiFi.scanNetworks();

    Serial.printf("Found %d networks\n\n", networksFound);

    for (int i = 0; i < networksFound; i++) {

        Serial.printf("[%d]\n", i + 1);

        Serial.print("SSID: ");
        Serial.println(WiFi.SSID(i));

        Serial.print("BSSID: ");
        Serial.println(WiFi.BSSIDstr(i));

        Serial.print("Signal: ");
        Serial.print(WiFi.RSSI(i));
        Serial.println(" dBm");

        Serial.print("Channel: ");
        Serial.println(WiFi.channel(i));

        Serial.println("--------------------------");
    }

    WiFi.scanDelete();

    Serial.println("Next scan in 10 seconds...");
    delay(10000);
}