#include<iostream>
using namespace std;

int main() {
    int salary = 10000;
    int laptop_price = 50000;
    int months_advance = 6;
    
    int advance_per_month = salary * 0.5;
    int total_advance = advance_per_month * months_advance;

    if (total_advance >= laptop_price) {
        cout << "Ali can buy the laptop with the advanced salary!" << endl;
    } else {
        cout << "Ali cannot buy the laptop yet." << endl;
        
        int months_required = laptop_price / advance_per_month;
        cout << "Months required to buy laptop: " << months_required << endl;
    }

    return 0;
}