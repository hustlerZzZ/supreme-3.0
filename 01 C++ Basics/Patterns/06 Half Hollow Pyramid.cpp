// Half Hollow Pyramid
#include <iostream>

using namespace std;

int main() {
    int height;
    cout << "Enter the height of the triangle :";
    cin >> height;

    for (int i = 0; i < height; ++i) {
        for (int j = 0; j < i+1; ++j) {
            if (i == 0 || i == 1 || i == height - 1) {
                cout << "* ";
            } else {
                // Middle rows
                if (j == 0 || j == i) {
                    cout << "* ";
                } else {
                    cout << "  ";
                }
            }
        }
        cout << endl;
    }

    return 0;
}