#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "How many numbers do you want to enter? ";
    cin >> n;

    int numbers[n];

    for (int i = 0; i < n; i++) {
        cout << "Enter number " << i + 1 << ": ";
        cin >> numbers[i];
    }

    cout << "The numbers you entered are: " << endl;
    for (int i = 0; i < n; i++) {
        cout << numbers[i] << " ";
    }

    return 0;
}