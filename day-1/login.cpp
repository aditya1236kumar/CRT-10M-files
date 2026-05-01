#include <iostream>
#include <string>
using namespace std;

int main() {
    const string USERNAME = "admin";
    const string PASSWORD = "1234";

    string inputUser, inputPass;

    cout << "Enter username: ";
    cin >> inputUser;

    cout << "Enter password: ";
    cin >> inputPass;

    if (inputUser == USERNAME && inputPass == PASSWORD) {
        cout << "\nLogin Successful! Welcome, " << USERNAME << "!" << endl;
    } else {
        cout << "\nLogin Failed! Invalid username or password." << endl;
    }

    return 0;
}
