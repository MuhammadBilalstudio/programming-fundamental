#include <iostream>
#include <string>
using namespace std;

int main() {
    string text;
    char target;
    bool found = false;

    cout << "Enter a string (sentences allowed): ";
    getline(cin, text);

    cout << "Enter a character to search for: ";
    cin >> target;

    // We use text.length() to know exactly how many characters to check
    for (int i = 0; i < text.length(); i++) {
        if (text[i] == target) {
            found = true;
            break; // We found it, so we can stop looking!
        }
    }

    if (found) {
        cout << "Character '" << target << "' is present in the string." << endl;
    } else {
        cout << "Character '" << target << "' is NOT present in the string." << endl;
    }

    return 0;
}