// find the largest number from 1DA 

#include <iostream>
using namespace std;

int main() {
    int arr[10] = {12, 45, 7, 89, 23, 56, 91, 34, 67, 10}; // Example array
    int maxNum = arr[0]; // Assume first element is max

    // Loop to find the maximum number
    for (int i = 1; i < 10; i++) {
        if (arr[i] > maxNum) {
            maxNum = arr[i]; // Update maxNum if a larger number is found
        }
    }

    cout << "The largest number is: " << maxNum << endl;

    return 0;
}

