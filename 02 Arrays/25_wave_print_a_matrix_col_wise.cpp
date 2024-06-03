#include <iostream>
#include <vector>

using namespace std;

void wavePrintMatrix(vector<vector<int>> arr)
{
    int m = arr.size();
    int n = arr[0].size();

    for (int start = 0; start < n; start++)
    {
        if ((start & 1) == 0)
        {
            for (int i = 0; i < m; i++)
            {
                cout << arr[i][start] << " ";
            }
        }
        else
        {
            for (int i = m - 1; i >= 0; i--)
            {
                cout << arr[i][start] << " ";
            }
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
        {17, 18, 191, 20}};

    wavePrintMatrix(arr);

    return 0;
}
