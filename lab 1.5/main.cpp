// main.cpp
#include "Student.h"
#include <iostream>
#include <vector>

using namespace std;

int main() {
    Man person1("John", 20, 'M', 70.5);
    Man person2;
    person2.Read();

    Student student1(person1, 2);
    Student student2;
    student2.Read();

    cout << "Student 1 Info:" << endl;
    student1.Display();
    cout << endl;
    cout << "Student 2 Info:" << endl;
    student2.Display();

    vector<Student> students;
    students.push_back(student1);
    students.push_back(student2);

    cout << endl;
    cout << "Students in vector:" << endl;
    for (const auto& student : students) {
        student.Display();
        cout << endl;
    }

    return 0;
}
