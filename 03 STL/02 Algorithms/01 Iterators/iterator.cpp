#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void printDouble(int a)
{
    cout << 2 * a << " ";
}

bool checkEven(int a)
{
    return (a & 1) == 1;
}

int main()
{
    vector<int> arr(7);
    arr[0] = 10;
    arr[1] = 11;
    arr[2] = 12;
    arr[3] = 13;
    arr[4] = 14;
    arr[5] = 15;
    arr[6] = 16;

    // for Each
    for_each(arr.begin(), arr.end(), printDouble);
    cout << endl;

    // finding element using find
    int target = 400;
    auto it = find(arr.begin(), arr.end(), target);
    if (it != arr.end())
    {
        cout << *it << endl;
    }
    else
    {
        cout << "Element not found" << endl;
    }

    // find if
    auto it2 = find_if(arr.begin(), arr.end(), checkEven);
    if (it2 != arr.end())
    {
        cout << *it2 << endl;
    }
    else
    {
        cout << "No even element found" << endl;
    }

    // count
    int ans = count(arr.begin(), arr.end(), 50);
    cout << ans << endl;

    // count if
    int answer = count_if(arr.begin(), arr.end(), checkEven);
    cout << answer << endl;

    // sort in asccening order
    sort(arr.begin(), arr.end());

    for (int a : arr)
    {
        cout << a << " ";
    }

    cout << endl;

    // reverse
    reverse(arr.begin(), arr.end());

    for (int a : arr)
    {
        cout << a << " ";
    }

    cout << endl;

    // rotate
    rotate(arr.begin(), arr.begin() + 3, arr.end());

    // HW -> left rotate ?

    for (int a : arr)
    {
        cout << a << " ";
    }

    cout << endl;

    // unique
    auto it3 = unique(arr.begin(), arr.end());
    arr.erase(it3, arr.end());

    for (int a : arr)
    {
        cout << a << " ";
    }

    cout << endl;

    // partition
    auto it4 = partition(arr.begin(), arr.end(), checkEven);

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
