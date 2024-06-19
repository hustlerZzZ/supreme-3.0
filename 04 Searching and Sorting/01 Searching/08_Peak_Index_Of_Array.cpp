#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int peakIndexInMountainArray(vector<int> &arr)
{
    int start = 0, end = arr.size() - 1;

    while (start < end)
    {
        int mid = start + (end - start) / 2;

        // if element is on the left side of peak
        if (arr[mid] < arr[mid + 1])
        {
            start = mid + 1;
        }
        // Either i am on answer or at line B
        else
        {
            end = mid;
        }
    }

    return start;
}

int peakIndexInMountainArrayStoreAndCompute(vector<int> &arr)
{
    int start = 0, end = arr.size() - 1;
    int ansIndex = -1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        // if element is on the left side of peak
        if (arr[mid] < arr[mid + 1])
        {
            start = mid + 1;
        }
        // Either i am on answer or at line B
        else
        {
            ansIndex = mid;
            end = mid - 1;
        }
    }

    return ansIndex;
}

int main()
{
    vector<int> mountain = {0, 2, 1, 0};
    int index = peakIndexInMountainArrayStoreAndCompute(mountain);
    cout << "Max point of array is :" << index << endl;
    return 0;
}
