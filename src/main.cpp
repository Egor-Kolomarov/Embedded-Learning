#include <Arduino.h>
#include <Preferences.h>

const int ledPin = 5;
const int butPin = 4;

bool ledState = false;
volatile bool buttonPressed = false;
unsigned long previousTime = 1000;
int count = 0;

Preferences preferences;

void IRAM_ATTR onButtonPressed() {
    buttonPressed = true;
}

void setup() {

    Serial.begin(115200);

    pinMode(ledPin, OUTPUT);
    
    preferences.begin("settings", false);
    ledState = preferences.getBool("state", false);
    digitalWrite(ledPin, ledState);
    count = preferences.getInt("counter", 0);

    pinMode(butPin, INPUT_PULLUP);

    attachInterrupt(butPin, onButtonPressed, FALLING);

}

void loop() {
    
    if (buttonPressed) {
        if (millis() - previousTime >= 50) {
            ledState = !ledState;
            digitalWrite(ledPin, ledState);
            buttonPressed = false;
            preferences.putBool("state", ledState);
            count++;
            preferences.putInt("counter", count);
            previousTime = millis();
            Serial.println(count);
        }
    }   
} 
 