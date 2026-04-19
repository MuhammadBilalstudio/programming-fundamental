#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double distance, angleDeg;

    cout << "Enter distance (feet): ";
    cin >> distance;

    cout << "Enter angle (degrees): ";
    cin >> angleDeg;

    double angleRad = angleDeg / 57.2958;  // convert to radians
    double height = distance * tan(angleRad);

    cout << "Tree height: " << height << " feet" << endl;

    return 0;
}