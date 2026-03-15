#include<iostream>
using namespace std;

int main() {
    int number, even;
    cout << "Please Enter the number: ";
    cin >> number;

    even = number % 2;

    if(even == 0) {
        cout << "The number is even" << endl;
    } else {
        cout << "The number is odd" << endl;
    }

    return 0;
}