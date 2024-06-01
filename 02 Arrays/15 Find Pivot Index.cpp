#include <iostream>
#include <vector>

using namespace std;

int bruteForcePivotIndex(vector<int> nums)
{
    for (int i = 0; i < nums.size(); ++i)
    {
        int leftSum = 0, rightSum = 0;

        for (int j = 0; j < i; ++j)
        {
            leftSum += nums[j];
        }

        for (int j = i + 1; j < nums.size(); ++j)
        {
            rightSum += nums[j];
        }

        if (rightSum == leftSum)
            return i;
    }
    return -1;
}

int prefixSumApproach(vector<int> &nums)
{
    vector<int> leftSum(nums.size(), 0);
    vector<int> rightSum(nums.size(), 0);

    for (int i = 1; i < nums.size(); ++i)
    {
        leftSum[i] = leftSum[i - 1] + nums[i - 1];
    }

    for (int i = nums.size() - 2; i >= 0; --i)
    {
        rightSum[i] = rightSum[i + 1] + nums[i + 1];
    }

    for (int i = 0; i < nums.size(); ++i)
    {
        if (leftSum[i] == rightSum[i])
            return i;
    }

    return -1;
}

int main()
{
    vector<int> arr = {1, 7, 3, 6, 5, 6};
    //    int res = bruteForcePivotIndex(arr);
    int res = prefixSumApproach(arr);

    cout << "Your pivot index is :" << res << endl;

    return 0;
}