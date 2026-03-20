#include <iostream>
using namespace std;

int main() {
    int num;
    int sum = 0;

    while (true) {
        cout << "Enter a number (negative to stop): ";
        cin >> num;
        if (num < 0) {
            break;
        }
        sum += num;
    }

    cout << "Sum: " << sum << endl;
    return 0;
}