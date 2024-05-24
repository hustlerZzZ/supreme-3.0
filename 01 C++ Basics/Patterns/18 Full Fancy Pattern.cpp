#include <iostream>
using namespace std;

int main() {
    int length;
    cout << "Enter length:";
    cin >> length;

    // I. Fancy 12 Pattern
    for (int row = 0; row < length; ++row) {
        for (int col = 0; col < 2 * row +1; ++col) {
            if(col % 2 == 0) {
                cout << row + 1;
            } else {
                cout << "*";
            }
        }
        cout << endl;
    }

    length--;

    // II. Inverted Fancy Pattern
    for (int row = 0; row < length; ++row) {
        for (int col = 0; col < 2 * length - 2 * row -1; ++col) {
            if(col % 2 == 0) {
                cout << length - row;
            } else {
                cout << "*";
            }
        }
        cout << endl;
    }

    return 0;
}