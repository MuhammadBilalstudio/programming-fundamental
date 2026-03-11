#include <iostream>
using namespace std;

int main() {
    int wins, draws, losses, totalPoints;

    cout << "Enter the number of wins: ";
    cin >> wins;

    cout << "Enter the number of draws: ";
    cin >> draws;

    cout << "Enter the number of losses: ";
    cin >> losses;

    // Wins give 3 points, draws give 1, losses give 0
    totalPoints = (wins * 3) + (draws * 1) + (losses * 0);

    cout << "Total points: " << totalPoints << endl;

    return 0;
}