#include <iostream>
using namespace std;

int main() {
    int numbers[5];

    for (int i = 0; i < 5; i++) {
        cout << "Enter a number: ";
        cin >> numbers[i];
    }

    cout << "First element: " << numbers[0] << endl;
    cout << "Last element: " << numbers[4] << endl;

    return 0;
}