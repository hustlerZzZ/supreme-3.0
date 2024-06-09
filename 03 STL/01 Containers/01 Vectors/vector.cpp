#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // Creation
    vector<int> marks;

    marks.push_back(10);
    marks.push_back(20);
    marks.push_back(30);
    marks.push_back(40);
    marks.push_back(40);

    cout << marks[0] << endl;
    cout << marks.capacity() << endl;

    // cout << "Size:" << marks.size() << endl;

    // if (marks.empty())
    // {
    //     cout << "Vector is empty" << endl;
    // }
    // else
    // {
    //     cout << "Vector isn't empty" << endl;
    // }

    // 40 will be removed
    // marks.pop_back();

    // cout << "Size after pop:" << marks.size() << endl;

    // cout << marks.front() << endl;
    // cout << marks.back() << endl;

    // vector<int> miles(10);       // Initialized with size
    // vector<int> distance(15, 0); // Initialized with size and a particular value

    // cout << *marks.begin() << endl;

    return 0;
}
