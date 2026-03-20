#include <iostream>
using namespace std;

int main() {
    char ch = 'y';
    while (ch != 'n') {
        cout << "I am happy" << endl;
        cin >> ch;
    }
    return 0;
}