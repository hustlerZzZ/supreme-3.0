#include <iostream>
using namespace std;

bool searching(int arr[3][4] , int rowSize, int colSize, int target) {
    for (int i = 0; i < rowSize; ++i) {
        for (int j = 0; j < colSize; ++j) {
            if (arr[i][j] == target) return true;
        }
    }
    return false;
}

int main() {
    int rowSize = 3;
    int colSize = 4;

    int arr[3][4] = {
            {10,20, 30, 40},
            {50,60, 70, 80},
            {90,12, 32, 23}
    };

    int target;
    cin >> target;

    int res = searching(arr, rowSize, colSize, target);

    if (res) cout << "Your Element is found in the 2D Array";
    else cout << "Your Element is not found in the 2D Array";

    return 0;
}