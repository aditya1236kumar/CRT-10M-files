#include <iostream>
using namespace std;

class Student {
private:
    int reg = 100; 
public:
    // data members
    string name, className;
    int roll;

    // member function
    void display() {
        cout << "\nStudent Details:\n";
        cout << "Name: " << name << endl;
        cout << "Class: " << className << endl;
        cout << "Roll: " << roll << endl;
        reg++;
    }

    // function to increment registration number (if needed)
    void incrementReg() {
        reg++;
    }

    int getReg() {
        return reg;
    }
};

int main() {
    Student s;
    s.name = "adi";
    s.className = "dsa";
    s.roll = 1099;
    s.display();
    return 0;
}