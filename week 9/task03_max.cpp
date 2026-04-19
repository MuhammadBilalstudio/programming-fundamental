#include <iostream>
#include <cmath>   // for max()

using namespace std;

int main() {
    double num1, num2;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    double greater = max(num1, num2);

    cout << "The greater number is: " << greater << endl;

    return 0;
}