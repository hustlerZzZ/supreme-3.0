// Hollow Rectangle
#include <iostream>

using namespace std;

int main() {
    int row, col;
    cout << "Enter no of rows: \n";
    cin >> row;
    cout << "Enter no of cols: \n";
    cin >> col;

    // Logic
    for(int i=0; i<row; i++) {
        for (int j = 0; j < col; ++j) {
            // 1. Check if row is first or last if, yes print all stars
            if(i == 0 || i == row-1) {
                cout << "*";
            }
            // 2. Else print according to the col
            else {
                // 3. If col is 0th or last, then print star
                if (j == 0 || j == col-1) {
                    cout << "*";
                }
                // 4. Else print space
                else {
                    cout << " ";
                }
            }
        }
        cout << endl;
    }

    return 0;
}