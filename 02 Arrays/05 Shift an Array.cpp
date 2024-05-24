#include <iostream>
using namespace std;

void rotateArray(int arr[], int size, int rotate) {
    int finalShift = rotate % size;
    if(finalShift == 0) {
        return;
    }
    // Step 1 : Copy last finalShift elements into a temp array;
    int temp[10000];
    int index = 0;
    for(int i = size - finalShift; i < size; i++) {
        temp[index] = arr[i];
        index++;
    }

    // Step 2 : Shift array elements by final shifts places
    for (int i = size - 1; i >= 0 ; --i) {
        if(i-finalShift >= 0) {
            arr[i] = arr[i-finalShift];
        }
    }

    // Step 3 : Copy temp elements into original array
    for (int i = 0; i < finalShift; ++i) {
        arr[i] = temp[i];
    }
}

int main() {
    int arr[] = {10, 20 ,30 ,40};
    int size = 4;
    int shift = 123;

    rotateArray(arr, size, shift);

    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    return 0;
}