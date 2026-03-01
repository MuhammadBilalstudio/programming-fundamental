#include <iostream>
using namespace std;

int main() {
    int sum = 0; // Variable 1: Holds the running total
    int input;   // Variable 2: Holds the current user input

    cout << "Enter the 1st integer: ";
    cin >> input;
    sum = sum + input; // Add first number to sum

    cout << "Enter the 2nd integer: ";
    cin >> input;
    sum = sum + input; // Reuse 'input' and update sum

    cout << "Enter the 3rd integer: ";
    cin >> input;
    sum = sum + input;

    cout << "Enter the 4th integer: ";
    cin >> input;
    sum = sum + input;

    cout << "Enter the 5th integer: ";
    cin >> input;
    sum = sum + input;

    cout << "The final sum of the 5 integers is: " << sum << endl;

    return 0;
}