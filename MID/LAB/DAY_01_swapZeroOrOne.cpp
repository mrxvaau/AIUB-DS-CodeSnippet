/*Task:
Create a program that reads 5 integers from the user and stores them in an array. 
The program should then display the elements of the array on the screen. 
If the integer is even, the program should replace it with 0. 
If the integer is odd, the program should replace it with 1

What to include:

    Two integer arrays (size 5 each).
    A for loop.
    Output of the resulting array.*/
    
    
#include <iostream>
using namespace std;

int main() {

    int arr[5];

    cout << "Enter 5 integers: " << std::endl;
    for(int i = 0; i < 10; i++) {
        std::cin >> arr[i];
        if (arr[i] % 2 == 0) {
            arr[i] = 0;
        } else {
            arr[i] = 1;
        }
    }
    
    for(int i = 0; i < 10; i++) {
        cout<<arr[i]<<endl;
    }
    
    return 0;
}
