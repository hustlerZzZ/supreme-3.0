#include <iostream>
#include <vector>

using namespace std;

void dutchNationalFlag(vector<int>& nums) {
    int zeroCount = 0, oneCount = 0, twoCount = 0;

    for (int num : nums) {
        if(num == 0) zeroCount++;
        else if (num == 1) oneCount++;
        else twoCount++;
    }

    for (int i = 0; i < zeroCount; ++i) {
        nums[i] = 0;
    }

    for (int i = zeroCount; i < nums.size() - oneCount - 1; ++i) {
        nums[i] = 1;
    }

    for (int i = nums.size() - oneCount - 1; i < nums.size(); ++i) {
        nums[i] = 2;
    }
}

int main() {
    vector<int> arr = {0,0,2,1,1,2,2,0,0,0};

    dutchNationalFlag(arr);

    for (int i : arr) {
        cout << i << " ";
    }

    return 0;
}