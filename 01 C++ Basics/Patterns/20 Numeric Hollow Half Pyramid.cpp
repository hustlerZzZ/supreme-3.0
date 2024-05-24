#include <iostream>
using namespace std;

// 1
// 1 2
// 1    3
// 1      4
// 1 2  3 4 5


int main() {
    int length;
    cout << "Enter the length:";
    cin >> length;

    for (int row = 0; row < length; ++row) {
        // 1. Number
        for (int col = 0; col < row + 1; ++col) {
            if(row == 0 || row == 1 || row == length - 1 || col == 0 || col == row) {
                cout << col + 1 << " ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
    
    return 0;
}