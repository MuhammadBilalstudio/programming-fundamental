#include<iostream>
using namespace std;

int main() {
    char input;

    cout << "Enter any character in lower case: ";
    cin >> input;

    
    if (input == 'a' || input == 'e' || input == 'i' || input == 'o' || input == 'u') {
        cout << "It is a vowel" << endl;
    }
    else if (input >= '0' && input <= '9') {
        cout << "It is a number" << endl;
    }
    
    else {
        cout << "It is a consonant" << endl;
    }

    return 0;
}