#include <iostream>
using namespace std;

class Student {
private:
    char name;
    int rollno;
    float marks;

public:
    void getDetails() {
        cout << "Enter student name: ";
        cin >> name;
        cout << "Enter roll number: ";
        cin >> rollno;
        cout << "Enter marks: ";
        cin >> marks;
    }

    void displayDetails() {
        cout << "\nStudent Information\n";
        cout << "Name: " << name << "\n";
        cout << "Roll No: " << rollno << "\n";
        cout << "Marks: " << marks << "\n";
    }
};

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    Student* students = new Student[n];

    cout << "\nEnter student details\n";
    for (int i = 0; i < n; ++i) {
        cout << "Student " << (i + 1) << ":\n";
        students[i].getDetails();
    }

    cout << "\nDisplaying student details\n";
    for (int i = 0; i < n; ++i) {
        cout << "Student " << (i + 1) << ":\n";
        students[i].displayDetails();
    }

    delete[] students;
    return 0;
}
