#include <iostream>
#include <vector>

using namespace std;

vector<int> spiralOrder(vector<vector<int>> &matrix)
{
    vector<int> ans;
    int row = matrix.size();
    int col = matrix[0].size();
    int total_elements = row * col;

    int startingRow = 0;
    int endingCol = col - 1;
    int endingRow = row - 1;
    int startingCol = 0;

    int count = 0;
    while (count < total_elements)
    {
        // Print Starting Row
        for (int i = startingCol; i <= endingCol && count < total_elements; i++)
        {
            ans.push_back(matrix[startingRow][i]);
            count++;
        }
        startingRow++;

        // Print Ending Col
        for (int i = startingRow; i <= endingRow && count < total_elements; i++)
        {
            ans.push_back(matrix[i][endingCol]);
            count++;
        }
        endingCol--;

        // Print Ending Row
        for (int i = endingCol; i >= startingCol && count < total_elements; i--)
        {
            ans.push_back(matrix[endingRow][i]);
            count++;
        }
        endingRow--;

        // Print Starting Col
        for (int i = endingRow; i >= startingRow && count < total_elements; i--)
        {
            ans.push_back(matrix[i][startingCol]);
            count++;
        }
        startingCol++;
    }

    return ans;
}

int main()
{
    vector<vector<int>> arr = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    vector<int> res = spiralOrder(arr);

    for (int val : res)
    {
        cout << val << " ";
    }
    return 0;
}
