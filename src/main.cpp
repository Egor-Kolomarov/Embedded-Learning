
#include <Arduino.h>

int value = 50;
int *ptr = &value;

void setup() {
    Serial.begin(105200);
}


void loop() {
    *ptr = 100;
    Serial.println(value);
    Serial.println((uintptr_t)ptr, HEX);
    Serial.println(*ptr);
} 