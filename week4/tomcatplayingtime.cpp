#include<iostream>
using namespace std;

int main() {
    int holidays;
    cout << "Holidays: ";
    cin >> holidays;

    int working_days = 365 - holidays;
    int play_time = (working_days * 63) + (holidays * 127);
    int norm = 30000;

    if (play_time <= norm) {
        int diff = norm - play_time;
        int hours = diff / 60;
        int mins = diff % 60;
        
        cout << "Tom sleeps well" << endl;
        cout << hours << " hours and " << mins << " minutes less for play" << endl;
    } else {
        int diff = play_time - norm;
        int hours = diff / 60;
        int mins = diff % 60;

        cout << "Tom will run away" << endl;
        cout << hours << " hours and " << mins << " minutes for play" << endl;
    }

    return 0;
}