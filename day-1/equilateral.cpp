#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    cout << "Enter three sides of a triangle: ";
    cin >> a >> b >> c;

    bool isEquilateral = (a == b) && (b == c);

    cout << (isEquilateral ? "true" : "false") << endl;

    return 0;
}
