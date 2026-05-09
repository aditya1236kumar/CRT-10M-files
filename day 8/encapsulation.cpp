#include <iostream>
using namespace std;

// ATM class using encapsulation
class ATM {
private:
    int balance;

public:
    // Constructor to initialize balance
    ATM(int initialBalance) {
        balance = initialBalance;
    }

    // Method to deposit money
    void deposit(int amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: " << amount << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    // Method to withdraw money
    void withdraw(int amount) {
        if (amount > balance) {
            cout << "Insufficient balance!" << endl;
        } else if(amount <= 0) {
            cout << "Invalid withdrawal amount!" << endl;
        } else {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        }
    }

    // Method to display current balance
    void showBalance() const {
        cout << "Current balance: " << balance << endl;
    }
};

int main() {
    ATM a(1000);

    a.showBalance();

    a.deposit(500);
    a.showBalance();

    a.withdraw(300);
    a.showBalance();

    a.withdraw(1500); // Attempt to withdraw more than balance
    a.showBalance();

    return 0;
}