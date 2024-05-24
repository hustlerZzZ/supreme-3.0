#include <iostream>
using namespace std;

int IntegerReverse(int num) {
    int ans = 0;
    bool isNeg = false;

    if (num <= INT_MIN ) {
        return 0;
    }

    if (num < 0) {
        isNeg = true;
        num = -num;
    }

    while (num > 0) {
        if (ans > INT_MAX /10) {
            return 0;
        }
        int rem = num % 10;
        ans = ans * 10 + rem;
        num = num / 10;
    }

    return isNeg ? -ans : ans;
}

int main () {
    int num;
    cout << "Enter your number :";
    cin >> num;

    cout << IntegerReverse(num);

    return 0;
}