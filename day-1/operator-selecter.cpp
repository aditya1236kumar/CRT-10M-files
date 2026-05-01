#include <iostream>
using namespace std;

int main() {
    double a, b, result;
    char op;

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter second number: ";
    cin >> b;

    if (op == '+')      result = a + b;
    else if (op == '-') result = a - b;
    else if (op == '*') result = a * b;
    else if (op == '/') result = a / b;

    cout << a << " " << op << " " << b << " = " << result << endl;

    return 0;
}
