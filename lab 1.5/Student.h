// Student.h
#pragma once
#include "Man.h"

class Student {
private:
    Man person;
    int course;

public:
    Student();
    Student(Man person, int course);
    Man getPerson() const;
    int getCourse() const;
    void setPerson(const Man& person);
    void setCourse(int course);
    void Init(const Man& person, int course);
    void Read();
    void Display() const;
    string toString() const;
    void Reassign(const Man& person, int course);
    void IncrementCourse();
};