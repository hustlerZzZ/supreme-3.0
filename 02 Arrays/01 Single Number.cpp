#include <iostream>
#include <vector>

using namespace std;

// Time Complexity - O(n)
// Space Complexity - O(1)

int singleNumber(vector<int>& nums) {
    int ans = 0;
    for(int num : nums) {
        ans = ans ^ num;
    }
    return ans;
}

int main () {
    vector<int> arr = {1,2,3,4,3,2,1};
    int res = singleNumber(arr);
    cout << "The single number in the array is :" << res << endl;
    return 0;
}