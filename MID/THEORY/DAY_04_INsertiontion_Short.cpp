#include <iostream>
using namespace std;

int main() {
    int arr[7] = {15, 3, 21, 5, 12, 8, 18};

    // Insertion Sort (Ascending)
    for (int i = 1; i < 7; i++) {
        int key = arr[i];
        int j = i - 1;

        // Shift elements to the right
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }

    // Print sorted array
    cout << "Sorted array (Ascending): ";
    for (int i = 0; i < 7; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
