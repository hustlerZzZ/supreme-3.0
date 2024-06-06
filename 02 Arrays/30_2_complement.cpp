#include <iostream>
#include <vector>

// Better & Easy Approach

using namespace std;

void twoComplement(vector<int> &arr)
{
    int carry = 1;

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == 0)
        {
            arr[i] = 1;
        }
        else
        {
            arr[i] = 0;
        }
    }

    for (int i = arr.size() - 1; i >= 0; i--)
    {
        int sum = arr[i] + carry;
        arr[i] = sum % 2;
        carry = sum / 2;
    }
}

int main()
{
    vector<int> binary = {0, 1, 0, 1, 1, 0};
    cout << "Before 2's complement:" << endl;
    for (int i = 0; i < binary.size(); i++)
    {
        cout << binary[i] << " ";
    }
    cout << endl;
    twoComplement(binary);
    cout << "After 2's complement:" << endl;
    for (int i = 0; i < binary.size(); i++)
    {
        cout << binary[i] << " ";
    }

    return 0;
}
