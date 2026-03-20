#include <iostream>
using namespace std;

int findGCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int findLCM(int a, int b) {
    return (a * b) / findGCD(a, b);
}

int main() {
    int num1, num2;
    cin >> num1 >> num2;

    cout << "GCD: " << findGCD(num1, num2) << endl;
    cout << "LCM: " << findLCM(num1, num2) << endl;

    return 0;
}