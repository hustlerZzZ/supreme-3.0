#include <iostream>
#include <vector>

using namespace std;

int searchNearlySortedArray(int arr[], int size, int key)
{
    int s = 0, e = size - 1;
    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        if (arr[mid] == key)
            return mid;
        else if (arr[mid - 1] == key)
            return mid - 1;
        else if (arr[mid + 1] == key)
            return mid + 1;

        if (key < arr[mid])
            e = mid - 2;
        else
            s = mid + 2;

        mid = s + (e - s) / 2;
    }

    return -1;
}

int main()
{
    int arr[] = {10, 3, 40, 20, 50, 80, 70};
    int size = 7;

    int target = 10;

    int result = searchNearlySortedArray(arr, size, target);

    cout << "Target found at : " << result << endl;

    return 0;
}