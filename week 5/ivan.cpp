#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double money;
    int year;
    cin >> money >> year;

    int age = 18;
    double totalSpent = 0;

    for (int y = 1800; y <= year; y++) {
        if (y % 2 == 0) {
            totalSpent += 12000;
        } else {
            totalSpent += 12000 + 50 * age;
        }
        age++;
    }

    if (money >= totalSpent) {
        cout << fixed << setprecision(2);
        cout << "Yes! He will live a carefree life and will have " 
             << money - totalSpent << " dollars left." << endl;
    } else {
        cout << fixed << setprecision(2);
        cout << "He will need " << totalSpent - money << " dollars to survive." << endl;
    }

    return 0;
}