#include <Arduino.h>

const int ledPin = 5;
const int f = 5000;
const int resolution = 8;

unsigned long previosTime = 0;
unsigned long previosTime2 = 0;

int dutyCycle = 0;
int step = 5;

enum State{
    UP,
    DOWN,
    OFF
};

State currentState = UP;

void setup() {

    Serial.begin(115200);
    pinMode(ledPin, OUTPUT);
    ledcSetup(0, f, resolution);
    ledcAttachPin(ledPin, 0);
    
}

void loop() {

    switch (currentState)
    {

    case UP:

        if (millis() - previosTime >= 50) {
            dutyCycle += step;

            ledcWrite(0, dutyCycle);
            previosTime = millis();
        }
        if (dutyCycle >= 255) {
            currentState = DOWN;
            previosTime2 = millis();
        }
        break;

    case DOWN:

        if (millis() - previosTime >= 50) {
            dutyCycle -= step;

            ledcWrite(0, dutyCycle);
            previosTime = millis();
        }
        if (dutyCycle <= 0) {
            currentState = OFF;
            previosTime2 = millis();
        }
        break;

    case OFF:

        ledcWrite(0, 0);
        if (millis() - previosTime2 >= 2000) {
            currentState = UP;
            previosTime2 = millis();
        }
        break;

    default:
        break;
    }

} 
