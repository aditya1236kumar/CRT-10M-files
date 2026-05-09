#include <iostream>
using namespace std;

class Car {
private:
    int speed;
public:
    Car() {
        speed = 120;
    }

    void showSpeed() const { // constant function returning void
        cout << "Car speed is: " << speed << " km/h" << endl;
    }
};

int main() {
    Car c;
    c.showSpeed();
    return 0;
}