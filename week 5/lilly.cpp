#include <iostream>
using namespace std;

int main() {
    int age, machinePrice, toyPrice;
    cin >> age >> machinePrice >> toyPrice;

    int toys = 0;
    int money = 0;
    int moneyGift = 10;

    for (int i = 1; i <= age; i++) {
        if (i % 2 == 0) {
            money += moneyGift - 1; // brother takes 1
            moneyGift += 10;
        } else {
            toys++;
        }
    }

    money += toys * toyPrice;

    if (money >= machinePrice) {
        cout << "Yes!" << endl;
        cout << money - machinePrice << endl;
    } else {
        cout << "No!" << endl;
        cout << machinePrice - money << endl;
    }

    return 0;
}