
#include <Arduino.h>

struct Student {
    String name;
    int age;
    float averageMark;
};

Student students[3];


void setup() {
    Serial.begin(105200);
}


void loop() {
    students[0].name = "Egor";
    students[0].age = 18;
    students[0].averageMark = 100.0;

    students[1].name = "Alex";
    students[1].age = 18;
    students[1].averageMark = 50.0;

    students[2].name = "Ivan";
    students[2].age = 19;
    students[2].averageMark = 70.0;

    for (int i = 0; i < 3; i ++) {
        Serial.println(students[i].name);
        Serial.println(students[i].age);
        Serial.println(students[i].averageMark);
    }
} 