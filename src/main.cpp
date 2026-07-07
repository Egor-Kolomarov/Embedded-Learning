
#include <Arduino.h>

int matrix[3][3] =
{
    {1,2,3},
    {4,5,6},
    {7,8,9}
};

void printMatrix(int m[][3], int row, int col) {
    for (int r = 0; r < row; r ++) {
        for (int c = 0; c < col; c ++) {
            Serial.print(m[r][c]);
        }
    }
}

int sumMatrix(int m[][3], int row, int col) {
    int sum = 0;
    for (int r = 0; r < row; r ++) {
        for (int c = 0; c < col; c ++) {
            sum += m[r][c];
        }
    }
    return sum;
}

void setup() {
    Serial.begin(105200);
}


void loop() {
    matrix[1][1] = 100;
    printMatrix(matrix, 3, 3);
    Serial.println(sumMatrix(matrix, 3, 3));
    delay(1000);
}