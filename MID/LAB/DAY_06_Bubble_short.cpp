#include<iostream>
using namespace std;
int main(){

    int arr[8]={44,2,12,7,8,3,99,6};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout<<"Before Bubble shorting >>> \n"<<endl;

    for(int i = 0; i < n ; i++){
        cout<<arr[i]<<" ";
    }


    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {

                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout<<"\n\nAfter Bubble shorting in Ascending order >>> \n"<<endl;

    for(int i = 0; i < n ; i++){
        cout<<arr[i]<<" ";
    }



    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {

                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout<<"\n\nAfter Bubble shorting in Descending order >>> \n"<<endl;

    for(int i = 0; i < n ; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}








