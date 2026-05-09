#include <iostream>
using namespace std;

class Player {
public:
    string name;
    int age;
    string state;
    void setname(string n) {
        name = n;
    }
};

class Cricketer : public Player {
public:
    int runs;
    void setruns(int r) {
        runs = r;
    }
};

class IndianCricketer : public Cricketer {
public:
    void setstate(string s){
        state = s;
    }
    void show() {
        cout << "name: " << name << endl;
        cout << "runs: " << runs << endl;
        cout << "state: " << state << endl;
    }
};

int main() {
    int r;
    string s;
    cout << "Enter runs: ";
    cin >> r;
    cout << "Enter state: ";
    cin >> ws; 
    getline(cin, s);
    IndianCricketer c1;
    c1.setname("virat kohli");
    c1.setruns(r);
    c1.setstate(s);
    c1.show();
    return 0;
}