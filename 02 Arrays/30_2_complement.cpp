#include <iostream>
#include <vector>

// Better & Easy Approach

// 1, 1, 1, 0, 1, 0, 1, 1, 0
//
// 0, 0, 0, 1, 0, 1, 0, 0, 1
//                      +  1
// 0  0  0  1  0  1  0  1  0

using namespace std;

vector<int> twoComplement(vector<int> &arr)
{
    int size = arr.size();
    vector<int> complement(size + 1, 0);

    // Step - I => Flip the bits
    for (int i = size - 1, k = complement.size() - 1; i >= 0; i--, k--)
    {
        complement[k] = arr[i] == 0 ? 1 : 0;
    }

    // Step - II => Add 1
    int carry = 1;
    for (int i = complement.size() - 1; i >= 0; i--)
    {
        int sum = complement[i] + carry;
        complement[i] = sum % 2;
        carry = sum / 2;
    }

    if (carry)
    {
        complement[0] = carry;
    }

    return complement;
}

int main()
{
    vector<int> binary = {1, 1, 1, 0, 1, 0, 1, 1, 0};

    cout << "Before 2's complement:" << endl;

    cout << "  ";

    for (int i = 0; i < binary.size(); i++)
    {
        cout << binary[i] << " ";
    }
    cout << endl;

    vector<int> complement = twoComplement(binary);

    cout << "After 2's complement:" << endl;

    for (int i = 0; i < complement.size(); i++)
    {
        cout << complement[i] << " ";
    }

    return 0;
}
