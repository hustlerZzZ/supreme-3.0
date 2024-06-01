#include <iostream>
#include <vector>

using namespace std;

void sortColors(vector<int> &nums)
{
    int numOfZeros = 0, numOfOnes = 0, numOfTwo = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == 0)
            numOfZeros++;
        else if (nums[i] == 1)
            numOfOnes++;
        else if (nums[i] == 2)
            numOfTwo++;
    }

    cout << numOfZeros << " " << numOfOnes << " " << numOfTwo << endl;

    // Correct Condition
    // 0 --- 1
    for (int i = 0; i < numOfZeros; i++)
    {
        nums[i] = 0;
    }

    // 2 --- 3
    for (int i = numOfZeros; i < numOfZeros + numOfOnes; i++)
    {
        nums[i] = 1;
    }

    // 4 --- 5
    for (int i = nums.size() - numOfTwo; i < nums.size(); i++)
    {
        nums[i] = 2;
    }
}

int main()
{
    vector<int> arr = {1, 2, 1, 2, 0, 0};
    sortColors(arr);

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}