#include <iostream>
using namespace std;

int main() {
    int twoPointers, threePointers, finalPoints;

    cout << "Enter the number of 2-pointers scored: ";
    cin >> twoPointers;

    cout << "Enter the number of 3-pointers scored: ";
    cin >> threePointers;

    // Calculation: 2 points for each 2-pointer and 3 points for each 3-pointer
    finalPoints = (twoPointers * 2) + (threePointers * 3);

    cout << "Final points for the team: " << finalPoints << endl;

    return 0;
}