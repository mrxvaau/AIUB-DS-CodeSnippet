#include <iostream>

using namespace std;

int main() {
    int number;
    bool isPrime = true;


    cout << "Enter a positive integer: ";
    cin >> number;


    if (number <= 1) {
        isPrime = false;
    } else {
        for (int i = 2; i * i <= number; ++i) {
            if (number % i == 0) {
                isPrime = false;
                break;
            }
        }
    }


    if (isPrime) {
        double factorial = 1;
        for (int i = 2; i <= number; ++i) {
            factorial *= i;
        }
        cout << "The factorial of " << number << " is: " << factorial << endl;
    } else {
        cout << "Error: " << number << " is not a prime number." << endl;
    }

    return 0;
}
