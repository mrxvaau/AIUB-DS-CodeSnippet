#include <iostream>

int main() {
    int arr[10];
    int sum_even = 0, sum_odd = 0;
    
    std::cout << "Enter 10 integers: " << std::endl;
    for(int i = 0; i < 10; i++) {
        std::cin >> arr[i];
        if (arr[i] % 2 == 0) {
            sum_even += arr[i];
        } else {
            sum_odd += arr[i];
        }
    }
    
    std::cout << "Sum of even numbers: " << sum_even << std::endl;
    std::cout << "Sum of odd numbers: " << sum_odd << std::endl;
    
    return 0;
}
