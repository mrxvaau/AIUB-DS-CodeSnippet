#include<iostream>
using namespace std;

int main(){
    int arr[]={12,44,53,23,11,4};
    int size = sizeof(arr)/ sizeof(arr[0]);
  
    for(int i=0;i<size-1; i++){
        int min = i;
        for(int j=i+1; j<size; j++){
            if(arr[j]<arr[min]){
                min = j;
            }

        }

      int temp = arr[i];
      arr[i]= arr[min];
      arr[min] = temp;


    }

            for(int i=0; i<size; i++){
            cout<<arr[i]<<" ";
        }









    return 0;
}
