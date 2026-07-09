#include <Arduino.h>
#include "MathFunctions.h"

void setup() {
    Serial.begin(105200);
}


void loop() {
    Serial.println(multiply(6, 7));
}