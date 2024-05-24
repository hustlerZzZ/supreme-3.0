#include <iostream>
using namespace std;

int main() {
    int length;
    cout << "Enter length:";
    cin >> length;

    // I. Upper Part of Butterfly
    for (int row = 0; row < length; ++row) {
        // 1. 1st Triangle
        for (int col = 0; col < row + 1; ++col) {
            cout << "* ";
        }

        // 2. 1st Space
        for (int col = 0; col < length - row; ++col) {
            cout << "  ";
        }

        // 3. 2nd Space
        for (int col = 0; col < length - row - 1; ++col) {
            cout << "  ";
        }

        // 4. 2nd Triangle
        for (int col = 0; col < row + 1; ++col) {
            cout << "* ";
        }

        cout << endl;
    }

    // II. Lower Part of Butterfly
    for (int row = 0; row < length; ++row) {
        // 1. 1st Inverted Triangle
        for (int col = 0; col < length - row; ++col) {
            cout << "* ";
        }

        // 2. 1st Space
        for (int col = 0; col < row + 1; ++col) {
            cout << "  ";
        }

        // 3. 2nd Space
        for (int col = 0; col < row; ++col) {
            cout << "  ";
        }

        // 4. 2nd Inverted Triangle
        for (int col = 0; col < length - row; ++col) {
            cout << "* ";
        }

        cout << endl;
    }

    return 0;
}
