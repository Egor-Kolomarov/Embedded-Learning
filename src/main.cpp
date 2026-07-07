
#include <Arduino.h>

int x = 15;
int y = 70;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp
}

void setup() {
    Serial.begin(105200);
}


void loop() {
    swap(x, y);
    Serial.println(x);
    delay(1000);
}  