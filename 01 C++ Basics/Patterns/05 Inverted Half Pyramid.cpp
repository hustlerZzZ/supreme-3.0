// Inverted Half Pyramid
#include <iostream>

using namespace std;

int main() {
    int height;
    cout << "Enter the height of the triangle :";
    cin >> height;

    for (int i = 0; i < height; ++i) {
        for (int j = height-i; j > 0; --j) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}