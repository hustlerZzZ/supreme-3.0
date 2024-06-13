#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> first;
    first.push_back(11);
    first.push_back(21);
    first.push_back(31);
    first.push_back(13);

    vector<int> second;
    second.push_back(34);
    second.push_back(11);
    second.push_back(31);
    second.push_back(98);

    // set union
    vector<int> result;
    set_union(first.begin(), first.end(), second.begin(), second.end(), inserter(result, result.begin()));

    for (int a : result)
    {
        cout << a << " ";
    }

    cout << endl;

    // set intersection
    vector<int> inter;
    set_intersection(first.begin(), first.end(), second.begin(), second.end(), inserter(inter, inter.begin()));

    for (int a : inter)
    {
        cout << a << " ";
    }

    cout << endl;

    // set difference
    vector<int> res;
    set_difference(first.begin(), first.end(), second.begin(), second.end(), inserter(res, res.begin()));

    for (int a : res)
    {
        cout << a << " ";
    }

    cout << endl;

    // symmetric difference
    vector<int> res2;
    set_symmetric_difference(first.begin(), first.end(), second.begin(), second.end(), inserter(res2, res2.begin()));

    for (int a : res2)
    {
        cout << a << " ";
    }

    return 0;
}
