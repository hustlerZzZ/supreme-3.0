#include <iostream>
#include <list>

using namespace std;

int main()
{
    // creation
    list<int> myList;

    // insertition
    myList.push_back(10);
    // 10
    myList.push_back(20);
    // 10 -> 20
    myList.push_back(30);
    // 10 -> 20 -> 30
    myList.push_back(40);
    // 10 -> 20 -> 30 -> 40

    // insertition in front
    myList.push_front(50);
    // 50 -> 10 -> 20 -> 30 -> 40

    // pop from back
    myList.pop_back();
    // 50 -> 10 -> 20 -> 30

    // pop from front
    myList.pop_front();
    // 10 -> 20 -> 30

    cout << myList.size() << endl;
    myList.clear();
    cout << myList.size() << endl;

    if (myList.empty())
    {
        cout << "Empty" << endl;
    }
    else
    {
        cout << "Not empty" << endl;
    }

    myList.push_back(10);
    // 10
    myList.push_front(20);
    // 20 -> 10
    myList.push_front(30);
    // 20 -> 10 -> 30
    myList.push_front(30);
    // 20 -> 10 -> 30 -> 30
    myList.push_front(30);
    // 20 -> 10 -> 30 -> 30 -> 30

    cout << myList.front() << endl;

    cout << myList.back() << endl;

    // Creating iterator
    list<int>::iterator it = myList.begin();

    while (it != myList.end())
    {
        cout << *it << " ";
        it++;
    }

    cout << endl;

    // Removing a particular element
    myList.remove(30);
    list<int>::iterator it2 = myList.begin();
    while (it2 != myList.end())
    {
        cout << *it2 << " ";
        it2++;
    }

    cout << endl;

    list<int> second;

    second.push_back(100);
    second.push_back(200);

    // Swaping the values of myList in second
    myList.swap(second);

    list<int>::iterator it3 = myList.begin();
    while (it3 != myList.end())
    {
        cout << *it3 << " ";
        it3++;
    }

    cout << endl;

    // Insert
    myList.insert(myList.begin(), 100);

    list<int>::iterator it4 = myList.begin();
    while (it4 != myList.end())
    {
        cout << *it4 << " ";
        it4++;
    }

    cout << endl;

    // Erase
    myList.erase(myList.begin());

    list<int>::iterator it5 = myList.begin();
    while (it5 != myList.end())
    {
        cout << *it5 << " ";
        it5++;
    }

    cout << endl;

    return 0;
}
