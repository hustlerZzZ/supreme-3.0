#include <iostream>

using namespace std;

int main() {
    int height;
    cout << "Enter the height of the triangle:";
    cin >> height;

    for (int i = 0; i < height; ++i) {
        for (int j = 0; j < height - i; ++j) {
            cout << j+1 << " ";
        }
        cout << endl;
    }
    return 0;
}