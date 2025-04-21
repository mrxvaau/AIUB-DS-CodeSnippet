#include <iostream>
using namespace std;

int main() {
    // Declare an integer variable
    int num = 10;

    // Declare a pointer that points to the address of 'num'
    int* ptr = &num;

    // Display the value of num using pointer
    cout << "Value of num: " << num << endl;
    cout << "Value of num using pointer: " << *ptr << endl;

    // Modify the value of num using the pointer
    *ptr = 20;

    // Display the modified value
    cout << "Modified value of num: " << num << endl;

    // Example with an array and pointer
    int arr[5] = {1, 2, 3, 4, 5};
    int* arrPtr = arr; // Pointer to the first element of the array

    cout << "\nArray elements using pointer:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "arr[" << i << "] = " << *(arrPtr + i) << endl;  // Access elements using pointer arithmetic
    }

    return 0;
}
