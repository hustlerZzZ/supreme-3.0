#include <iostream>
using namespace std;

int CountAllSetBitsNormal(int num) {
    int count = 0;
    while (num > 0) {
        int bit = num % 2;
        if (bit == 1) count++;
        num = num / 2;
    }
    return count;
}

int CountAllSetBitsBitwise(int num) {
    int count = 0;
    while (num > 0) {
        int bit = num & 1;
        if (bit == 1) {
            count++;
        }
        num = num >> 1;
    }
    return count;
}

int main () {
    int num;
    cout << "Enter your number :";
    cin >> num;

    cout << "Answer using normal method : " << CountAllSetBitsNormal(num) << endl;
    cout << "Answer using bitwise method : " << CountAllSetBitsBitwise(num) << endl;

    return 0;
}