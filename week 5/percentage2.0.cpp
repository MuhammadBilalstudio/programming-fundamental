#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of subjects: ";
    cin >> n;

    int marks, total = 0;

    for (int i = 1; i <= n; i++) {
        cout << "Enter marks for subject " << i << ": ";
        cin >> marks;
        total += marks;
    }

    double percentage = (total * 100.0) / (n * 100);
    cout << "Percentage: " << percentage << "%" << endl;

    return 0;
}