#include  <iostream>

using namespace std;

int main() {
    int length;
    cout << "Enter the length:";
    cin >> length;

    // Upper Pyramid
    for (int row = 0; row < length; ++row) {
        // 1. Space
        for (int col = 0; col < length - row -1; ++col) {
            cout << " ";
        }

        // 2. Star
        for (int col = 0; col < row + 1; ++col) {
            cout << "* ";
        }
        cout << endl;
    }

    // Lower Pyramid
    for (int row = 0; row < length; ++row) {
        // 1. Space
        for (int col = 0; col < row; ++col) {
            cout << " ";
        }

        // 2. Star
        for (int col = 0; col < length - row; ++col) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}