#include  <iostream>

using namespace std;

int main() {
    int length;
    cout << "Enter the length:";
    cin >> length;

    for (int row = 0; row < length; ++row) {
        // 1. Space
        for (int col = 0; col < length-row-1; ++col) {
            cout << " ";
        }

        // 2. Stars
        for (int col = 0; col < row+1; ++col) {
            // 1. Star at borders
            if(row == 0 || row == length - 1 || col == 0 || col == row) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }

    return 0;
}