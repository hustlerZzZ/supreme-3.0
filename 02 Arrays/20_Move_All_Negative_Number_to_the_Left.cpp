#include <iostream>
#include <vector>

using namespace std;

void dutchNationalFlagTwoPointer(vector<int> &arr)
{
    int l = 0, h = arr.size() - 1;
    while (h > l)
    {
        if (arr[l] < 0)
        {
            l++;
        }
        else if (arr[h] > 0)
        {
            h--;
        }
        else
        {
            swap(arr[h], arr[l]);
        }
    }
}

int main()
{
    vector<int> arr = {1, 2, -3, 4, -5, 6};
    dutchNationalFlagTwoPointer(arr);
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}