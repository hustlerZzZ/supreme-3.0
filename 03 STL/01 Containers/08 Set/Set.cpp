#include <iostream>
#include <unordered_set>
#include <set>

using namespace std;

int main()
{
    // creation
    set<int> st;

    // insertion
    st.insert(10);
    st.insert(101);
    st.insert(121);
    st.insert(131);
    st.insert(141);

    // iterator // traversing
    set<int>::iterator it = st.begin();

    while (it != st.end())
    {
        cout << *it << " ";
        it++;
    }

    return 0;
}
