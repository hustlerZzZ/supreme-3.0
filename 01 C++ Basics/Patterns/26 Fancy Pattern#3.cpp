#include <iostream>
using namespace std;

int main() {
    int length;
    cout << "Enter length:";
    cin >> length;

    for (int row = 0; row < length; ++row) {
        int cond = row <= length / 2 ? 2 * row : 2 * (length - row - 1);
        for (int col = 0; col <= cond; ++col) {
            // Stars
            if (col == 0 ) {
                cout << "* ";
            }

            // Column wise growing phase condition
            if (col <= cond / 2) {
                cout << col + 1 << " ";
            }
            // Column wise shrink phase condition
            else {
                cout << cond - col + 1 << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
