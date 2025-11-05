#include <iostream>
using namespace std;

class Counter {
private:
    int value;

public:
    Counter(int v = 0) : value(v) {}
    void display() const {
        cout << "Value: " << value << endl;
    }
    Counter operator++() {
        ++value; 
        return *this;
    }
    Counter operator++(int) {
        Counter temp = *this; 
        value++;              
        return temp;          
    }
    Counter operator--() {
        --value;
        return *this;
    }
    Counter operator--(int) {
        Counter temp = *this;
        value--;
        return temp;
    }
};