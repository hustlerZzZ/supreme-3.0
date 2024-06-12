#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    // 2 numbers => compare
    int a = 10;
    int b = 15;

    // Find Max
    cout << max(a, b) << endl;

    // Find Min
    cout << min(a, b) << endl;

    vector<int> arr;
    arr.push_back(10);
    arr.push_back(20);
    arr.push_back(30);
    arr.push_back(40);

    // min element in a range
    auto it = min_element(arr.begin(), arr.end());
    cout << *it << endl;

    // max element in a range
    auto it2 = max_element(arr.begin(), arr.end());
    cout << *it2 << endl;

    return 0;
}
