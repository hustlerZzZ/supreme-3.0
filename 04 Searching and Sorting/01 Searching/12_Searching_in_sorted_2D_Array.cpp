#include <iostream>
#include <vector>

using namespace std;

bool searchMatrix(vector<vector<int>> &matrix, int target)
{
    int rows = matrix.size();
    int cols = matrix[0].size();
    int n = rows * cols;

    int s = 0, e = n - 1;
    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        int rowIndex = mid / cols;
        int colIndex = mid % cols;

        if (matrix[rowIndex][colIndex] == target)
            return true;
        else if (matrix[rowIndex][colIndex] < target)
            s = mid + 1;
        else
            e = mid - 1;

        mid = s + (e - s) / 2;
    }

    return false;
}

int main()
{
    vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    bool res = searchMatrix(matrix, 9);

    if (res)
        cout << "Element found" << endl;
    else
        cout << "Element not found" << endl;

    return 0;
}
