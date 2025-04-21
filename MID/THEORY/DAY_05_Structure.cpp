#include <iostream>
using namespace std;

// Define the structure for a student
struct Student {
    string name;
    int age;
};

int main() {
    // Create an array of 3 students
    Student students[3];

    // Input student details
    for (int i = 0; i < 3; i++) {
        cout << "Enter name of student " << i + 1 << ": ";
        cin >> students[i].name;
        cout << "Enter age of student " << i + 1 << ": ";
        cin >> students[i].age;
    }

    // Display the student details
    cout << "\nStudent Information:\n";
    for (int i = 0; i < 3; i++) {
        cout << "Student " << i + 1 << " - Name: " << students[i].name << ", Age: " << students[i].age << endl;
    }

    return 0;
}
