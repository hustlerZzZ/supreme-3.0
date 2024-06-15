#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Student
{
public:
    int marks;
    string name;

    // Default Constructor
    Student()
    {
        this->marks = 0;
        this->name = "";
    }

    // Parameterized constructor
    Student(int m, string n)
    {
        this->marks = m;
        this->name = n;
    }
};

class comparator
{
public:
    bool operator()(Student a, Student b)
    {
        if (a.marks == b.marks)
        {
            return a.name > b.name;
        }
        return a.marks > b.marks;
    }
};

int main()
{
    vector<Student> arr;
    arr.push_back(Student(90, "Prince"));
    arr.push_back(Student(85, "Rishabh"));
    arr.push_back(Student(95, "Vinit"));
    arr.push_back(Student(95, "Ujjawal"));

    sort(arr.begin(), arr.end(), comparator());

    for (Student a : arr)
    {
        cout << a.marks << " " << a.name << endl;
    }

    return 0;
}
