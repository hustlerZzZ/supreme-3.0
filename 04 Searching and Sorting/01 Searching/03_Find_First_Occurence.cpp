#include <iostream>
#include <vector>

using namespace std;

int binarySearchFindFirstOccurence(vector<int> arr, int target)
{
    int start = 0, end = arr.size() - 1;
    int ansIndex = -1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (target == arr[mid])
        {
            // ans found -> may or may not be first occurence
            // store and compute
            ansIndex = mid;
            // for first occurence we have to go to left
            end = mid - 1;
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
    vector<int> arr = {5, 10, 20, 20, 20, 20, 30, 40, 50, 60, 70};
    int res = binarySearchFindFirstOccurence(arr, 70);
    cout << res << endl;
    return 0;
}
