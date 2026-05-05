#include <iostream>
#include <iomanip>
using namespace std;

void applyDiscount(double& bill) {
    bill *= 0.9;
}

int main() {
    double amount;
    cout << "Enter the bill amount: ";
    if (!(cin >> amount) || amount < 0) {
        cout << "Invalid bill amount." << endl;
        return 0;
    }

    applyDiscount(amount);

    cout << fixed << setprecision(2);
    cout << "Bill after 10% discount: " << amount << endl;
    return 0;
}