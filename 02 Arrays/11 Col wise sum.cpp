#include <iostream>
#include <vector>

using namespace std;

void colWiseSum(vector<vector<int>> arr) {
    for (int i = 0; i < arr.size(); ++i) {
        int sum = 0;
        for (int j = 0; j < arr[0].size(); ++j) {
            sum += arr[j][i];
        }
        cout << sum << endl;
    }
}

int main() {
    vector<vector<int>> arr = {
            {10, 20, 30},
            {10, 20, 30},
            {20, 40, 60}
    };

    colWiseSum(arr);

    return 0;
}