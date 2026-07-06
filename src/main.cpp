#include <Arduino.h>

int x = 0;
void setup() {
    Serial.begin(105200);
}


void loop() {
    while (x < 5) {
        Serial.println(x);
        x++;
    }
}