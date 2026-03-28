#include <iostream>
using namespace std;

int main() {
    int marks[5];

    for (int i = 0; i < 5; i++) {
        cout << "Enter value for element " << i + 1 << ": ";
        cin >> marks[i];
    }

    cout << "The 1st element is: " << marks[0] << endl;
    cout << "The last element is: " << marks[4] << endl;

    return 0;
}