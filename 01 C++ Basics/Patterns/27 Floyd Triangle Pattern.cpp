#include <iostream>
using namespace std;

int main() {
    int length;
    cout << "Enter length:";
    cin >> length;

    int i = 1;
    for (int row = 0; row < length; ++row) {
        for (int col = 0; col < row + 1; ++col) {
            cout << i << " ";
            i++;
        }
        cout << endl;
    }

    return 0;
}
