#include <iostream>
using namespace std;

int main() {
    float totalYears, people;
    int average;

    cout << "Enter the total number of years the house has been occupied: ";
    cin >> totalYears;

    cout << "Enter the number of people living in the house: ";
    cin >> people;

    // Calculation and rounding to nearest integer
    average = totalYears / people;

    cout << "On average, each person has lived in the house for " << average << " years." << endl;

    return 0;
}