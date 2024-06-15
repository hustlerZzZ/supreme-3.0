#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

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
            ansIndex = mid;
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

int binarySearchFindFirstOccurence(vector<int> arr, int target)
{
    int start = 0, end = arr.size() - 1;
    int ansIndex = -1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (target == arr[mid])
        {
            ansIndex = mid;
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

vector<int> searchRange(vector<int> &nums, int target)
{
    vector<int> result;
    int firstPosi = binarySearchFindFirstOccurence(nums, target);
    int lastPosi = binarySearchFindLastOccurence(nums, target);
    result.push_back(firstPosi);
    result.push_back(lastPosi);

    return result;
}

int main()
{
    vector<int> arr = {5, 7, 7, 8, 8, 10};
    vector<int> result = searchRange(arr, 8);

    for (int a : result)
    {
        cout << a << ' ';
    }

    return 0;
}
