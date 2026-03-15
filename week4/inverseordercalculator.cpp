#include<iostream>
using namespace std;

int main() {
    float n1, n2;
    char op;

    cout << "Welcome to the calculator" << endl;
    cout << "Enter first number: ";
    cin >> n1;
    cout << "Enter the operator: ";
    cin >> op;
    cout << "Enter second number: ";
    cin >> n2;

    if (op == '+') {
        cout << n1 << " - " << n2 << " = " << n1 - n2 << endl;
    } 
    else if (op == '-') {
        cout << n1 << " + " << n2 << " = " << n1 + n2 << endl;
    } 
    else if (op == '*') {
        cout << n1 << " / " << n2 << " = " << n1 / n2 << endl;
    } 
    else if (op == '/') {
        cout << n1 << " * " << n2 << " = " << n1 * n2 << endl;
    }

    return 0;
}