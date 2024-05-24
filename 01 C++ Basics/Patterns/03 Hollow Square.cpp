// Hollow Square

#include <iostream>

using namespace std;

int main() {
    int side;
    cout << "Enter the length of your side:\n";
    cin >> side;

    // Logic
    for (int i = 0; i < side; ++i) {
        for (int j = 0; j < side; ++j) {
            // 1. Check if the row is 0th or last, if it is then print star
            if (i==0 || i == side-1) {
                cout << "*";
            }
            // 2. Else check according to the col
            else {
                // 3. Check if the col is 0th or last, if it is then print star
                if (j == 0 || j == side -1) {
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