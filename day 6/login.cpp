#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int roll;
    int reg;
    string email;
    string ph;
    float marks;
public:
    // Default constructor
    Student() {
        name = "Unknown";
        roll = 0;
        reg = 0;
        email = "noemail@example.com";
        ph = "0000000000";
        marks = 0.0;
    }
    // Function to input student details from user
    void input() {
        cout << "Enter Student Details:" << endl;
        cout << "Name: ";
        getline(cin, name);
        cout << "Roll No.: ";
        cin >> roll;
        cout << "Registration No.: ";
        cin >> reg;
        cin.ignore(); // Clear input buffer
        cout << "Email: ";
        getline(cin, email);
        cout << "Phone: ";
        getline(cin, ph);
        cout << "Marks: ";
        cin >> marks;
    }
    void display() {
        cout << "Student Name: " << name << endl;
        cout << "Roll No.: " << roll << endl;
        cout << "Registration No.: " << reg << endl;
        cout << "Email: " << email << endl;
        cout << "Phone: " << ph << endl;
        cout << "Marks: " << marks << endl;
        cout << "--------------------------" << endl;
    }
};

int main() {
    Student s;
    s.input();
    cout << "\nStudent Details:" << endl;
    s.display();
    return 0;
}