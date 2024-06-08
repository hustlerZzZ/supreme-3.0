#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int missingNumber(vector<int> arr)
{
    unordered_map<int, int> hashmap;

    for (int i = 0; i < arr.size(); i++)
    {
        hashmap[arr[i]]++;
    }

    // Ist Way
    unordered_map<int, int>::iterator it;
    for (it = hashmap.begin(); it != hashmap.end(); it++)
    {
        int key = it->first;
        int value = it->second;

        if (value == 1)
        {
            return key;
        }
    }

    return -1;
}

int main()
{
    vector<int> arr = {4, 1, 2, 1, 2};
    int res = missingNumber(arr);
    cout << "Your missing number is :" << res << endl;
    return 0;
}
