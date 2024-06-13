#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<string> languages = {"Rust", "C++", "Java", "JavaScript"};

    // creating an iterator to a string vector
    vector<string>::iterator it;

    // iterate all over the elements
    for (it = languages.begin(); it != languages.end(); it++)
    {
        cout << *it << " ";
    }

    return 0;
}
