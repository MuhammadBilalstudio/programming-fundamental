#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    float kgs;
    int days;

    cout << "Enter the Name of the Person: ";
    cin >> name;

    cout << "Enter the target weight loss in kilograms: ";
    cin >> kgs;

    // Rule: 1 kg loss requires 15 days
    days = kgs * 15;

    cout << name << " will need " << days << " days to lose " << kgs << " kg of weight by following the doctor's suggestions" << endl;

    return 0;
}