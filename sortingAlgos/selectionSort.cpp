#include<iostream>
using namespace std;

void selectionSort(int *arr, int n){
    for(int i=0; i<n-1; i++){
        int min=i;
        for(int j=i+1; j<n; j++){
            if(arr[min]>arr[j]){
                min=j;
            }
        }
        int temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
    }
}
void printArray(int *arr, int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[]={8,5,4,6,7,1,3,2};
    int arr_size=sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr, arr_size);
    cout<<"Sorted Array will be: "<<endl;
    printArray(arr, arr_size);
    return 0;
}
