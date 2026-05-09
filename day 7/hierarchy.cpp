#include <iostream>
using namespace std;

// Hierarchical Inheritance Example

class Player {
public:
    string name;
    int age;
    void setname(string n) {
        name = n;
    }
    void setage(int a) {
        age = a;
    }
};

// Cricketer and Footballer both inherit from Player (hierarchical inheritance)

class Cricketer : public Player {
public:
    int runs;
    string state;
    void setruns(int r) {
        runs = r;
    }
    void setstate(string s) {
        state = s;
    }
    void show() {
        cout << "Cricketer Info:" << endl;
        cout << "name: " << name << endl;
        cout << "runs: " << runs << endl;
        cout << "state: " << state << endl;
        cout << "age: " << age << endl;
    }
};

class Footballer : public Player {
public:
    int goals;
    string club;
    void setgoals(int g) {
        goals = g;
    }
    void setclub(string c) {
        club = c;
    }
    void show() {
        cout << "Footballer Info:" << endl;
        cout << "name: " << name << endl;
        cout << "goals: " << goals << endl;
        cout << "club: " << club << endl;
        cout << "age: " << age << endl;
    }
};

int main() {
    // Cricketer section
    int runs, cage;
    string cstate;
    cout << "Enter cricketer's runs: ";
    cin >> runs;
    cout << "Enter cricketer's state: ";
    cin >> ws;
    getline(cin, cstate);
    cout << "Enter cricketer's age: ";
    cin >> cage;

    Cricketer c1;
    c1.setname("Virat Kohli");
    c1.setruns(runs);
    c1.setstate(cstate);
    c1.setage(cage);

    c1.show();
    cout << endl;

    // Footballer section
    int goals, fage;
    string fclub;
    cout << "Enter footballer's goals: ";
    cin >> goals;
    cout << "Enter footballer's club: ";
    cin >> ws;
    getline(cin, fclub);
    cout << "Enter footballer's age: ";
    cin >> fage;

    Footballer f1;
    f1.setname("Cristiano Ronaldo");
    f1.setgoals(goals);
    f1.setclub(fclub);
    f1.setage(fage);

    f1.show();

    return 0;
}