#include <Arduino.h>

struct Car
{
    String brand;
    int year;
};

Car car;

void printCar(const Car &car) {
    Serial.println(car.brand);
    Serial.println(car.year);
}

void setup() {
    Serial.begin(105200);
}


void loop() {
    
    car.brand = "Toyota";
    car.year = 2020;

    printCar(car);
}