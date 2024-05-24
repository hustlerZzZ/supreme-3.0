#include <iostream>
using namespace std;

int main() {
    int length;
    cout << "Enter length:";
    cin >> length;

    // PART - I
    for (int row = 0; row < length; ++row) {
        // 1. Stars
        for (int col = 0; col < length - row; ++col) {
            cout << "* ";
        }

        // 2. Spaces
        for (int col = 0; col < 2 * row + 1; ++col) {
            cout << "  ";
        }

        // 3. Stars
        for (int col = 0; col < length - row; ++col) {
            cout << "* ";
        }
        cout << endl;
    }

    // PART - II
    for (int row = 0; row < length; ++row) {
        // 1. Stars
        for (int col = 0; col < row + 1; ++col) {
            cout << "* ";
        }

        // 2. Spaces
        for (int col = 0; col < 2 * (length - row) - 1; ++col) {
            cout << "  ";
        }

        // 3. Stars
        for (int col = 0; col < row + 1; ++col) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}