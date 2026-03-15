#include<iostream>
#include<string>
using namespace std;

int main() {
    string word1, word2;
    
    cout << "Enter the first word: ";
    cin >> word1;
    cout << "Enter the second word: ";
    cin >> word2;

    if (word1 == word2) {
        cout << "yes, the words are the same" << endl;
    } else {
        cout << "no, the words are different" << endl;
    }

    return 0;
}