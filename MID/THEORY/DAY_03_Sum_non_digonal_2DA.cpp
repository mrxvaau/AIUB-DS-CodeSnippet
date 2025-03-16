
#include <iostream>
using namespace std;

int main() {
    const int n = 5;
    int arr[n][n] = {
        {1, 2, 3, 4, 5},
        {7, 8, 9, 2, 7},
        {13, 14, 2, 9, 7},
        {13, 14, 2, 6, 4},
        {13, 14, 2, 4, 5}
    };

    cout << "Matrix:\n" << endl;
    for (int i = 0; i < n; i++) { // Loop through all rows
        for (int j = 0; j < n; j++) { // Loop through all columns
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }

    int None_diagonalSum = 0;
    int None_diagonalCount = 0;

    // Calculate diagonal sum and count
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j || i + j == n - 1) {

            }
            else {
                None_diagonalSum += arr[i][j];
                None_diagonalCount++;
            }
        }
    }

    double None_diagonalAvg = (double)None_diagonalSum / None_diagonalCount;

    // Output
    cout << "\nNon Diagonal Sum: " << None_diagonalSum << endl;
    cout << "Non Diagonal Average: " << None_diagonalAvg << endl;

    return 0;
}
