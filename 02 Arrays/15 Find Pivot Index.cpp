#include <iostream>
#include <vector>

using namespace std;

int pivotIndex(vector<int> arr) {
    int pivotIndex = 0;
    int start = 0, end = arr.size() - 1;
    int leftSum = 0, rightSum = 0;
    while (end > start) {
        leftSum += arr[start];
        rightSum += arr[end];
        cout << "Left sum :" << " " << leftSum << endl;
        cout << "Right sum :" << " " << rightSum << endl;
        if (leftSum < rightSum) {
            start++;
        } else if (leftSum == rightSum) {
            cout << "Match" << endl;
        } else {
            end--;
        }
    }
    return pivotIndex;
}

int main() {
    vector<int> arr = {1,7,3,6,5,6};
    int res = pivotIndex(arr);

    cout << "Your pivot index is :" << res << endl;

    return 0;
}