#include <iostream>
using namespace std;

int main() {
    float size, cost, area;
    float costPerPound, costPerSquareFoot;

    cout << "Enter the size of the fertilizer bag in pounds: ";
    cin >> size;

    cout << "Enter the cost of the bag: ";
    cin >> cost;

    cout << "Enter the area in square feet that can be covered by the bag: ";
    cin >> area;

    // Calculation 1: Cost per pound
    costPerPound = cost / size;

    // Calculation 2: Cost per square foot
    costPerSquareFoot = cost / area;

    cout << "Cost of fertilizer per pound: " << costPerPound << endl;
    cout << "Cost of fertilizing per square foot: " << costPerSquareFoot << endl;

    return 0;
}