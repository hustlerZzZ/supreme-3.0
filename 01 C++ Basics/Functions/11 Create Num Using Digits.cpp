#include <iostream>
using namespace std;

int createNumberUsingDigits (int numOfDigits) {
    int num = 0;
    for (int i = 0; i < numOfDigits; ++i) {
        int digit;
        cout << "Enter your digit :";
        cin >> digit;

        num = num * 10 + digit;
        cout << "Number create so far is :" << num << endl;
    }

    return num;
}

int main () {
    int numOfDigits;
    cout << "Enter how many times you want to input numbers :";
    cin >> numOfDigits;

    int num = createNumberUsingDigits(numOfDigits);
    cout << "Your result is :" << num;

    return 0;
}