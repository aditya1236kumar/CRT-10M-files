#include <iostream>
using namespace std;

int main() {
    int num = 10;
    int *ptr = &num;
    *ptr = 20;
    cout <<  num << endl;
    return 0;
}