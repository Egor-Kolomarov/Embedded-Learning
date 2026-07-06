#include <Arduino.h>

void setup(){
    Serial.begin(115200);
}

int age = 18;
float height = 60.0;
String name = "Egor";

void loop(){
    Serial.println(age);
    Serial.println(height);
    Serial.println(name);
    delay(1000);
}