#include <iostream>
using namespace std;

int main() {
    int length;
    cout << "Enter length:";
    cin >> length;

    // 1. Upper Hollow Pyramid
    for (int row = 0; row < length; ++row) {
        // 1. Space
        for (int col = 0; col < length - row -1; ++col) {
            cout << " ";
        }

        // 2. Star
        for (int col = 0; col < row + 1; ++col) {
            if (row == 0 || col == 0 || col == row) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }

    // 2. Lower Hollow Pyramid
    for (int row = 0; row < length; ++row) {
        // 1. Space
        for (int col = 0; col < row; ++col) {
            cout << " ";
        }

        // 2. Star
        for (int col = 0; col < length - row; ++col) {
            if (col == 0 || col == length - row -1) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }

    return 0;
}