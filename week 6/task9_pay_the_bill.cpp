#include <iostream>
using namespace std;

bool canPay(int change[], float due) {
    float values[] = {0.25, 0.10, 0.05, 0.01};
    float totalInPocket = 0.0;

    for (int i = 0; i < 4; i++) {
        totalInPocket = totalInPocket + (change[i] * values[i]);
    }

    if (totalInPocket >= due) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int pocketChange[4];
    float amountDue;

    cout << "Enter counts for Quarters, Dimes, Nickels, Pennies: " << endl;
    for (int i = 0; i < 4; i++) {
        cin >> pocketChange[i];
    }

    cout << "Enter the total amount due: ";
    cin >> amountDue;

    if (canPay(pocketChange, amountDue)) {
        cout << "true" << endl;
        cout << "false" << endl;
    }

    return 0;
}