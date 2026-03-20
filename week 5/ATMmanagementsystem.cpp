#include <iostream>
using namespace std;

int main() {
    int pin;
    int balance = 0;
    int choice;
    int amount;

    // ATM PIN login with 3 attempts
    for (int i = 1; i <= 3; i++) {
        cout << "Enter ATM PIN: ";
        cin >> pin;

        if (pin == 1234) {
            cout << "Login Successful" << endl;
            break;
        } else {
            cout << "Wrong PIN" << endl;
        }

        if (i == 3 && pin != 1234) {
            cout << "Too many attempts. Program End." << endl;
            return 0;
        }
    }

    // ATM menu
    for (;;) { // Infinite loop until Exit
        cout << "\n---- ATM Menu ----" << endl;
        cout << "1. Check Balance" << endl;
        cout << "2. Deposit Money" << endl;
        cout << "3. Withdraw Money" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter Choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Current Balance: " << balance << endl;
        }
        else if (choice == 2) {
            cout << "Enter Amount to Deposit: ";
            cin >> amount;
            balance += amount;
            cout << "Amount Deposited Successfully. New Balance: " << balance << endl;
        }
        else if (choice == 3) {
            cout << "Enter Amount to Withdraw: ";
            cin >> amount;
            if (amount <= balance) {
                balance -= amount;
                cout << "Amount Withdrawn Successfully. Remaining Balance: " << balance << endl;
            } else {
                cout << "Insufficient Balance" << endl;
            }
        }
        else if (choice == 4) {
            cout << "Exiting ATM. Thank You!" << endl;
            break;
        }
        else {
            cout << "Invalid Choice" << endl;
        }
    }

    return 0;
}