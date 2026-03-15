#include<iostream>
using namespace std;

int main() {
    string name;
    
    cout << "Enter your name: ";
    cin >> name;

   
    if (name == "Ali") {
        cout << "Congratulations Ali for your admission!" << endl;
    } else {
        cout << "Try again next time." << endl;
    }

    return 0;
}