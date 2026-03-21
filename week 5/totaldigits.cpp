#include <iostream>
using namespace std;

int totalDigits(int num) {
    int count = 0;

    if (num == 0) {
        return 1;
    }

    while (num != 0) {
        num /= 10;
        count++;
    }

    return count;
}

int main() {
    int num;
    cin >> num;
    cout << totalDigits(num) << endl;
    return 0;
}