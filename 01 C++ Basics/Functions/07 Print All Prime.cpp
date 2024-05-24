#include <iostream>
using namespace std;

bool CheckPrime(int num) {
    bool prime = true;

    for (int i = 2; i < num; ++i) {
        if (num % i == 0) {
            prime = false;
        }
    }

    return prime;
}

void PrintAllPrime(int num) {
    for (int i = 2; i <= num; ++i) {
        bool isPrime = CheckPrime(i);
        if (isPrime) {
            cout << i << " ";
        }
    }
}

int main () {
    int num;
    cout << "Enter your number :";
    cin >> num;

    PrintAllPrime(num);

    return 0;
}