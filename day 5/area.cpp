#include <iostream>
using namespace std;

double rectangleArea(double length, double breadth) {
    return length * breadth;
}

int main() {
    double length, breadth;
    cout << "Enter length: ";
    cin >> length;
    cout << "Enter breadth: ";
    cin >> breadth;
    double area = rectangleArea(length, breadth);
    cout << "Area of rectangle: " << area << endl;
    return 0;
}