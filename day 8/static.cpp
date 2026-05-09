#include <iostream>
using namespace std;

class Employee {
private:
    static int reg_no_counter; // Static counter for registration numbers
    int reg_no; // Each employee's unique registration number

public:
    Employee() {
        reg_no = ++reg_no_counter;
    }

    int getRegNo() const {
        return reg_no;
    }

    void show() const {
        cout << "Employee Registration Number: " << reg_no << endl;
    }
};

// Define and initialize static member starting from 100
int Employee::reg_no_counter = 100;

int main() {
    Employee e1;
    Employee e2;
    Employee e3;
    Employee e4;

    e1.show();
    e2.show();
    e3.show();
    e4.show();

    return 0;
}