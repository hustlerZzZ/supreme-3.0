#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

class Compartor
{
public:
    bool operator()(int a, int b)
    {
        return a > b;
    }
};

int main()
{
    vector<int> arr;

    arr.push_back(20);
    arr.push_back(10);
    arr.push_back(15);

    // Sort in ascending order but if we add our own Compator it will do sorting in descending order
    sort(arr.begin(), arr.end(), Compartor());

    for (int a : arr)
    {
        cout << a << " ";
    }

    return 0;
}
