#include <iostream>
using namespace std;

class Cricketer {
public:
    string name;
    int runs;
    double avg;

    // Parameterized constructor
    Cricketer(string n, int r, double a) {
        name = n;
        runs = r;
        this->avg = a;
    }

    void display() {
        cout << "Cricketer Name: " << name << endl;
        cout << "Runs: " << runs << endl;
        cout << "Average: " << avg << endl;
    }
};

int main() {
    Cricketer c(sachin,100, 90);
    c.display();

    return 0;
}