#include<iostream>
using namespace std;

int main() {
    int cost;

    cout << "Enter the cost of the dress: ";
    cin >> cost;

    // This block only runs if cost is less than 1500
    if (cost < 1500) {
        cout << "Buy the dress" << endl;
    }

    return 0;
}