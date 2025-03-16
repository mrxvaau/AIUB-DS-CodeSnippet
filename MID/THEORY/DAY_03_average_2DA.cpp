// C++ program to take user input for a 2D array, then calculate and display the average of all elements
#include <iostream>

using namespace std;

int main() {
    int rows, cols;
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;

    int arr[rows][cols];
    int sum = 0;

    // Take user input for each element
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "Enter value for arr[" << i << "][" << j << "]: ";
            cin >> arr[i][j];
            sum += arr[i][j];
        }
    }

    // Calculate average
    float average = sum / (float)(rows * cols);

    // Display average
    cout << "The average is: " << average << endl;

    return 0;
}
