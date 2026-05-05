#include <iostream>
using namespace std;

int num(int a = 2) {
    return a * 2;
}

int main() {
    cout << num() << endl;    // default used, prints 4
    cout << num(5) << endl;   // parameter used, prints 10
    return 0;
}