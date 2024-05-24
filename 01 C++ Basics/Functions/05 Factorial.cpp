#include <iostream>
using namespace std;

void factorial(int num) {
    long long int sum = 1;

    for (int i = num; i > 0 ; --i) {
        sum = sum * i;
    }

    cout << "Factorial of " << num << " is " << sum;
}

int main() {
    int num;
    cout << "Enter your number :";
    cin >> num;

    factorial(num);

    return 0;
}
