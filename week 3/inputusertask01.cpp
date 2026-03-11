#include <iostream>
using namespace std;

int main()
{
    string name;
    int rollNumber;
    float aggregate;
    char section;

    cout << "Enter your name: ";
    cin >> name;

    cout << "Enter your roll number: ";
    cin >> rollNumber;

    cout << "Enter your aggregate: ";
    cin >> aggregate;

    cout << "Enter your section: ";
    cin >> section;

    cout << endl;
    cout << "Name: " << name << endl;
    cout << "Roll Number: " << rollNumber << endl;
    cout << "Aggregate: " << aggregate << endl;
    cout << "Section: " << section;

    return 0;
}