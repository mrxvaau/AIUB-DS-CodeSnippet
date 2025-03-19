// Searches for a specific number in a 6-element integer array

#include <iostream>
using namespace std;

int main() {
    int arr[6] = {12, 45, 22, 89, 23, 56}; // Example array
    int searchValue = 22; // Number to search for
    bool found = false; // Flag to check if the number is found

    // Loop to search for the number in the array
    for (int i = 0; i < 6; i++) {
        if (arr[i] == searchValue) {
            cout << "Number " << searchValue << " found at index " << i << endl;
            found = true;
            break; // Stop searching after finding the number
        }
    }

    // If the number is not found
    if (!found) {
        cout << "Number " << searchValue << " not found in the array." << endl;
    }

    return 0;
}

