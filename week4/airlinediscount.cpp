#include<iostream>
#include<string>
using namespace std;

int main() {
    string country;
    float price, discount, final_price;

    cout << "Enter Country: ";
    cin >> country;
    cout << "Enter Ticket Price: ";
    cin >> price;

    if (country == "Ireland") {
        discount = price * 0.10;
    } else {
        discount = price * 0.05;
    }

    final_price = price - discount;

    cout << "Discounted Price: " << final_price << endl;

    return 0;
}