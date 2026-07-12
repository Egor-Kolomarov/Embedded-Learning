#include <Arduino.h>

const int buttonPin = 4;
const int ledPin = 5;
const int ledPin2 = 18;
bool previosButtonState = HIGH;
bool ledState1 = false;


void setup() {
    Serial.begin(115200);
    pinMode(buttonPin, INPUT_PULLUP);
    pinMode(ledPin, OUTPUT);
    pinMode(ledPin2, OUTPUT);
}

void loop() {
    bool currentButtonState = digitalRead(buttonPin);
    if (previosButtonState == HIGH && currentButtonState == LOW) {
            ledState1 = !ledState1;
            digitalWrite(ledPin, ledState1);
            digitalWrite(ledPin2, !ledState1);
    }
    previosButtonState = currentButtonState;
} 
