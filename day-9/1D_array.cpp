#include <iostream>
using namespace std;

int main() {
    const int SIZE = 1000;
    int arr[SIZE];
    
    for(int i = 0; i < SIZE; ++i) {
        arr[i] = i + 1;
    }


    for(int i = 0; i < SIZE; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}