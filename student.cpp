#include "student.h"

Student::Student() : name("") {
    for (int i = 0; i < NUM_GRADES; ++i)
        grades[i] = 0;
}

Student::Student(const std::string& name, const int inputGrades[NUM_GRADES])
    : name(name) {
    for (int i = 0; i < NUM_GRADES; ++i)
        grades[i] = inputGrades[i];
}

std::string Student::getName() const {
    return name;
}

int Student::getGrade(int index) const {
    if (index >= 0 && index < NUM_GRADES)
        return grades[index];
    return -1;
}

void Student::setGrade(int index, int newGrade) {
    if (index >= 0 && index < NUM_GRADES) {
        if (newGrade < 0)
            grades[index] = 0;
        else if (newGrade > 100)
            grades[index] = 100;
        else
            grades[index] = newGrade;
    }
}

double Student::getAverage() const {
    int sum = 0;
    for (int i = 0; i < NUM_GRADES; ++i)
        sum += grades[i];
    return sum / (double)NUM_GRADES;
}

void Student::print() const {
    std::cout << name << ": ";
    for (int i = 0; i < NUM_GRADES; ++i) {
        std::cout << grades[i];
        if (i < NUM_GRADES - 1)
            std::cout << ", ";
    }
    std::cout << " | Avg: " << getAverage() << std::endl;
}