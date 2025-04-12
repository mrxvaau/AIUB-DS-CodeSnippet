#include <iostream>

using namespace std;

int main() {
    int number, usernum;
    int searchcounter = 0;

    cout << "Enter a integer: ";
    cin >> number;

    int arr[number];


    for (int i = 0; i < number; ++i) {
        cout << "Enter the element of index [" << i << "]: ";
        cin >> arr[i];
    }

    cout << "Input a number to search: ";
    cin >> usernum;


    for (int i = 0; i < number; ++i) {
        if (arr[i] == usernum) {
            ++searchcounter;
        }
    }


    cout << "The number occurs " << searchcounter << " times in the array." << endl;

    return 0;
}
