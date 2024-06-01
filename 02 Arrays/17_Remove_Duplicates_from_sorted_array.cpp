#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int removeDuplicates(vector<int> &nums)
{
    int j = 0, i = 1;

    while (nums.size() > i)
    {
        if (nums[i] == nums[j])
            i++;
        else
        {
            j++;
            nums[j] = nums[i];
            i++;
        }
    }

    return j + 1;
}

int main()
{
    vector<int> arr = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    int res = removeDuplicates(arr);
    cout << "Your ans :" << res << endl;
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}