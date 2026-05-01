#include <iostream>
using namespace std;

int main() {
    int age;

    cout << "Enter your age: ";
    cin >> age;

    if (age < 0)
        cout << "Invalid Age!" << endl;
    else if (age >= 0 && age <= 17)
        cout << "Not Eligible to Vote!" << endl;
    else if (age >= 18 && age <= 99)
        cout << "Eligible to Vote!" << endl;
    else if (age >= 100)
        cout << "Century Old! Eligible to Vote!" << endl;

    return 0;
}
