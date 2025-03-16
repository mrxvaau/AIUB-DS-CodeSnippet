#include <iostream>
using namespace std;

int main() {

    int arr[3][4] = {
        {5, 8, 12, 3},
        {7, 10, 2, 11},
        {6, 4, 11, 1}
    };


    int largest_in_row_2 = arr[2][0];


    for (int i = 0; i < 4; i++) {
        if (arr[2][i] > largest_in_row_2) {
            largest_in_row_2 = arr[2][i];
        }
    }

    cout << "The largest number in row 3 is: " << largest_in_row_2 <<endl;

    return 0;
}
