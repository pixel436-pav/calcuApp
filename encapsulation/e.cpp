#include <iostream>
using namespace std;

class BankAccount {
private:
    string owner;
    double balance;    // hidden! no one can directly touch this

public:
    BankAccount(string name, double initialBalance) {
        owner = name;
        balance = initialBalance;
    }

    void deposit(double amount) {
        if(amount <= 0) {
            cout << "Invalid amount!" << endl;
            return;
        }
        balance += amount;
        cout << "Deposited: " << amount << endl;
    }

    void withdraw(double amount) {
        if(amount > balance) {
            cout << "Insufficient balance!" << endl;
            return;
        }
        balance -= amount;
        cout << "Withdrawn: " << amount << endl;
    }

    void showBalance() {
        cout << owner << "'s Balance: " << balance << endl;
    }
};

int main() {
    BankAccount acc("Pavneet", 1000);

    acc.showBalance();
    acc.deposit(500);
    acc.withdraw(200);
    acc.showBalance();

    // acc.balance = 999999;  // ❌ ERROR! private — try this yourself

    return 0;
}
