#include <iostream>
using namespace std;

int KthBit(int num, int k) {
    int mask = 1 << k;
    int res = num | mask;
    return res;
}

int main () {
    int num;
    cout << "Enter your number :";
    cin >> num;

    cout << KthBit(num , 2);

    return 0;
}