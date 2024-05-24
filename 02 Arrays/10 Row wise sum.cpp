#include <iostream>
#include <vector>

using namespace std;

void rowWiseSum(vector<vector<int>> arr) {
    for (int i = 0; i < arr.size(); ++i) {
        int sum = 0;
        for (int j = 0; j < arr[0].size(); ++j) {
            sum += arr[i][j];
        }
        cout << sum << endl;
    }
}

int main() {
    vector<vector<int>> arr = {
            {10, 20, 30},
            {40, 50, 60},
            {70, 80, 90}
    };

    rowWiseSum(arr);

    return 0;
}