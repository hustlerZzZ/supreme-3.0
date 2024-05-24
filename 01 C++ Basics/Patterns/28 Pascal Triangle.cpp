#include <iostream>
using namespace std;

int main() {
    int length;
    cout << "Enter length:";
    cin >> length;

    for (int row = 1; row <= length; ++row) {
        int C = 1;
        for (int col = 1; col <= row ; ++col) {
            cout << C << " ";
            C = C * (row - col) / col;
        }
        cout << endl;
    }

    return 0;
}
