#include <iostream>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int a, b;
    cin >> a >> b;

    int hcf = gcd(a, b);
    int lcm = (a * b) / hcf;

    cout << "GCD: " << hcf << endl;
    cout << "LCM: " << lcm << endl;

    return 0;
}