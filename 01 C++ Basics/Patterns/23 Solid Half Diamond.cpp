#include <iostream>
using namespace std;

int main() {
    int length;
    cout << "Enter the length:";
    cin >> length;

    // I. Upper Triangle
    for (int row = 0; row < length; ++row) {
        // 1. Stars
        for (int i = 0; i < row + 1; ++i) {
            cout << "* ";
        }
        cout << endl;
    }

    length--;

    // II. Lower Triangle
    for (int row = 0; row < length; ++row) {
        // 1. Stars
        for (int col = 0; col < length - row; ++col) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}