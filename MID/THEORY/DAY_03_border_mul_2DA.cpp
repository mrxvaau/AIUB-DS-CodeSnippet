#include <iostream>
using namespace std;

int main() {
    int arr[4][4] = {
        {2, 3, 3, 2},
        {2, 60, 70, 2},
        {1, 100, 110, 5},
        {2, 1, 3, 4}
    };

    // 1. Print the matrix
    cout << "Matrix:\n" << endl;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }

    int borderMul = 1;

    // Border multiplication logic
    for (int row = 0; row < 4; row++) {
        for (int col = 0; col < 4; col++) {
            if (row == 0 || row == 3 || col == 0 || col == 3) { // border condition
                borderMul *= arr[row][col]; // Multiplication here
            }
        }
    }

    cout << "\nBorder Multiplication: " << borderMul << endl;

    return 0;
}
