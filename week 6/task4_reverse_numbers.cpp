#include <iostream>
using namespace std;

void printReverseArray(int arr[], int n) {
    for (int i = n - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;

    cout << "How many numbers do you want to enter? ";
    cin >> n;

    int numbers[n];

    for (int i = 0; i < n; i++) {
        cout << "Enter number " << i + 1 << ": ";
        cin >> numbers[i];
    }

    cout << "Numbers in reverse order: ";
    printReverseArray(numbers, n);

    return 0;
}