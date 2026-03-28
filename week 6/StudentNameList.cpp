#include <iostream>
#include <string>
using namespace std;

int main() {
    string students[5];

    for (int i = 0; i < 5; i++) {
        cout << "Enter name of student " << i + 1 << ": ";
        cin >> students[i];
    }

    cout << "\nList of Students:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << students[i] << endl;
    }

    return 0;
}