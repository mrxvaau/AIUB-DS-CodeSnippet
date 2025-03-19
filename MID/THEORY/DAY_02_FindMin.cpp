// find the smallest number in an array of 10 elements

#include <iostream>
using namespace std;

int main() {
    int arr[10] = {12, 45, 7, 89, 23, 56, 91, 34, 67, 10}; // Example array
    int minNum = arr[0]; // Assume first element is min

    // Loop to find the smallest number
    for (int i = 1; i < 10; i++) {
        if (arr[i] < minNum) {
            minNum = arr[i]; // Update minNum if a smaller number is found
        }
    }

    cout << "The smallest number is: " << minNum << endl;

    return 0;
}

