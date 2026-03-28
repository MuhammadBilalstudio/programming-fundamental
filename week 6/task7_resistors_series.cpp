#include <iostream>
using namespace std;

int main() {
    int n;
    float totalResistance = 0.0;

    cout << "Enter the number of resistors: ";
    cin >> n;

    float resistors[n];

    for (int i = 0; i < n; i++) {
        cout << "Enter resistance for resistor " << i + 1 << " (in ohms): ";
        cin >> resistors[i];
        totalResistance = totalResistance + resistors[i];
    }

    cout << "Total Resistance: " << totalResistance << " ohms" << endl;

    return 0;
}