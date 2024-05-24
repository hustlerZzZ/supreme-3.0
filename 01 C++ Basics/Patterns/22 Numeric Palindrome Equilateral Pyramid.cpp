#include <iostream>
using namespace std;

// r0 ->          1
// r1 ->        1 2 1
// r2 ->      1 2 3 2 1
// r3 ->    1 2 3 4 3 2 1
// r4 ->  1 2 3 4 5 4 3 2 1

// row <- [0, 5)
// 0 , 1 , 2 , 3 , 4

int main() {
    int length;
    cout << "Enter the length:";
    cin >> length;

    for (int row = 0; row < length; ++row) {
        // 1. Space
        for (int col = 0; col < length - row; ++col) {
            cout << "  ";
        }

        // 2. Number
        for (int col = 0; col < row + 1; ++col) {
            cout << col + 1 << " ";
        }

        // 3. Number's below the row 0 and starting in reverse
        for (int col = 0; col < row; ++col) {
            cout << row - col  << " ";
        }

        cout << endl;
    }

    return 0;
}