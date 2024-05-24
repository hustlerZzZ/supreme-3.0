#include <iostream>
using namespace std;

// 1 -> 1 number
// 2*3 -> 2 number & 1 star
// 4*5*6 -> 3 number & 2 star
// 7*8*9*10 -> 4 number & 3 star
// 7*8*9*10 -> 4 number & 3 star
// 4*5*6 -> 3 number & 2 star
// 2*3 -> 2 number & 1 star
// 1 -> 1 number

int main() {
    int length;
    cout << "Enter length:";
    cin >> length;

    // I. Growing phase
    int start = 1;
    for (int row = 0; row < length; ++row) {
        for (int col = 0; col <= row; ++col) {
            cout << start;
            start++;
            if (col < row) {
                cout << "*";
            }
        }
        cout << endl;
    }

    // II. Shrinking phase
    int shrink = start - length;
    for (int row = 0; row < length; ++row) {
        int k = shrink;
        for (int col = 0; col <= length - row - 1; ++col) {
            cout << k;
            k++;
            if (col < length - row - 1) {
                cout << "*";
            }
        }
        shrink = shrink - (length - row - 1);
        cout << endl;
    }

    return 0;
}