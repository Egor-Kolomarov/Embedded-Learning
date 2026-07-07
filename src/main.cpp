#include <Arduino.h>

char word[] = "ESP32";

void setup() {
    Serial.begin(105200);
}


void loop() {
    Serial.println(word[0]);
    Serial.println(word[4]);
}