#include <iostream>
using namespace std;

double mySqrt(int x)
{
    int s = 0, e = x;
    long long int mid = s + (e - s) / 2;
    int ans = -1;

    while (s <= e)
    {
        long long int product = mid * mid;
        if (product == x)
        {
            return mid;
        }
        else if (product < x)
        {
            s = mid + 1;
            ans = mid;
        }
        else
        {
            e = mid - 1;
        }

        mid = s + (e - s) / 2;
    }

    // double sqrtAns = (double)ans;

    // int precision;
    // cout << "Enter  the precision upto how many digits :" << endl;
    // cin >> precision;

    // cout << "First :" << sqrtAns << endl;
    // double finalAns = sqrtAns;

    // double factor = 1;
    // for (int i = 0; i < precision; i++)
    // {
    //     factor = factor / 10.0;
    //     cout << "factor :" << factor << endl;

    //     for (int n = 0; n < 9; n++)
    //     {
    //         int toAdd = n * factor;
    //         cout << "To add :" << toAdd << endl;
    //         double newAns = sqrtAns + toAdd;
    //         if (newAns * newAns < x)
    //         {
    //             finalAns = sqrtAns + toAdd;
    //             cout << "Sqrt updated to :" << sqrtAns << endl;
    //         }
    //         else
    //         {
    //             cout << "Breaking" << endl;
    //             break;
    //         }
    //     }

    //     sqrtAns = finalAns;
    // }

    return ans;
}

int main()
{
    double sqrt = mySqrt(54);
    cout << sqrt << endl;

    return 0;
}
