#include <iostream>
#include <vector>

using namespace std;

void diagonalSum(vector<vector<int>> arr) {
    int sum = 0;
    for (int i = 0; i < arr.size(); ++i) {
        for (int j = 0; j < arr[0].size(); ++j) {
            if(i == j) {
                sum += arr[j][i];
            }
        }
    }
    cout << sum << endl;
}

int main() {
    vector<vector<int>> arr = {
            {10, 20, 30},
            {15, 20, 50},
            {25, 10, 10}
    };

    diagonalSum(arr);

    return 0;
}