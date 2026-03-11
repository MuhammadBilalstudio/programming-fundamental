#include <iostream>
using namespace std;

int main() {
    float imposters, players;
    int chance;

    cout << "Enter the count of imposters: ";
    cin >> imposters;

    cout << "Enter the total player count: ";
    cin >> players;

    // Calculation: 100 * (i / p)
    chance = 100 * (imposters / players);

    cout << "Chance of being an imposter: " << chance << "%" << endl;

    return 0;
}