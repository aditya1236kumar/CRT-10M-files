#include <iostream>
using namespace std;


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


class Performance {
public:
    int runs;
    string state;
    void setruns(int r) {
        runs = r;
    }
    void setstate(string s) {
        state = s;
    }
};
class IndianCricketer : public Player, public Performance {
public:
    void show() {
        cout << "name: " << name << endl;
        cout << "runs: " << runs << endl;
        cout << "state: " << state << endl;
        cout << "age: " << age << endl;
    }
};

int main() {
    int r, age;
    string s;
    cout << "Enter runs: ";
    cin >> r;
    cout << "Enter state: ";
    cin >> ws; 
    getline(cin, s);
    cout << "Enter age: ";
    cin >> age;
    IndianCricketer c1;
    c1.setname("virat kohli");
    c1.setruns(r);
    c1.setstate(s);
    c1.setage(age);
    c1.show();
    return 0;
}