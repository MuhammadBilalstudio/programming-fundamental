#include <iostream>
#include <cstdlib> // for system()
using namespace std;

int main() {
    // Set console color: Green background (2), Yellow text (E)
    system("Color 2E");

    // Pac-Man ASCII art
    cout << "   *****   " << endl;
    cout << " *       * " << endl;
    cout << "*   ***    " << endl;
    cout << "*  *       " << endl;
    cout << " *       * " << endl;
    cout << "   *****   " << endl;

    return 0;
}