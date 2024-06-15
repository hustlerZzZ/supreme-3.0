#include <iostream>
#include <vector>

using namespace std;

int binarySearch(vector<int> arr, int target)
{
    int start = 0, end = arr.size() - 1;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (target == arr[mid])
        {
            return mid;
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

    return 0;
}

int main()
{
    vector<int> arr = {2, 8, 10, 20, 30, 43, 46, 78};

    int target;

    cout << "Enter element you want to search in the array:" << endl;
    cin >> target;

    int result = binarySearch(arr, target);

    if (result)
    {
        cout << "Your element is found at index :" << result << endl;
    }
    else
    {
        cout << "Your element is not found." << endl;
    }

    return 0;
}
