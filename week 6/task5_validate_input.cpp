#include <iostream>
using namespace std;

bool isAlreadyEntered(int arr[], int size, int number) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == number) {
            return true;
        }
    }
    return false;
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int numbers[n];

    for (int i = 0; i < n; i++) {
        int temp;
        cout << "Enter number " << i + 1 << ": ";
        cin >> temp;

        if (isAlreadyEntered(numbers, i, temp)) {
            cout << "Already Entered" << endl;
            i--; 
        } else {
            numbers[i] = temp;
        }
    }

    cout << "Stored unique numbers: ";
    for (int i = 0; i < n; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}