#include <iostream>
using namespace std;

int x = 10; // global variable

void showLocal() {
    int x = 5; // local variable
    cout << "Local x: " << x << endl;
}

void showGlobal() {
    cout << "Global x: " << x << endl;
}

int main() {
    showLocal();
    showGlobal();

    return 0;
}