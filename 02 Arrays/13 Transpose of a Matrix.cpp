#include <iostream>
#include <vector>

using namespace std;

void transposeOfMatrix(vector<vector<int>> arr) {
    vector<vector<int>> ans (3, vector<int>(3,0));

    for (int i = 0; i < arr.size(); ++i) {
        for (int j = 0; j < arr[0].size(); ++j) {
            ans[i][j] = arr[j][i];
        }
    }

    cout << "After Transpose:" << endl;

    for (int i = 0; i < ans.size(); ++i) {
        for (int j = 0; j < ans[0].size(); ++j) {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    vector<vector<int>> arr = {
            {10, 11, 12},
            {20, 21, 22},
            {30, 31, 32}
    };

    cout << "Before Transpose:" << endl;

    for (int i = 0; i < arr.size(); ++i) {
        for (int j = 0; j < arr[0].size(); ++j) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    transposeOfMatrix(arr);

    return 0;
}