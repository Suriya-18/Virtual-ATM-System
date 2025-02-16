#include <iostream>
using namespace std;

class ATM {
    double balance;
public:
    ATM() { balance = 1000.0; } // Default balance

    void deposit(double amount) {
        balance += amount;
        cout << "Deposited: $" << amount << "\nNew Balance: $" << balance << endl;
    }

    void withdraw(double amount) {
        if (amount > balance) cout << "Insufficient funds!\n";
        else {
            balance -= amount;
            cout << "Withdrawn: $" << amount << "\nNew Balance: $" << balance << endl;
        }
    }

    void checkBalance() { cout << "Current Balance: $" << balance << endl; }
};

int main() {
    ATM myATM;
    int choice;
    double amount;

    do {
        cout << "\n1. Deposit\n2. Withdraw\n3. Check Balance\n4. Exit\nEnter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter amount to deposit: ";
                cin >> amount;
                myATM.deposit(amount);
                break;
            case 2:
                cout << "Enter amount to withdraw: ";
                cin >> amount;
                myATM.withdraw(amount);
                break;
            case 3:
                myATM.checkBalance();
                break;
            case 4:
                cout << "Thank you for using the ATM!\n";
                break;
            default:
                cout << "Invalid choice!\n";
        }
    } while (choice != 4);

    return 0;
}
