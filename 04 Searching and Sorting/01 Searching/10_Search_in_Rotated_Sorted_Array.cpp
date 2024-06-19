#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int SearchInRotatedSortedArray(vector<int> &arr)
{
    int start = 0, end = arr.size() - 1;
    int mid = start + (end - start) / 2;
    int index = -1;

    int n = arr.size();

    while (start <= end)
    {
        if (start == end)
        {
            return start;
        }
        if (mid + 1 < n && arr[mid] > arr[mid + 1])
            return mid;

        else if (arr[start] > arr[mid])
            end = mid - 1;
        else
            start = mid + 1;

        mid = start + (end - start) / 2;
    }

    return -1;
}

int binarySearch(int s, int e, int target, vector<int> &arr)
{
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (arr[mid] == target)
            return mid;
        else if (target > arr[mid])
            s = mid + 1;
        else
            e = mid - 1;

        mid = s + (e - s) / 2;
    }

    return -1;
}
int search(vector<int> &nums, int target)
{
    int pivotIndex = SearchInRotatedSortedArray(nums);

    int n = nums.size();

    if (target >= nums[0] && target <= nums[pivotIndex])
    {
        int ans = binarySearch(0, pivotIndex, target, nums);
        return ans;
    }
    else
    {
        int ans = binarySearch(pivotIndex + 1, n - 1, target, nums);
        return ans;
    }

    return -1;
}

int main()
{
    vector<int> arr = {4, 5, 6, 7, 0, 1, 2};
    int target = 0;
    int result = search(arr, target);

    cout << "Your result is :" << result << endl;

    return 0;
}
