#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int main()
{
    vector<int> first(3);
    first[0] = 10;
    first[1] = 20;
    first[2] = 30;

    vector<int> second(3);
    second[0] = 1;
    second[1] = 2;
    second[2] = 3;

    // accumulate
    int totalSum = accumulate(first.begin(), first.end(), 0);
    cout << "Total Sum is : " << totalSum << endl;

    // inner product
    int ans = inner_product(first.begin(), first.end(), second.begin(), 0);
    cout << "Inner product is :" << ans << endl;

    // partial sum
    vector<int> result(first.size());
    partial_sum(first.begin(), first.end(), result.begin());

    for (int a : result)
    {
        cout << a << " ";
    }

    cout << endl;

    // iota
    vector<int> iot(5);
    iota(iot.begin(), iot.end(), 250);

    for (int a : iot)
    {
        cout << a << " ";
    }

    cout << endl;

    return 0;
}
