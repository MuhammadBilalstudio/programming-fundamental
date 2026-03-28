#include <iostream>
using namespace std;

// Function to calculate sum
int calculateSum(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int numbers[n];
    cout << "Enter " << n << " numbers:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }

    int totalSum = calculateSum(numbers, n);
    cout << "Sum of all elements: " << totalSum << endl;

    return 0;
}