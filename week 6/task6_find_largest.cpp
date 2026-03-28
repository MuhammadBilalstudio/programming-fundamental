#include <iostream>
using namespace std;

int findLargestNumber(int arr[], int size) {
    int max = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    
    return max;
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int numbers[n];

    for (int i = 0; i < n; i++) {
        cout << "Enter number " << i + 1 << ": ";
        cin >> numbers[i];
    }

    int largest = findLargestNumber(numbers, n);

    cout << "The largest number is: " << largest << endl;

    return 0;
}