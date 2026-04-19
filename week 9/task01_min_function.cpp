#include <iostream>
#include <cmath>   // for min()

using namespace std;

int main() {
    double num1, num2;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    double minimum = min(num1, num2);

    cout << "The minimum number is: " << minimum << endl;

    return 0;
}