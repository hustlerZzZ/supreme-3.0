#include <iostream>
using namespace std;

int main() {
    int length;
    cout << "Enter length:";
    cin >> length;

    for (int row = 0; row < length; ++row) {
        char ch = 'A'; // ASCII value 65 --> initialization
        for (int col = 0; col < row + 1; ++col) {
            cout << ch;
            ch++; // 'A' + 1;
        }

        ch--;

        while (ch > 'A') {
            ch--;
            cout << ch;
        }

        cout << endl;
    }

    return 0;
}