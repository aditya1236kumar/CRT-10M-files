#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Numbers between 1 and " << n << " that are divisible by 2:" << endl;
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}