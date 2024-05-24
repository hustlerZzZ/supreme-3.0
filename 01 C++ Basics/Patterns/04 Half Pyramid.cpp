// Half Pyramid
#include <iostream>

using namespace std;

int main() {
    int height;
    cout << "Tell me the height of the triangle :";
    cin >> height;

    for (int i = 0; i < height; ++i) {
        for (int j = 0; j < i+1; ++j) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}
