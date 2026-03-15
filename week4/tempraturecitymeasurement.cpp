#include<iostream>
using namespace std;

int main() {
    int t1, t2, diff;

    cout << "Temperature City 1: ";
    cin >> t1;
    cout << "Temperature City 2: ";
    cin >> t2;

    // Find the difference by subtracting the smaller from the larger
    if (t1 > t2) {
        diff = t1 - t2;
    } else {
        diff = t2 - t1;
    }

    // Check if the gap is bigger than 10
    if (diff > 10) {
        cout << "Difference is too Big" << endl;
    }

    cout << "Program Ends" << endl;

    return 0;
}