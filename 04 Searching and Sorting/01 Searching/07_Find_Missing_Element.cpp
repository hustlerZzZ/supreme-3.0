#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int missingNumber(vector<int> &arr)
{
    sort(arr.begin(), arr.end());
    int n = arr.size();
    int start = 0, end = n - 1;
    int ansIndex = -1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        int number = arr[mid];
        int index = mid;
        int diff = number - index;
        if (diff == 0)
        {
            start = mid + 1;
        }
        else if (diff == 1)
        {
            ansIndex = index;
            end = mid - 1;
        }
    }

    if (ansIndex == -1)
    {
        return n;
    }

    return ansIndex;
}

int main()
{
    vector<int> arr = {3, 0, 1};
    int result = missingNumber(arr);
    cout << "Missing number is:" << result << endl;
    return 0;
}
