#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int findDuplicateSort(vector<int> &nums)
{
    sort(nums.begin(), nums.end());

    for (int i = 0; i < nums.size() - 1; i++)
    {
        if (nums[i] == nums[i + 1])
        {
            return nums[i];
        }
    }

    return -1;
}

int findDuplicateVisited(vector<int> &nums)
{
    int ans = -1;
    for (int i = 0; i < nums.size(); i++)
    {
        int index = abs(nums[i]);

        // already visited
        if (nums[index] < 0)
        {
            return index;
        }

        // marking visited
        nums[index] *= -1;
    }
    return ans;
}

int findDuplicatePositioning(vector<int> &nums)
{
    while (nums[0] != nums[nums[0]])
    {
        swap(nums[0], nums[nums[0]]);
    }
    return nums[0];
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 2};
    int res = findDuplicateVisited(arr);
    cout << "Your result is :" << res << endl;

    return 0;
}