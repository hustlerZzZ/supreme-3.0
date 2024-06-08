#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

// Kadane Algorithm
int maxSubArray(vector<int> &nums)
{
    int ans = INT_MIN;
    int sum = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        sum += nums[i];
        ans = max(sum, ans);
        if (sum < 0)
            sum = 0;
    }

    return ans;
}

int maxSubArrayBruteForce(vector<int> &nums)
{
    int ans = INT_MIN;
    for (int i = 0; i < nums.size(); i++)
    {
        int sum = 0;
        for (int j = i; j < nums.size(); j++)
        {
            sum = sum + nums[j];
            ans = max(ans, sum);
        }
    }
    return ans;
}

int main()
{
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int result = maxSubArray(nums);
    cout << "Your answer is : " << result << endl;
    return 0;
}
