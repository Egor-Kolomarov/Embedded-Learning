#include <Arduino.h>

bool alarm = false;

void setup() {
    Serial.begin(115200);
}

void loop() {
    if (!alarm) {
        Serial.println("Everything OK");
    }
}