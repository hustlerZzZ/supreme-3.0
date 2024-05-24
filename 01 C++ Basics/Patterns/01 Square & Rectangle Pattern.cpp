// Square & Rectangle Pattern
#include <iostream>

using namespace std;

int main() {
    int row, column;

    cout << "Enter no of rows:\n";
    cin >> row ;
    cout << "Enter no of columns:\n";
    cin >> column;

    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < column; ++j) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}