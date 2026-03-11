#include <iostream>
using namespace std;

int main() {
    int number, sum = 0;

    cout << "Enter a 4-digit number: ";
    cin >> number;

    // Extract and add the 4th digit
    sum = sum + (number % 10);
    number = number / 10;

    // Extract and add the 3rd digit
    sum = sum + (number % 10);
    number = number / 10;

    // Extract and add the 2nd digit
    sum = sum + (number % 10);
    number = number / 10;

    // Add the 1st (remaining) digit
    sum = sum + (number % 10);

    cout << "Sum of the individual digits: " << sum << endl;

    return 0;
}