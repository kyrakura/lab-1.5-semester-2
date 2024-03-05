// Student.cpp
#include "Student.h"
#include <iostream>

using namespace std;

Student::Student() {
    course = 0;
}

Student::Student(Man person, int course) {
    this->person = person;
    this->course = course;
}

Man Student::getPerson() const {
    return person;
}

int Student::getCourse() const {
    return course;
}

void Student::setPerson(const Man& person) {
    this->person = person;
}

void Student::setCourse(int course) {
    this->course = course;
}

void Student::Init(const Man& person, int course) {
    this->person = person;
    this->course = course;
}

void Student::Read() {
    cout << "Enter student information:" << endl;
    person.Read();
    cout << "Enter course: ";
    cin >> course;
}

void Student::Display() const {
    cout << "Student Info:" << endl;
    person.Display();
    cout << "Course: " << course << endl;
}

string Student::toString() const {
    return "Student Info:\n" + person.toString() + "\nCourse: " + to_string(course);
}

void Student::Reassign(const Man& person, int course) {
    this->person = person;
    this->course = course;
}

void Student::IncrementCourse() {
    course++;
}