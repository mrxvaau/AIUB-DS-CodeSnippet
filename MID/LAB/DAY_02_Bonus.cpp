#include <iostream>
using namespace std;
int main() {

    int Array_1[10] = {8, 4, 6, 1, 6, 9, 6, 1, 9, 8};
    bool counted[10] = {false};


    for (int i = 0; i < 10; ++i) {
        if (!counted[i]) {
            int count = 1;
            for (int j = i + 1; j < 10; ++j) {
                if (Array_1[i] == Array_1[j]) {
                    count++;
                    counted[j] = true; d
                }
            }
            cout << Array_1[i] << " occurs = " << count << " time" << (count > 1 ? "s" : "") << endl;
        }
    }

    return 0;
}
