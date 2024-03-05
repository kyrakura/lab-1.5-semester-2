// Man.cpp
#include "Man.h"
#include <iostream>

using namespace std;

Man::Man() {
    name = "";
    age = 0;
    gender = ' ';
    weight = 0.0;
}

Man::Man(string name, int age, char gender, double weight) {
    this->name = name;
    this->age = age;
    this->gender = gender;
    this->weight = weight;
}

string Man::getName() const {
    return name;
}

int Man::getAge() const {
    return age;
}

char Man::getGender() const {
    return gender;
}

double Man::getWeight() const {
    return weight;
}

void Man::setName(string name) {
    this->name = name;
}

void Man::setAge(int age) {
    this->age = age;
}

void Man::setGender(char gender) {
    this->gender = gender;
}

void Man::setWeight(double weight) {
    this->weight = weight;
}

void Man::Init(string name, int age, char gender, double weight) {
    this->name = name;
    this->age = age;
    this->gender = gender;
    this->weight = weight;
}

void Man::Read() {
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter age: ";
    cin >> age;
    cout << "Enter gender (M/F): ";
    cin >> gender;
    cout << "Enter weight: ";
    cin >> weight;
}

void Man::Display() const {
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Gender: " << gender << endl;
    cout << "Weight: " << weight << endl;
}

string Man::toString() const {
    return "Name: " + name + ", Age: " + to_string(age) + ", Gender: " + gender + ", Weight: " + to_string(weight);
}
