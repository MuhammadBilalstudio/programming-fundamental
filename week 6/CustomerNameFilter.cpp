#include <iostream>
#include <string>
using namespace std;

int main() {
    int n, count = 0;
    char searchLetter;

    cout << "Enter number of customers: ";
    cin >> n;

    string customers[n];
    for (int i = 0; i < n; i++) {
        cout << "Enter name of customer " << i + 1 << ": ";
        cin >> customers[i];
    }

    cout << "Enter a letter to count starting names: ";
    cin >> searchLetter;

    for (int i = 0; i < n; i++) {
        if (customers[i][0] == searchLetter || customers[i][0] == (searchLetter - 32) || customers[i][0] == (searchLetter + 32)) {
            count++;
        }
    }

    cout << "Total names starting with '" << searchLetter << "': " << count << endl;

    return 0;
}