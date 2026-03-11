#include <iostream>
using namespace std;

int main() {
    int n, w, h, totalWalls;

    cout << "Enter the number of square meters you can paint: ";
    cin >> n;

    cout << "Enter the width of a single wall (in meters): ";
    cin >> w;

    cout << "Enter the height of a single wall (in meters): ";
    cin >> h;

    // Formula: n / (w * h)
    // Using integer division ensures we only count complete walls
    totalWalls = n / (w * h);

    cout << "Number of complete walls you can paint: " << totalWalls << endl;

    return 0;
}