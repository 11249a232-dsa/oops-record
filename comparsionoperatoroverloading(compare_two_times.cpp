#include <iostream>
using namespace std;
class Time {
private:
    int hours, minutes, seconds;
public:
    Time(int h = 0, int m = 0, int s = 0) {
        hours = h;
        minutes = m;
        seconds = s;
    }
    void display() const {
        cout << hours << "h : " << minutes << "m : " << seconds << "s";
    }
    int toSeconds() const {
        return hours * 3600 + minutes * 60 + seconds;
    }
    bool operator==(const Time& t) const {
        return toSeconds() == t.toSeconds();
    }
    bool operator!=(const Time& t) const {
        return !(*this == t);
    }
    bool operator<(const Time& t) const {
        return toSeconds() < t.toSeconds();
    }
    bool operator>(const Time& t) const {
        return toSeconds() > t.toSeconds();
    }
    bool operator<=(const Time& t) const {
        return !(*this > t);
    }
    bool operator>=(const Time& t) const {
        return !(*this < t);
    }
};
int main() {
    Time t1(3, 45, 20);
    Time t2(4, 10, 15);
    cout << "Time 1: ";
    t1.display();
    cout << "\nTime 2: ";
    t2.display();
    cout << "\n\n";
    if (t1 == t2)
        cout << "Both times are equal.\n";
    else if (t1 > t2)
        cout << "Time 1 is greater than Time 2.\n";
    else
        cout << "Time 1 is less than Time 2.\n";

    return 0;
}
