#include <iostream>
using namespace std;

void findMinMax(int arr[], int size) {
    int max = arr[0];
    int min = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] > max) max = arr[i];
        if (arr[i] < min) min = arr[i];
    }

    cout << "Largest Number: " << max << endl;
    cout << "Smallest Number: " << min << endl;
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

    findMinMax(numbers, n);

    return 0;
}