#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    for (int i = 1; i <= 5; i = i + 1) {
        sum = sum + i;
    }
    cout << sum << endl;
    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int i = 1, sum = 0;
    while (i <= 5) {
        sum = sum + i;
        i = i + 1;
    }
    cout << sum << endl;
    return 0;
}

