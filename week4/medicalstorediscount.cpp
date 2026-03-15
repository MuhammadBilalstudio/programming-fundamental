#include<iostream>
using namespace std;

int main() {
    float bill, discount, discounted_bill;

    cout << "Enter your bill: ";
    cin >> bill;

  
    if (bill <= 5000) {
        discount = bill * 0.05; 
    } else {
        discount = bill * 0.10; 
    }

    discounted_bill = bill - discount;

    cout << "Your discounted bill is: " << discounted_bill << endl;

    return 0;
}