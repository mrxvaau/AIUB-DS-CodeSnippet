/*Task:
Develop a C++ program that asks the user for the number of characters they want to input. Then, read that many characters into an array, check each one to see if it's a vowel (treating both uppercase and lowercase equally), and store all the vowels into a separate array. Finally, print out the vowels extracted.

What to include:

    A function that determines whether a character is a vowel.
    Dynamic reading of characters (based on user input).
    Storing and printing out vowels from the input */
    

#include <iostream>
using namespace std;

bool isVowel(char ch) {
    ch = tolower(ch);  // Convert to lowercase for easy comparison
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

int main() {
    int N;
    cout << "Enter the number of characters: ";
    cin >> N;

    char arr[N], vowels[N];  
    int vIndex = 0;  // Index for vowel array

    cout << "Enter " << N << " characters: ";
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
        if (isVowel(arr[i])) {
            vowels[vIndex++] = arr[i];  
        }
    }

    cout << "Vowels in the array: ";
    for (int i = 0; i < vIndex; i++) {
        cout << vowels[i] << " ";
    }

    return 0;
}
