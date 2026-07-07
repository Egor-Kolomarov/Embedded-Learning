#include <Arduino.h>

int multiply(int a, int b) {
    return a * b;
}

void setup() {
    Serial.begin(105200);
}

void loop() {
    Serial.println(multiply(4, 5));
    delay(1000);
}