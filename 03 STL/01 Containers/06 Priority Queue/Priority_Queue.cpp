#include <iostream>
#include <queue>

using namespace std;

int main()
{
    // creation
    priority_queue<int> pq;
    // max-heap -> maximum value -> Highest Priority

    // creating min heap -> Minimum value -> Highest priority value
    priority_queue<int, vector<int>, greater<int>> lq;

    // insertion
    pq.push(10);
    // 10
    pq.push(20);
    // 20, 10
    pq.push(30);
    // 30, 20, 10
    pq.push(69);
    // 69, 30, 20, 10

    // top element -> Highest priority element
    cout << pq.top() << endl;

    // removing element
    // highest priority element is removed
    pq.pop();
    // 30, 20, 10

    cout << pq.top() << endl;

    // checking size
    cout << pq.size() << endl;

    // checking if empty
    if (pq.empty())
    {
        cout << "Empty" << endl;
    }
    else
    {
        cout << "Not Empty" << endl;
    }

    return 0;
}
