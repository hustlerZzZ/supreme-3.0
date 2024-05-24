#include <iostream>
using namespace std;

void CheckPrime(int num) {
    bool prime = true;

    for (int i = 2; i < num; ++i) {
        if (num % i == 0) {
            prime = false;
        }
    }

    if(prime) {
        cout << "Your number is prime";
    } else {
        cout << "Your number is not prime";
    }
}

int main () {
    int num;
    cout << "Enter your number :";
    cin >> num;

    CheckPrime(num);

    return 0;
}