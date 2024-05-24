#include <iostream>
#include <vector>

using namespace std;

void twoComplement(vector<int>& nums) {
    int carry = 1;

    // Step 1: find one's complement
    for (int & num : nums) {
        if(num == 0) {
            num = 1;
        } else {
            num = 0;
        }
    }

    // Step 2: add 1
    for (int i = nums.size() - 1; i >= 0; --i) {
        nums[i] += carry;
        if(nums[i] > 1) {
            nums[i] = 0;
        } else {
            break;
        }
    }

}

int main() {
    vector<int> nums = {0,1,1,1,0,0,1,0,0};

    twoComplement(nums);

    for (int num : nums) {
        cout << num << " ";
    }
    return 0;
}