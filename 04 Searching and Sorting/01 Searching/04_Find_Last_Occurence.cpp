#include <iostream>
#include <vector>

using namespace std;

int binarySearchFindLastOccurence(vector<int> arr, int target)
{
    int start = 0, end = arr.size() - 1;
    int ansIndex = -1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (target == arr[mid])
        {
            // ans found -> may or may not be last occurence
            // store and compute
            ansIndex = mid;
            // for last occurence we have to go to right
            start = mid + 1;
        }
        else if (target > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    return ansIndex;
}

int main()
{
    vector<int> arr = {10, 30, 30, 30, 30, 30, 30, 30, 40};
    int res = binarySearchFindLastOccurence(arr, 30);
    cout << res << endl;
    return 0;
}
