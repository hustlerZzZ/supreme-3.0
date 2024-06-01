#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

double bruteforce(vector<int> &nums, int k)
{
    int i = 0, j = k - 1;
    double maxSum = 0;
    for (int y = 0; y <= j; i++)
    {
        maxSum += nums[y];
    }
    int sum = 0;
}

int main()
{
    vector<int> arr = {1, 12, -5, -6, 50, 3};
    double result = bruteforce(arr, 4);
    cout << "Result is:" << result << endl;
    return 0;
}