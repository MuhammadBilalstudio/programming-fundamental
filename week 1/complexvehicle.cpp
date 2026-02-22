#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    // Blue background + Yellow text
    system("color 16");

    // Header
    cout << "#####################################################" << endl;
    cout << "#                COMPLEX VEHICLE                   #" << endl;
    cout << "#                      CAR                         #" << endl;
    cout << "#####################################################" << endl << endl;

    // Thick & big car ASCII art
    cout << "           __________            " << endl;
    cout << "          /          \\          " << endl;
    cout << " ________|  ________  |________  " << endl;
    cout << "|        | |      | | |        | " << endl;
    cout << "|        | |      | | |        | " << endl;
    cout << "|________|_|______|_|_|________| " << endl;
    cout << "   (O)                (O)       " << endl << endl;

    cout << "Legend:" << endl;
    cout << "'O' = wheels, '_' = car body, '|' = frame, '/' & '\\' = roof/body" << endl;

    return 0;
}