#include <Arduino.h>

enum Mode{
    OFF,
    HEAT,
    COLD,
    ERROR
};

void setup() {
    Serial.begin(105200);
}


void loop() {
    Mode state = HEAT;
    switch (state)
    {
    case OFF:
        Serial.println("OFF");
        break;
    case HEAT:
        Serial.println("HEAT");
        break;
    case COLD:
        Serial.println("COLD");
        break;
    case ERROR:
        Serial.println("ERROR");
        break;
    }
}