#include <vector>
#include <iostream>

using namespace std;

bool searching(vector<vector<int>> arr, int target) {
    for (int i = 0; i < arr.size(); ++i) {
        for (int j = 0; j < arr[0].size(); ++j) {
            if (arr[i][j] == target) return true;
        }
    }
    return false;
}

int main() {
    vector<vector<int>> arr (4, vector<int>(3));

    int target;
    cin >> target;

    int res = searching(arr, target);

    if (res) cout << "Your Element is found in the 2D Array";
    else cout << "Your Element is not found in the 2D Array";

    return 0;
}