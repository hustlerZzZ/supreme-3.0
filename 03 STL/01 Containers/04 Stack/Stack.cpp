#include <iostream>
#include <stack>

using namespace std;

int main()
{
    // creation
    stack<int> stack;

    // insertion
    stack.push(10);
    stack.push(20);
    stack.push(30);
    stack.push(40);

    // printing size
    cout << "Size :" << stack.size() << endl;

    // Printing top element
    cout << "Topmost element :" << stack.top() << endl;

    // Removing top element
    stack.pop();

    // Printing top element
    cout << "Topmost element :" << stack.top() << endl;

    cout << "After removal size :" << stack.size() << endl;

    // checking if stack is empty
    if (stack.empty())
    {
        cout << "Empty" << endl;
    }
    else
    {
        cout << "Not Empty" << endl;
    }

    return 0;
}
