//Calculates the average of the border elements (elements on the edge).
#include <iostream>
using namespace std;

int main() {
    int arr[4][4] = {
        {10, 20, 30, 40},
        {50, 60, 70, 80},
        {90, 100, 110, 120},
        {130, 140, 150, 160}
    };

    // 1. Print the matrix
    cout << "Matrix:\n" << endl;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }

    int borderSum = 0, borderCount = 0;

    // Border sum logic
    for (int row = 0; row < 4; row++) {
        for (int col = 0; col < 4; col++) {
            if (row == 0 || row == 3 || col == 0 || col == 3) { // proper border condition for 4x4
                borderSum += arr[row][col];
                borderCount++;
            }
        }
    }

    double borderAvg = borderSum / borderCount;


    cout << "\nBorder Average: " << borderAvg << endl;

    return 0;
}
