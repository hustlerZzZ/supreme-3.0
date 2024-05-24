#include <iostream>
using namespace std;

double kmToMiles(double miles) {
    return miles / 1.609;
}

int main() {
    double value;
    cout << "Enter the value in km:";
    cin >> value;
    double distance = kmToMiles(1);
    cout << value << " in miles is :" << distance;
    return 0;
}