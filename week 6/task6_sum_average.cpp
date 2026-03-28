#include <iostream>
using namespace std;

int main() {
    int numbers[5] = {1, 2, 3, 4, 5};
    int sum = 0;
    float average;

    for (int i = 0; i < 5; i++) {
        sum = sum + numbers[i];
    }

    average = sum / 5.0;

    cout << "Sum: " << sum << endl;
    cout << "Average: " << average << endl;

    return 0;
}