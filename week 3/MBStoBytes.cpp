#include <iostream>
using namespace std;

int main() {
    double mb, bits;

    cout << "Enter the size in megabytes: ";
    cin >> mb;

    // Calculation: MB to KB to Bytes to Bits
    bits = mb * 1024 * 1024 * 8;

    cout << mb << " MB is equal to " << bits << " bits." << endl;

    return 0;
}