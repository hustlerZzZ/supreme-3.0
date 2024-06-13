#include <iostream>
#include <vector>
#include <algorithm>
#include <forward_list>

using namespace std;

int main()
{
    forward_list<int> arr;

    arr.push_front(10);
    arr.push_front(20);
    arr.push_front(30);
    arr.push_front(40);

    // traverse using iterator
    forward_list<int>::iterator it = arr.begin();

    while (it != arr.end())
    {
        cout << *it << " ";
        it++;
    }

    return 0;
}
