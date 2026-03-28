#include <iostream>
using namespace std;

void displayLocations(char arr[]) {
    cout << "Alphabet Locations:" << endl;
    
    
    for (int i = 0; arr[i] != '\0'; i++) {
        cout << "Letter: " << arr[i] << " is at index: " << i << endl;
    }
}

int main() {
    char word[50]; // Character array to store the word

    cout << "Enter a word: ";
    cin >> word;

    // Passing the character array to the function
    displayLocations(word);

    return 0;
}