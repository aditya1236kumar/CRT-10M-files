#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int roll;
    // Default constructor
    Student() {
        name = "adi";
        roll = 124;
    }
    void display() {
        cout << "Name: " << name << endl;
        cout << "Roll: " << roll << endl;
    }
};

int main() {
    Student s;
    s.display();
    return 0;
}