#include <iostream>

using namespace std;

void sortZeroAndOne(int nums[], int n) {
    int zeroCount = 0, oneCount = 0;

    for (int i=0; i<n; i++) {
        if (nums[i] == 0) {
            zeroCount++;
        } else {
            oneCount++;
        }
    }

    for (int i = 0; i < zeroCount; ++i) {
        nums[i] = 0;
    }

    for (int i = zeroCount; i < n; ++i) {
        nums[i] = 1;
    }
}

int main() {
    int arr[] = {0, 1, 1, 1 , 0, 0 ,1};
    int size = 7;

    sortZeroAndOne(arr, size);

    for (int i : arr) {
        cout << i << " ";
    }

    return 0;
}