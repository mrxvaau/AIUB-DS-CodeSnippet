//insert 86 in 1DA index 3 without deleting any numbers in array

#include <iostream>
using namespace std;

int main() {
    int arr[8] = {0, 20, 30, 40, 50, 60, 70}; // Original array
    int n = 7; // Current size

    // Shift elements to make space at index 3
    for (int i = n; i > 3; i--) {
        arr[i] = arr[i - 1];
    }

    arr[3] = 86; // Insert 86 at index 3 (where 0 was supposed to be moved)
    arr[0] = 0;  // Move 0 to index 0 (unchanged)
    n++; // Increase array size

    // Print updated array
    cout << "Updated array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}


