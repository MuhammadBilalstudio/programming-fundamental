#include <iostream>
using namespace std;

int main() {
    int minutes, fps, totalFrames;

    cout << "Enter the number of minutes: ";
    cin >> minutes;

    cout << "Enter the frames per second: ";
    cin >> fps;

    // Convert minutes to seconds (min * 60) and then multiply by FPS
    totalFrames = minutes * 60 * fps;

    cout << "Total number of frames: " << totalFrames << endl;

    return 0;
}