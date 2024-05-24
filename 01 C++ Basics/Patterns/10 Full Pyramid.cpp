#include <iostream>

using namespace std;

int main() {
    int length;
    cout << "Enter the length:";
    cin >> length;

    for (int row = 0; row < length; ++row) {
        // 1. Spaces
        for (int col = 0; col < length - row -1 ; ++col) {
            cout << " ";
        }

        // 2. Stars
        for (int col = 0; col < row + 1; ++col) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}