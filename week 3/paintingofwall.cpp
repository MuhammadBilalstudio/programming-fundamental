#include <iostream>
using namespace std;

int main() {
    int n, w, h;
    int wallArea, totalWalls;

    cout << "Number of square meters you can paint: ";
    cin >> n;

    cout << "Width of a single wall (in meters): ";
    cin >> w;

    cout << "Height of a single wall (in meters): ";
    cin >> h;

    // Area of one wall
    wallArea = w * h;

    // Calculate complete walls (integer division handles the "don't count partial walls" rule)
    totalWalls = n / wallArea;

    cout << "Number of complete walls you can paint: " << totalWalls << endl;

    return 0;
}