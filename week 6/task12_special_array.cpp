#include <iostream>
using namespace std;

bool isSpecialArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
       
        if (i % 2 == 0) {
            if (arr[i] % 2 != 0) {
                return false;
            }
        } 
       
        else {
            if (arr[i] % 2 == 0) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int numbers[n];
    for (int i = 0; i < n; i++) {
        cout << "Enter element " << i << ": ";
        cin >> numbers[i];
    }

    if (isSpecialArray(numbers, n)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}