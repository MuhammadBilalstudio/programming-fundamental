#include <iostream>
using namespace std;

int main() {
    int sum = 0;

    for (int i = 1; i <= 100; i++) {
        sum += i;
    }

    cout << sum << endl;
    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int i = 1, sum = 0;

    while (i <= 100) {
        sum += i;
        i++;
    }

    cout << sum << endl;
    return 0;
}