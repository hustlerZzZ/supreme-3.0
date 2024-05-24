#include <iostream>
using namespace std;

// 1 2 3 4 5
// 1     4
// 1   3
// 1 2
// 1

int main() {
    int length;
    cout << "Enter the length:";
    cin >> length;

    for (int row = 0; row < length; ++row) {
        // 1. Number
        for (int col = 0; col < length - row; ++col) {
            if (row == 0 || row == length - 1 || row == length - 2 || col == 0 || col == length - row - 1) {
                cout << col + 1 << " ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }

    return 0;
}