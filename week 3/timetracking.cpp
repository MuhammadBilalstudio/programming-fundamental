#include <iostream>
using namespace std;

int main() {
    float paint, time, rate;

    cout << "Enter the area of the wall (sq. meters): ";
    cin >> paint;

    cout << "Enter the time taken (hours): ";
    cin >> time;

    rate = paint / time;

    cout << "The rate of painting is: " << rate << " sq. meters per hour." << endl;

    return 0;
}