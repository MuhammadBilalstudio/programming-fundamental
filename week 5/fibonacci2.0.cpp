#include <iostream>
using namespace std;

void generateFibonacci(int n) {
    int a = 0, b = 1, next;

    for (int i = 1; i <= n; i++) {
        cout << a << " ";
        next = a + b;
        a = b;
        b = next;
    }
}

int main() {
    int n;
    cin >> n;
    generateFibonacci(n);
    return 0;
}