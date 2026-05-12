#include <iostream>
using namespace std;

// Function to reverse an array using parameter
void reverseArray(int arr[], int size) {
    int i = 0;
    while (i < size / 2) {
        int temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
        ++i;
    }
}

// Function to print the array using parameter
void printArray(const int arr[], int size) {
    int i = 0;
    while (i < size) {
        cout << arr[i] << " ";
        ++i;
    }
    cout << endl;
}

int main() {
    const int SIZE = 5;
    int arr[SIZE] = {1, 2, 3, 4, 5};

    reverseArray(arr, SIZE);

    cout << "Reversed array: ";
    printArray(arr, SIZE);

    return 0;
}