// Problem 1 : find out the average of 10 integer numbers

#include <iostream>
using namespace std;

int main() {
    int numbers[10];
    int sum = 0;

    cout << "Enter 10 integers: ";
    for (int i = 0; i < 10; i++) {
        cin >> numbers[i];
        sum += numbers[i];
    }

    double average = sum / 10.0;
    cout << "The average is: " << average << endl;

    return 0;
}
