#include <iostream>
using namespace std;

int main() {
    int age, moves;
    float average;

    cout << "Enter the person's age: ";
    cin >> age;

    cout << "Enter the number of times they've moved: ";
    cin >> moves;

    // Calculate average: total age divided by number of houses (moves + 1)
    average = (float)age / (moves + 1);

    cout << "Average number of years lived in a single house: " << average << endl;

    return 0;
}