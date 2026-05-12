#include <iostream>
using namespace std;

int main() {
    const int SIZE = 5;
    int arr[SIZE];

    cout << "Enter 5 elements: ";
    for (int i = 0; i < SIZE; ++i) {
        cin >> arr[i];
    }

    // Check the size of the array
    int actualSize = sizeof(arr) / sizeof(arr[0]);
    cout << "Size of the array is: " << actualSize << endl;

    cout << "You entered: ";
    for (int i = 0; i < SIZE; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}