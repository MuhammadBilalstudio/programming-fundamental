#include<iostream>
using namespace std;

int main() {
    int red, white, tulips;
    float original_price, final_price;

    cout << "Red Rose: ";
    cin >> red;
    cout << "White Rose: ";
    cin >> white;
    cout << "Tulips: ";
    cin >> tulips;

    // Calculate total price using given rates
    original_price = (red * 2.00) + (white * 4.10) + (tulips * 2.50);

    if (original_price > 200) {
        float discount = original_price * 0.20;
        final_price = original_price - discount;
        
        cout << "Original Price: " << original_price << endl;
        cout << "Price after Discount: " << final_price << endl;
    } else {
        cout << "Total Price: " << original_price << endl;
    }

    return 0;
}