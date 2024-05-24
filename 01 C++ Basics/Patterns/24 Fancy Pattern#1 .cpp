#include <iostream>
using namespace std;

int main() {
    int length;
    cout << "Enter length";
    cin >> length;

    for (int row = 0; row < length; ++row) {
        // 1. Stars
        for (int col = 0; col < 2 * length - row - 2; ++col) {
            cout << "*";
        }

        for (int col = 0; col < row + 1; ++col) {
            cout << row + 1 << "*";
        }

        for (int i = 0; i < 2 * length - row - 3; ++i) {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}