#include <iostream>
#include <deque>

using namespace std;

int main()
{
    // creation
    deque<int> dq;

    // insertion from end
    dq.push_back(10);
    dq.push_back(20);
    dq.push_back(30);

    // insertion from front
    dq.push_front(100);
    dq.push_front(200);
    dq.push_front(300);

    // removing from front
    dq.pop_front();

    // removing from back
    dq.pop_back();

    // printing size
    cout << "Size :" << " " << dq.size() << endl;

    // printing front element
    cout << "First element :" << " " << dq.front() << endl;

    // printing back element
    cout << "Last element :" << " " << dq.back() << endl;

    // checking if empty
    if (dq.empty())
    {
        cout << "Empty" << endl;
    }
    else
    {
        cout << "Not Empty" << endl;
    }

    // creating a iterator
    deque<int>::iterator it = dq.begin();

    while (it != dq.end())
    {
        cout << *it << " ";
        it++;
    }

    cout << endl;

    // accessing 0th index value
    cout << dq[0] << endl;
    cout << dq.at(0) << endl;

    // clearing dequeue
    dq.clear();

    cout << "Size :" << " " << dq.size() << endl;

    // inserting element using insert
    dq.insert(dq.begin(), 69);

    cout << dq.at(0) << endl;

    // erasing element using erase
    dq.erase(dq.begin());

    cout << "Size :" << " " << dq.size() << endl;

    return 0;
}
