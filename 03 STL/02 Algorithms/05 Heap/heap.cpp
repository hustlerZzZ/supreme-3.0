#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> arr;
    arr.push_back(22);
    arr.push_back(11);
    arr.push_back(33);
    arr.push_back(44);
    arr.push_back(55);

    // make heap -> max heap
    make_heap(arr.begin(), arr.end());

    for (int a : arr)
    {
        cout << a << " ";
    }

    cout << endl;

    // push in heap
    arr.push_back(99);
    push_heap(arr.begin(), arr.end());

    for (int a : arr)
    {
        cout << a << " ";
    }

    cout << endl;

    // deletion
    pop_heap(arr.begin(), arr.end());
    arr.pop_back();

    for (int a : arr)
    {
        cout << a << " ";
    }

    cout << endl;

    // sort heap in ascending order
    sort_heap(arr.begin(), arr.end());

    for (int a : arr)
    {
        cout << a << " ";
    }

    cout << endl;

    return 0;
}
