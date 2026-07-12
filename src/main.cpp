#include <Arduino.h>

const int buttonPin = 4;
const int ledPin = 18;

void printBut() {
    Serial.println(digitalRead(buttonPin));
    delay(500);
}
void setup() {
    Serial.begin(115200);
    pinMode(buttonPin, INPUT_PULLUP);
    pinMode(ledPin, OUTPUT);
}

void loop() {
    if (digitalRead(buttonPin) == 0) {
        digitalWrite(ledPin, HIGH);
    }
    else {
        digitalWrite(ledPin, LOW);
    }
    printBut();    
}