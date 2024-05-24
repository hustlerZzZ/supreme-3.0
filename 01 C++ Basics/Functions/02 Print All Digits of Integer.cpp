#include <iostream>
using namespace std;

void printAllDigits(int num) {
    while (num > 0) {
        int onePlace = num % 10;
        cout << "Digits :" << onePlace << endl;
        num /= 10;
    }
}

int main() {
    int num;
    cout << "Enter your number :";
    cin >> num;

    printAllDigits(num);

    return 0;
}