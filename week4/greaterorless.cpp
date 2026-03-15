#include<iostream>
using namespace std;

int main() {
    int num1, num2;
    
    cout << "Enter the first integer: ";
    cin >> num1;
    cout << "Enter the second integer: ";
    cin >> num2;

    if (num1 > num2) {
        cout << "The larger number is: " << num1 << endl;
    } else {
        cout << "The larger number is: " << num2 << endl;
    }

    return 0;
}