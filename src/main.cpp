
#include <Arduino.h>

int numbers[7] = {3, 8, 12, 15, 22, 27, 31};

bool findNumber(int arr[], int size, int value) {
    for (int i = 0; i < size; i ++) {
        if (arr[i] == value) {
            return true;
        }
    }
    return false;
}

void printResult(bool result) {
    if (result) {
        Serial.println("found");
    }
    else {
        Serial.println("not found");
    }
}


void setup() {
    Serial.begin(105200);
}


void loop() {
    bool res = findNumber(numbers, 7, 100);
    printResult(res);
    delay(1000);
}