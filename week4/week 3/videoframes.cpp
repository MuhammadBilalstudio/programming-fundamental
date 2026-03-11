#include <iostream>
using namespace std;

int main() {
    int minutes, fps, totalFrames;

    cout << "Enter the number of minutes: ";
    cin >> minutes;

    cout << "Enter the frames per second: ";
    cin >> fps;

    // Calculation: (Minutes * 60 seconds) * FPS
    totalFrames = (minutes * 60) * fps;

    cout << "Total number of frames: " << totalFrames << endl;

    return 0;
}