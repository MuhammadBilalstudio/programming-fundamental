#include <iostream>
using namespace std;

int main() {
    long long number;
    int digit, count = 0;

    cout << "Enter number: ";
    cin >> number;
    cout << "Enter digit to check frequency: ";
    cin >> digit;

    long long temp = number;

    while (temp > 0) {
        int lastDigit = temp % 10;
        if (lastDigit == digit) {
            count = count + 1;
        }
        temp = temp / 10;
    }

    cout << "Frequency of " << digit << " in " << number << " is: " << count << endl;

    return 0;
}