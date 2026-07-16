#include <Arduino.h>

const int ledPin = 5;
const int butPin = 4;

bool ledState = false;
volatile bool buttonPressed = false;
unsigned long previousTime = 1000;

void IRAM_ATTR onButtonPressed() {
    buttonPressed = true;
}

void setup() {

    Serial.begin(115200);
    pinMode(ledPin, OUTPUT);
    pinMode(butPin, INPUT_PULLUP);
    attachInterrupt(butPin, onButtonPressed, FALLING);

}

void loop() {
    if (buttonPressed) {
        if (millis() - previousTime >= 50) {
            ledState = !ledState;
            digitalWrite(ledPin, ledState);
            buttonPressed = false;
            previousTime = millis();
        }
    }   
} 
 