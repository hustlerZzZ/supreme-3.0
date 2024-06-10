#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main()
{
    // creation
    queue<int> q;
    queue<int> second;

    // insertion
    q.push(10);
    // 10
    q.push(20);
    // 10 - 20
    q.push(30);
    // 10 - 20 - 30
    q.push(40);
    // 10 - 20 - 30 - 40

    // insertion
    second.push(100);
    // 10
    second.push(200);
    // 10 - 20
    second.push(300);
    // 10 - 20 - 30

    cout << "Size :" << q.size() << endl;

    q.pop();
    // 20 - 30 - 40

    cout << "Size :" << q.size() << endl;

    // Checking if queue is empty
    if (q.empty())
    {
        cout << "Empty" << endl;
    }
    else
    {
        cout << "Not Empty" << endl;
    }

    // Accessing front element
    cout << "Front->" << q.front() << endl;
    // Accessing back element
    cout << "Back->" << q.back() << endl;

    q.swap(second);

    cout << q.front() << " " << q.back() << " " << endl;

    return 0;
}
