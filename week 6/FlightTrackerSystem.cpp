#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cout << "Enter number of flights: ";
    cin >> n;

    string flightNumber[n], destination[n];
    int seatsAvailable[n];

    for (int i = 0; i < n; i++) {
        cout << "Flight " << i + 1 << " Number: ";
        cin >> flightNumber[i];
        cout << "Destination: ";
        cin >> destination[i];
        cout << "Seats Available: ";
        cin >> seatsAvailable[i];
    }

    cout << "\n--- Current Flight Schedule ---" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Flight: " << flightNumber[i] << " | To: " << destination[i] 
             << " | Seats: " << seatsAvailable[i] << endl;
    }

    return 0;
}