#include <iostream>
using namespace std;

int main() {
    int length;
    cout << "Enter the length:";
    cin >> length;

    for (int row = 0; row < length; ++row) {
        // 1. Space
        for (int col = 0; col < row; ++col) {
            cout << " ";
        }
        
        // 2. Star
        for (int col = 0; col < length - row; ++col) {
            // 1. For stars in col's
            if (row == 0 || row == length - 1 || col == 0 || col == length - row -1) {
                cout << "* ";
            }
            // 2. For spaces between the star's
            else {
                cout << "  ";
            }
        }
        cout << endl;
    }
    
    return 0;
}