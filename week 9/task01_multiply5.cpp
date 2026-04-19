#include <iostream>
using namespace std;

int multiplyBy5(int num) {
    return num * 5;
}

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    cout << "Result: " << multiplyBy5(num) << endl;

    return 0;
}