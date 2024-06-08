#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

void rotate(vector<vector<int>> &matrix)
{
    // Step I -> Transpose
    int nRows = matrix.size();
    int nCols = matrix[0].size();

    for (int i = 0; i < nRows; i++)
    {
        for (int j = i; j < nCols; j++)
        {
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    // Step II -> Reverse Row wise
    for (int i = 0; i < nRows; i++)
    {
        reverse(matrix[i].begin(), matrix[i].end());
    }
}

int main()
{
    vector<vector<int>> arr = {
        {10, 11, 12},
        {20, 21, 22},
        {30, 31, 32}};

    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[0].size(); j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    rotate(arr);

    cout << "After rotating :" << endl;

    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[0].size(); j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
