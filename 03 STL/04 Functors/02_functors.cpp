#include <iostream>
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

class StudentComparator
{
public:
    bool operator()(Student a, Student b)
    {
        return a.marks < b.marks;
    }
};

int main()
{
    Student s1;
    Student s2;

    s1.marks = 93;
    s1.name = "Prince";

    s2.marks = 97;
    s2.name = "Vinit";

    StudentComparator cmp;
    if (cmp(s1, s2))
    {
        cout << "Vinit more marks " << endl;
    }
    else
    {

        cout << "Prince more marks " << endl;
    }

    return 0;
}
