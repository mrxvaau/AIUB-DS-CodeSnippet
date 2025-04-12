#include<iostream>

using namespace std;


int main(){
    int num;

    cout << "Enter the array size : ";
    cin >> num;
    int arr[num];
    int newarr[num];

    for(int i = 0;i < num ; i++){
        cin>>arr[i];
    }


    for(int i = 0;i < num ; i++){
         newarr[i] = arr[num-i-1]*3;
    }

    cout<<"Reversed Array : "<<endl;
    for(int i = 0;i < num ; i++){
        cout<<newarr[i]<<endl;
    }
}
