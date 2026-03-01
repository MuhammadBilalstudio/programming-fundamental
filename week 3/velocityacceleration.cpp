#include <iostream>
using namespace std;

int main() {
    float initialVelocity, acceleration, time, finalVelocity;

    cout << "Enter Initial Velocity (m/s): ";
    cin >> initialVelocity;

    cout << "Enter Acceleration (m/s^2): ";
    cin >> acceleration;

    cout << "Enter Time (s): ";
    cin >> time;

    // Formula: vf = vi + (a * t)
    finalVelocity = (acceleration * time) + initialVelocity;

    cout << "Final Velocity of the car: " << finalVelocity << endl;

    return 0;
}