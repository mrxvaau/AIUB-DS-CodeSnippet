#include <iostream>
using namespace std;

int main() {
    int arr[7] = {3, 5, 8, 12, 15, 18, 21}; // sorted values
    int key = 15; // value to search

    int low = 0, high = 6, mid;
    bool found = false;

    while (low <= high) {
        mid = (low + high) / 2;

        if (arr[mid] == key) {
            cout << "Found at index: " << mid << endl;
            found = true;
            break;
        } else if (arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    if (!found)
        cout << "Not found in the array." << endl;

    return 0;
}
