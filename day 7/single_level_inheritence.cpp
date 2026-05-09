#include <iostream>
using namespace std;

class Player {
public:
    string name;
    int age;
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
    void show() {
        cout << "name: " << name << endl;
        cout << "runs: " << runs << endl;
    }
};

int main() {
    Cricketer c1;
    c1.setname("virat kohli");
    c1.setruns(7);
    c1.show();
    return 0;
}