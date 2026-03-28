#include <iostream>
#include <string>
using namespace std;

int main() {
    string text;

    cout << "Enter a word: ";
    cin >> text;

    for (int i = 0; i < text.length(); i++) {
        
        if (text[i] == 'z') {
            text[i] = 'a';
        }
        
        else if (text[i] == 'Z') {
            text[i] = 'A';
        }
        else {
            text[i] = text[i] + 1;
        }
    }

    cout << "Output: " << text << endl;

    return 0;
}