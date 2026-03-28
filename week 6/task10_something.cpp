#include <iostream>
#include <string>
using namespace std;

int main() {
    string argument;

    cout << "Enter the text: ";
    getline(cin, argument);

    string result = "something " + argument;

    cout << result << endl;

    return 0;
}