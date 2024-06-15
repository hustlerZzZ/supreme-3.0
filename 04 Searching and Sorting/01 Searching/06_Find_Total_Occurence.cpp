#include <iostream>
#include <vector>

using namespace std;

int totalOccurence(vector<int> &arr, int target)
{
    int start = 0, end = arr.size() - 1;
    int first = -1, last = -1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (target == arr[mid])
        {
            first = mid;
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

    start = 0, end = arr.size() - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (target == arr[mid])
        {
            last = mid;
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

    int totalOcc = (last + first) - 1;

    return totalOcc;
}

int main()
{
    vector<int> arr = {10, 20, 20, 20, 20, 20, 30, 40, 50};

    int res = totalOccurence(arr, 20);
    cout << "Total occurences are : " << res << endl;

    return 0;
}
