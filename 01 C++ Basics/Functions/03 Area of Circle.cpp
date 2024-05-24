#include <iostream>
#include <cmath>

using namespace std;

void areaOfCircle(int radius) {
    cout << "Area of circle is : " << M_PI * radius * radius;
}

int main() {
    int num;
    cout << "Enter radius of circle :";
    cin >> num;

    areaOfCircle(num);

    return 0;
}