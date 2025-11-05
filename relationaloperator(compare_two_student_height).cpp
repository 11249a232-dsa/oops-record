#include <iostream>
using namespace std;
class Student {
private:
    string name;
    float height; 
public:
    Student(string n = "", float h = 0.0) {
        name = n;
        height = h;
    }
    void input() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter height (in cm): ";
        cin >> height;
    }
    void display() const {
        cout << name << " (" << height << " cm)";
    }
    bool operator==(const Student &s) const {
        return height == s.height;
    }
    bool operator!=(const Student &s) const {
        return height != s.height;
    }
    bool operator<(const Student &s) const {
        return height < s.height;
    }
    bool operator>(const Student &s) const {
        return height > s.height;
    }
    bool operator<=(const Student &s) const {
        return height <= s.height;
    }
    bool operator>=(const Student &s) const {
        return height >= s.height;
    }
};
int main() {
    Student s1, s2;

    cout << "Enter details for Student 1:\n";
    s1.input();

    cout << "\nEnter details for Student 2:\n";
    s2.input();

    cout << "\nStudent 1: ";
    s1.display();
    cout << "\nStudent 2: ";
    s2.display();
    cout << "\n\n";
    if (s1 == s2)
        cout << "Both students have the same height.\n";
    else if (s1 > s2)
        cout << "Student 1 is taller than Student 2.\n";
    else
        cout << "Student 1 is shorter than Student 2.\n";

    return 0;
}
