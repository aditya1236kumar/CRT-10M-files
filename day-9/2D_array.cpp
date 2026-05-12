#include <iostream>
using namespace std;

int main(){
    int arr[3][3];
    // Input elements
    cout << "Enter 9 elements for the 3x3 array:\n";
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cin >> arr[i][j];
        }
    }

    // Output elements
    cout << "The 3x3 array is:\n";
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}