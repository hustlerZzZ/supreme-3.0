#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<vector<int>> arr(4);
    arr[0] = vector<int>(4);
    arr[1] = vector<int>(2);
    arr[2] = vector<int>(5);
    arr[3] = vector<int>(3);

    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // vector<vector<int>> arr(5, vector<int>(4, 0));

    // Creation
    // vector<int> marks;

    // marks.push_back(10);
    // marks.push_back(20);
    // marks.push_back(30);
    // marks.push_back(40);
    // marks.push_back(40);

    // vector<int>::iterator it = marks.begin();

    // while (it != marks.end())
    // {
    //     cout << *it << " " << endl;
    //     it++;
    // }

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
