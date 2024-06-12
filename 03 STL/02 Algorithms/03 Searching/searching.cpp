#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> arr;
    arr.push_back(10);
    arr.push_back(20);
    arr.push_back(30);
    arr.push_back(40);
    arr.push_back(50);

    int target;
    cout << "Enter the value you want to search ?" << endl;
    cin >> target;

    // binary search
    auto it = binary_search(arr.begin(), arr.end(), target);
    cout << it << endl;

    // lower bound
    auto it2 = lower_bound(arr.begin(), arr.end(), target);
    cout << *it2 << endl;

    // upper bound
    auto it3 = upper_bound(arr.begin(), arr.end(), target);
    cout << *it3 << endl;

    // equal range
    auto it4 = equal_range(arr.begin(), arr.end(), target);
    cout << *it4.first << " " << *it4.second << endl;

    return 0;
}
