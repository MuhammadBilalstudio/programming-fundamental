#include <iostream>
#include <string>
using namespace std;

int main() {
    string text;

    cout << "Enter a word or sentence: ";
    getline(cin, text);

    cout << "Reversed output: ";

    
    for (int i = text.length() - 1; i >= 0; i--) {
        cout << text[i];
    }

    cout << endl;

    return 0;
}