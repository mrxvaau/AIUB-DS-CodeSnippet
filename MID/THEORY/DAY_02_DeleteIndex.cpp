// delete the number at index 2 and shift the remaining elements so there's no gap:

#include <iostream>
using namespace std;

int main() {
    int arr[7] = {20, 30, 40, 86, 50, 60, 70}; // Original array
    int n = 7; // Current size

    // Delete element at index 2 (40)
    for (int i = 2; i < n - 1; i++) {
        arr[i] = arr[i + 1]; // Shift elements left
    }

    n--; // Reduce array size

    // Printing the updated array
    cout << "Updated array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
