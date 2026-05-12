#include <iostream>
using namespace std;

int main() {
    const int SIZE = 5;
    int arr[SIZE] = {1, 2, 3, 4, 5};
    int sum = 0;

    for (int i = 0; i < SIZE; ++i) {
        sum += arr[i];
    }

    cout << "Sum of array elements is: " << sum << endl;

    return 0;
}