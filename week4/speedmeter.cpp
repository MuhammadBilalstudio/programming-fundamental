#include<iostream>
using namespace std;

int main() {
    float speed;
    cout << "Enter speed: ";
    cin >> speed;

    if (speed <= 10) {
        cout << "slow" << endl;
    } 
    else if (speed <= 50) {
        cout << "average" << endl;
    } 
    else if (speed <= 150) {
        cout << "fast" << endl;
    } 
    else if (speed <= 1000) {
        cout << "Ultra fast" << endl;
    } 
    else {
        cout << "Extremely fast" << endl;
    }

    return 0;
}