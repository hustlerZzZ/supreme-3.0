#include <iostream>
#include <vector>

using namespace std;

int quotientFinder(int dividend, int divisor)
{
    int s = 0;
    int e = dividend;
    int mid = s + ((e - s) >> 1);
    int ans = -1;

    while (s <= e)
    {
        if (divisor * mid <= dividend)
        {
            ans = mid;
            s = mid + 1;
        }
        else if (divisor * mid > dividend)
            e = mid - 1;
        mid = s + ((e - s) >> 1);
    }

    return ans;
}

int main()
{
    int dividend = -10;
    int divisor = -2;
    int res = quotientFinder(abs(dividend), abs(divisor));
    if ((dividend < 0 && divisor > 0) || (dividend > 0 && divisor < 0))
    {
        res = 0 - res;
    }
    cout << "Final ans : " << res << endl;
    return 0;
}
