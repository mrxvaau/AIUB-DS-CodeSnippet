#include <iostream>
using namespace std;
int main() {

    int arr[3][4] = {

        {5, 8, 12, 3},
        {7, 10, 2, 9},
        {6, 4, 11, 1}
    };


    int lowest_in_col_3 = arr[0][3];


    for (int i = 1; i < 3; i++) {
        if (arr[i][2] < lowest_in_col_3) {
            lowest_in_col_3 = arr[i][2];
        }
    }

    cout << "The lowest number in column 3 is: " << lowest_in_col_3 <<endl;

    return 0;
}
