#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Numbers between 1 and " << n << " that are divisible by 2:" << endl;
    int i = 1;
    while (i <= n) {
        if (i % 2 == 0) {
            cout << i << " ";
        }
        i++;
    }
    cout << endl;
    return 0;
}
