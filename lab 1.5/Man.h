// Man.h
#pragma once
#include <string>

using namespace std;

class Man {
private:
    string name;
    int age;
    char gender;
    double weight;

public:
    Man();
    Man(string name, int age, char gender, double weight);

    // Методи доступу
    string getName() const;
    int getAge() const;
    char getGender() const;
    double getWeight() const;

    void setName(string name);
    void setAge(int age);
    void setGender(char gender);
    void setWeight(double weight);
    void Init(string name, int age, char gender, double weight);
    void Read();
    void Display() const;
    string toString() const;
};