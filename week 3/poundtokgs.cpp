#include <iostream>
using namespace std;

int main() {
    // Defining our variables
    float lb, kg;

    // Getting the input from the user
    cout << "Enter weight in pounds: ";
    cin >> lb;

    // The math part (1 lb = 0.45 kg)
    kg = lb * 0.45;

    // Showing the result
    cout << "Weight in kilograms is: " << kg << endl;

    return 0;
}