#include <iostream>
using namespace std;

int main() {
    int currentPopulation, birthRate, totalPopulation;

    cout << "Enter the current world population: ";
    cin >> currentPopulation;

    cout << "Enter the monthly birth rate (number of births per month): ";
    cin >> birthRate;

    // Calculation for 3 decades (30 years * 12 months = 360 months) 
    totalPopulation = currentPopulation + (birthRate * 360);

    cout << "Population in three decades will be: " << totalPopulation << endl;

    return 0;
}