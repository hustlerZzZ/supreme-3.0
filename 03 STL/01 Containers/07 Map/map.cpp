#include <iostream>
#include <unordered_map>
#include <map>

using namespace std;

int main()
{
    // creation of unordered map
    unordered_map<string, string> table;

    // insertion
    table["in"] = "India";
    table.insert(make_pair("en", "England"));
    table.at("in") = "Bharat";

    // creating pair
    pair<string, string> p;
    p.first = "br";
    p.second = "Brazil";

    table.insert(p);

    // printing value using key
    cout << table.at("in") << endl;

    // printing size
    cout << table.size() << endl;

    // finding using find
    if (table.find("iet") != table.end())
    {
        cout << "Key found" << endl;
    }
    else
    {
        cout << "Key not found" << endl;
    }

    // erasing a entry using erase
    table.erase(table.begin(), table.end());

    cout << table.size() << endl;

    // creating a iterator
    unordered_map<string, string>::iterator it = table.begin();

    while (it != table.end())
    {
        cout << "Key :" << " " << (*it).first << endl;
        cout << "Value :" << " " << (*it).second << endl;
        it++;
    }

    // clearing the table
    table.clear();

    cout << table.size() << endl;

    // checking if empty
    if (table.empty())
    {
        cout << "Empty" << endl;
    }
    else
    {
        cout << "Not Empty" << endl;
    }

    return 0;
}
