#include <iostream>
#include <string>
using namespace std;

int main() {
    string movieName;
    int adultPrice, childPrice, adultSold, childSold, donationPercent;
    float totalEarnings, donationAmount, remainingAmount;

    cout << "Enter the movie name: ";
    cin >> movieName;
    cout << "Enter the adult ticket price: ";
    cin >> adultPrice;
    cout << "Enter the child ticket price: ";
    cin >> childPrice;
    cout << "Enter the number of adult tickets sold: ";
    cin >> adultSold;
    cout << "Enter the number of child tickets sold: ";
    cin >> childSold;
    cout << "Enter the percentage of the amount to be donated to charity: ";
    cin >> donationPercent;

    // Calculate total earnings
    totalEarnings = (adultPrice * adultSold) + (childPrice * childSold);
    
    // Calculate donation and remaining amount
    donationAmount = totalEarnings * (donationPercent / 100.0);
    remainingAmount = totalEarnings - donationAmount;

    cout << "________________________________________________" << endl;
    cout << "Movie Name: " << movieName << endl;
    cout << "Total amount generated from ticket sales: $" << totalEarnings << endl;
    cout << "Donation to charity (" << donationPercent << "%): $" << donationAmount << endl;
    cout << "Remaining amount after donation: $" << remainingAmount << endl;

    return 0;
}