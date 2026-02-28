#include <iostream>
#include <cstdlib> // for system()
using namespace std;

int main() {
    // Set console color: Green background (2), Yellow text (E)
    system("Color 2E");

    // Maze header
    cout << "#############################################" << endl;
    cout << "|...........|%%%%%|...........|....%....| |" << endl;
    cout << "|.#####.####|#|#|#|.#####.####|.#####.|#| |" << endl;
    cout << "|.|   |#   |#|#|#|.|   |#   |.|   |#| |" << endl;
    cout << "|.| % |#   |#|#|#|.| % |#   |.| % |.|#| |" << endl;
    cout << "|.#####.####|#|#|#|.#####.####|.#####.|#| |" << endl;
    cout << "|...........|%%%%%|...........|........| |" << endl;
    cout << "|#########################################|" << endl;
    cout << "| |...............|#####|.............| |" << endl;
    cout << "| # |.#####.#####.#.|# #|.#.#####.###.| |" << endl;
    cout << "| # |.#   |# #|#|.|# % #|.#.#   |# #.| |" << endl;
    cout << "| # |.#####.#####.|.|#####|.#.#####.###.| |" << endl;
    cout << "| |...............|.....|.............| |" << endl;
    cout << "#############################################" << endl;
    cout << endl;
    cout << "Legend: '#' = outer wall, '|' = vertical border/inner wall, '.' = path, '%' = item/obstacle" << endl;

    return 0;
}