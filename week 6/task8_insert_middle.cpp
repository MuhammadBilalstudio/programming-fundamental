#include <iostream>
using namespace std;

int main() {
    int arr1[2];
    int n;

    cout << "Enter the 2 elements for the first array: " << endl;
    for (int i = 0; i < 2; i++) {
        cin >> arr1[i];
    }

    cout << "How many elements are in the second array? ";
    cin >> n;

    int arr2[n];
    cout << "Enter elements for the second array: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr2[i];
    }

    int resultSize = n + 2;
    int result[resultSize];

    result[0] = arr1[0];

    for (int i = 0; i < n; i++) {
        result[i + 1] = arr2[i];
    }

    result[resultSize - 1] = arr1[1];

    cout << "Resulting Array: [";
    for (int i = 0; i < resultSize; i++) {
        cout << result[i] << (i == resultSize - 1 ? "" : ", ");
    }
    cout << "]" << endl;

    return 0;
}