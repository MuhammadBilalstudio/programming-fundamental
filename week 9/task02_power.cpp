#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double num1, num2;

    cout << "Enter base number: ";
    cin >> num1;

    cout << "Enter exponent: ";
    cin >> num2;

    double result = pow(num1, num2);

    cout << "Result: " << result << endl;

    return 0;
}