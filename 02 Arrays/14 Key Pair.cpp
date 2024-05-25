#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

bool keyPair(vector<int> num, int size, int x) {
    for (int i = 0; i < size; ++i) {
        for (int j = i+1; j < size; ++j) {
            if(num[i] + num[j] == x) return true;
        }
    }

    return false;
}

bool keyPairBetterApproach(vector<int> num, int size, int x) {
    sort(num.begin(), num.end());
    int start = 0, end = num.size() - 1;
    while (end > start) {
        if(num[start] + num[end] == x) {
            return true;
        }
        else if (num[start] + num[end] > x) {
            end--;
        } else {
            start++;
        }
    }

    return false;
}

int main() {
    vector<int> arr = {1,4,45,6,10,8};
    int size = arr.size();

    bool res = keyPairBetterApproach(arr,size, 16);

    if(res) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}