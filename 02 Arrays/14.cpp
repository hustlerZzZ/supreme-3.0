#include <iostream>
using namespace std;

// HW -> 1. Fill 2D Array [ X ]
// HW -> 2. 2nd diagonal traversal [ X ]
// HW -> 3. Col wise input [ X ]
// HW -> 4. Sum of 2nd diagonal [ X ]

int main() {
    int arr[3][3] = {
            {1,2,3},
            {4,5,6},
            {7,8,9}
    };

    int rowSize = 3;
    int colSize = 3;

    int sum = 0;
    for (int i = 0; i < rowSize; ++i) {
        for (int j = 0; j < colSize; ++j) {
            if(j == colSize - i -1 ) {
                sum += arr[i][j];
            }
        }
    }

    cout << sum;

    return 0;
}