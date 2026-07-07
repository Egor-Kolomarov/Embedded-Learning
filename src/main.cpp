#define SIZE 5
#include <Arduino.h>

int marks[SIZE] = {5, 4, 5, 3, 4};

int sumMassive(int a[SIZE]) {
    int sum = 0;
    for (int i = 0; i < SIZE; i++) {
        sum += a[i];
    }
    return sum;
}

void setup() {
    Serial.begin(105200);
}

void loop() {
    int res = sumMassive(marks);
    Serial.println(res);
    delay(1000);
}