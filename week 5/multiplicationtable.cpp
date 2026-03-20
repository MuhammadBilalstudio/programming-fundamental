#include <iostream>
using namespace std;

int main()
{
    int nums[] = {24, 50, 29};

    for(int i = 0; i < 3; i++)
    {
        cout << "\nTable of " << nums[i] << endl;

        for(int j = 1; j <= 10; j++)
        {
            cout << nums[i] << " x " << j << " = " << nums[i] * j << endl;
        }
    }

    return 0;
}