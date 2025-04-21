#include <iostream>
using namespace std;

int main() {
    int arr[7] = {15, 3, 21, 5, 12, 8, 18};

    // Ascending Sort
    for (int i = 0; i < 6; i++) {
        for (int j = i + 1; j < 7; j++) {
            if (arr[i] > arr[j]) {
                // swap
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    cout << "Ascending: ";
    for (int i = 0; i < 7; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Descending Sort
    for (int i = 0; i < 6; i++) {
        for (int j = i + 1; j < 7; j++) {
            if (arr[i] < arr[j]) {
                // swap
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    cout << "Descending: ";
    for (int i = 0; i < 7; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
