#include <iostream>

using namespace std;

// * * * * *
// *     *
// *   *
// * *
// *

int main() {
    int height;
    cout << "Enter the height of the triangle:";
    cin >> height;

    for (int row = 0; row < height; ++row) {
        for (int col = 0; col < height - row; ++col) {
            if (row == 0 || col == 0 || row == height -1 || row + col == height -1) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }

    return 0;
}