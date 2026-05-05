#include <iostream>
using namespace std;

//example of without argument and with return type 

int getNumber() {
    return 42;
}

int main() {
    int num = getNumber();
    cout << "The number is: " << num << endl;
    return 0;
}