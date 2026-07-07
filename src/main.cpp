#define SIZE 6
#include <Arduino.h>

int numbers[SIZE] = {18, 7, 42, 15, 29, 11};

int findMax(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

void setup() {
    Serial.begin(105200);
}


void loop() {
    Serial.println(findMax(numbers, SIZE));
    delay(1000);
}