// problem 3 : Find out thr product (multipilcation) of 6 int of an arry.

#include <iostream>

int main() {
    int arr[6];
    int product = 1;
    
    std::cout << "Enter 6 integers: " << std::endl;
    for(int i = 0; i < 6; i++) {
        std::cin >> arr[i];
        product *= arr[i];
    }
    
    std::cout << "Product of the numbers: " << product << std::endl;
    
    return 0;
}