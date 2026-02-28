#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    float matric, inter, ecat, aggregate;

    cout << "Enter your name: ";
    cin >> name;

    cout << "Enter Matric marks (out of 1100): ";
    cin >> matric;

    cout << "Enter Inter marks (out of 550): ";
    cin >> inter;

    cout << "Enter Ecat marks (out of 400): ";
    cin >> ecat;

    // Calculation based on weightage
    aggregate = (matric / 1100 * 10) + (inter / 550 * 40) + (ecat / 400 * 50);

    cout << "Student Name: " << name << endl;
    cout << "Your total aggregate is: " << aggregate << "%" << endl;

    return 0;
}