#include <iostream>
using namespace std;

int frequencyChecker(int num, int digit) {
    int count = 0;

    while (num != 0) {
        if (num % 10 == digit) {
            count++;
        }
        num /= 10;
    }

    return count;
}

int main() {
    int num, digit;
    cout << "Enter number and digit: ";
    cin >> num >> digit;
    cout << frequencyChecker(num, digit) << endl;
    return 0;
}