#include <iostream>
#include <string>
using namespace std;

int main() {
    string text;
    string result = "";

    cout << "Enter a string: ";
    getline(cin, text);

    for (int i = 0; i < text.length(); i++) {
        char ch = text[i];
        
        // Check for both lowercase and uppercase vowels
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            // Do nothing (skip vowels)
        } else {
            result += ch;
        }
    }

    cout << "Output: " << result << endl;

    return 0;
}