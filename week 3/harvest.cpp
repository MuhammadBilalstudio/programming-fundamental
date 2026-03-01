#include <iostream>
using namespace std;

int main() {
    float vegPrice, fruitPrice;
    int vegKgs, fruitKgs;
    float totalCoins, totalRps;

    cout << "Enter vegetable price per kilogram (in coins): ";
    cin >> vegPrice;

    cout << "Enter fruit price per kilogram (in coins): ";
    cin >> fruitPrice;

    cout << "Enter total kilograms of vegetables: ";
    cin >> vegKgs;

    cout << "Enter total kilograms of fruits: ";
    cin >> fruitKgs;

    // Step 1: Calculate total coins
    totalCoins = (vegPrice * vegKgs) + (fruitPrice * fruitKgs);

    // Step 2: Convert coins to Rps (1 Rp = 1.94 coins)
    totalRps = totalCoins / 1.94;

    cout << "Total earnings in Rps: " << totalRps << endl;

    return 0;
}