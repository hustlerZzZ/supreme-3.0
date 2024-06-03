#include <iostream>
#include <vector>

using namespace std;

void wavePrintMatrix(vector<vector<int>> arr)
{
    int row = arr.size();
    int col = arr[0].size();

    for (int startRow = 0; startRow < row; startRow++)
    {
        if ((startRow & 1) == 0)
        {
            for (int i = 0; i < row; i++)
            {
                cout << arr[startRow][i] << " ";
            }
            cout << endl;
        }
        else
        {
            for (int i = row - 1; i >= 0; i--)
            {
                cout << arr[startRow][i] << " ";
            }
            cout << endl;
        }
    }
}

int main()
{
    vector<vector<int>> arr = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16},
    };

    wavePrintMatrix(arr);

    return 0;
}
