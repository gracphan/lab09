#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include <iostream>

#include "constants.h"

class Student {
private:
    std::string name;
    int grades[NUM_GRADES];

public:
    Student();
    Student(const std::string& name, const int inputGrades[NUM_GRADES]);

    std::string getName() const;
    int getGrade(int index) const;
    void setGrade(int index, int newGrade);
    double getAverage() const;

    void print() const;
};

#endif