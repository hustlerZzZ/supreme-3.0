#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int missingNumber(vector<int> &nums)
{
    sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size(); i++)
    {
        if (i == nums[i])
            continue;
        else
            return i;
    }
    return nums.size();
}

int missingNumberXor(vector<int> &nums)
{
    int missing = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        missing ^= nums[i];
    }
    for (int i = 0; i <= nums.size(); i++)
    {
        missing ^= i;
    }

    return missing;
}

int main()
{
    vector<int> arr = {9, 6, 4, 2, 3, 5, 7, 0, 1};
    int result = missingNumberXor(arr);
    cout << "Your missing number is: " << result << endl;
    return 0;
}