/*Task:
Write a C++ program that initializes two arrays of 6 integers each. Multiply the first element of the first array with the last element of the second array, the second element with the second-to-last, and so on. Store the results in a new array and display it.

What to include:

    Two integer arrays (size 6 each).
    A loop that multiplies each element of the first array by the corresponding element from the second array in reverse order.
    Output of the resulting array.*/

#include <iostream>
using namespace std;

int main() {
    int arr1[6] = {1, 2, 3, 4, 5, 6};
    int arr2[6] = {7, 8, 9, 10, 11, 12};
    int result[6];

    for (int i = 0; i < 6; i++) {
        result[i] = arr1[i] * arr2[5 - i];  // Multiplying in reverse order
    }

    cout << "Resultant array: ";
    for (int i = 0; i < 6; i++) {
        cout << result[i] << " ";
    }

    return 0;
}
