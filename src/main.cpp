#include <Arduino.h>

const int ledPin = 5;
const int ptPin = 33;
const int f = 5000;
const int resolution = 8;

int adcToPwm(int a) {
    int result = a >> 4;
    return result;
}

void setup() {

    Serial.begin(115200);
    pinMode(ledPin, OUTPUT);
    ledcSetup(0, f, resolution);
    ledcAttachPin(ledPin, 0);
    
}

void loop() {

    int analogValue = analogRead(ptPin);
    int value = adcToPwm(analogValue);

    ledcWrite(0, value);
} 
 