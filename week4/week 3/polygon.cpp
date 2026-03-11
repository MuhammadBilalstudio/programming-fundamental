#include <iostream>
using namespace std;

int main() {
    int n, sum;

    cout << "Enter the number of sides of the polygon: ";
    cin >> n;

    // Formula: (n - 2) * 180
    sum = (n - 2) * 180;

    cout << "The sum of the internal angles of a " << n << "-sided polygon is: " << sum << " degrees" << endl;

    return 0;
}