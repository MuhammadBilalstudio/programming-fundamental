#include <iostream>
#include <string>
using namespace std;

void jazzify(string chords[], int size) {
    for (int i = 0; i < size; i++) {
        // Only add '7' if the last character isn't already '7'
        if (chords[i].empty() || chords[i].back() != '7') {
            chords[i] = chords[i] + "7";
        }
    }
}

int main() {
    int n;
    cout << "Enter the number of chords: ";
    cin >> n;

    string chords[n];
    for (int i = 0; i < n; i++) {
        cout << "Enter chord " << i + 1 << ": ";
        cin >> chords[i];
    }

    jazzify(chords, n);

    cout << "Jazzified Chords: [";
    for (int i = 0; i < n; i++) {
        cout << chords[i] << (i == n - 1 ? "" : ", ");
    }
    cout << "]" << endl;

    return 0;
}