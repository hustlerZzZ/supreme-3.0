#include <iostream>
using namespace std;

void oddOrEvenNormal(int num) {
    if(num % 2 == 0) {
        cout << num << " is Even";
    } else {
        cout << num << " is Odd";
    }
}

void oddOrEvenBitwise(int num) {
    if ((num & 1) == 0) {
        cout << num << " is Even";
    } else {
        cout << num << " is Odd";
    }
}

int main() {
    int num;
    cout << "Enter your number :";
    cin >> num;

    oddOrEvenBitwise(num);

    return 0;
}
